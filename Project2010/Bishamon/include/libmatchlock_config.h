#ifndef LIBMATCHLOCK_INC_LIBMATCHLOCK_CONFIG_H
#define LIBMATCHLOCK_INC_LIBMATCHLOCK_CONFIG_H

#if defined(_MSC_VER)
	#define	LIBMATCHLOCK_FORCEINLINE	__forceinline
#else
	#define	LIBMATCHLOCK_FORCEINLINE	inline
#endif

#define	LIBMATCHLOCK_INLINE	inline

#endif	// #ifndef LIBMATCHLOCK_INC_LIBMATCHLOCK_CONFIG_H
