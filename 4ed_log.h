/*
 * Mr. 4th Dimention - Allen Webster
 *
 * 14.08.2019
 *
 * Core logging structures.
 *
 */

// TOP

#if !defined(FRED_LOG_H)
#define FRED_LOG_H

struct Log{
    System_Mutex mutex;
    Arena arena;
    List_String_Const_u8 list;
    volatile i32 disabled_thread_id;
    System_Mutex_Acquire *mutex_acquire;
    System_Mutex_Release *mutex_release;
    System_Thread_Get_ID *thread_get_id;
};

#endif

// BOTTOM