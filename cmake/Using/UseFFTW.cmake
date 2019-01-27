MACRO(USE_FFTW)
  covise_find_package(FFTW)
  IF ((NOT FFTW_FOUND)  AND (${ARGC} LESS 1))
    USING_MESSAGE("Skipping because of missing FFTW")
    RETURN()
  ENDIF ((NOT FFTW_FOUND) AND (${ARGC} LESS 1))
     IF(NOT FFTW_USED AND FFTW_FOUND)
        SET(FFTW_USED TRUE)
        INCLUDE_DIRECTORIES(SYSTEM ${FFTW_INCLUDE_DIR})
	    ADD_DEFINITIONS(-DHAVE_FFTW)
		IF(WIN32)
	       ADD_DEFINITIONS(-DFFTW_DLL)
		ENDIF(WIN32)
        SET(EXTRA_LIBS ${EXTRA_LIBS} ${FFTW_LIBRARIES})
     ENDIF()
ENDMACRO(USE_FFTW)

