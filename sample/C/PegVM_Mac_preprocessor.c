# 1 "input_source.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 170 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "input_source.c" 2





# 1 "/usr/include/stdio.h" 1 3 4
# 64 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 484 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 485 "/usr/include/sys/cdefs.h" 2 3 4
# 550 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_posix_availability.h" 1 3 4
# 551 "/usr/include/sys/cdefs.h" 2 3 4
# 65 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/Availability.h" 1 3 4
# 148 "/usr/include/Availability.h" 3 4
# 1 "/usr/include/AvailabilityInternal.h" 1 3 4
# 149 "/usr/include/Availability.h" 2 3 4
# 66 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/_types.h" 1 3 4
# 27 "/usr/include/_types.h" 3 4
# 1 "/usr/include/sys/_types.h" 1 3 4
# 33 "/usr/include/sys/_types.h" 3 4
# 1 "/usr/include/machine/_types.h" 1 3 4
# 32 "/usr/include/machine/_types.h" 3 4
# 1 "/usr/include/i386/_types.h" 1 3 4
# 37 "/usr/include/i386/_types.h" 3 4
typedef signed char __int8_t;



typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long long __int64_t;
typedef unsigned long long __uint64_t;

typedef long __darwin_intptr_t;
typedef unsigned int __darwin_natural_t;
# 70 "/usr/include/i386/_types.h" 3 4
typedef int __darwin_ct_rune_t;





typedef union {
 char __mbstate8[128];
 long long _mbstateL;
} __mbstate_t;

typedef __mbstate_t __darwin_mbstate_t;


typedef long int __darwin_ptrdiff_t;







typedef long unsigned int __darwin_size_t;





typedef __builtin_va_list __darwin_va_list;





typedef int __darwin_wchar_t;




typedef __darwin_wchar_t __darwin_rune_t;


typedef int __darwin_wint_t;




typedef unsigned long __darwin_clock_t;
typedef __uint32_t __darwin_socklen_t;
typedef long __darwin_ssize_t;
typedef long __darwin_time_t;
# 33 "/usr/include/machine/_types.h" 2 3 4
# 34 "/usr/include/sys/_types.h" 2 3 4
# 58 "/usr/include/sys/_types.h" 3 4
struct __darwin_pthread_handler_rec
{
 void (*__routine)(void *);
 void *__arg;
 struct __darwin_pthread_handler_rec *__next;
};
struct _opaque_pthread_attr_t { long __sig; char __opaque[56]; };
struct _opaque_pthread_cond_t { long __sig; char __opaque[40]; };
struct _opaque_pthread_condattr_t { long __sig; char __opaque[8]; };
struct _opaque_pthread_mutex_t { long __sig; char __opaque[56]; };
struct _opaque_pthread_mutexattr_t { long __sig; char __opaque[8]; };
struct _opaque_pthread_once_t { long __sig; char __opaque[8]; };
struct _opaque_pthread_rwlock_t { long __sig; char __opaque[192]; };
struct _opaque_pthread_rwlockattr_t { long __sig; char __opaque[16]; };
struct _opaque_pthread_t { long __sig; struct __darwin_pthread_handler_rec *__cleanup_stack; char __opaque[1168]; };
# 94 "/usr/include/sys/_types.h" 3 4
typedef __int64_t __darwin_blkcnt_t;
typedef __int32_t __darwin_blksize_t;
typedef __int32_t __darwin_dev_t;
typedef unsigned int __darwin_fsblkcnt_t;
typedef unsigned int __darwin_fsfilcnt_t;
typedef __uint32_t __darwin_gid_t;
typedef __uint32_t __darwin_id_t;
typedef __uint64_t __darwin_ino64_t;

typedef __darwin_ino64_t __darwin_ino_t;



typedef __darwin_natural_t __darwin_mach_port_name_t;
typedef __darwin_mach_port_name_t __darwin_mach_port_t;
typedef __uint16_t __darwin_mode_t;
typedef __int64_t __darwin_off_t;
typedef __int32_t __darwin_pid_t;
typedef struct _opaque_pthread_attr_t
   __darwin_pthread_attr_t;
typedef struct _opaque_pthread_cond_t
   __darwin_pthread_cond_t;
typedef struct _opaque_pthread_condattr_t
   __darwin_pthread_condattr_t;
typedef unsigned long __darwin_pthread_key_t;
typedef struct _opaque_pthread_mutex_t
   __darwin_pthread_mutex_t;
typedef struct _opaque_pthread_mutexattr_t
   __darwin_pthread_mutexattr_t;
typedef struct _opaque_pthread_once_t
   __darwin_pthread_once_t;
typedef struct _opaque_pthread_rwlock_t
   __darwin_pthread_rwlock_t;
typedef struct _opaque_pthread_rwlockattr_t
   __darwin_pthread_rwlockattr_t;
typedef struct _opaque_pthread_t
   *__darwin_pthread_t;
typedef __uint32_t __darwin_sigset_t;
typedef __int32_t __darwin_suseconds_t;
typedef __uint32_t __darwin_uid_t;
typedef __uint32_t __darwin_useconds_t;
typedef unsigned char __darwin_uuid_t[16];
typedef char __darwin_uuid_string_t[37];
# 28 "/usr/include/_types.h" 2 3 4
# 39 "/usr/include/_types.h" 3 4
typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;

typedef __uint32_t __darwin_wctype_t;
# 68 "/usr/include/stdio.h" 2 3 4



# 1 "/usr/include/sys/_types/_va_list.h" 1 3 4
# 31 "/usr/include/sys/_types/_va_list.h" 3 4
typedef __darwin_va_list va_list;
# 72 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/sys/_types/_size_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_size_t.h" 3 4
typedef __darwin_size_t size_t;
# 73 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/sys/_types/_null.h" 1 3 4
# 74 "/usr/include/stdio.h" 2 3 4

typedef __darwin_off_t fpos_t;
# 86 "/usr/include/stdio.h" 3 4
struct __sbuf {
 unsigned char *_base;
 int _size;
};


struct __sFILEX;
# 120 "/usr/include/stdio.h" 3 4
typedef struct __sFILE {
 unsigned char *_p;
 int _r;
 int _w;
 short _flags;
 short _file;
 struct __sbuf _bf;
 int _lbfsize;


 void *_cookie;
 int (*_close)(void *);
 int (*_read) (void *, char *, int);
 fpos_t (*_seek) (void *, fpos_t, int);
 int (*_write)(void *, const char *, int);


 struct __sbuf _ub;
 struct __sFILEX *_extra;
 int _ur;


 unsigned char _ubuf[3];
 unsigned char _nbuf[1];


 struct __sbuf _lb;


 int _blksize;
 fpos_t _offset;
} FILE;


extern FILE *__stdinp;
extern FILE *__stdoutp;
extern FILE *__stderrp;
# 229 "/usr/include/stdio.h" 3 4
void clearerr(FILE *);
int fclose(FILE *);
int feof(FILE *);
int ferror(FILE *);
int fflush(FILE *);
int fgetc(FILE *);
int fgetpos(FILE * restrict, fpos_t *);
char *fgets(char * restrict, int, FILE *);



FILE *fopen(const char * restrict, const char * restrict) __asm("_" "fopen");

int fprintf(FILE * restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
int fputc(int, FILE *);
int fputs(const char * restrict, FILE * restrict) __asm("_" "fputs") ;
size_t fread(void * restrict, size_t, size_t, FILE * restrict);
FILE *freopen(const char * restrict, const char * restrict,
                 FILE * restrict) __asm("_" "freopen") ;
int fscanf(FILE * restrict, const char * restrict, ...) __attribute__((__format__ (__scanf__, 2, 3)));
int fseek(FILE *, long, int);
int fsetpos(FILE *, const fpos_t *);
long ftell(FILE *);
size_t fwrite(const void * restrict, size_t, size_t, FILE * restrict) __asm("_" "fwrite") ;
int getc(FILE *);
int getchar(void);
char *gets(char *);
void perror(const char *);
int printf(const char * restrict, ...) __attribute__((__format__ (__printf__, 1, 2)));
int putc(int, FILE *);
int putchar(int);
int puts(const char *);
int remove(const char *);
int rename (const char *, const char *);
void rewind(FILE *);
int scanf(const char * restrict, ...) __attribute__((__format__ (__scanf__, 1, 2)));
void setbuf(FILE * restrict, char * restrict);
int setvbuf(FILE * restrict, char * restrict, int, size_t);
int sprintf(char * restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
int sscanf(const char * restrict, const char * restrict, ...) __attribute__((__format__ (__scanf__, 2, 3)));
FILE *tmpfile(void);


__attribute__((deprecated("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tmpnam(3), it is highly recommended that you use mkstemp(3) instead.")))

char *tmpnam(char *);
int ungetc(int, FILE *);
int vfprintf(FILE * restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0)));
int vprintf(const char * restrict, va_list) __attribute__((__format__ (__printf__, 1, 0)));
int vsprintf(char * restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0)));
# 294 "/usr/include/stdio.h" 3 4
char *ctermid(char *);





FILE *fdopen(int, const char *) __asm("_" "fdopen");

int fileno(FILE *);
# 313 "/usr/include/stdio.h" 3 4
int pclose(FILE *);



FILE *popen(const char *, const char *) __asm("_" "popen");
# 335 "/usr/include/stdio.h" 3 4
int __srget(FILE *);
int __svfscanf(FILE *, const char *, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int __swbuf(int, FILE *);
# 346 "/usr/include/stdio.h" 3 4
inline __attribute__ ((__always_inline__)) int __sputc(int _c, FILE *_p) {
 if (--_p->_w >= 0 || (_p->_w >= _p->_lbfsize && (char)_c != '\n'))
  return (*_p->_p++ = _c);
 else
  return (__swbuf(_c, _p));
}
# 372 "/usr/include/stdio.h" 3 4
void flockfile(FILE *);
int ftrylockfile(FILE *);
void funlockfile(FILE *);
int getc_unlocked(FILE *);
int getchar_unlocked(void);
int putc_unlocked(int, FILE *);
int putchar_unlocked(int);



int getw(FILE *);
int putw(int, FILE *);



__attribute__((deprecated("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tempnam(3), it is highly recommended that you use mkstemp(3) instead.")))

char *tempnam(const char *, const char *) __asm("_" "tempnam") ;
# 409 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/_types/_off_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_off_t.h" 3 4
typedef __darwin_off_t off_t;
# 410 "/usr/include/stdio.h" 2 3 4


int fseeko(FILE *, off_t, int);
off_t ftello(FILE *);





int snprintf(char * restrict, size_t, const char * restrict, ...) __attribute__((__format__ (__printf__, 3, 4)));
int vfscanf(FILE * restrict, const char * restrict, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int vscanf(const char * restrict, va_list) __attribute__((__format__ (__scanf__, 1, 0)));
int vsnprintf(char * restrict, size_t, const char * restrict, va_list) __attribute__((__format__ (__printf__, 3, 0)));
int vsscanf(const char * restrict, const char * restrict, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
# 434 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/_types/_ssize_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_ssize_t.h" 3 4
typedef __darwin_ssize_t ssize_t;
# 435 "/usr/include/stdio.h" 2 3 4


int dprintf(int, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3))) __attribute__((availability(macosx,introduced=10.7)));
int vdprintf(int, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0))) __attribute__((availability(macosx,introduced=10.7)));
ssize_t getdelim(char ** restrict, size_t * restrict, int, FILE * restrict) __attribute__((availability(macosx,introduced=10.7)));
ssize_t getline(char ** restrict, size_t * restrict, FILE * restrict) __attribute__((availability(macosx,introduced=10.7)));
# 450 "/usr/include/stdio.h" 3 4
extern const int sys_nerr;
extern const char *const sys_errlist[];

int asprintf(char ** restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
char *ctermid_r(char *);
char *fgetln(FILE *, size_t *);
const char *fmtcheck(const char *, const char *);
int fpurge(FILE *);
void setbuffer(FILE *, char *, int);
int setlinebuf(FILE *);
int vasprintf(char ** restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0)));
FILE *zopen(const char *, const char *, int);





FILE *funopen(const void *,
                 int (*)(void *, char *, int),
                 int (*)(void *, const char *, int),
                 fpos_t (*)(void *, fpos_t, int),
                 int (*)(void *));
# 490 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/secure/_stdio.h" 1 3 4
# 31 "/usr/include/secure/_stdio.h" 3 4
# 1 "/usr/include/secure/_common.h" 1 3 4
# 32 "/usr/include/secure/_stdio.h" 2 3 4
# 42 "/usr/include/secure/_stdio.h" 3 4
extern int __sprintf_chk (char * restrict, int, size_t,
     const char * restrict, ...);
# 52 "/usr/include/secure/_stdio.h" 3 4
extern int __snprintf_chk (char * restrict, size_t, int, size_t,
      const char * restrict, ...);







extern int __vsprintf_chk (char * restrict, int, size_t,
      const char * restrict, va_list);







extern int __vsnprintf_chk (char * restrict, size_t, int, size_t,
       const char * restrict, va_list);
# 491 "/usr/include/stdio.h" 2 3 4
# 7 "input_source.c" 2
# 1 "/usr/local/include/gc/gc.h" 1 3
# 34 "/usr/local/include/gc/gc.h" 3
# 1 "/usr/local/include/gc/gc_version.h" 1 3
# 35 "/usr/local/include/gc/gc.h" 2 3






# 1 "/usr/local/include/gc/gc_config_macros.h" 1 3
# 150 "/usr/local/include/gc/gc_config_macros.h" 3
# 1 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stddef.h" 1 3 4
# 34 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 53 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stddef.h" 3 4
typedef long unsigned int rsize_t;
# 65 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stddef.h" 3 4
typedef int wchar_t;
# 151 "/usr/local/include/gc/gc_config_macros.h" 2 3
# 42 "/usr/local/include/gc/gc.h" 2 3





typedef void * GC_PTR;
# 65 "/usr/local/include/gc/gc.h" 3
  typedef unsigned long GC_word;
  typedef long GC_signed_word;




extern unsigned GC_get_version(void);




extern GC_word GC_gc_no;

extern GC_word GC_get_gc_no(void);
# 103 "/usr/local/include/gc/gc.h" 3
typedef void * ( * GC_oom_func)(size_t );
extern GC_oom_func GC_oom_fn;
# 114 "/usr/local/include/gc/gc.h" 3
extern void GC_set_oom_fn(GC_oom_func);
extern GC_oom_func GC_get_oom_fn(void);

extern int GC_find_leak;







extern void GC_set_find_leak(int);
extern int GC_get_find_leak(void);

extern int GC_all_interior_pointers;
# 141 "/usr/local/include/gc/gc.h" 3
extern void GC_set_all_interior_pointers(int);
extern int GC_get_all_interior_pointers(void);

extern int GC_finalize_on_demand;






extern void GC_set_finalize_on_demand(int);
extern int GC_get_finalize_on_demand(void);

extern int GC_java_finalization;
# 163 "/usr/local/include/gc/gc.h" 3
extern void GC_set_java_finalization(int);
extern int GC_get_java_finalization(void);

typedef void ( * GC_finalizer_notifier_proc)(void);
extern GC_finalizer_notifier_proc GC_finalizer_notifier;
# 177 "/usr/local/include/gc/gc.h" 3
extern void GC_set_finalizer_notifier(GC_finalizer_notifier_proc);
extern GC_finalizer_notifier_proc GC_get_finalizer_notifier(void);

extern int GC_dont_gc;
# 190 "/usr/local/include/gc/gc.h" 3
extern int GC_dont_expand;



extern void GC_set_dont_expand(int);
extern int GC_get_dont_expand(void);

extern int GC_use_entire_heap;
# 208 "/usr/local/include/gc/gc.h" 3
extern int GC_full_freq;
# 221 "/usr/local/include/gc/gc.h" 3
extern void GC_set_full_freq(int);
extern int GC_get_full_freq(void);

extern GC_word GC_non_gc_bytes;
# 234 "/usr/local/include/gc/gc.h" 3
extern void GC_set_non_gc_bytes(GC_word);
extern GC_word GC_get_non_gc_bytes(void);

extern int GC_no_dls;
# 246 "/usr/local/include/gc/gc.h" 3
extern void GC_set_no_dls(int);
extern int GC_get_no_dls(void);

extern GC_word GC_free_space_divisor;
# 266 "/usr/local/include/gc/gc.h" 3
extern void GC_set_free_space_divisor(GC_word);
extern GC_word GC_get_free_space_divisor(void);

extern GC_word GC_max_retries;







extern void GC_set_max_retries(GC_word);
extern GC_word GC_get_max_retries(void);


extern char *GC_stackbottom;
# 296 "/usr/local/include/gc/gc.h" 3
extern int GC_dont_precollect;
# 306 "/usr/local/include/gc/gc.h" 3
extern void GC_set_dont_precollect(int);
extern int GC_get_dont_precollect(void);

extern unsigned long GC_time_limit;
# 326 "/usr/local/include/gc/gc.h" 3
extern void GC_set_time_limit(unsigned long);
extern unsigned long GC_get_time_limit(void);
# 339 "/usr/local/include/gc/gc.h" 3
extern void GC_set_pages_executable(int);





extern int GC_get_pages_executable(void);







extern void GC_set_handle_fork(int);



extern void GC_init(void);
# 372 "/usr/local/include/gc/gc.h" 3
extern void * GC_malloc(size_t )
                        __attribute__((__malloc__)) ;
extern void * GC_malloc_atomic(size_t )
                        __attribute__((__malloc__)) ;
extern char * GC_strdup(const char *) __attribute__((__malloc__));
extern char * GC_strndup(const char *, size_t) __attribute__((__malloc__));
extern void * GC_malloc_uncollectable(size_t )
                        __attribute__((__malloc__)) ;
extern void * GC_malloc_stubborn(size_t )
                        __attribute__((__malloc__)) ;


extern void * GC_memalign(size_t , size_t )
                        __attribute__((__malloc__)) ;
extern int GC_posix_memalign(void ** , size_t ,
                        size_t );







extern void GC_free(void *);
# 410 "/usr/local/include/gc/gc.h" 3
extern void GC_change_stubborn(void *);
extern void GC_end_stubborn_change(void *);
# 424 "/usr/local/include/gc/gc.h" 3
extern void * GC_base(void * );




extern size_t GC_size(const void * );
# 439 "/usr/local/include/gc/gc.h" 3
extern void * GC_realloc(void * ,
                                 size_t )
                                                                  ;



extern int GC_expand_hp(size_t );






extern void GC_set_max_heap_size(GC_word );
# 461 "/usr/local/include/gc/gc.h" 3
extern void GC_exclude_static_roots(void * ,
                                        void * );


extern void GC_clear_roots(void);




extern void GC_add_roots(void * ,
                                 void * );



extern void GC_remove_roots(void * ,
                                    void * );
# 490 "/usr/local/include/gc/gc.h" 3
extern void GC_register_displacement(size_t );



extern void GC_debug_register_displacement(size_t );


extern void GC_gcollect(void);






extern void GC_gcollect_and_unmap(void);
# 519 "/usr/local/include/gc/gc.h" 3
typedef int ( * GC_stop_func)(void);
extern int GC_try_to_collect(GC_stop_func );





extern void GC_set_stop_func(GC_stop_func );
extern GC_stop_func GC_get_stop_func(void);
# 541 "/usr/local/include/gc/gc.h" 3
extern size_t GC_get_heap_size(void);




extern size_t GC_get_free_bytes(void);





extern size_t GC_get_unmapped_bytes(void);




extern size_t GC_get_bytes_since_gc(void);




extern size_t GC_get_total_bytes(void);
# 571 "/usr/local/include/gc/gc.h" 3
extern void GC_get_heap_usage_safe(GC_word * ,
                                           GC_word * ,
                                           GC_word * ,
                                           GC_word * ,
                                           GC_word * );



extern void GC_disable(void);



extern int GC_is_disabled(void);




extern void GC_enable(void);
# 601 "/usr/local/include/gc/gc.h" 3
extern void GC_enable_incremental(void);
# 611 "/usr/local/include/gc/gc.h" 3
extern int GC_incremental_protection_needs(void);
# 620 "/usr/local/include/gc/gc.h" 3
extern int GC_collect_a_little(void);
# 636 "/usr/local/include/gc/gc.h" 3
extern void * GC_malloc_ignore_off_page(size_t )
                        __attribute__((__malloc__)) ;
extern void * GC_malloc_atomic_ignore_off_page(size_t )
                        __attribute__((__malloc__)) ;
# 651 "/usr/local/include/gc/gc.h" 3
extern void * GC_malloc_atomic_uncollectable(
                                                size_t )
                        __attribute__((__malloc__)) ;
extern void * GC_debug_malloc_atomic_uncollectable(size_t,
                                                           const char * s, int i)
                        __attribute__((__malloc__)) ;



extern void * GC_debug_malloc(size_t ,
                                      const char * s, int i)
                        __attribute__((__malloc__)) ;
extern void * GC_debug_malloc_atomic(size_t ,
                                             const char * s, int i)
                        __attribute__((__malloc__)) ;
extern char * GC_debug_strdup(const char *,
                                      const char * s, int i) __attribute__((__malloc__));
extern char * GC_debug_strndup(const char *, size_t,
                                       const char * s, int i) __attribute__((__malloc__));
extern void * GC_debug_malloc_uncollectable(
                        size_t , const char * s, int i)
                        __attribute__((__malloc__)) ;
extern void * GC_debug_malloc_stubborn(size_t ,
                                               const char * s, int i)
                        __attribute__((__malloc__)) ;
extern void * GC_debug_malloc_ignore_off_page(
                        size_t , const char * s, int i)
                        __attribute__((__malloc__)) ;
extern void * GC_debug_malloc_atomic_ignore_off_page(
                        size_t , const char * s, int i)
                        __attribute__((__malloc__)) ;
extern void GC_debug_free(void *);
extern void * GC_debug_realloc(void * ,
                        size_t , const char * s, int i)
                                                                  ;
extern void GC_debug_change_stubborn(void *);
extern void GC_debug_end_stubborn_change(void *);
# 701 "/usr/local/include/gc/gc.h" 3
extern void * GC_debug_malloc_replacement(size_t )
                        __attribute__((__malloc__)) ;
extern void * GC_debug_realloc_replacement(void * ,
                                                   size_t )
                                                                  ;
# 802 "/usr/local/include/gc/gc.h" 3
typedef void ( * GC_finalization_proc)(void * ,
                                                  void * );

extern void GC_register_finalizer(void * ,
                        GC_finalization_proc , void * ,
                        GC_finalization_proc * , void ** );
extern void GC_debug_register_finalizer(void * ,
                        GC_finalization_proc , void * ,
                        GC_finalization_proc * , void ** );
# 859 "/usr/local/include/gc/gc.h" 3
extern void GC_register_finalizer_ignore_self(void * ,
                        GC_finalization_proc , void * ,
                        GC_finalization_proc * , void ** );
extern void GC_debug_register_finalizer_ignore_self(void * ,
                        GC_finalization_proc , void * ,
                        GC_finalization_proc * , void ** );





extern void GC_register_finalizer_no_order(void * ,
                        GC_finalization_proc , void * ,
                        GC_finalization_proc * , void ** );
extern void GC_debug_register_finalizer_no_order(void * ,
                        GC_finalization_proc , void * ,
                        GC_finalization_proc * , void ** );
# 893 "/usr/local/include/gc/gc.h" 3
extern void GC_register_finalizer_unreachable(void * ,
                        GC_finalization_proc , void * ,
                        GC_finalization_proc * , void ** );
extern void GC_debug_register_finalizer_unreachable(void * ,
                        GC_finalization_proc , void * ,
                        GC_finalization_proc * , void ** );
# 909 "/usr/local/include/gc/gc.h" 3
extern int GC_register_disappearing_link(void ** );
# 930 "/usr/local/include/gc/gc.h" 3
extern int GC_general_register_disappearing_link(void ** ,
                                                         void * );
# 963 "/usr/local/include/gc/gc.h" 3
extern int GC_unregister_disappearing_link(void ** );





extern int GC_should_invoke_finalizers(void);

extern int GC_invoke_finalizers(void);
# 999 "/usr/local/include/gc/gc.h" 3
typedef void ( * GC_warn_proc)(char * ,
                                          GC_word );
extern void GC_set_warn_proc(GC_warn_proc );

extern GC_warn_proc GC_get_warn_proc(void);



extern void GC_ignore_warn_proc(char *, GC_word);
# 1017 "/usr/local/include/gc/gc.h" 3
typedef GC_word GC_hidden_pointer;
# 1031 "/usr/local/include/gc/gc.h" 3
typedef void * ( * GC_fn_type)(void * );
extern void * GC_call_with_alloc_lock(GC_fn_type ,
                                                void * );
# 1047 "/usr/local/include/gc/gc.h" 3
struct GC_stack_base {
  void * mem_base;



};

typedef void * ( * GC_stack_base_func)(
                struct GC_stack_base * , void * );





extern void * GC_call_with_stack_base(GC_stack_base_func ,
                                              void * );
# 1138 "/usr/local/include/gc/gc.h" 3
extern void * GC_do_blocking(GC_fn_type ,
                                     void * );
# 1150 "/usr/local/include/gc/gc.h" 3
extern void * GC_call_with_gc_active(GC_fn_type ,
                                             void * );
# 1160 "/usr/local/include/gc/gc.h" 3
extern int GC_get_stack_base(struct GC_stack_base *);
# 1171 "/usr/local/include/gc/gc.h" 3
extern void * GC_same_obj(void * , void * );





extern void * GC_pre_incr(void **, ptrdiff_t );
extern void * GC_post_incr(void **, ptrdiff_t );
# 1188 "/usr/local/include/gc/gc.h" 3
extern void * GC_is_visible(void * );






extern void * GC_is_valid_displacement(void * );





extern void GC_dump(void);
# 1241 "/usr/local/include/gc/gc.h" 3
extern void ( * GC_same_obj_print_proc)(void * ,
                                                   void * );
extern void ( * GC_is_valid_displacement_print_proc)(void *);
extern void ( * GC_is_visible_print_proc)(void *);
# 1255 "/usr/local/include/gc/gc.h" 3
extern void * GC_malloc_many(size_t );
# 1267 "/usr/local/include/gc/gc.h" 3
typedef int ( * GC_has_static_roots_func)(
                                        const char * ,
                                        void * ,
                                        size_t );





extern void GC_register_has_static_roots_callback(
                                        GC_has_static_roots_func);
# 1378 "/usr/local/include/gc/gc.h" 3
extern void GC_set_force_unmap_on_gcollect(int);
extern int GC_get_force_unmap_on_gcollect(void);
# 1498 "/usr/local/include/gc/gc.h" 3
extern void GC_win32_free_heap(void);
# 8 "input_source.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 70 "/usr/include/string.h" 3 4
void *memchr(const void *, int, size_t);
int memcmp(const void *, const void *, size_t);
void *memcpy(void *, const void *, size_t);
void *memmove(void *, const void *, size_t);
void *memset(void *, int, size_t);
char *strcat(char *, const char *);
char *strchr(const char *, int);
int strcmp(const char *, const char *);
int strcoll(const char *, const char *);
char *strcpy(char *, const char *);
size_t strcspn(const char *, const char *);
char *strerror(int) __asm("_" "strerror") ;
size_t strlen(const char *);
char *strncat(char *, const char *, size_t);
int strncmp(const char *, const char *, size_t);
char *strncpy(char *, const char *, size_t);
char *strpbrk(const char *, const char *);
char *strrchr(const char *, int);
size_t strspn(const char *, const char *);
char *strstr(const char *, const char *);
char *strtok(char *, const char *);
size_t strxfrm(char *, const char *, size_t);
# 104 "/usr/include/string.h" 3 4
char *strtok_r(char *, const char *, char **);
# 116 "/usr/include/string.h" 3 4
int strerror_r(int, char *, size_t);
char *strdup(const char *);
void *memccpy(void *, const void *, int, size_t);
# 130 "/usr/include/string.h" 3 4
char *stpcpy(char *, const char *);
char *stpncpy(char *, const char *, size_t) __attribute__((availability(macosx,introduced=10.7)));
char *strndup(const char *, size_t) __attribute__((availability(macosx,introduced=10.7)));
size_t strnlen(const char *, size_t) __attribute__((availability(macosx,introduced=10.7)));
char *strsignal(int sig);







# 1 "/usr/include/sys/_types/_rsize_t.h" 1 3 4
# 142 "/usr/include/string.h" 2 3 4
# 1 "/usr/include/sys/_types/_errno_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_errno_t.h" 3 4
typedef int errno_t;
# 143 "/usr/include/string.h" 2 3 4


errno_t memset_s(void *, rsize_t, int, rsize_t) __attribute__((availability(macosx,introduced=10.9)));
# 155 "/usr/include/string.h" 3 4
void *memmem(const void *, size_t, const void *, size_t) __attribute__((availability(macosx,introduced=10.7)));
void memset_pattern4(void *, const void *, size_t) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern8(void *, const void *, size_t) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern16(void *, const void *, size_t) __attribute__((availability(macosx,introduced=10.5)));

char *strcasestr(const char *, const char *);
char *strnstr(const char *, const char *, size_t);
size_t strlcat(char *, const char *, size_t);
size_t strlcpy(char *, const char *, size_t);
void strmode(int, char *);
char *strsep(char **, const char *);


void swab(const void * restrict, void * restrict, ssize_t);








# 1 "/usr/include/strings.h" 1 3 4
# 70 "/usr/include/strings.h" 3 4
int bcmp(const void *, const void *, size_t) ;
void bcopy(const void *, void *, size_t) ;
void bzero(void *, size_t) ;
char *index(const char *, int) ;
char *rindex(const char *, int) ;


int ffs(int);
int strcasecmp(const char *, const char *);
int strncasecmp(const char *, const char *, size_t);





int ffsl(long) __attribute__((availability(macosx,introduced=10.5)));
int ffsll(long long) __attribute__((availability(macosx,introduced=10.9)));
int fls(int) __attribute__((availability(macosx,introduced=10.5)));
int flsl(long) __attribute__((availability(macosx,introduced=10.5)));
int flsll(long long) __attribute__((availability(macosx,introduced=10.9)));



# 1 "/usr/include/string.h" 1 3 4
# 93 "/usr/include/strings.h" 2 3 4
# 177 "/usr/include/string.h" 2 3 4
# 186 "/usr/include/string.h" 3 4
# 1 "/usr/include/secure/_string.h" 1 3 4
# 187 "/usr/include/string.h" 2 3 4
# 9 "input_source.c" 2
# 1 "./input_source.h" 1





# 1 "/usr/include/stdlib.h" 1 3 4
# 65 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/sys/wait.h" 1 3 4
# 79 "/usr/include/sys/wait.h" 3 4
typedef enum {
 P_ALL,
 P_PID,
 P_PGID
} idtype_t;






# 1 "/usr/include/sys/_types/_pid_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_pid_t.h" 3 4
typedef __darwin_pid_t pid_t;
# 90 "/usr/include/sys/wait.h" 2 3 4
# 1 "/usr/include/sys/_types/_id_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_id_t.h" 3 4
typedef __darwin_id_t id_t;
# 91 "/usr/include/sys/wait.h" 2 3 4
# 109 "/usr/include/sys/wait.h" 3 4
# 1 "/usr/include/sys/signal.h" 1 3 4
# 73 "/usr/include/sys/signal.h" 3 4
# 1 "/usr/include/sys/appleapiopts.h" 1 3 4
# 74 "/usr/include/sys/signal.h" 2 3 4







# 1 "/usr/include/machine/signal.h" 1 3 4
# 32 "/usr/include/machine/signal.h" 3 4
# 1 "/usr/include/i386/signal.h" 1 3 4
# 39 "/usr/include/i386/signal.h" 3 4
typedef int sig_atomic_t;
# 33 "/usr/include/machine/signal.h" 2 3 4
# 82 "/usr/include/sys/signal.h" 2 3 4
# 145 "/usr/include/sys/signal.h" 3 4
# 1 "/usr/include/machine/_mcontext.h" 1 3 4
# 29 "/usr/include/machine/_mcontext.h" 3 4
# 1 "/usr/include/i386/_mcontext.h" 1 3 4
# 33 "/usr/include/i386/_mcontext.h" 3 4
# 1 "/usr/include/mach/i386/_structs.h" 1 3 4
# 43 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_thread_state
{
    unsigned int __eax;
    unsigned int __ebx;
    unsigned int __ecx;
    unsigned int __edx;
    unsigned int __edi;
    unsigned int __esi;
    unsigned int __ebp;
    unsigned int __esp;
    unsigned int __ss;
    unsigned int __eflags;
    unsigned int __eip;
    unsigned int __cs;
    unsigned int __ds;
    unsigned int __es;
    unsigned int __fs;
    unsigned int __gs;
};
# 89 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_fp_control
{
    unsigned short __invalid :1,
        __denorm :1,
    __zdiv :1,
    __ovrfl :1,
    __undfl :1,
    __precis :1,
      :2,
    __pc :2,





    __rc :2,






             :1,
      :3;
};
typedef struct __darwin_fp_control __darwin_fp_control_t;
# 147 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_fp_status
{
    unsigned short __invalid :1,
        __denorm :1,
    __zdiv :1,
    __ovrfl :1,
    __undfl :1,
    __precis :1,
    __stkflt :1,
    __errsumm :1,
    __c0 :1,
    __c1 :1,
    __c2 :1,
    __tos :3,
    __c3 :1,
    __busy :1;
};
typedef struct __darwin_fp_status __darwin_fp_status_t;
# 191 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_mmst_reg
{
 char __mmst_reg[10];
 char __mmst_rsrv[6];
};
# 210 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_xmm_reg
{
 char __xmm_reg[16];
};
# 232 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_float_state
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;
 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;
 __uint16_t __fpu_rsrv2;
 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;
 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 char __fpu_rsrv4[14*16];
 int __fpu_reserved1;
};


struct __darwin_i386_avx_state
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;
 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;
 __uint16_t __fpu_rsrv2;
 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;
 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 char __fpu_rsrv4[14*16];
 int __fpu_reserved1;
 char __avx_reserved1[64];
 struct __darwin_xmm_reg __fpu_ymmh0;
 struct __darwin_xmm_reg __fpu_ymmh1;
 struct __darwin_xmm_reg __fpu_ymmh2;
 struct __darwin_xmm_reg __fpu_ymmh3;
 struct __darwin_xmm_reg __fpu_ymmh4;
 struct __darwin_xmm_reg __fpu_ymmh5;
 struct __darwin_xmm_reg __fpu_ymmh6;
 struct __darwin_xmm_reg __fpu_ymmh7;
};
# 402 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_exception_state
{
 __uint16_t __trapno;
 __uint16_t __cpu;
 __uint32_t __err;
 __uint32_t __faultvaddr;
};
# 422 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_debug_state32
{
 unsigned int __dr0;
 unsigned int __dr1;
 unsigned int __dr2;
 unsigned int __dr3;
 unsigned int __dr4;
 unsigned int __dr5;
 unsigned int __dr6;
 unsigned int __dr7;
};
# 454 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_thread_state64
{
 __uint64_t __rax;
 __uint64_t __rbx;
 __uint64_t __rcx;
 __uint64_t __rdx;
 __uint64_t __rdi;
 __uint64_t __rsi;
 __uint64_t __rbp;
 __uint64_t __rsp;
 __uint64_t __r8;
 __uint64_t __r9;
 __uint64_t __r10;
 __uint64_t __r11;
 __uint64_t __r12;
 __uint64_t __r13;
 __uint64_t __r14;
 __uint64_t __r15;
 __uint64_t __rip;
 __uint64_t __rflags;
 __uint64_t __cs;
 __uint64_t __fs;
 __uint64_t __gs;
};
# 509 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_float_state64
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;


 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;

 __uint16_t __fpu_rsrv2;


 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;

 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 struct __darwin_xmm_reg __fpu_xmm8;
 struct __darwin_xmm_reg __fpu_xmm9;
 struct __darwin_xmm_reg __fpu_xmm10;
 struct __darwin_xmm_reg __fpu_xmm11;
 struct __darwin_xmm_reg __fpu_xmm12;
 struct __darwin_xmm_reg __fpu_xmm13;
 struct __darwin_xmm_reg __fpu_xmm14;
 struct __darwin_xmm_reg __fpu_xmm15;
 char __fpu_rsrv4[6*16];
 int __fpu_reserved1;
};


struct __darwin_x86_avx_state64
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;


 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;

 __uint16_t __fpu_rsrv2;


 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;

 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 struct __darwin_xmm_reg __fpu_xmm8;
 struct __darwin_xmm_reg __fpu_xmm9;
 struct __darwin_xmm_reg __fpu_xmm10;
 struct __darwin_xmm_reg __fpu_xmm11;
 struct __darwin_xmm_reg __fpu_xmm12;
 struct __darwin_xmm_reg __fpu_xmm13;
 struct __darwin_xmm_reg __fpu_xmm14;
 struct __darwin_xmm_reg __fpu_xmm15;
 char __fpu_rsrv4[6*16];
 int __fpu_reserved1;
 char __avx_reserved1[64];
 struct __darwin_xmm_reg __fpu_ymmh0;
 struct __darwin_xmm_reg __fpu_ymmh1;
 struct __darwin_xmm_reg __fpu_ymmh2;
 struct __darwin_xmm_reg __fpu_ymmh3;
 struct __darwin_xmm_reg __fpu_ymmh4;
 struct __darwin_xmm_reg __fpu_ymmh5;
 struct __darwin_xmm_reg __fpu_ymmh6;
 struct __darwin_xmm_reg __fpu_ymmh7;
 struct __darwin_xmm_reg __fpu_ymmh8;
 struct __darwin_xmm_reg __fpu_ymmh9;
 struct __darwin_xmm_reg __fpu_ymmh10;
 struct __darwin_xmm_reg __fpu_ymmh11;
 struct __darwin_xmm_reg __fpu_ymmh12;
 struct __darwin_xmm_reg __fpu_ymmh13;
 struct __darwin_xmm_reg __fpu_ymmh14;
 struct __darwin_xmm_reg __fpu_ymmh15;
};
# 751 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_exception_state64
{
    __uint16_t __trapno;
    __uint16_t __cpu;
    __uint32_t __err;
    __uint64_t __faultvaddr;
};
# 771 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_debug_state64
{
 __uint64_t __dr0;
 __uint64_t __dr1;
 __uint64_t __dr2;
 __uint64_t __dr3;
 __uint64_t __dr4;
 __uint64_t __dr5;
 __uint64_t __dr6;
 __uint64_t __dr7;
};
# 34 "/usr/include/i386/_mcontext.h" 2 3 4




struct __darwin_mcontext32
{
 struct __darwin_i386_exception_state __es;
 struct __darwin_i386_thread_state __ss;
 struct __darwin_i386_float_state __fs;
};


struct __darwin_mcontext_avx32
{
 struct __darwin_i386_exception_state __es;
 struct __darwin_i386_thread_state __ss;
 struct __darwin_i386_avx_state __fs;
};
# 76 "/usr/include/i386/_mcontext.h" 3 4
struct __darwin_mcontext64
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_state64 __ss;
 struct __darwin_x86_float_state64 __fs;
};


struct __darwin_mcontext_avx64
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_state64 __ss;
 struct __darwin_x86_avx_state64 __fs;
};
# 115 "/usr/include/i386/_mcontext.h" 3 4
typedef struct __darwin_mcontext64 *mcontext_t;
# 30 "/usr/include/machine/_mcontext.h" 2 3 4
# 146 "/usr/include/sys/signal.h" 2 3 4
# 1 "/usr/include/sys/_types/_sigaltstack.h" 1 3 4
# 36 "/usr/include/sys/_types/_sigaltstack.h" 3 4
struct __darwin_sigaltstack
{
 void *ss_sp;
 __darwin_size_t ss_size;
 int ss_flags;
};
typedef struct __darwin_sigaltstack stack_t;
# 147 "/usr/include/sys/signal.h" 2 3 4
# 1 "/usr/include/sys/_types/_ucontext.h" 1 3 4
# 34 "/usr/include/sys/_types/_ucontext.h" 3 4
struct __darwin_ucontext
{
 int uc_onstack;
 __darwin_sigset_t uc_sigmask;
 struct __darwin_sigaltstack uc_stack;
 struct __darwin_ucontext *uc_link;
 __darwin_size_t uc_mcsize;
 struct __darwin_mcontext64 *uc_mcontext;



};


typedef struct __darwin_ucontext ucontext_t;
# 148 "/usr/include/sys/signal.h" 2 3 4


# 1 "/usr/include/sys/_types/_pthread_attr_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_pthread_attr_t.h" 3 4
typedef __darwin_pthread_attr_t pthread_attr_t;
# 151 "/usr/include/sys/signal.h" 2 3 4
# 1 "/usr/include/sys/_types/_sigset_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_sigset_t.h" 3 4
typedef __darwin_sigset_t sigset_t;
# 152 "/usr/include/sys/signal.h" 2 3 4

# 1 "/usr/include/sys/_types/_uid_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_uid_t.h" 3 4
typedef __darwin_uid_t uid_t;
# 154 "/usr/include/sys/signal.h" 2 3 4

union sigval {

 int sival_int;
 void *sival_ptr;
};





struct sigevent {
 int sigev_notify;
 int sigev_signo;
 union sigval sigev_value;
 void (*sigev_notify_function)(union sigval);
 pthread_attr_t *sigev_notify_attributes;
};


typedef struct __siginfo {
 int si_signo;
 int si_errno;
 int si_code;
 pid_t si_pid;
 uid_t si_uid;
 int si_status;
 void *si_addr;
 union sigval si_value;
 long si_band;
 unsigned long __pad[7];
} siginfo_t;
# 266 "/usr/include/sys/signal.h" 3 4
union __sigaction_u {
 void (*__sa_handler)(int);
 void (*__sa_sigaction)(int, struct __siginfo *,
         void *);
};


struct __sigaction {
 union __sigaction_u __sigaction_u;
 void (*sa_tramp)(void *, int, int, siginfo_t *, void *);
 sigset_t sa_mask;
 int sa_flags;
};




struct sigaction {
 union __sigaction_u __sigaction_u;
 sigset_t sa_mask;
 int sa_flags;
};
# 328 "/usr/include/sys/signal.h" 3 4
typedef void (*sig_t)(int);
# 345 "/usr/include/sys/signal.h" 3 4
struct sigvec {
 void (*sv_handler)(int);
 int sv_mask;
 int sv_flags;
};
# 364 "/usr/include/sys/signal.h" 3 4
struct sigstack {
 char *ss_sp;
 int ss_onstack;
};
# 387 "/usr/include/sys/signal.h" 3 4
void (*signal(int, void (*)(int)))(int);
# 110 "/usr/include/sys/wait.h" 2 3 4
# 1 "/usr/include/sys/resource.h" 1 3 4
# 72 "/usr/include/sys/resource.h" 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdint.h" 1 3 4
# 64 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 18 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/sys/_types/_int8_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int8_t.h" 3 4
typedef signed char int8_t;
# 19 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_int16_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int16_t.h" 3 4
typedef short int16_t;
# 20 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_int32_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int32_t.h" 3 4
typedef int int32_t;
# 21 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_int64_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int64_t.h" 3 4
typedef long long int64_t;
# 22 "/usr/include/stdint.h" 2 3 4

# 1 "/usr/include/_types/_uint8_t.h" 1 3 4
# 31 "/usr/include/_types/_uint8_t.h" 3 4
typedef unsigned char uint8_t;
# 24 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uint16_t.h" 1 3 4
# 31 "/usr/include/_types/_uint16_t.h" 3 4
typedef unsigned short uint16_t;
# 25 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uint32_t.h" 1 3 4
# 31 "/usr/include/_types/_uint32_t.h" 3 4
typedef unsigned int uint32_t;
# 26 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uint64_t.h" 1 3 4
# 31 "/usr/include/_types/_uint64_t.h" 3 4
typedef unsigned long long uint64_t;
# 27 "/usr/include/stdint.h" 2 3 4


typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_least64_t;
typedef uint8_t uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;



typedef int8_t int_fast8_t;
typedef int16_t int_fast16_t;
typedef int32_t int_fast32_t;
typedef int64_t int_fast64_t;
typedef uint8_t uint_fast8_t;
typedef uint16_t uint_fast16_t;
typedef uint32_t uint_fast32_t;
typedef uint64_t uint_fast64_t;






# 1 "/usr/include/sys/_types/_intptr_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_intptr_t.h" 3 4
typedef __darwin_intptr_t intptr_t;
# 54 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_uintptr_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_uintptr_t.h" 3 4
typedef unsigned long uintptr_t;
# 55 "/usr/include/stdint.h" 2 3 4



# 1 "/usr/include/_types/_intmax_t.h" 1 3 4
# 32 "/usr/include/_types/_intmax_t.h" 3 4
typedef long int intmax_t;
# 59 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uintmax_t.h" 1 3 4
# 32 "/usr/include/_types/_uintmax_t.h" 3 4
typedef long unsigned int uintmax_t;
# 60 "/usr/include/stdint.h" 2 3 4
# 65 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdint.h" 2 3 4
# 73 "/usr/include/sys/resource.h" 2 3 4







# 1 "/usr/include/sys/_types/_timeval.h" 1 3 4
# 30 "/usr/include/sys/_types/_timeval.h" 3 4
struct timeval
{
 __darwin_time_t tv_sec;
 __darwin_suseconds_t tv_usec;
};
# 81 "/usr/include/sys/resource.h" 2 3 4








typedef __uint64_t rlim_t;
# 151 "/usr/include/sys/resource.h" 3 4
struct rusage {
 struct timeval ru_utime;
 struct timeval ru_stime;
# 162 "/usr/include/sys/resource.h" 3 4
 long ru_maxrss;

 long ru_ixrss;
 long ru_idrss;
 long ru_isrss;
 long ru_minflt;
 long ru_majflt;
 long ru_nswap;
 long ru_inblock;
 long ru_oublock;
 long ru_msgsnd;
 long ru_msgrcv;
 long ru_nsignals;
 long ru_nvcsw;
 long ru_nivcsw;


};
# 190 "/usr/include/sys/resource.h" 3 4
typedef void *rusage_info_t;

struct rusage_info_v0 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
};

struct rusage_info_v1 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
};

struct rusage_info_v2 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
};
# 290 "/usr/include/sys/resource.h" 3 4
struct rlimit {
 rlim_t rlim_cur;
 rlim_t rlim_max;
};
# 317 "/usr/include/sys/resource.h" 3 4
struct proc_rlimit_control_wakeupmon {
 uint32_t wm_flags;
 int32_t wm_rate;
};
# 347 "/usr/include/sys/resource.h" 3 4
int getpriority(int, id_t);

int getiopolicy_np(int, int) __attribute__((availability(macosx,introduced=10.5)));

int getrlimit(int, struct rlimit *) __asm("_" "getrlimit") ;
int getrusage(int, struct rusage *);
int setpriority(int, id_t, int);

int setiopolicy_np(int, int, int) __attribute__((availability(macosx,introduced=10.5)));

int setrlimit(int, const struct rlimit *) __asm("_" "setrlimit") ;
# 111 "/usr/include/sys/wait.h" 2 3 4
# 186 "/usr/include/sys/wait.h" 3 4
# 1 "/usr/include/machine/endian.h" 1 3 4
# 35 "/usr/include/machine/endian.h" 3 4
# 1 "/usr/include/i386/endian.h" 1 3 4
# 99 "/usr/include/i386/endian.h" 3 4
# 1 "/usr/include/sys/_endian.h" 1 3 4
# 124 "/usr/include/sys/_endian.h" 3 4
# 1 "/usr/include/libkern/_OSByteOrder.h" 1 3 4
# 66 "/usr/include/libkern/_OSByteOrder.h" 3 4
# 1 "/usr/include/libkern/i386/_OSByteOrder.h" 1 3 4
# 44 "/usr/include/libkern/i386/_OSByteOrder.h" 3 4
static inline
__uint16_t
_OSSwapInt16(
    __uint16_t _data
)
{
    return ((__uint16_t)((_data << 8) | (_data >> 8)));
}

static inline
__uint32_t
_OSSwapInt32(
    __uint32_t _data
)
{

    return __builtin_bswap32(_data);




}


static inline
__uint64_t
_OSSwapInt64(
    __uint64_t _data
)
{
    return __builtin_bswap64(_data);
}
# 67 "/usr/include/libkern/_OSByteOrder.h" 2 3 4
# 125 "/usr/include/sys/_endian.h" 2 3 4
# 100 "/usr/include/i386/endian.h" 2 3 4
# 36 "/usr/include/machine/endian.h" 2 3 4
# 187 "/usr/include/sys/wait.h" 2 3 4







union wait {
 int w_status;



 struct {

  unsigned int w_Termsig:7,
    w_Coredump:1,
    w_Retcode:8,
    w_Filler:16;







 } w_T;





 struct {

  unsigned int w_Stopval:8,
    w_Stopsig:8,
    w_Filler:16;






 } w_S;
};
# 248 "/usr/include/sys/wait.h" 3 4
pid_t wait(int *) __asm("_" "wait") ;
pid_t waitpid(pid_t, int *, int) __asm("_" "waitpid") ;

int waitid(idtype_t, id_t, siginfo_t *, int) __asm("_" "waitid") ;


pid_t wait3(int *, int, struct rusage *);
pid_t wait4(pid_t, int *, int, struct rusage *);
# 66 "/usr/include/stdlib.h" 2 3 4

# 1 "/usr/include/alloca.h" 1 3 4
# 32 "/usr/include/alloca.h" 3 4
void *alloca(size_t);
# 68 "/usr/include/stdlib.h" 2 3 4








# 1 "/usr/include/sys/_types/_ct_rune_t.h" 1 3 4
# 31 "/usr/include/sys/_types/_ct_rune_t.h" 3 4
typedef __darwin_ct_rune_t ct_rune_t;
# 77 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/sys/_types/_rune_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_rune_t.h" 3 4
typedef __darwin_rune_t rune_t;
# 78 "/usr/include/stdlib.h" 2 3 4


# 1 "/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 81 "/usr/include/stdlib.h" 2 3 4

typedef struct {
 int quot;
 int rem;
} div_t;

typedef struct {
 long quot;
 long rem;
} ldiv_t;


typedef struct {
 long long quot;
 long long rem;
} lldiv_t;
# 117 "/usr/include/stdlib.h" 3 4
extern int __mb_cur_max;
# 128 "/usr/include/stdlib.h" 3 4
void abort(void) __attribute__((noreturn));
int abs(int) __attribute__((const));
int atexit(void (*)(void));
double atof(const char *);
int atoi(const char *);
long atol(const char *);

long long
  atoll(const char *);

void *bsearch(const void *, const void *, size_t,
     size_t, int (*)(const void *, const void *));
void *calloc(size_t, size_t);
div_t div(int, int) __attribute__((const));
void exit(int) __attribute__((noreturn));
void free(void *);
char *getenv(const char *);
long labs(long) __attribute__((const));
ldiv_t ldiv(long, long) __attribute__((const));

long long
  llabs(long long);
lldiv_t lldiv(long long, long long);

void *malloc(size_t);
int mblen(const char *, size_t);
size_t mbstowcs(wchar_t * restrict , const char * restrict, size_t);
int mbtowc(wchar_t * restrict, const char * restrict, size_t);
int posix_memalign(void **, size_t, size_t) __attribute__((availability(macosx,introduced=10.6)));
void qsort(void *, size_t, size_t,
     int (*)(const void *, const void *));
int rand(void);
void *realloc(void *, size_t);
void srand(unsigned);
double strtod(const char *, char **) __asm("_" "strtod") ;
float strtof(const char *, char **) __asm("_" "strtof") ;
long strtol(const char *, char **, int);
long double
  strtold(const char *, char **);

long long
  strtoll(const char *, char **, int);

unsigned long
  strtoul(const char *, char **, int);

unsigned long long
  strtoull(const char *, char **, int);

int system(const char *) __asm("_" "system") ;
size_t wcstombs(char * restrict, const wchar_t * restrict, size_t);
int wctomb(char *, wchar_t);


void _Exit(int) __attribute__((noreturn));
long a64l(const char *);
double drand48(void);
char *ecvt(double, int, int *restrict, int *restrict);
double erand48(unsigned short[3]);
char *fcvt(double, int, int *restrict, int *restrict);
char *gcvt(double, int, char *);
int getsubopt(char **, char * const *, char **);
int grantpt(int);

char *initstate(unsigned, char *, size_t);



long jrand48(unsigned short[3]);
char *l64a(long);
void lcong48(unsigned short[7]);
long lrand48(void);
char *mktemp(char *);
int mkstemp(char *);
long mrand48(void);
long nrand48(unsigned short[3]);
int posix_openpt(int);
char *ptsname(int);
int putenv(char *) __asm("_" "putenv") ;
long random(void);
int rand_r(unsigned *);

char *realpath(const char * restrict, char * restrict) __asm("_" "realpath" "$DARWIN_EXTSN");



unsigned short
 *seed48(unsigned short[3]);
int setenv(const char *, const char *, int) __asm("_" "setenv") ;

void setkey(const char *) __asm("_" "setkey") ;



char *setstate(const char *);
void srand48(long);

void srandom(unsigned);



int unlockpt(int);

int unsetenv(const char *) __asm("_" "unsetenv") ;







# 1 "/usr/include/machine/types.h" 1 3 4
# 35 "/usr/include/machine/types.h" 3 4
# 1 "/usr/include/i386/types.h" 1 3 4
# 81 "/usr/include/i386/types.h" 3 4
typedef unsigned char u_int8_t;
typedef unsigned short u_int16_t;
typedef unsigned int u_int32_t;
typedef unsigned long long u_int64_t;


typedef int64_t register_t;
# 97 "/usr/include/i386/types.h" 3 4
typedef u_int64_t user_addr_t;
typedef u_int64_t user_size_t;
typedef int64_t user_ssize_t;
typedef int64_t user_long_t;
typedef u_int64_t user_ulong_t;
typedef int64_t user_time_t;
typedef int64_t user_off_t;







typedef u_int64_t syscall_arg_t;


# 1 "/usr/include/sys/_types/___offsetof.h" 1 3 4
# 114 "/usr/include/i386/types.h" 2 3 4
# 36 "/usr/include/machine/types.h" 2 3 4
# 239 "/usr/include/stdlib.h" 2 3 4

# 1 "/usr/include/sys/_types/_dev_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_dev_t.h" 3 4
typedef __darwin_dev_t dev_t;
# 241 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/sys/_types/_mode_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_mode_t.h" 3 4
typedef __darwin_mode_t mode_t;
# 242 "/usr/include/stdlib.h" 2 3 4

u_int32_t arc4random(void);
void arc4random_addrandom(unsigned char * , int );
void arc4random_buf(void * , size_t ) __attribute__((availability(macosx,introduced=10.7)));
void arc4random_stir(void);
u_int32_t
  arc4random_uniform(u_int32_t ) __attribute__((availability(macosx,introduced=10.7)));

int atexit_b(void (^)(void)) __attribute__((availability(macosx,introduced=10.6)));
void *bsearch_b(const void *, const void *, size_t,
     size_t, int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));



char *cgetcap(char *, const char *, int);
int cgetclose(void);
int cgetent(char **, char **, const char *);
int cgetfirst(char **, char **);
int cgetmatch(const char *, const char *);
int cgetnext(char **, char **);
int cgetnum(char *, const char *, long *);
int cgetset(const char *);
int cgetstr(char *, const char *, char **);
int cgetustr(char *, const char *, char **);

int daemon(int, int) __asm("_" "daemon" "$1050") __attribute__((availability(macosx,introduced=10.0,deprecated=10.5)));
char *devname(dev_t, mode_t);
char *devname_r(dev_t, mode_t, char *buf, int len);
char *getbsize(int *, long *);
int getloadavg(double [], int);
const char
 *getprogname(void);

int heapsort(void *, size_t, size_t,
     int (*)(const void *, const void *));

int heapsort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

int mergesort(void *, size_t, size_t,
     int (*)(const void *, const void *));

int mergesort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void psort(void *, size_t, size_t,
     int (*)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void psort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void psort_r(void *, size_t, size_t, void *,
     int (*)(void *, const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void qsort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void qsort_r(void *, size_t, size_t, void *,
     int (*)(void *, const void *, const void *));
int radixsort(const unsigned char **, int, const unsigned char *,
     unsigned);
void setprogname(const char *);
int sradixsort(const unsigned char **, int, const unsigned char *,
     unsigned);
void sranddev(void);
void srandomdev(void);
void *reallocf(void *, size_t);

long long
  strtoq(const char *, char **, int);
unsigned long long
  strtouq(const char *, char **, int);

extern char *suboptarg;
void *valloc(size_t);
# 7 "./input_source.h" 2

# 1 "/usr/include/assert.h" 1 3 4
# 76 "/usr/include/assert.h" 3 4
void __assert_rtn(const char *, const char *, int, const char *) __attribute__((noreturn));
# 9 "./input_source.h" 2



typedef struct InputSource {
  const char *source;
  size_t pos;
  size_t length;
  const char *filename;
} InputSource;

InputSource *InputSource_Init(InputSource *is, const char *filename);
void InputSource_Dispose(InputSource *is);

static inline uint8_t InputSource_GetUint8(InputSource *input)
{
    return (input->pos < input->length) ?
        ((uint8_t *)input->source)[input->pos++] : -1;
}

uint8_t *InputSource_CopyText(InputSource *input, size_t pos, size_t length);

static inline uint32_t InputSource_GetUint32(InputSource *input)
{
    uint32_t data;
    (__builtin_expect(!(input->pos < input->length), 0) ? __assert_rtn(__func__, "./input_source.h", 33, "input->pos < input->length") : (void)0);
    data = ((uint32_t *)input->source)[input->pos];
    input->pos += sizeof(uint32_t) / sizeof(uint8_t);
    return data;
}
# 10 "input_source.c" 2

static char *loadFile(const char *filename, size_t *length)
{
    size_t len = 0;
    FILE *fp = fopen(filename, "rb");
    char *source;
    if (!fp) {
        return ((void*)0);
    }
    fseek(fp, 0, 2);
    len = (size_t)ftell(fp);
    fseek(fp, 0, 0);
    source = (char *)malloc(len + 1);
    if (len != fread(source, 1, len, fp)) {
        fprintf(__stderrp, "fread error\n");
        exit(1);
    }
    source[len] = '\0';
    fclose(fp);
    *length = len;
    return source;
}

InputSource *InputSource_Init(InputSource *is, const char *filename)
{
    is->filename = filename;
    is->pos = is->length = 0;
    is->source = loadFile(filename, &is->length);
    if (!is->source) {
        return ((void*)0);
    }
    return is;
}

void InputSource_Dispose(InputSource *is)
{
    if (is->source) {
        free((char *)is->source);
        is->pos = is->length = 0;
        is->source = ((void*)0);
    }
}

uint8_t *InputSource_CopyText(InputSource *input, size_t pos, size_t length)
{
    uint8_t *text = (uint8_t *)GC_malloc(length + 1);
    __builtin___memcpy_chk (text, input->source + pos, length, __builtin_object_size (text, 0));
    text[length] = '\0';
    return text;
}
# 1 "loader.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 170 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "loader.c" 2
# 1 "./loader.h" 1





# 1 "./input_source.h" 1




# 1 "/usr/include/stdio.h" 1 3 4
# 64 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 484 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 485 "/usr/include/sys/cdefs.h" 2 3 4
# 550 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_posix_availability.h" 1 3 4
# 551 "/usr/include/sys/cdefs.h" 2 3 4
# 65 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/Availability.h" 1 3 4
# 148 "/usr/include/Availability.h" 3 4
# 1 "/usr/include/AvailabilityInternal.h" 1 3 4
# 149 "/usr/include/Availability.h" 2 3 4
# 66 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/_types.h" 1 3 4
# 27 "/usr/include/_types.h" 3 4
# 1 "/usr/include/sys/_types.h" 1 3 4
# 33 "/usr/include/sys/_types.h" 3 4
# 1 "/usr/include/machine/_types.h" 1 3 4
# 32 "/usr/include/machine/_types.h" 3 4
# 1 "/usr/include/i386/_types.h" 1 3 4
# 37 "/usr/include/i386/_types.h" 3 4
typedef signed char __int8_t;



typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long long __int64_t;
typedef unsigned long long __uint64_t;

typedef long __darwin_intptr_t;
typedef unsigned int __darwin_natural_t;
# 70 "/usr/include/i386/_types.h" 3 4
typedef int __darwin_ct_rune_t;





typedef union {
 char __mbstate8[128];
 long long _mbstateL;
} __mbstate_t;

typedef __mbstate_t __darwin_mbstate_t;


typedef long int __darwin_ptrdiff_t;







typedef long unsigned int __darwin_size_t;





typedef __builtin_va_list __darwin_va_list;





typedef int __darwin_wchar_t;




typedef __darwin_wchar_t __darwin_rune_t;


typedef int __darwin_wint_t;




typedef unsigned long __darwin_clock_t;
typedef __uint32_t __darwin_socklen_t;
typedef long __darwin_ssize_t;
typedef long __darwin_time_t;
# 33 "/usr/include/machine/_types.h" 2 3 4
# 34 "/usr/include/sys/_types.h" 2 3 4
# 58 "/usr/include/sys/_types.h" 3 4
struct __darwin_pthread_handler_rec
{
 void (*__routine)(void *);
 void *__arg;
 struct __darwin_pthread_handler_rec *__next;
};
struct _opaque_pthread_attr_t { long __sig; char __opaque[56]; };
struct _opaque_pthread_cond_t { long __sig; char __opaque[40]; };
struct _opaque_pthread_condattr_t { long __sig; char __opaque[8]; };
struct _opaque_pthread_mutex_t { long __sig; char __opaque[56]; };
struct _opaque_pthread_mutexattr_t { long __sig; char __opaque[8]; };
struct _opaque_pthread_once_t { long __sig; char __opaque[8]; };
struct _opaque_pthread_rwlock_t { long __sig; char __opaque[192]; };
struct _opaque_pthread_rwlockattr_t { long __sig; char __opaque[16]; };
struct _opaque_pthread_t { long __sig; struct __darwin_pthread_handler_rec *__cleanup_stack; char __opaque[1168]; };
# 94 "/usr/include/sys/_types.h" 3 4
typedef __int64_t __darwin_blkcnt_t;
typedef __int32_t __darwin_blksize_t;
typedef __int32_t __darwin_dev_t;
typedef unsigned int __darwin_fsblkcnt_t;
typedef unsigned int __darwin_fsfilcnt_t;
typedef __uint32_t __darwin_gid_t;
typedef __uint32_t __darwin_id_t;
typedef __uint64_t __darwin_ino64_t;

typedef __darwin_ino64_t __darwin_ino_t;



typedef __darwin_natural_t __darwin_mach_port_name_t;
typedef __darwin_mach_port_name_t __darwin_mach_port_t;
typedef __uint16_t __darwin_mode_t;
typedef __int64_t __darwin_off_t;
typedef __int32_t __darwin_pid_t;
typedef struct _opaque_pthread_attr_t
   __darwin_pthread_attr_t;
typedef struct _opaque_pthread_cond_t
   __darwin_pthread_cond_t;
typedef struct _opaque_pthread_condattr_t
   __darwin_pthread_condattr_t;
typedef unsigned long __darwin_pthread_key_t;
typedef struct _opaque_pthread_mutex_t
   __darwin_pthread_mutex_t;
typedef struct _opaque_pthread_mutexattr_t
   __darwin_pthread_mutexattr_t;
typedef struct _opaque_pthread_once_t
   __darwin_pthread_once_t;
typedef struct _opaque_pthread_rwlock_t
   __darwin_pthread_rwlock_t;
typedef struct _opaque_pthread_rwlockattr_t
   __darwin_pthread_rwlockattr_t;
typedef struct _opaque_pthread_t
   *__darwin_pthread_t;
typedef __uint32_t __darwin_sigset_t;
typedef __int32_t __darwin_suseconds_t;
typedef __uint32_t __darwin_uid_t;
typedef __uint32_t __darwin_useconds_t;
typedef unsigned char __darwin_uuid_t[16];
typedef char __darwin_uuid_string_t[37];
# 28 "/usr/include/_types.h" 2 3 4
# 39 "/usr/include/_types.h" 3 4
typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;

typedef __uint32_t __darwin_wctype_t;
# 68 "/usr/include/stdio.h" 2 3 4



# 1 "/usr/include/sys/_types/_va_list.h" 1 3 4
# 31 "/usr/include/sys/_types/_va_list.h" 3 4
typedef __darwin_va_list va_list;
# 72 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/sys/_types/_size_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_size_t.h" 3 4
typedef __darwin_size_t size_t;
# 73 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/sys/_types/_null.h" 1 3 4
# 74 "/usr/include/stdio.h" 2 3 4

typedef __darwin_off_t fpos_t;
# 86 "/usr/include/stdio.h" 3 4
struct __sbuf {
 unsigned char *_base;
 int _size;
};


struct __sFILEX;
# 120 "/usr/include/stdio.h" 3 4
typedef struct __sFILE {
 unsigned char *_p;
 int _r;
 int _w;
 short _flags;
 short _file;
 struct __sbuf _bf;
 int _lbfsize;


 void *_cookie;
 int (*_close)(void *);
 int (*_read) (void *, char *, int);
 fpos_t (*_seek) (void *, fpos_t, int);
 int (*_write)(void *, const char *, int);


 struct __sbuf _ub;
 struct __sFILEX *_extra;
 int _ur;


 unsigned char _ubuf[3];
 unsigned char _nbuf[1];


 struct __sbuf _lb;


 int _blksize;
 fpos_t _offset;
} FILE;


extern FILE *__stdinp;
extern FILE *__stdoutp;
extern FILE *__stderrp;
# 229 "/usr/include/stdio.h" 3 4
void clearerr(FILE *);
int fclose(FILE *);
int feof(FILE *);
int ferror(FILE *);
int fflush(FILE *);
int fgetc(FILE *);
int fgetpos(FILE * restrict, fpos_t *);
char *fgets(char * restrict, int, FILE *);



FILE *fopen(const char * restrict, const char * restrict) __asm("_" "fopen");

int fprintf(FILE * restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
int fputc(int, FILE *);
int fputs(const char * restrict, FILE * restrict) __asm("_" "fputs") ;
size_t fread(void * restrict, size_t, size_t, FILE * restrict);
FILE *freopen(const char * restrict, const char * restrict,
                 FILE * restrict) __asm("_" "freopen") ;
int fscanf(FILE * restrict, const char * restrict, ...) __attribute__((__format__ (__scanf__, 2, 3)));
int fseek(FILE *, long, int);
int fsetpos(FILE *, const fpos_t *);
long ftell(FILE *);
size_t fwrite(const void * restrict, size_t, size_t, FILE * restrict) __asm("_" "fwrite") ;
int getc(FILE *);
int getchar(void);
char *gets(char *);
void perror(const char *);
int printf(const char * restrict, ...) __attribute__((__format__ (__printf__, 1, 2)));
int putc(int, FILE *);
int putchar(int);
int puts(const char *);
int remove(const char *);
int rename (const char *, const char *);
void rewind(FILE *);
int scanf(const char * restrict, ...) __attribute__((__format__ (__scanf__, 1, 2)));
void setbuf(FILE * restrict, char * restrict);
int setvbuf(FILE * restrict, char * restrict, int, size_t);
int sprintf(char * restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
int sscanf(const char * restrict, const char * restrict, ...) __attribute__((__format__ (__scanf__, 2, 3)));
FILE *tmpfile(void);


__attribute__((deprecated("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tmpnam(3), it is highly recommended that you use mkstemp(3) instead.")))

char *tmpnam(char *);
int ungetc(int, FILE *);
int vfprintf(FILE * restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0)));
int vprintf(const char * restrict, va_list) __attribute__((__format__ (__printf__, 1, 0)));
int vsprintf(char * restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0)));
# 294 "/usr/include/stdio.h" 3 4
char *ctermid(char *);





FILE *fdopen(int, const char *) __asm("_" "fdopen");

int fileno(FILE *);
# 313 "/usr/include/stdio.h" 3 4
int pclose(FILE *);



FILE *popen(const char *, const char *) __asm("_" "popen");
# 335 "/usr/include/stdio.h" 3 4
int __srget(FILE *);
int __svfscanf(FILE *, const char *, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int __swbuf(int, FILE *);
# 346 "/usr/include/stdio.h" 3 4
inline __attribute__ ((__always_inline__)) int __sputc(int _c, FILE *_p) {
 if (--_p->_w >= 0 || (_p->_w >= _p->_lbfsize && (char)_c != '\n'))
  return (*_p->_p++ = _c);
 else
  return (__swbuf(_c, _p));
}
# 372 "/usr/include/stdio.h" 3 4
void flockfile(FILE *);
int ftrylockfile(FILE *);
void funlockfile(FILE *);
int getc_unlocked(FILE *);
int getchar_unlocked(void);
int putc_unlocked(int, FILE *);
int putchar_unlocked(int);



int getw(FILE *);
int putw(int, FILE *);



__attribute__((deprecated("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tempnam(3), it is highly recommended that you use mkstemp(3) instead.")))

char *tempnam(const char *, const char *) __asm("_" "tempnam") ;
# 409 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/_types/_off_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_off_t.h" 3 4
typedef __darwin_off_t off_t;
# 410 "/usr/include/stdio.h" 2 3 4


int fseeko(FILE *, off_t, int);
off_t ftello(FILE *);





int snprintf(char * restrict, size_t, const char * restrict, ...) __attribute__((__format__ (__printf__, 3, 4)));
int vfscanf(FILE * restrict, const char * restrict, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int vscanf(const char * restrict, va_list) __attribute__((__format__ (__scanf__, 1, 0)));
int vsnprintf(char * restrict, size_t, const char * restrict, va_list) __attribute__((__format__ (__printf__, 3, 0)));
int vsscanf(const char * restrict, const char * restrict, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
# 434 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/_types/_ssize_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_ssize_t.h" 3 4
typedef __darwin_ssize_t ssize_t;
# 435 "/usr/include/stdio.h" 2 3 4


int dprintf(int, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3))) __attribute__((availability(macosx,introduced=10.7)));
int vdprintf(int, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0))) __attribute__((availability(macosx,introduced=10.7)));
ssize_t getdelim(char ** restrict, size_t * restrict, int, FILE * restrict) __attribute__((availability(macosx,introduced=10.7)));
ssize_t getline(char ** restrict, size_t * restrict, FILE * restrict) __attribute__((availability(macosx,introduced=10.7)));
# 450 "/usr/include/stdio.h" 3 4
extern const int sys_nerr;
extern const char *const sys_errlist[];

int asprintf(char ** restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
char *ctermid_r(char *);
char *fgetln(FILE *, size_t *);
const char *fmtcheck(const char *, const char *);
int fpurge(FILE *);
void setbuffer(FILE *, char *, int);
int setlinebuf(FILE *);
int vasprintf(char ** restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0)));
FILE *zopen(const char *, const char *, int);





FILE *funopen(const void *,
                 int (*)(void *, char *, int),
                 int (*)(void *, const char *, int),
                 fpos_t (*)(void *, fpos_t, int),
                 int (*)(void *));
# 490 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/secure/_stdio.h" 1 3 4
# 31 "/usr/include/secure/_stdio.h" 3 4
# 1 "/usr/include/secure/_common.h" 1 3 4
# 32 "/usr/include/secure/_stdio.h" 2 3 4
# 42 "/usr/include/secure/_stdio.h" 3 4
extern int __sprintf_chk (char * restrict, int, size_t,
     const char * restrict, ...);
# 52 "/usr/include/secure/_stdio.h" 3 4
extern int __snprintf_chk (char * restrict, size_t, int, size_t,
      const char * restrict, ...);







extern int __vsprintf_chk (char * restrict, int, size_t,
      const char * restrict, va_list);







extern int __vsnprintf_chk (char * restrict, size_t, int, size_t,
       const char * restrict, va_list);
# 491 "/usr/include/stdio.h" 2 3 4
# 6 "./input_source.h" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 65 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/sys/wait.h" 1 3 4
# 79 "/usr/include/sys/wait.h" 3 4
typedef enum {
 P_ALL,
 P_PID,
 P_PGID
} idtype_t;






# 1 "/usr/include/sys/_types/_pid_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_pid_t.h" 3 4
typedef __darwin_pid_t pid_t;
# 90 "/usr/include/sys/wait.h" 2 3 4
# 1 "/usr/include/sys/_types/_id_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_id_t.h" 3 4
typedef __darwin_id_t id_t;
# 91 "/usr/include/sys/wait.h" 2 3 4
# 109 "/usr/include/sys/wait.h" 3 4
# 1 "/usr/include/sys/signal.h" 1 3 4
# 73 "/usr/include/sys/signal.h" 3 4
# 1 "/usr/include/sys/appleapiopts.h" 1 3 4
# 74 "/usr/include/sys/signal.h" 2 3 4







# 1 "/usr/include/machine/signal.h" 1 3 4
# 32 "/usr/include/machine/signal.h" 3 4
# 1 "/usr/include/i386/signal.h" 1 3 4
# 39 "/usr/include/i386/signal.h" 3 4
typedef int sig_atomic_t;
# 33 "/usr/include/machine/signal.h" 2 3 4
# 82 "/usr/include/sys/signal.h" 2 3 4
# 145 "/usr/include/sys/signal.h" 3 4
# 1 "/usr/include/machine/_mcontext.h" 1 3 4
# 29 "/usr/include/machine/_mcontext.h" 3 4
# 1 "/usr/include/i386/_mcontext.h" 1 3 4
# 33 "/usr/include/i386/_mcontext.h" 3 4
# 1 "/usr/include/mach/i386/_structs.h" 1 3 4
# 43 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_thread_state
{
    unsigned int __eax;
    unsigned int __ebx;
    unsigned int __ecx;
    unsigned int __edx;
    unsigned int __edi;
    unsigned int __esi;
    unsigned int __ebp;
    unsigned int __esp;
    unsigned int __ss;
    unsigned int __eflags;
    unsigned int __eip;
    unsigned int __cs;
    unsigned int __ds;
    unsigned int __es;
    unsigned int __fs;
    unsigned int __gs;
};
# 89 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_fp_control
{
    unsigned short __invalid :1,
        __denorm :1,
    __zdiv :1,
    __ovrfl :1,
    __undfl :1,
    __precis :1,
      :2,
    __pc :2,





    __rc :2,






             :1,
      :3;
};
typedef struct __darwin_fp_control __darwin_fp_control_t;
# 147 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_fp_status
{
    unsigned short __invalid :1,
        __denorm :1,
    __zdiv :1,
    __ovrfl :1,
    __undfl :1,
    __precis :1,
    __stkflt :1,
    __errsumm :1,
    __c0 :1,
    __c1 :1,
    __c2 :1,
    __tos :3,
    __c3 :1,
    __busy :1;
};
typedef struct __darwin_fp_status __darwin_fp_status_t;
# 191 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_mmst_reg
{
 char __mmst_reg[10];
 char __mmst_rsrv[6];
};
# 210 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_xmm_reg
{
 char __xmm_reg[16];
};
# 232 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_float_state
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;
 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;
 __uint16_t __fpu_rsrv2;
 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;
 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 char __fpu_rsrv4[14*16];
 int __fpu_reserved1;
};


struct __darwin_i386_avx_state
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;
 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;
 __uint16_t __fpu_rsrv2;
 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;
 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 char __fpu_rsrv4[14*16];
 int __fpu_reserved1;
 char __avx_reserved1[64];
 struct __darwin_xmm_reg __fpu_ymmh0;
 struct __darwin_xmm_reg __fpu_ymmh1;
 struct __darwin_xmm_reg __fpu_ymmh2;
 struct __darwin_xmm_reg __fpu_ymmh3;
 struct __darwin_xmm_reg __fpu_ymmh4;
 struct __darwin_xmm_reg __fpu_ymmh5;
 struct __darwin_xmm_reg __fpu_ymmh6;
 struct __darwin_xmm_reg __fpu_ymmh7;
};
# 402 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_exception_state
{
 __uint16_t __trapno;
 __uint16_t __cpu;
 __uint32_t __err;
 __uint32_t __faultvaddr;
};
# 422 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_debug_state32
{
 unsigned int __dr0;
 unsigned int __dr1;
 unsigned int __dr2;
 unsigned int __dr3;
 unsigned int __dr4;
 unsigned int __dr5;
 unsigned int __dr6;
 unsigned int __dr7;
};
# 454 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_thread_state64
{
 __uint64_t __rax;
 __uint64_t __rbx;
 __uint64_t __rcx;
 __uint64_t __rdx;
 __uint64_t __rdi;
 __uint64_t __rsi;
 __uint64_t __rbp;
 __uint64_t __rsp;
 __uint64_t __r8;
 __uint64_t __r9;
 __uint64_t __r10;
 __uint64_t __r11;
 __uint64_t __r12;
 __uint64_t __r13;
 __uint64_t __r14;
 __uint64_t __r15;
 __uint64_t __rip;
 __uint64_t __rflags;
 __uint64_t __cs;
 __uint64_t __fs;
 __uint64_t __gs;
};
# 509 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_float_state64
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;


 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;

 __uint16_t __fpu_rsrv2;


 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;

 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 struct __darwin_xmm_reg __fpu_xmm8;
 struct __darwin_xmm_reg __fpu_xmm9;
 struct __darwin_xmm_reg __fpu_xmm10;
 struct __darwin_xmm_reg __fpu_xmm11;
 struct __darwin_xmm_reg __fpu_xmm12;
 struct __darwin_xmm_reg __fpu_xmm13;
 struct __darwin_xmm_reg __fpu_xmm14;
 struct __darwin_xmm_reg __fpu_xmm15;
 char __fpu_rsrv4[6*16];
 int __fpu_reserved1;
};


struct __darwin_x86_avx_state64
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;


 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;

 __uint16_t __fpu_rsrv2;


 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;

 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 struct __darwin_xmm_reg __fpu_xmm8;
 struct __darwin_xmm_reg __fpu_xmm9;
 struct __darwin_xmm_reg __fpu_xmm10;
 struct __darwin_xmm_reg __fpu_xmm11;
 struct __darwin_xmm_reg __fpu_xmm12;
 struct __darwin_xmm_reg __fpu_xmm13;
 struct __darwin_xmm_reg __fpu_xmm14;
 struct __darwin_xmm_reg __fpu_xmm15;
 char __fpu_rsrv4[6*16];
 int __fpu_reserved1;
 char __avx_reserved1[64];
 struct __darwin_xmm_reg __fpu_ymmh0;
 struct __darwin_xmm_reg __fpu_ymmh1;
 struct __darwin_xmm_reg __fpu_ymmh2;
 struct __darwin_xmm_reg __fpu_ymmh3;
 struct __darwin_xmm_reg __fpu_ymmh4;
 struct __darwin_xmm_reg __fpu_ymmh5;
 struct __darwin_xmm_reg __fpu_ymmh6;
 struct __darwin_xmm_reg __fpu_ymmh7;
 struct __darwin_xmm_reg __fpu_ymmh8;
 struct __darwin_xmm_reg __fpu_ymmh9;
 struct __darwin_xmm_reg __fpu_ymmh10;
 struct __darwin_xmm_reg __fpu_ymmh11;
 struct __darwin_xmm_reg __fpu_ymmh12;
 struct __darwin_xmm_reg __fpu_ymmh13;
 struct __darwin_xmm_reg __fpu_ymmh14;
 struct __darwin_xmm_reg __fpu_ymmh15;
};
# 751 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_exception_state64
{
    __uint16_t __trapno;
    __uint16_t __cpu;
    __uint32_t __err;
    __uint64_t __faultvaddr;
};
# 771 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_debug_state64
{
 __uint64_t __dr0;
 __uint64_t __dr1;
 __uint64_t __dr2;
 __uint64_t __dr3;
 __uint64_t __dr4;
 __uint64_t __dr5;
 __uint64_t __dr6;
 __uint64_t __dr7;
};
# 34 "/usr/include/i386/_mcontext.h" 2 3 4




struct __darwin_mcontext32
{
 struct __darwin_i386_exception_state __es;
 struct __darwin_i386_thread_state __ss;
 struct __darwin_i386_float_state __fs;
};


struct __darwin_mcontext_avx32
{
 struct __darwin_i386_exception_state __es;
 struct __darwin_i386_thread_state __ss;
 struct __darwin_i386_avx_state __fs;
};
# 76 "/usr/include/i386/_mcontext.h" 3 4
struct __darwin_mcontext64
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_state64 __ss;
 struct __darwin_x86_float_state64 __fs;
};


struct __darwin_mcontext_avx64
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_state64 __ss;
 struct __darwin_x86_avx_state64 __fs;
};
# 115 "/usr/include/i386/_mcontext.h" 3 4
typedef struct __darwin_mcontext64 *mcontext_t;
# 30 "/usr/include/machine/_mcontext.h" 2 3 4
# 146 "/usr/include/sys/signal.h" 2 3 4
# 1 "/usr/include/sys/_types/_sigaltstack.h" 1 3 4
# 36 "/usr/include/sys/_types/_sigaltstack.h" 3 4
struct __darwin_sigaltstack
{
 void *ss_sp;
 __darwin_size_t ss_size;
 int ss_flags;
};
typedef struct __darwin_sigaltstack stack_t;
# 147 "/usr/include/sys/signal.h" 2 3 4
# 1 "/usr/include/sys/_types/_ucontext.h" 1 3 4
# 34 "/usr/include/sys/_types/_ucontext.h" 3 4
struct __darwin_ucontext
{
 int uc_onstack;
 __darwin_sigset_t uc_sigmask;
 struct __darwin_sigaltstack uc_stack;
 struct __darwin_ucontext *uc_link;
 __darwin_size_t uc_mcsize;
 struct __darwin_mcontext64 *uc_mcontext;



};


typedef struct __darwin_ucontext ucontext_t;
# 148 "/usr/include/sys/signal.h" 2 3 4


# 1 "/usr/include/sys/_types/_pthread_attr_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_pthread_attr_t.h" 3 4
typedef __darwin_pthread_attr_t pthread_attr_t;
# 151 "/usr/include/sys/signal.h" 2 3 4
# 1 "/usr/include/sys/_types/_sigset_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_sigset_t.h" 3 4
typedef __darwin_sigset_t sigset_t;
# 152 "/usr/include/sys/signal.h" 2 3 4

# 1 "/usr/include/sys/_types/_uid_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_uid_t.h" 3 4
typedef __darwin_uid_t uid_t;
# 154 "/usr/include/sys/signal.h" 2 3 4

union sigval {

 int sival_int;
 void *sival_ptr;
};





struct sigevent {
 int sigev_notify;
 int sigev_signo;
 union sigval sigev_value;
 void (*sigev_notify_function)(union sigval);
 pthread_attr_t *sigev_notify_attributes;
};


typedef struct __siginfo {
 int si_signo;
 int si_errno;
 int si_code;
 pid_t si_pid;
 uid_t si_uid;
 int si_status;
 void *si_addr;
 union sigval si_value;
 long si_band;
 unsigned long __pad[7];
} siginfo_t;
# 266 "/usr/include/sys/signal.h" 3 4
union __sigaction_u {
 void (*__sa_handler)(int);
 void (*__sa_sigaction)(int, struct __siginfo *,
         void *);
};


struct __sigaction {
 union __sigaction_u __sigaction_u;
 void (*sa_tramp)(void *, int, int, siginfo_t *, void *);
 sigset_t sa_mask;
 int sa_flags;
};




struct sigaction {
 union __sigaction_u __sigaction_u;
 sigset_t sa_mask;
 int sa_flags;
};
# 328 "/usr/include/sys/signal.h" 3 4
typedef void (*sig_t)(int);
# 345 "/usr/include/sys/signal.h" 3 4
struct sigvec {
 void (*sv_handler)(int);
 int sv_mask;
 int sv_flags;
};
# 364 "/usr/include/sys/signal.h" 3 4
struct sigstack {
 char *ss_sp;
 int ss_onstack;
};
# 387 "/usr/include/sys/signal.h" 3 4
void (*signal(int, void (*)(int)))(int);
# 110 "/usr/include/sys/wait.h" 2 3 4
# 1 "/usr/include/sys/resource.h" 1 3 4
# 72 "/usr/include/sys/resource.h" 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdint.h" 1 3 4
# 64 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 18 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/sys/_types/_int8_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int8_t.h" 3 4
typedef signed char int8_t;
# 19 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_int16_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int16_t.h" 3 4
typedef short int16_t;
# 20 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_int32_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int32_t.h" 3 4
typedef int int32_t;
# 21 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_int64_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int64_t.h" 3 4
typedef long long int64_t;
# 22 "/usr/include/stdint.h" 2 3 4

# 1 "/usr/include/_types/_uint8_t.h" 1 3 4
# 31 "/usr/include/_types/_uint8_t.h" 3 4
typedef unsigned char uint8_t;
# 24 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uint16_t.h" 1 3 4
# 31 "/usr/include/_types/_uint16_t.h" 3 4
typedef unsigned short uint16_t;
# 25 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uint32_t.h" 1 3 4
# 31 "/usr/include/_types/_uint32_t.h" 3 4
typedef unsigned int uint32_t;
# 26 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uint64_t.h" 1 3 4
# 31 "/usr/include/_types/_uint64_t.h" 3 4
typedef unsigned long long uint64_t;
# 27 "/usr/include/stdint.h" 2 3 4


typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_least64_t;
typedef uint8_t uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;



typedef int8_t int_fast8_t;
typedef int16_t int_fast16_t;
typedef int32_t int_fast32_t;
typedef int64_t int_fast64_t;
typedef uint8_t uint_fast8_t;
typedef uint16_t uint_fast16_t;
typedef uint32_t uint_fast32_t;
typedef uint64_t uint_fast64_t;






# 1 "/usr/include/sys/_types/_intptr_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_intptr_t.h" 3 4
typedef __darwin_intptr_t intptr_t;
# 54 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_uintptr_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_uintptr_t.h" 3 4
typedef unsigned long uintptr_t;
# 55 "/usr/include/stdint.h" 2 3 4



# 1 "/usr/include/_types/_intmax_t.h" 1 3 4
# 32 "/usr/include/_types/_intmax_t.h" 3 4
typedef long int intmax_t;
# 59 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uintmax_t.h" 1 3 4
# 32 "/usr/include/_types/_uintmax_t.h" 3 4
typedef long unsigned int uintmax_t;
# 60 "/usr/include/stdint.h" 2 3 4
# 65 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdint.h" 2 3 4
# 73 "/usr/include/sys/resource.h" 2 3 4







# 1 "/usr/include/sys/_types/_timeval.h" 1 3 4
# 30 "/usr/include/sys/_types/_timeval.h" 3 4
struct timeval
{
 __darwin_time_t tv_sec;
 __darwin_suseconds_t tv_usec;
};
# 81 "/usr/include/sys/resource.h" 2 3 4








typedef __uint64_t rlim_t;
# 151 "/usr/include/sys/resource.h" 3 4
struct rusage {
 struct timeval ru_utime;
 struct timeval ru_stime;
# 162 "/usr/include/sys/resource.h" 3 4
 long ru_maxrss;

 long ru_ixrss;
 long ru_idrss;
 long ru_isrss;
 long ru_minflt;
 long ru_majflt;
 long ru_nswap;
 long ru_inblock;
 long ru_oublock;
 long ru_msgsnd;
 long ru_msgrcv;
 long ru_nsignals;
 long ru_nvcsw;
 long ru_nivcsw;


};
# 190 "/usr/include/sys/resource.h" 3 4
typedef void *rusage_info_t;

struct rusage_info_v0 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
};

struct rusage_info_v1 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
};

struct rusage_info_v2 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
};
# 290 "/usr/include/sys/resource.h" 3 4
struct rlimit {
 rlim_t rlim_cur;
 rlim_t rlim_max;
};
# 317 "/usr/include/sys/resource.h" 3 4
struct proc_rlimit_control_wakeupmon {
 uint32_t wm_flags;
 int32_t wm_rate;
};
# 347 "/usr/include/sys/resource.h" 3 4
int getpriority(int, id_t);

int getiopolicy_np(int, int) __attribute__((availability(macosx,introduced=10.5)));

int getrlimit(int, struct rlimit *) __asm("_" "getrlimit") ;
int getrusage(int, struct rusage *);
int setpriority(int, id_t, int);

int setiopolicy_np(int, int, int) __attribute__((availability(macosx,introduced=10.5)));

int setrlimit(int, const struct rlimit *) __asm("_" "setrlimit") ;
# 111 "/usr/include/sys/wait.h" 2 3 4
# 186 "/usr/include/sys/wait.h" 3 4
# 1 "/usr/include/machine/endian.h" 1 3 4
# 35 "/usr/include/machine/endian.h" 3 4
# 1 "/usr/include/i386/endian.h" 1 3 4
# 99 "/usr/include/i386/endian.h" 3 4
# 1 "/usr/include/sys/_endian.h" 1 3 4
# 124 "/usr/include/sys/_endian.h" 3 4
# 1 "/usr/include/libkern/_OSByteOrder.h" 1 3 4
# 66 "/usr/include/libkern/_OSByteOrder.h" 3 4
# 1 "/usr/include/libkern/i386/_OSByteOrder.h" 1 3 4
# 44 "/usr/include/libkern/i386/_OSByteOrder.h" 3 4
static inline
__uint16_t
_OSSwapInt16(
    __uint16_t _data
)
{
    return ((__uint16_t)((_data << 8) | (_data >> 8)));
}

static inline
__uint32_t
_OSSwapInt32(
    __uint32_t _data
)
{

    return __builtin_bswap32(_data);




}


static inline
__uint64_t
_OSSwapInt64(
    __uint64_t _data
)
{
    return __builtin_bswap64(_data);
}
# 67 "/usr/include/libkern/_OSByteOrder.h" 2 3 4
# 125 "/usr/include/sys/_endian.h" 2 3 4
# 100 "/usr/include/i386/endian.h" 2 3 4
# 36 "/usr/include/machine/endian.h" 2 3 4
# 187 "/usr/include/sys/wait.h" 2 3 4







union wait {
 int w_status;



 struct {

  unsigned int w_Termsig:7,
    w_Coredump:1,
    w_Retcode:8,
    w_Filler:16;







 } w_T;





 struct {

  unsigned int w_Stopval:8,
    w_Stopsig:8,
    w_Filler:16;






 } w_S;
};
# 248 "/usr/include/sys/wait.h" 3 4
pid_t wait(int *) __asm("_" "wait") ;
pid_t waitpid(pid_t, int *, int) __asm("_" "waitpid") ;

int waitid(idtype_t, id_t, siginfo_t *, int) __asm("_" "waitid") ;


pid_t wait3(int *, int, struct rusage *);
pid_t wait4(pid_t, int *, int, struct rusage *);
# 66 "/usr/include/stdlib.h" 2 3 4

# 1 "/usr/include/alloca.h" 1 3 4
# 32 "/usr/include/alloca.h" 3 4
void *alloca(size_t);
# 68 "/usr/include/stdlib.h" 2 3 4








# 1 "/usr/include/sys/_types/_ct_rune_t.h" 1 3 4
# 31 "/usr/include/sys/_types/_ct_rune_t.h" 3 4
typedef __darwin_ct_rune_t ct_rune_t;
# 77 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/sys/_types/_rune_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_rune_t.h" 3 4
typedef __darwin_rune_t rune_t;
# 78 "/usr/include/stdlib.h" 2 3 4


# 1 "/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 33 "/usr/include/sys/_types/_wchar_t.h" 3 4
typedef __darwin_wchar_t wchar_t;
# 81 "/usr/include/stdlib.h" 2 3 4

typedef struct {
 int quot;
 int rem;
} div_t;

typedef struct {
 long quot;
 long rem;
} ldiv_t;


typedef struct {
 long long quot;
 long long rem;
} lldiv_t;
# 117 "/usr/include/stdlib.h" 3 4
extern int __mb_cur_max;
# 128 "/usr/include/stdlib.h" 3 4
void abort(void) __attribute__((noreturn));
int abs(int) __attribute__((const));
int atexit(void (*)(void));
double atof(const char *);
int atoi(const char *);
long atol(const char *);

long long
  atoll(const char *);

void *bsearch(const void *, const void *, size_t,
     size_t, int (*)(const void *, const void *));
void *calloc(size_t, size_t);
div_t div(int, int) __attribute__((const));
void exit(int) __attribute__((noreturn));
void free(void *);
char *getenv(const char *);
long labs(long) __attribute__((const));
ldiv_t ldiv(long, long) __attribute__((const));

long long
  llabs(long long);
lldiv_t lldiv(long long, long long);

void *malloc(size_t);
int mblen(const char *, size_t);
size_t mbstowcs(wchar_t * restrict , const char * restrict, size_t);
int mbtowc(wchar_t * restrict, const char * restrict, size_t);
int posix_memalign(void **, size_t, size_t) __attribute__((availability(macosx,introduced=10.6)));
void qsort(void *, size_t, size_t,
     int (*)(const void *, const void *));
int rand(void);
void *realloc(void *, size_t);
void srand(unsigned);
double strtod(const char *, char **) __asm("_" "strtod") ;
float strtof(const char *, char **) __asm("_" "strtof") ;
long strtol(const char *, char **, int);
long double
  strtold(const char *, char **);

long long
  strtoll(const char *, char **, int);

unsigned long
  strtoul(const char *, char **, int);

unsigned long long
  strtoull(const char *, char **, int);

int system(const char *) __asm("_" "system") ;
size_t wcstombs(char * restrict, const wchar_t * restrict, size_t);
int wctomb(char *, wchar_t);


void _Exit(int) __attribute__((noreturn));
long a64l(const char *);
double drand48(void);
char *ecvt(double, int, int *restrict, int *restrict);
double erand48(unsigned short[3]);
char *fcvt(double, int, int *restrict, int *restrict);
char *gcvt(double, int, char *);
int getsubopt(char **, char * const *, char **);
int grantpt(int);

char *initstate(unsigned, char *, size_t);



long jrand48(unsigned short[3]);
char *l64a(long);
void lcong48(unsigned short[7]);
long lrand48(void);
char *mktemp(char *);
int mkstemp(char *);
long mrand48(void);
long nrand48(unsigned short[3]);
int posix_openpt(int);
char *ptsname(int);
int putenv(char *) __asm("_" "putenv") ;
long random(void);
int rand_r(unsigned *);

char *realpath(const char * restrict, char * restrict) __asm("_" "realpath" "$DARWIN_EXTSN");



unsigned short
 *seed48(unsigned short[3]);
int setenv(const char *, const char *, int) __asm("_" "setenv") ;

void setkey(const char *) __asm("_" "setkey") ;



char *setstate(const char *);
void srand48(long);

void srandom(unsigned);



int unlockpt(int);

int unsetenv(const char *) __asm("_" "unsetenv") ;







# 1 "/usr/include/machine/types.h" 1 3 4
# 35 "/usr/include/machine/types.h" 3 4
# 1 "/usr/include/i386/types.h" 1 3 4
# 81 "/usr/include/i386/types.h" 3 4
typedef unsigned char u_int8_t;
typedef unsigned short u_int16_t;
typedef unsigned int u_int32_t;
typedef unsigned long long u_int64_t;


typedef int64_t register_t;
# 97 "/usr/include/i386/types.h" 3 4
typedef u_int64_t user_addr_t;
typedef u_int64_t user_size_t;
typedef int64_t user_ssize_t;
typedef int64_t user_long_t;
typedef u_int64_t user_ulong_t;
typedef int64_t user_time_t;
typedef int64_t user_off_t;







typedef u_int64_t syscall_arg_t;


# 1 "/usr/include/sys/_types/___offsetof.h" 1 3 4
# 114 "/usr/include/i386/types.h" 2 3 4
# 36 "/usr/include/machine/types.h" 2 3 4
# 239 "/usr/include/stdlib.h" 2 3 4

# 1 "/usr/include/sys/_types/_dev_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_dev_t.h" 3 4
typedef __darwin_dev_t dev_t;
# 241 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/sys/_types/_mode_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_mode_t.h" 3 4
typedef __darwin_mode_t mode_t;
# 242 "/usr/include/stdlib.h" 2 3 4

u_int32_t arc4random(void);
void arc4random_addrandom(unsigned char * , int );
void arc4random_buf(void * , size_t ) __attribute__((availability(macosx,introduced=10.7)));
void arc4random_stir(void);
u_int32_t
  arc4random_uniform(u_int32_t ) __attribute__((availability(macosx,introduced=10.7)));

int atexit_b(void (^)(void)) __attribute__((availability(macosx,introduced=10.6)));
void *bsearch_b(const void *, const void *, size_t,
     size_t, int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));



char *cgetcap(char *, const char *, int);
int cgetclose(void);
int cgetent(char **, char **, const char *);
int cgetfirst(char **, char **);
int cgetmatch(const char *, const char *);
int cgetnext(char **, char **);
int cgetnum(char *, const char *, long *);
int cgetset(const char *);
int cgetstr(char *, const char *, char **);
int cgetustr(char *, const char *, char **);

int daemon(int, int) __asm("_" "daemon" "$1050") __attribute__((availability(macosx,introduced=10.0,deprecated=10.5)));
char *devname(dev_t, mode_t);
char *devname_r(dev_t, mode_t, char *buf, int len);
char *getbsize(int *, long *);
int getloadavg(double [], int);
const char
 *getprogname(void);

int heapsort(void *, size_t, size_t,
     int (*)(const void *, const void *));

int heapsort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

int mergesort(void *, size_t, size_t,
     int (*)(const void *, const void *));

int mergesort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void psort(void *, size_t, size_t,
     int (*)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void psort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void psort_r(void *, size_t, size_t, void *,
     int (*)(void *, const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void qsort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void qsort_r(void *, size_t, size_t, void *,
     int (*)(void *, const void *, const void *));
int radixsort(const unsigned char **, int, const unsigned char *,
     unsigned);
void setprogname(const char *);
int sradixsort(const unsigned char **, int, const unsigned char *,
     unsigned);
void sranddev(void);
void srandomdev(void);
void *reallocf(void *, size_t);

long long
  strtoq(const char *, char **, int);
unsigned long long
  strtouq(const char *, char **, int);

extern char *suboptarg;
void *valloc(size_t);
# 7 "./input_source.h" 2

# 1 "/usr/include/assert.h" 1 3 4
# 76 "/usr/include/assert.h" 3 4
void __assert_rtn(const char *, const char *, int, const char *) __attribute__((noreturn));
# 9 "./input_source.h" 2



typedef struct InputSource {
  const char *source;
  size_t pos;
  size_t length;
  const char *filename;
} InputSource;

InputSource *InputSource_Init(InputSource *is, const char *filename);
void InputSource_Dispose(InputSource *is);

static inline uint8_t InputSource_GetUint8(InputSource *input)
{
    return (input->pos < input->length) ?
        ((uint8_t *)input->source)[input->pos++] : -1;
}

uint8_t *InputSource_CopyText(InputSource *input, size_t pos, size_t length);

static inline uint32_t InputSource_GetUint32(InputSource *input)
{
    uint32_t data;
    (__builtin_expect(!(input->pos < input->length), 0) ? __assert_rtn(__func__, "./input_source.h", 33, "input->pos < input->length") : (void)0);
    data = ((uint32_t *)input->source)[input->pos];
    input->pos += sizeof(uint32_t) / sizeof(uint8_t);
    return data;
}
# 7 "./loader.h" 2



typedef struct Instruction {
    long opcode;
    union {
        unsigned long ndata;
        uint8_t *bdata;
        struct Instruction *dst;
    };
} PegVMInstruction, Instruction;

PegVMInstruction *ByteCodeLoader_Load(InputSource *input);
void PegVMInstruction_dump(PegVMInstruction *code, size_t len);
# 2 "loader.c" 2
# 1 "./pegvm.h" 1
# 1 "./input_source.h" 1







# 1 "/usr/include/assert.h" 1 3 4
# 76 "/usr/include/assert.h" 3 4
void __assert_rtn(const char *, const char *, int, const char *) __attribute__((noreturn));
# 9 "./input_source.h" 2
# 2 "./pegvm.h" 2
# 1 "./loader.h" 1





# 1 "./input_source.h" 1







# 1 "/usr/include/assert.h" 1 3 4
# 76 "/usr/include/assert.h" 3 4
void __assert_rtn(const char *, const char *, int, const char *) __attribute__((noreturn));
# 9 "./input_source.h" 2
# 7 "./loader.h" 2
# 3 "./pegvm.h" 2
# 1 "./node.h" 1

# 1 "./input_source.h" 1







# 1 "/usr/include/assert.h" 1 3 4
# 76 "/usr/include/assert.h" 3 4
void __assert_rtn(const char *, const char *, int, const char *) __attribute__((noreturn));
# 9 "./input_source.h" 2
# 3 "./node.h" 2



typedef struct NODE NODE;

NODE *NODE_New(unsigned type, size_t pos);
void NODE_Dispose(NODE *self);
void NODE_SetTag(NODE *self, uint8_t *bdata, InputSource *input);
uint8_t *NODE_GetText(NODE *self);
uint8_t *NODE_GetTag(NODE *self);
void NODE_AppendChild(NODE *parent, NODE *node);
void NODE_Dump(NODE *node, int level);
NODE **Node_GetChildren(NODE *node, unsigned *length);

enum node_type {
  NODE_TYPE_DEFAULT
};
# 4 "./pegvm.h" 2
# 1 "/usr/local/include/gc/gc.h" 1 3
# 34 "/usr/local/include/gc/gc.h" 3
# 1 "/usr/local/include/gc/gc_version.h" 1 3
# 35 "/usr/local/include/gc/gc.h" 2 3






# 1 "/usr/local/include/gc/gc_config_macros.h" 1 3
# 150 "/usr/local/include/gc/gc_config_macros.h" 3
# 1 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stddef.h" 1 3 4
# 34 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 53 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stddef.h" 3 4
typedef long unsigned int rsize_t;
# 151 "/usr/local/include/gc/gc_config_macros.h" 2 3
# 42 "/usr/local/include/gc/gc.h" 2 3





typedef void * GC_PTR;
# 65 "/usr/local/include/gc/gc.h" 3
  typedef unsigned long GC_word;
  typedef long GC_signed_word;




extern unsigned GC_get_version(void);




extern GC_word GC_gc_no;

extern GC_word GC_get_gc_no(void);
# 103 "/usr/local/include/gc/gc.h" 3
typedef void * ( * GC_oom_func)(size_t );
extern GC_oom_func GC_oom_fn;
# 114 "/usr/local/include/gc/gc.h" 3
extern void GC_set_oom_fn(GC_oom_func);
extern GC_oom_func GC_get_oom_fn(void);

extern int GC_find_leak;







extern void GC_set_find_leak(int);
extern int GC_get_find_leak(void);

extern int GC_all_interior_pointers;
# 141 "/usr/local/include/gc/gc.h" 3
extern void GC_set_all_interior_pointers(int);
extern int GC_get_all_interior_pointers(void);

extern int GC_finalize_on_demand;






extern void GC_set_finalize_on_demand(int);
extern int GC_get_finalize_on_demand(void);

extern int GC_java_finalization;
# 163 "/usr/local/include/gc/gc.h" 3
extern void GC_set_java_finalization(int);
extern int GC_get_java_finalization(void);

typedef void ( * GC_finalizer_notifier_proc)(void);
extern GC_finalizer_notifier_proc GC_finalizer_notifier;
# 177 "/usr/local/include/gc/gc.h" 3
extern void GC_set_finalizer_notifier(GC_finalizer_notifier_proc);
extern GC_finalizer_notifier_proc GC_get_finalizer_notifier(void);

extern int GC_dont_gc;
# 190 "/usr/local/include/gc/gc.h" 3
extern int GC_dont_expand;



extern void GC_set_dont_expand(int);
extern int GC_get_dont_expand(void);

extern int GC_use_entire_heap;
# 208 "/usr/local/include/gc/gc.h" 3
extern int GC_full_freq;
# 221 "/usr/local/include/gc/gc.h" 3
extern void GC_set_full_freq(int);
extern int GC_get_full_freq(void);

extern GC_word GC_non_gc_bytes;
# 234 "/usr/local/include/gc/gc.h" 3
extern void GC_set_non_gc_bytes(GC_word);
extern GC_word GC_get_non_gc_bytes(void);

extern int GC_no_dls;
# 246 "/usr/local/include/gc/gc.h" 3
extern void GC_set_no_dls(int);
extern int GC_get_no_dls(void);

extern GC_word GC_free_space_divisor;
# 266 "/usr/local/include/gc/gc.h" 3
extern void GC_set_free_space_divisor(GC_word);
extern GC_word GC_get_free_space_divisor(void);

extern GC_word GC_max_retries;







extern void GC_set_max_retries(GC_word);
extern GC_word GC_get_max_retries(void);


extern char *GC_stackbottom;
# 296 "/usr/local/include/gc/gc.h" 3
extern int GC_dont_precollect;
# 306 "/usr/local/include/gc/gc.h" 3
extern void GC_set_dont_precollect(int);
extern int GC_get_dont_precollect(void);

extern unsigned long GC_time_limit;
# 326 "/usr/local/include/gc/gc.h" 3
extern void GC_set_time_limit(unsigned long);
extern unsigned long GC_get_time_limit(void);
# 339 "/usr/local/include/gc/gc.h" 3
extern void GC_set_pages_executable(int);





extern int GC_get_pages_executable(void);







extern void GC_set_handle_fork(int);



extern void GC_init(void);
# 372 "/usr/local/include/gc/gc.h" 3
extern void * GC_malloc(size_t )
                        __attribute__((__malloc__)) ;
extern void * GC_malloc_atomic(size_t )
                        __attribute__((__malloc__)) ;
extern char * GC_strdup(const char *) __attribute__((__malloc__));
extern char * GC_strndup(const char *, size_t) __attribute__((__malloc__));
extern void * GC_malloc_uncollectable(size_t )
                        __attribute__((__malloc__)) ;
extern void * GC_malloc_stubborn(size_t )
                        __attribute__((__malloc__)) ;


extern void * GC_memalign(size_t , size_t )
                        __attribute__((__malloc__)) ;
extern int GC_posix_memalign(void ** , size_t ,
                        size_t );







extern void GC_free(void *);
# 410 "/usr/local/include/gc/gc.h" 3
extern void GC_change_stubborn(void *);
extern void GC_end_stubborn_change(void *);
# 424 "/usr/local/include/gc/gc.h" 3
extern void * GC_base(void * );




extern size_t GC_size(const void * );
# 439 "/usr/local/include/gc/gc.h" 3
extern void * GC_realloc(void * ,
                                 size_t )
                                                                  ;



extern int GC_expand_hp(size_t );






extern void GC_set_max_heap_size(GC_word );
# 461 "/usr/local/include/gc/gc.h" 3
extern void GC_exclude_static_roots(void * ,
                                        void * );


extern void GC_clear_roots(void);




extern void GC_add_roots(void * ,
                                 void * );



extern void GC_remove_roots(void * ,
                                    void * );
# 490 "/usr/local/include/gc/gc.h" 3
extern void GC_register_displacement(size_t );



extern void GC_debug_register_displacement(size_t );


extern void GC_gcollect(void);






extern void GC_gcollect_and_unmap(void);
# 519 "/usr/local/include/gc/gc.h" 3
typedef int ( * GC_stop_func)(void);
extern int GC_try_to_collect(GC_stop_func );





extern void GC_set_stop_func(GC_stop_func );
extern GC_stop_func GC_get_stop_func(void);
# 541 "/usr/local/include/gc/gc.h" 3
extern size_t GC_get_heap_size(void);




extern size_t GC_get_free_bytes(void);





extern size_t GC_get_unmapped_bytes(void);




extern size_t GC_get_bytes_since_gc(void);




extern size_t GC_get_total_bytes(void);
# 571 "/usr/local/include/gc/gc.h" 3
extern void GC_get_heap_usage_safe(GC_word * ,
                                           GC_word * ,
                                           GC_word * ,
                                           GC_word * ,
                                           GC_word * );



extern void GC_disable(void);



extern int GC_is_disabled(void);




extern void GC_enable(void);
# 601 "/usr/local/include/gc/gc.h" 3
extern void GC_enable_incremental(void);
# 611 "/usr/local/include/gc/gc.h" 3
extern int GC_incremental_protection_needs(void);
# 620 "/usr/local/include/gc/gc.h" 3
extern int GC_collect_a_little(void);
# 636 "/usr/local/include/gc/gc.h" 3
extern void * GC_malloc_ignore_off_page(size_t )
                        __attribute__((__malloc__)) ;
extern void * GC_malloc_atomic_ignore_off_page(size_t )
                        __attribute__((__malloc__)) ;
# 651 "/usr/local/include/gc/gc.h" 3
extern void * GC_malloc_atomic_uncollectable(
                                                size_t )
                        __attribute__((__malloc__)) ;
extern void * GC_debug_malloc_atomic_uncollectable(size_t,
                                                           const char * s, int i)
                        __attribute__((__malloc__)) ;



extern void * GC_debug_malloc(size_t ,
                                      const char * s, int i)
                        __attribute__((__malloc__)) ;
extern void * GC_debug_malloc_atomic(size_t ,
                                             const char * s, int i)
                        __attribute__((__malloc__)) ;
extern char * GC_debug_strdup(const char *,
                                      const char * s, int i) __attribute__((__malloc__));
extern char * GC_debug_strndup(const char *, size_t,
                                       const char * s, int i) __attribute__((__malloc__));
extern void * GC_debug_malloc_uncollectable(
                        size_t , const char * s, int i)
                        __attribute__((__malloc__)) ;
extern void * GC_debug_malloc_stubborn(size_t ,
                                               const char * s, int i)
                        __attribute__((__malloc__)) ;
extern void * GC_debug_malloc_ignore_off_page(
                        size_t , const char * s, int i)
                        __attribute__((__malloc__)) ;
extern void * GC_debug_malloc_atomic_ignore_off_page(
                        size_t , const char * s, int i)
                        __attribute__((__malloc__)) ;
extern void GC_debug_free(void *);
extern void * GC_debug_realloc(void * ,
                        size_t , const char * s, int i)
                                                                  ;
extern void GC_debug_change_stubborn(void *);
extern void GC_debug_end_stubborn_change(void *);
# 701 "/usr/local/include/gc/gc.h" 3
extern void * GC_debug_malloc_replacement(size_t )
                        __attribute__((__malloc__)) ;
extern void * GC_debug_realloc_replacement(void * ,
                                                   size_t )
                                                                  ;
# 802 "/usr/local/include/gc/gc.h" 3
typedef void ( * GC_finalization_proc)(void * ,
                                                  void * );

extern void GC_register_finalizer(void * ,
                        GC_finalization_proc , void * ,
                        GC_finalization_proc * , void ** );
extern void GC_debug_register_finalizer(void * ,
                        GC_finalization_proc , void * ,
                        GC_finalization_proc * , void ** );
# 859 "/usr/local/include/gc/gc.h" 3
extern void GC_register_finalizer_ignore_self(void * ,
                        GC_finalization_proc , void * ,
                        GC_finalization_proc * , void ** );
extern void GC_debug_register_finalizer_ignore_self(void * ,
                        GC_finalization_proc , void * ,
                        GC_finalization_proc * , void ** );





extern void GC_register_finalizer_no_order(void * ,
                        GC_finalization_proc , void * ,
                        GC_finalization_proc * , void ** );
extern void GC_debug_register_finalizer_no_order(void * ,
                        GC_finalization_proc , void * ,
                        GC_finalization_proc * , void ** );
# 893 "/usr/local/include/gc/gc.h" 3
extern void GC_register_finalizer_unreachable(void * ,
                        GC_finalization_proc , void * ,
                        GC_finalization_proc * , void ** );
extern void GC_debug_register_finalizer_unreachable(void * ,
                        GC_finalization_proc , void * ,
                        GC_finalization_proc * , void ** );
# 909 "/usr/local/include/gc/gc.h" 3
extern int GC_register_disappearing_link(void ** );
# 930 "/usr/local/include/gc/gc.h" 3
extern int GC_general_register_disappearing_link(void ** ,
                                                         void * );
# 963 "/usr/local/include/gc/gc.h" 3
extern int GC_unregister_disappearing_link(void ** );





extern int GC_should_invoke_finalizers(void);

extern int GC_invoke_finalizers(void);
# 999 "/usr/local/include/gc/gc.h" 3
typedef void ( * GC_warn_proc)(char * ,
                                          GC_word );
extern void GC_set_warn_proc(GC_warn_proc );

extern GC_warn_proc GC_get_warn_proc(void);



extern void GC_ignore_warn_proc(char *, GC_word);
# 1017 "/usr/local/include/gc/gc.h" 3
typedef GC_word GC_hidden_pointer;
# 1031 "/usr/local/include/gc/gc.h" 3
typedef void * ( * GC_fn_type)(void * );
extern void * GC_call_with_alloc_lock(GC_fn_type ,
                                                void * );
# 1047 "/usr/local/include/gc/gc.h" 3
struct GC_stack_base {
  void * mem_base;



};

typedef void * ( * GC_stack_base_func)(
                struct GC_stack_base * , void * );





extern void * GC_call_with_stack_base(GC_stack_base_func ,
                                              void * );
# 1138 "/usr/local/include/gc/gc.h" 3
extern void * GC_do_blocking(GC_fn_type ,
                                     void * );
# 1150 "/usr/local/include/gc/gc.h" 3
extern void * GC_call_with_gc_active(GC_fn_type ,
                                             void * );
# 1160 "/usr/local/include/gc/gc.h" 3
extern int GC_get_stack_base(struct GC_stack_base *);
# 1171 "/usr/local/include/gc/gc.h" 3
extern void * GC_same_obj(void * , void * );





extern void * GC_pre_incr(void **, ptrdiff_t );
extern void * GC_post_incr(void **, ptrdiff_t );
# 1188 "/usr/local/include/gc/gc.h" 3
extern void * GC_is_visible(void * );






extern void * GC_is_valid_displacement(void * );





extern void GC_dump(void);
# 1241 "/usr/local/include/gc/gc.h" 3
extern void ( * GC_same_obj_print_proc)(void * ,
                                                   void * );
extern void ( * GC_is_valid_displacement_print_proc)(void *);
extern void ( * GC_is_visible_print_proc)(void *);
# 1255 "/usr/local/include/gc/gc.h" 3
extern void * GC_malloc_many(size_t );
# 1267 "/usr/local/include/gc/gc.h" 3
typedef int ( * GC_has_static_roots_func)(
                                        const char * ,
                                        void * ,
                                        size_t );





extern void GC_register_has_static_roots_callback(
                                        GC_has_static_roots_func);
# 1378 "/usr/local/include/gc/gc.h" 3
extern void GC_set_force_unmap_on_gcollect(int);
extern int GC_get_force_unmap_on_gcollect(void);
# 1498 "/usr/local/include/gc/gc.h" 3
extern void GC_win32_free_heap(void);
# 5 "./pegvm.h" 2






typedef struct ParserContext {
    long *stack_pointer;
    PegVMInstruction **call_stack_pointer;
    size_t failure_pos;
    NODE *current_node;
    InputSource *current_source;
    PegVMInstruction *instructions;
    long *stack_pointer_base;
    PegVMInstruction **call_stack_pointer_base;
    char last_error[256];
} ParserContext;

void ParserContext_Init(ParserContext *context);
void ParserContext_Dispose(ParserContext *context);
int ParserContext_LoadSyntax(ParserContext *context, const char *file);
int ParserContext_Execute(ParserContext *context, PegVMInstruction *inst, InputSource *input);
int ParserContext_ParseFiles(ParserContext *context, int argc, char **argv);
# 73 "./pegvm.h"
enum pegvm_opcode {

    PEGVM_OP_EXIT, PEGVM_OP_JUMP, PEGVM_OP_CALL, PEGVM_OP_RET, PEGVM_OP_IFSUCC, PEGVM_OP_IFFAIL, PEGVM_OP_NOP, PEGVM_OP_Failure, PEGVM_OP_MatchText, PEGVM_OP_MatchByteChar, PEGVM_OP_MatchCharset, PEGVM_OP_MatchAnyChar, PEGVM_OP_MatchTextNot, PEGVM_OP_MatchByteCharNot, PEGVM_OP_MatchCharsetNot, PEGVM_OP_MatchOptionalText, PEGVM_OP_MatchOptionalByteChar, PEGVM_OP_MatchOptionalCharset, PEGVM_OP_RememberPosition, PEGVM_OP_CommitPosition, PEGVM_OP_BacktrackPosition, PEGVM_OP_RememberSequencePosition, PEGVM_OP_CommitSequencePosition, PEGVM_OP_BackTrackSequencePosition, PEGVM_OP_RememberFailurePosition, PEGVM_OP_UpdateFailurePosition, PEGVM_OP_ForgetFailurePosition, PEGVM_OP_StoreObject, PEGVM_OP_DropStoredObject, PEGVM_OP_RestoreObject, PEGVM_OP_RestoreObjectIfFailure, PEGVM_OP_RestoreNegativeObject, PEGVM_OP_ConnectObject, PEGVM_OP_DisableTransCapture, PEGVM_OP_EnableTransCapture, PEGVM_OP_NewObject, PEGVM_OP_LeftJoinObject, PEGVM_OP_CommitObject, PEGVM_OP_RefreshStoredObject, PEGVM_OP_Tagging, PEGVM_OP_Value, PEGVM_OP_Indent,

    PEGVM_OP_ERROR = -1
};
# 3 "loader.c" 2
# 1 "./karray.h" 1
# 26 "./karray.h"
# 1 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdbool.h" 1 3 4
# 27 "./karray.h" 2

# 1 "/usr/include/assert.h" 1 3 4
# 76 "/usr/include/assert.h" 3 4
void __assert_rtn(const char *, const char *, int, const char *) __attribute__((noreturn));
# 29 "./karray.h" 2
# 1 "/usr/include/string.h" 1 3 4
# 70 "/usr/include/string.h" 3 4
void *memchr(const void *, int, size_t);
int memcmp(const void *, const void *, size_t);
void *memcpy(void *, const void *, size_t);
void *memmove(void *, const void *, size_t);
void *memset(void *, int, size_t);
char *strcat(char *, const char *);
char *strchr(const char *, int);
int strcmp(const char *, const char *);
int strcoll(const char *, const char *);
char *strcpy(char *, const char *);
size_t strcspn(const char *, const char *);
char *strerror(int) __asm("_" "strerror") ;
size_t strlen(const char *);
char *strncat(char *, const char *, size_t);
int strncmp(const char *, const char *, size_t);
char *strncpy(char *, const char *, size_t);
char *strpbrk(const char *, const char *);
char *strrchr(const char *, int);
size_t strspn(const char *, const char *);
char *strstr(const char *, const char *);
char *strtok(char *, const char *);
size_t strxfrm(char *, const char *, size_t);
# 104 "/usr/include/string.h" 3 4
char *strtok_r(char *, const char *, char **);
# 116 "/usr/include/string.h" 3 4
int strerror_r(int, char *, size_t);
char *strdup(const char *);
void *memccpy(void *, const void *, int, size_t);
# 130 "/usr/include/string.h" 3 4
char *stpcpy(char *, const char *);
char *stpncpy(char *, const char *, size_t) __attribute__((availability(macosx,introduced=10.7)));
char *strndup(const char *, size_t) __attribute__((availability(macosx,introduced=10.7)));
size_t strnlen(const char *, size_t) __attribute__((availability(macosx,introduced=10.7)));
char *strsignal(int sig);







# 1 "/usr/include/sys/_types/_rsize_t.h" 1 3 4
# 142 "/usr/include/string.h" 2 3 4
# 1 "/usr/include/sys/_types/_errno_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_errno_t.h" 3 4
typedef int errno_t;
# 143 "/usr/include/string.h" 2 3 4


errno_t memset_s(void *, rsize_t, int, rsize_t) __attribute__((availability(macosx,introduced=10.9)));
# 155 "/usr/include/string.h" 3 4
void *memmem(const void *, size_t, const void *, size_t) __attribute__((availability(macosx,introduced=10.7)));
void memset_pattern4(void *, const void *, size_t) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern8(void *, const void *, size_t) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern16(void *, const void *, size_t) __attribute__((availability(macosx,introduced=10.5)));

char *strcasestr(const char *, const char *);
char *strnstr(const char *, const char *, size_t);
size_t strlcat(char *, const char *, size_t);
size_t strlcpy(char *, const char *, size_t);
void strmode(int, char *);
char *strsep(char **, const char *);


void swab(const void * restrict, void * restrict, ssize_t);








# 1 "/usr/include/strings.h" 1 3 4
# 70 "/usr/include/strings.h" 3 4
int bcmp(const void *, const void *, size_t) ;
void bcopy(const void *, void *, size_t) ;
void bzero(void *, size_t) ;
char *index(const char *, int) ;
char *rindex(const char *, int) ;


int ffs(int);
int strcasecmp(const char *, const char *);
int strncasecmp(const char *, const char *, size_t);





int ffsl(long) __attribute__((availability(macosx,introduced=10.5)));
int ffsll(long long) __attribute__((availability(macosx,introduced=10.9)));
int fls(int) __attribute__((availability(macosx,introduced=10.5)));
int flsl(long) __attribute__((availability(macosx,introduced=10.5)));
int flsll(long long) __attribute__((availability(macosx,introduced=10.9)));



# 1 "/usr/include/string.h" 1 3 4
# 93 "/usr/include/strings.h" 2 3 4
# 177 "/usr/include/string.h" 2 3 4
# 186 "/usr/include/string.h" 3 4
# 1 "/usr/include/secure/_string.h" 1 3 4
# 187 "/usr/include/string.h" 2 3 4
# 30 "./karray.h" 2
# 4 "loader.c" 2
# 1 "/usr/include/assert.h" 1 3 4
# 76 "/usr/include/assert.h" 3 4
void __assert_rtn(const char *, const char *, int, const char *) __attribute__((noreturn));
# 5 "loader.c" 2

struct ARRAY_uint8_t_t { uint8_t *list; unsigned size; unsigned capacity;};
struct ARRAY_uint8_t_t;typedef struct ARRAY_uint8_t_t ARRAY_uint8_t_t;
static inline uint8_t ARRAY_uint8_t_get(ARRAY_uint8_t_t *a, int idx) { return (a->list[idx]);}static inline void ARRAY_uint8_t_set(ARRAY_uint8_t_t *a, int idx, uint8_t v) { a->list[idx] = v;}static inline ARRAY_uint8_t_t *ARRAY_init_uint8_t (ARRAY_uint8_t_t *a, size_t initsize) { a->list = (initsize) ? (uint8_t *) malloc(sizeof(uint8_t)*initsize) : ((void*)0); a->capacity = initsize; a->size = 0; return (a);}static inline void ARRAY_uint8_t_ensureSize(ARRAY_uint8_t_t *a, size_t size) { if(a->size + size <= a->capacity) { return; } while(a->size + size > a->capacity) { a->capacity = 1 << ((unsigned)((sizeof(void *) * 8) - __builtin_clzl(a->capacity * 2 + 1 - 1))); } a->list = (uint8_t *)realloc(a->list, sizeof(uint8_t) * a->capacity);}static inline void ARRAY_uint8_t_dispose(ARRAY_uint8_t_t *a) { free(a->list); a->size = 0; a->capacity = 0; a->list = 0;}static inline void ARRAY_uint8_t_add(ARRAY_uint8_t_t *a, uint8_t v) { ARRAY_uint8_t_ensureSize(a, 1); ARRAY_uint8_t_set(a, a->size++, v);}static inline void ARRAY_uint8_t_RemoveAt(ARRAY_uint8_t_t *a, int idx) { __builtin___memmove_chk (a->list+idx, a->list+idx+1, sizeof(uint8_t) * (a->size - idx - 1), __builtin_object_size (a->list+idx, 0)); a->size -= 1;};
struct ARRAY_Instruction_t { Instruction *list; unsigned size; unsigned capacity;};
struct ARRAY_Instruction_t;typedef struct ARRAY_Instruction_t ARRAY_Instruction_t;static inline Instruction *ARRAY_Instruction_get(ARRAY_Instruction_t *a, int idx) { return (a->list+idx);}static inline void ARRAY_Instruction_set(ARRAY_Instruction_t *a, int idx, Instruction *v) { __builtin___memcpy_chk (a->list+idx, v, sizeof(Instruction), __builtin_object_size (a->list+idx, 0));}static inline ARRAY_Instruction_t *ARRAY_init_Instruction (ARRAY_Instruction_t *a, size_t initsize) { a->list = (initsize) ? (Instruction *) malloc(sizeof(Instruction)*initsize) : ((void*)0); a->capacity = initsize; a->size = 0; return (a);}static inline void ARRAY_Instruction_ensureSize(ARRAY_Instruction_t *a, size_t size) { if(a->size + size <= a->capacity) { return; } while(a->size + size > a->capacity) { a->capacity = 1 << ((unsigned)((sizeof(void *) * 8) - __builtin_clzl(a->capacity * 2 + 1 - 1))); } a->list = (Instruction *)realloc(a->list, sizeof(Instruction) * a->capacity);}static inline void ARRAY_Instruction_dispose(ARRAY_Instruction_t *a) { free(a->list); a->size = 0; a->capacity = 0; a->list = 0;}static inline void ARRAY_Instruction_add(ARRAY_Instruction_t *a, Instruction * v) { ARRAY_Instruction_ensureSize(a, 1); ARRAY_Instruction_set(a, a->size++, v);}static inline void ARRAY_Instruction_RemoveAt(ARRAY_Instruction_t *a, int idx) { __builtin___memmove_chk (a->list+idx, a->list+idx+1, sizeof(Instruction) * (a->size - idx - 1), __builtin_object_size (a->list+idx, 0)); a->size -= 1;};





typedef struct ByteCodeInfo {
    uint32_t version;
    uint32_t pathlen;
    uint8_t filepath[4096];
    int64_t bytecode_length;
} ByteCodeInfo;

static const char *get_opname(uint8_t opcode)
{
    switch (opcode) {

        case PEGVM_OP_EXIT : return "" "EXIT"; case PEGVM_OP_JUMP : return "" "JUMP"; case PEGVM_OP_CALL : return "" "CALL"; case PEGVM_OP_RET : return "" "RET"; case PEGVM_OP_IFSUCC : return "" "IFSUCC"; case PEGVM_OP_IFFAIL : return "" "IFFAIL"; case PEGVM_OP_NOP : return "" "NOP"; case PEGVM_OP_Failure : return "" "Failure"; case PEGVM_OP_MatchText : return "" "MatchText"; case PEGVM_OP_MatchByteChar : return "" "MatchByteChar"; case PEGVM_OP_MatchCharset : return "" "MatchCharset"; case PEGVM_OP_MatchAnyChar : return "" "MatchAnyChar"; case PEGVM_OP_MatchTextNot : return "" "MatchTextNot"; case PEGVM_OP_MatchByteCharNot : return "" "MatchByteCharNot"; case PEGVM_OP_MatchCharsetNot : return "" "MatchCharsetNot"; case PEGVM_OP_MatchOptionalText : return "" "MatchOptionalText"; case PEGVM_OP_MatchOptionalByteChar : return "" "MatchOptionalByteChar"; case PEGVM_OP_MatchOptionalCharset : return "" "MatchOptionalCharset"; case PEGVM_OP_RememberPosition : return "" "RememberPosition"; case PEGVM_OP_CommitPosition : return "" "CommitPosition"; case PEGVM_OP_BacktrackPosition : return "" "BacktrackPosition"; case PEGVM_OP_RememberSequencePosition : return "" "RememberSequencePosition"; case PEGVM_OP_CommitSequencePosition : return "" "CommitSequencePosition"; case PEGVM_OP_BackTrackSequencePosition : return "" "BackTrackSequencePosition"; case PEGVM_OP_RememberFailurePosition : return "" "RememberFailurePosition"; case PEGVM_OP_UpdateFailurePosition : return "" "UpdateFailurePosition"; case PEGVM_OP_ForgetFailurePosition : return "" "ForgetFailurePosition"; case PEGVM_OP_StoreObject : return "" "StoreObject"; case PEGVM_OP_DropStoredObject : return "" "DropStoredObject"; case PEGVM_OP_RestoreObject : return "" "RestoreObject"; case PEGVM_OP_RestoreObjectIfFailure : return "" "RestoreObjectIfFailure"; case PEGVM_OP_RestoreNegativeObject : return "" "RestoreNegativeObject"; case PEGVM_OP_ConnectObject : return "" "ConnectObject"; case PEGVM_OP_DisableTransCapture : return "" "DisableTransCapture"; case PEGVM_OP_EnableTransCapture : return "" "EnableTransCapture"; case PEGVM_OP_NewObject : return "" "NewObject"; case PEGVM_OP_LeftJoinObject : return "" "LeftJoinObject"; case PEGVM_OP_CommitObject : return "" "CommitObject"; case PEGVM_OP_RefreshStoredObject : return "" "RefreshStoredObject"; case PEGVM_OP_Tagging : return "" "Tagging"; case PEGVM_OP_Value : return "" "Value"; case PEGVM_OP_Indent : return "" "Indent";;
        default:
        (__builtin_expect(!(0 && "UNREACHABLE"), 0) ? __assert_rtn(__func__, "loader.c", 29, "0 && \"UNREACHABLE\"") : (void)0);
        break;

    }
    return "";
}

static uint8_t *pegvm_string_copy(ARRAY_uint8_t_t *src)
{
    uint8_t *str;
    if (((*src).list+((*src).size-1)) != 0) {
        ARRAY_uint8_t_add(src, 0);
    }
    str = (uint8_t *) malloc(((*src).size));
    __builtin___memcpy_chk (str, ((*src).list), ((*src).size), __builtin_object_size (str, 0));
    return str;
}

static uint8_t get_next_char(ARRAY_uint8_t_t *bdata, size_t *pos)
{
    uint8_t c = ARRAY_uint8_t_get(bdata, *pos);
    if (c) {
        if (c == '\\' &&
                *pos + 1< ((*bdata).size) &&
                (c = ARRAY_uint8_t_get(bdata, *pos + 1))) {

            *pos = *pos + 1;
            switch (c) {
            case 'f': c = '\f'; break;
            case 'n': c = '\n'; break;
            case 'r': c = '\r'; break;
            case 't': c = '\t'; break;
            case 'v': c = '\013'; break;
            default:
                       (__builtin_expect(!(0 && "FIXME"), 0) ? __assert_rtn(__func__, "loader.c", 63, "0 && \"FIXME\"") : (void)0);
            }
        }
    }
    return c;
}

static uint8_t *pegvm_make_charset(ARRAY_uint8_t_t *bdata)
{
    size_t pos = 0;
    int flip_bit = 0;

    uint8_t *bits = malloc(32);
    uint8_t c = 0, start;
    if (((*bdata).size) && ARRAY_uint8_t_get(bdata, 0) == '^') {
        __builtin___memset_chk (bits, 255, 32, __builtin_object_size (bits, 0));
        flip_bit = 1;
        pos++;
    }
    else {
        __builtin___memset_chk (bits, 0, 32, __builtin_object_size (bits, 0));
    }
    for (pos = 0; pos < ((*bdata).size); pos++) {
        if (ARRAY_uint8_t_get(bdata, pos) == '-' &&
                pos < ((*bdata).size) + 1) {
            uint8_t last;
            c = start;
            pos++;
            for (last = get_next_char(bdata, &pos); c <= last; c++) {
                if (flip_bit) {
                    bits[c / 8] &= ~(1 << (c % 8));
                }
                else {
                    bits[c / 8] |= 1 << (c % 8);
                }
            }
        }
        else {
            c = get_next_char(bdata, &pos);
            if (flip_bit) {
                bits[c / 8] &= ~(1 << (c % 8));
            }
            else {
                bits[c / 8] |= 1 << (c % 8);
            }
            start = c;
        }
    }
    return bits;
}

static char *pegvm_dump_charset(uint8_t *bits)
{
    static char charset[256];
    size_t i, pos = 0;
    __builtin___memset_chk (charset, 0, 256, __builtin_object_size (charset, 0));
    for (i = 0; i < 256; i++) {
        if ((bits[i / 8] & (1 << (i % 8))) == (1 << (i % 8))) {
            charset[pos++] = (char) i;
        }
    }
    return charset;
}


# 1 "./loader.generated.c" 1





static Instruction *Emit_EXIT(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_EXIT(Instruction *self)
{
    fprintf(__stderrp, "[%p] EXIT ", self);
    fprintf(__stderrp, "\n");
}
static Instruction *Emit_JUMP(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    self->ndata = ndata;
    return self;
}
static void Dump_JUMP(Instruction *self)
{
    fprintf(__stderrp, "[%p] JUMP ", self);
    fprintf(__stderrp, "target=%p", self->dst);
    fprintf(__stderrp, "\n");
}
static Instruction *Emit_CALL(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    self->ndata = ndata;
    return self;
}
static void Dump_CALL(Instruction *self)
{
    fprintf(__stderrp, "[%p] CALL ", self);
    fprintf(__stderrp, "target=%p", self->dst);
    fprintf(__stderrp, "\n");
}
static Instruction *Emit_RET(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    self->ndata = ndata;
    return self;
}
static void Dump_RET(Instruction *self)
{
    fprintf(__stderrp, "[%p] RET ", self);
    fprintf(__stderrp, "target=%p", self->dst);
    fprintf(__stderrp, "\n");
}
static Instruction *Emit_IFSUCC(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    self->ndata = ndata;
    return self;
}
static void Dump_IFSUCC(Instruction *self)
{
    fprintf(__stderrp, "[%p] IFSUCC ", self);
    fprintf(__stderrp, "target=%p", self->dst);
    fprintf(__stderrp, "\n");
}
static Instruction *Emit_IFFAIL(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    self->ndata = ndata;
    return self;
}
static void Dump_IFFAIL(Instruction *self)
{
    fprintf(__stderrp, "[%p] IFFAIL ", self);
    fprintf(__stderrp, "target=%p", self->dst);
    fprintf(__stderrp, "\n");
}
static Instruction *Emit_NOP(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_NOP(Instruction *self)
{
    fprintf(__stderrp, "[%p] NOP ", self);
    fprintf(__stderrp, "\n");
}
static Instruction *Emit_Failure(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_Failure(Instruction *self)
{
    fprintf(__stderrp, "[%p] Failure ", self);
    fprintf(__stderrp, "\n");
}
static Instruction *Emit_MatchText(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    self->ndata = ndata;
    return self;
}
static void Dump_MatchText(Instruction *self)
{
    fprintf(__stderrp, "[%p] MatchText ", self);
    fprintf(__stderrp, "char='%c'", (char)self->ndata);
    fprintf(__stderrp, "\n");
}
static Instruction *Emit_MatchByteChar(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    self->bdata = pegvm_string_copy(bdata);
    return self;
}
static void Dump_MatchByteChar(Instruction *self)
{
    fprintf(__stderrp, "[%p] MatchByteChar ", self);
    fprintf(__stderrp, "text='%s'", (char *)self->bdata);
    fprintf(__stderrp, "\n");
}
static Instruction *Emit_MatchCharset(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    self->bdata = pegvm_make_charset(bdata);
    return self;
}
static void Dump_MatchCharset(Instruction *self)
{
    fprintf(__stderrp, "[%p] MatchCharset ", self);
    fprintf(__stderrp, "charset='%s'", pegvm_dump_charset(self->bdata));
    fprintf(__stderrp, "\n");
}
static Instruction *Emit_MatchAnyChar(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_MatchAnyChar(Instruction *self)
{
    fprintf(__stderrp, "[%p] MatchAnyChar ", self);
    fprintf(__stderrp, "\n");
}
static Instruction *Emit_MatchTextNot(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_MatchTextNot(Instruction *self)
{
    fprintf(__stderrp, "[%p] MatchTextNot ", self);
    fprintf(__stderrp, "\n");
}
static Instruction *Emit_MatchByteCharNot(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_MatchByteCharNot(Instruction *self)
{
    fprintf(__stderrp, "[%p] MatchByteCharNot ", self);
    fprintf(__stderrp, "\n");
}
static Instruction *Emit_MatchCharsetNot(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_MatchCharsetNot(Instruction *self)
{
    fprintf(__stderrp, "[%p] MatchCharsetNot ", self);
    fprintf(__stderrp, "\n");
}
static Instruction *Emit_MatchOptionalText(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_MatchOptionalText(Instruction *self)
{
    fprintf(__stderrp, "[%p] MatchOptionalText ", self);
    fprintf(__stderrp, "\n");
}
static Instruction *Emit_MatchOptionalByteChar(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_MatchOptionalByteChar(Instruction *self)
{
    fprintf(__stderrp, "[%p] MatchOptionalByteChar ", self);
    fprintf(__stderrp, "\n");
}
static Instruction *Emit_MatchOptionalCharset(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_MatchOptionalCharset(Instruction *self)
{
    fprintf(__stderrp, "[%p] MatchOptionalCharset ", self);
    fprintf(__stderrp, "\n");
}
static Instruction *Emit_RememberPosition(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    self->ndata = ndata;
    return self;
}
static void Dump_RememberPosition(Instruction *self)
{
    fprintf(__stderrp, "[%p] RememberPosition ", self);
    fprintf(__stderrp, "\n");
}
static Instruction *Emit_CommitPosition(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_CommitPosition(Instruction *self)
{
    fprintf(__stderrp, "[%p] CommitPosition ", self);
    fprintf(__stderrp, "\n");
}
static Instruction *Emit_BacktrackPosition(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_BacktrackPosition(Instruction *self)
{
    fprintf(__stderrp, "[%p] BacktrackPosition ", self);
    fprintf(__stderrp, "\n");
}
static Instruction *Emit_RememberSequencePosition(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_RememberSequencePosition(Instruction *self)
{
    fprintf(__stderrp, "[%p] RememberSequencePosition ", self);
    fprintf(__stderrp, "\n");
}
static Instruction *Emit_CommitSequencePosition(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_CommitSequencePosition(Instruction *self)
{
    fprintf(__stderrp, "[%p] CommitSequencePosition ", self);
    fprintf(__stderrp, "\n");
}
static Instruction *Emit_BackTrackSequencePosition(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_BackTrackSequencePosition(Instruction *self)
{
    fprintf(__stderrp, "[%p] BackTrackSequencePosition ", self);
    fprintf(__stderrp, "\n");
}
static Instruction *Emit_RememberFailurePosition(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_RememberFailurePosition(Instruction *self)
{
    fprintf(__stderrp, "[%p] RememberFailurePosition ", self);
    fprintf(__stderrp, "\n");
}
static Instruction *Emit_UpdateFailurePosition(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_UpdateFailurePosition(Instruction *self)
{
    fprintf(__stderrp, "[%p] UpdateFailurePosition ", self);
    fprintf(__stderrp, "\n");
}
static Instruction *Emit_ForgetFailurePosition(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_ForgetFailurePosition(Instruction *self)
{
    fprintf(__stderrp, "[%p] ForgetFailurePosition ", self);
    fprintf(__stderrp, "\n");
}
static Instruction *Emit_StoreObject(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_StoreObject(Instruction *self)
{
    fprintf(__stderrp, "[%p] StoreObject ", self);
    fprintf(__stderrp, "\n");
}
static Instruction *Emit_DropStoredObject(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_DropStoredObject(Instruction *self)
{
    fprintf(__stderrp, "[%p] DropStoredObject ", self);
    fprintf(__stderrp, "\n");
}
static Instruction *Emit_RestoreObject(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_RestoreObject(Instruction *self)
{
    fprintf(__stderrp, "[%p] RestoreObject ", self);
    fprintf(__stderrp, "\n");
}
static Instruction *Emit_RestoreObjectIfFailure(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_RestoreObjectIfFailure(Instruction *self)
{
    fprintf(__stderrp, "[%p] RestoreObjectIfFailure ", self);
    fprintf(__stderrp, "\n");
}
static Instruction *Emit_RestoreNegativeObject(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_RestoreNegativeObject(Instruction *self)
{
    fprintf(__stderrp, "[%p] RestoreNegativeObject ", self);
    fprintf(__stderrp, "\n");
}
static Instruction *Emit_ConnectObject(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    self->bdata = pegvm_string_copy(bdata);
    return self;
}
static void Dump_ConnectObject(Instruction *self)
{
    fprintf(__stderrp, "[%p] ConnectObject ", self);
    fprintf(__stderrp, "text='%s'", (char *)self->bdata);
    fprintf(__stderrp, "\n");
}
static Instruction *Emit_DisableTransCapture(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_DisableTransCapture(Instruction *self)
{
    fprintf(__stderrp, "[%p] DisableTransCapture ", self);
    fprintf(__stderrp, "\n");
}
static Instruction *Emit_EnableTransCapture(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_EnableTransCapture(Instruction *self)
{
    fprintf(__stderrp, "[%p] EnableTransCapture ", self);
    fprintf(__stderrp, "\n");
}
static Instruction *Emit_NewObject(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_NewObject(Instruction *self)
{
    fprintf(__stderrp, "[%p] NewObject ", self);
    fprintf(__stderrp, "\n");
}
static Instruction *Emit_LeftJoinObject(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_LeftJoinObject(Instruction *self)
{
    fprintf(__stderrp, "[%p] LeftJoinObject ", self);
    fprintf(__stderrp, "\n");
}
static Instruction *Emit_CommitObject(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_CommitObject(Instruction *self)
{
    fprintf(__stderrp, "[%p] CommitObject ", self);
    fprintf(__stderrp, "\n");
}
static Instruction *Emit_RefreshStoredObject(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_RefreshStoredObject(Instruction *self)
{
    fprintf(__stderrp, "[%p] RefreshStoredObject ", self);
    fprintf(__stderrp, "\n");
}
static Instruction *Emit_Tagging(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    self->bdata = pegvm_string_copy(bdata);
    return self;
}
static void Dump_Tagging(Instruction *self)
{
    fprintf(__stderrp, "[%p] Tagging ", self);
    fprintf(__stderrp, "text='%s'", (char *)self->bdata);
    fprintf(__stderrp, "\n");
}
static Instruction *Emit_Value(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_Value(Instruction *self)
{
    fprintf(__stderrp, "[%p] Value ", self);
    fprintf(__stderrp, "\n");
}
static Instruction *Emit_Indent(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_Indent(Instruction *self)
{
    fprintf(__stderrp, "[%p] Indent ", self);
    fprintf(__stderrp, "\n");
}
# 128 "loader.c" 2

typedef Instruction *(*inst_load_t)(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata);
static inst_load_t f_inst[] = {

    Emit_EXIT, Emit_JUMP, Emit_CALL, Emit_RET, Emit_IFSUCC, Emit_IFFAIL, Emit_NOP, Emit_Failure, Emit_MatchText, Emit_MatchByteChar, Emit_MatchCharset, Emit_MatchAnyChar, Emit_MatchTextNot, Emit_MatchByteCharNot, Emit_MatchCharsetNot, Emit_MatchOptionalText, Emit_MatchOptionalByteChar, Emit_MatchOptionalCharset, Emit_RememberPosition, Emit_CommitPosition, Emit_BacktrackPosition, Emit_RememberSequencePosition, Emit_CommitSequencePosition, Emit_BackTrackSequencePosition, Emit_RememberFailurePosition, Emit_UpdateFailurePosition, Emit_ForgetFailurePosition, Emit_StoreObject, Emit_DropStoredObject, Emit_RestoreObject, Emit_RestoreObjectIfFailure, Emit_RestoreNegativeObject, Emit_ConnectObject, Emit_DisableTransCapture, Emit_EnableTransCapture, Emit_NewObject, Emit_LeftJoinObject, Emit_CommitObject, Emit_RefreshStoredObject, Emit_Tagging, Emit_Value, Emit_Indent,

};

typedef void (*inst_dump_t)(Instruction *self);
static inst_dump_t dump_inst[] = {

    Dump_EXIT, Dump_JUMP, Dump_CALL, Dump_RET, Dump_IFSUCC, Dump_IFFAIL, Dump_NOP, Dump_Failure, Dump_MatchText, Dump_MatchByteChar, Dump_MatchCharset, Dump_MatchAnyChar, Dump_MatchTextNot, Dump_MatchByteCharNot, Dump_MatchCharsetNot, Dump_MatchOptionalText, Dump_MatchOptionalByteChar, Dump_MatchOptionalCharset, Dump_RememberPosition, Dump_CommitPosition, Dump_BacktrackPosition, Dump_RememberSequencePosition, Dump_CommitSequencePosition, Dump_BackTrackSequencePosition, Dump_RememberFailurePosition, Dump_UpdateFailurePosition, Dump_ForgetFailurePosition, Dump_StoreObject, Dump_DropStoredObject, Dump_RestoreObject, Dump_RestoreObjectIfFailure, Dump_RestoreNegativeObject, Dump_ConnectObject, Dump_DisableTransCapture, Dump_EnableTransCapture, Dump_NewObject, Dump_LeftJoinObject, Dump_CommitObject, Dump_RefreshStoredObject, Dump_Tagging, Dump_Value, Dump_Indent,

};

static void PegVMInstruction_relocate(Instruction *code, ARRAY_Instruction_t *insts)
{
    Instruction *x, *e;
    for(x = ((*insts).list+0), e = ((*insts).list+((*insts).size)); x != e; ++x) {
        if (PEGVM_OP_EXIT < x->opcode && x->opcode <= PEGVM_OP_IFFAIL) {
            uint32_t dst = x->ndata;

            x->dst = code + dst + 1;
        }
    }
    __builtin___memcpy_chk (code, ((*insts).list), sizeof(Instruction) * ((*insts).size), __builtin_object_size (code, 0));
}

void PegVMInstruction_dump(PegVMInstruction *code, size_t len)
{
    size_t i;
    for (i = 0; i < len; i++) {
        Instruction *inst = &code[i];
        dump_inst[inst->opcode](inst);
    }
}

static void ByteCodeInfo_dump(ByteCodeInfo *info)
{
    fprintf(__stderrp, "ByteCodeVersion=%u\n", info->version);
    fprintf(__stderrp, "PEGFile=%s\n", info->filepath);
    fprintf(__stderrp, "LengthOfByteCode=%llu\n", info->bytecode_length);
    fprintf(__stderrp, "\n");
}

static uint32_t read32(InputSource *input)
{
    uint32_t value = 0;
    value = InputSource_GetUint8(input);
    value = (value) | (InputSource_GetUint8(input) << 8);
    value = (value) | (InputSource_GetUint8(input) << 16);
    value = (value) | (InputSource_GetUint8(input) << 24);
    return value;
}

static uint64_t read64(InputSource *input)
{
    uint64_t value1 = read32(input);
    uint64_t value2 = read32(input);
    return value2 << 32 | value1;
}

PegVMInstruction *ByteCodeLoader_Load(InputSource *input)
{
    size_t i;
    Instruction inst, *instp;
    ByteCodeInfo info = {};
    PegVMInstruction *code = ((void*)0);
    ARRAY_uint8_t_t buf;
    ARRAY_Instruction_t insts;

    ARRAY_init_uint8_t (&buf, 1);
    ARRAY_init_Instruction (&insts, 1);

    info.version = read32(input);
    info.pathlen = read32(input);
    for (i = 0; i < info.pathlen; i++) {
        info.filepath[i] = InputSource_GetUint8(input);
    }
    info.bytecode_length = read64(input);

    for (i = 0; i < info.bytecode_length; i++) {
        uint8_t code_length;
        uint8_t opcode = InputSource_GetUint8(input);
        uint8_t bdata = 0;
        uint32_t ndata;
        ndata = read32(input);
        ((buf).size = 0);
        code_length = InputSource_GetUint8(input);
        while (code_length--) {
            bdata = InputSource_GetUint8(input);
            ARRAY_uint8_t_add(&buf, bdata);
        }
        inst.opcode = opcode;
        inst.ndata = 0;
        inst.bdata = ((void*)0);
        instp = f_inst[opcode](&inst, ndata, &buf);
        ARRAY_Instruction_add(&insts, instp);
    }
    code = (PegVMInstruction *) GC_malloc(sizeof(Instruction) * ((insts).size));
    PegVMInstruction_relocate(code, &insts);
    ByteCodeInfo_dump(&info);
    if (0) {
        PegVMInstruction_dump(code + 1, ((insts).size));
    }
    ARRAY_uint8_t_dispose(&buf);
    ARRAY_Instruction_dispose(&insts);
    return code;
}
# 1 "main.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 170 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "main.c" 2




# 1 "/usr/include/stdio.h" 1 3 4
# 64 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 484 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 485 "/usr/include/sys/cdefs.h" 2 3 4
# 550 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_posix_availability.h" 1 3 4
# 551 "/usr/include/sys/cdefs.h" 2 3 4
# 65 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/Availability.h" 1 3 4
# 148 "/usr/include/Availability.h" 3 4
# 1 "/usr/include/AvailabilityInternal.h" 1 3 4
# 149 "/usr/include/Availability.h" 2 3 4
# 66 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/_types.h" 1 3 4
# 27 "/usr/include/_types.h" 3 4
# 1 "/usr/include/sys/_types.h" 1 3 4
# 33 "/usr/include/sys/_types.h" 3 4
# 1 "/usr/include/machine/_types.h" 1 3 4
# 32 "/usr/include/machine/_types.h" 3 4
# 1 "/usr/include/i386/_types.h" 1 3 4
# 37 "/usr/include/i386/_types.h" 3 4
typedef signed char __int8_t;



typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long long __int64_t;
typedef unsigned long long __uint64_t;

typedef long __darwin_intptr_t;
typedef unsigned int __darwin_natural_t;
# 70 "/usr/include/i386/_types.h" 3 4
typedef int __darwin_ct_rune_t;





typedef union {
 char __mbstate8[128];
 long long _mbstateL;
} __mbstate_t;

typedef __mbstate_t __darwin_mbstate_t;


typedef long int __darwin_ptrdiff_t;







typedef long unsigned int __darwin_size_t;





typedef __builtin_va_list __darwin_va_list;





typedef int __darwin_wchar_t;




typedef __darwin_wchar_t __darwin_rune_t;


typedef int __darwin_wint_t;




typedef unsigned long __darwin_clock_t;
typedef __uint32_t __darwin_socklen_t;
typedef long __darwin_ssize_t;
typedef long __darwin_time_t;
# 33 "/usr/include/machine/_types.h" 2 3 4
# 34 "/usr/include/sys/_types.h" 2 3 4
# 58 "/usr/include/sys/_types.h" 3 4
struct __darwin_pthread_handler_rec
{
 void (*__routine)(void *);
 void *__arg;
 struct __darwin_pthread_handler_rec *__next;
};
struct _opaque_pthread_attr_t { long __sig; char __opaque[56]; };
struct _opaque_pthread_cond_t { long __sig; char __opaque[40]; };
struct _opaque_pthread_condattr_t { long __sig; char __opaque[8]; };
struct _opaque_pthread_mutex_t { long __sig; char __opaque[56]; };
struct _opaque_pthread_mutexattr_t { long __sig; char __opaque[8]; };
struct _opaque_pthread_once_t { long __sig; char __opaque[8]; };
struct _opaque_pthread_rwlock_t { long __sig; char __opaque[192]; };
struct _opaque_pthread_rwlockattr_t { long __sig; char __opaque[16]; };
struct _opaque_pthread_t { long __sig; struct __darwin_pthread_handler_rec *__cleanup_stack; char __opaque[1168]; };
# 94 "/usr/include/sys/_types.h" 3 4
typedef __int64_t __darwin_blkcnt_t;
typedef __int32_t __darwin_blksize_t;
typedef __int32_t __darwin_dev_t;
typedef unsigned int __darwin_fsblkcnt_t;
typedef unsigned int __darwin_fsfilcnt_t;
typedef __uint32_t __darwin_gid_t;
typedef __uint32_t __darwin_id_t;
typedef __uint64_t __darwin_ino64_t;

typedef __darwin_ino64_t __darwin_ino_t;



typedef __darwin_natural_t __darwin_mach_port_name_t;
typedef __darwin_mach_port_name_t __darwin_mach_port_t;
typedef __uint16_t __darwin_mode_t;
typedef __int64_t __darwin_off_t;
typedef __int32_t __darwin_pid_t;
typedef struct _opaque_pthread_attr_t
   __darwin_pthread_attr_t;
typedef struct _opaque_pthread_cond_t
   __darwin_pthread_cond_t;
typedef struct _opaque_pthread_condattr_t
   __darwin_pthread_condattr_t;
typedef unsigned long __darwin_pthread_key_t;
typedef struct _opaque_pthread_mutex_t
   __darwin_pthread_mutex_t;
typedef struct _opaque_pthread_mutexattr_t
   __darwin_pthread_mutexattr_t;
typedef struct _opaque_pthread_once_t
   __darwin_pthread_once_t;
typedef struct _opaque_pthread_rwlock_t
   __darwin_pthread_rwlock_t;
typedef struct _opaque_pthread_rwlockattr_t
   __darwin_pthread_rwlockattr_t;
typedef struct _opaque_pthread_t
   *__darwin_pthread_t;
typedef __uint32_t __darwin_sigset_t;
typedef __int32_t __darwin_suseconds_t;
typedef __uint32_t __darwin_uid_t;
typedef __uint32_t __darwin_useconds_t;
typedef unsigned char __darwin_uuid_t[16];
typedef char __darwin_uuid_string_t[37];
# 28 "/usr/include/_types.h" 2 3 4
# 39 "/usr/include/_types.h" 3 4
typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;

typedef __uint32_t __darwin_wctype_t;
# 68 "/usr/include/stdio.h" 2 3 4



# 1 "/usr/include/sys/_types/_va_list.h" 1 3 4
# 31 "/usr/include/sys/_types/_va_list.h" 3 4
typedef __darwin_va_list va_list;
# 72 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/sys/_types/_size_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_size_t.h" 3 4
typedef __darwin_size_t size_t;
# 73 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/sys/_types/_null.h" 1 3 4
# 74 "/usr/include/stdio.h" 2 3 4

typedef __darwin_off_t fpos_t;
# 86 "/usr/include/stdio.h" 3 4
struct __sbuf {
 unsigned char *_base;
 int _size;
};


struct __sFILEX;
# 120 "/usr/include/stdio.h" 3 4
typedef struct __sFILE {
 unsigned char *_p;
 int _r;
 int _w;
 short _flags;
 short _file;
 struct __sbuf _bf;
 int _lbfsize;


 void *_cookie;
 int (*_close)(void *);
 int (*_read) (void *, char *, int);
 fpos_t (*_seek) (void *, fpos_t, int);
 int (*_write)(void *, const char *, int);


 struct __sbuf _ub;
 struct __sFILEX *_extra;
 int _ur;


 unsigned char _ubuf[3];
 unsigned char _nbuf[1];


 struct __sbuf _lb;


 int _blksize;
 fpos_t _offset;
} FILE;


extern FILE *__stdinp;
extern FILE *__stdoutp;
extern FILE *__stderrp;
# 229 "/usr/include/stdio.h" 3 4
void clearerr(FILE *);
int fclose(FILE *);
int feof(FILE *);
int ferror(FILE *);
int fflush(FILE *);
int fgetc(FILE *);
int fgetpos(FILE * restrict, fpos_t *);
char *fgets(char * restrict, int, FILE *);



FILE *fopen(const char * restrict, const char * restrict) __asm("_" "fopen");

int fprintf(FILE * restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
int fputc(int, FILE *);
int fputs(const char * restrict, FILE * restrict) __asm("_" "fputs") ;
size_t fread(void * restrict, size_t, size_t, FILE * restrict);
FILE *freopen(const char * restrict, const char * restrict,
                 FILE * restrict) __asm("_" "freopen") ;
int fscanf(FILE * restrict, const char * restrict, ...) __attribute__((__format__ (__scanf__, 2, 3)));
int fseek(FILE *, long, int);
int fsetpos(FILE *, const fpos_t *);
long ftell(FILE *);
size_t fwrite(const void * restrict, size_t, size_t, FILE * restrict) __asm("_" "fwrite") ;
int getc(FILE *);
int getchar(void);
char *gets(char *);
void perror(const char *);
int printf(const char * restrict, ...) __attribute__((__format__ (__printf__, 1, 2)));
int putc(int, FILE *);
int putchar(int);
int puts(const char *);
int remove(const char *);
int rename (const char *, const char *);
void rewind(FILE *);
int scanf(const char * restrict, ...) __attribute__((__format__ (__scanf__, 1, 2)));
void setbuf(FILE * restrict, char * restrict);
int setvbuf(FILE * restrict, char * restrict, int, size_t);
int sprintf(char * restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
int sscanf(const char * restrict, const char * restrict, ...) __attribute__((__format__ (__scanf__, 2, 3)));
FILE *tmpfile(void);


__attribute__((deprecated("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tmpnam(3), it is highly recommended that you use mkstemp(3) instead.")))

char *tmpnam(char *);
int ungetc(int, FILE *);
int vfprintf(FILE * restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0)));
int vprintf(const char * restrict, va_list) __attribute__((__format__ (__printf__, 1, 0)));
int vsprintf(char * restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0)));
# 294 "/usr/include/stdio.h" 3 4
char *ctermid(char *);





FILE *fdopen(int, const char *) __asm("_" "fdopen");

int fileno(FILE *);
# 313 "/usr/include/stdio.h" 3 4
int pclose(FILE *);



FILE *popen(const char *, const char *) __asm("_" "popen");
# 335 "/usr/include/stdio.h" 3 4
int __srget(FILE *);
int __svfscanf(FILE *, const char *, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int __swbuf(int, FILE *);
# 346 "/usr/include/stdio.h" 3 4
inline __attribute__ ((__always_inline__)) int __sputc(int _c, FILE *_p) {
 if (--_p->_w >= 0 || (_p->_w >= _p->_lbfsize && (char)_c != '\n'))
  return (*_p->_p++ = _c);
 else
  return (__swbuf(_c, _p));
}
# 372 "/usr/include/stdio.h" 3 4
void flockfile(FILE *);
int ftrylockfile(FILE *);
void funlockfile(FILE *);
int getc_unlocked(FILE *);
int getchar_unlocked(void);
int putc_unlocked(int, FILE *);
int putchar_unlocked(int);



int getw(FILE *);
int putw(int, FILE *);



__attribute__((deprecated("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tempnam(3), it is highly recommended that you use mkstemp(3) instead.")))

char *tempnam(const char *, const char *) __asm("_" "tempnam") ;
# 409 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/_types/_off_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_off_t.h" 3 4
typedef __darwin_off_t off_t;
# 410 "/usr/include/stdio.h" 2 3 4


int fseeko(FILE *, off_t, int);
off_t ftello(FILE *);





int snprintf(char * restrict, size_t, const char * restrict, ...) __attribute__((__format__ (__printf__, 3, 4)));
int vfscanf(FILE * restrict, const char * restrict, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int vscanf(const char * restrict, va_list) __attribute__((__format__ (__scanf__, 1, 0)));
int vsnprintf(char * restrict, size_t, const char * restrict, va_list) __attribute__((__format__ (__printf__, 3, 0)));
int vsscanf(const char * restrict, const char * restrict, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
# 434 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/_types/_ssize_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_ssize_t.h" 3 4
typedef __darwin_ssize_t ssize_t;
# 435 "/usr/include/stdio.h" 2 3 4


int dprintf(int, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3))) __attribute__((availability(macosx,introduced=10.7)));
int vdprintf(int, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0))) __attribute__((availability(macosx,introduced=10.7)));
ssize_t getdelim(char ** restrict, size_t * restrict, int, FILE * restrict) __attribute__((availability(macosx,introduced=10.7)));
ssize_t getline(char ** restrict, size_t * restrict, FILE * restrict) __attribute__((availability(macosx,introduced=10.7)));
# 450 "/usr/include/stdio.h" 3 4
extern const int sys_nerr;
extern const char *const sys_errlist[];

int asprintf(char ** restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
char *ctermid_r(char *);
char *fgetln(FILE *, size_t *);
const char *fmtcheck(const char *, const char *);
int fpurge(FILE *);
void setbuffer(FILE *, char *, int);
int setlinebuf(FILE *);
int vasprintf(char ** restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0)));
FILE *zopen(const char *, const char *, int);





FILE *funopen(const void *,
                 int (*)(void *, char *, int),
                 int (*)(void *, const char *, int),
                 fpos_t (*)(void *, fpos_t, int),
                 int (*)(void *));
# 490 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/secure/_stdio.h" 1 3 4
# 31 "/usr/include/secure/_stdio.h" 3 4
# 1 "/usr/include/secure/_common.h" 1 3 4
# 32 "/usr/include/secure/_stdio.h" 2 3 4
# 42 "/usr/include/secure/_stdio.h" 3 4
extern int __sprintf_chk (char * restrict, int, size_t,
     const char * restrict, ...);
# 52 "/usr/include/secure/_stdio.h" 3 4
extern int __snprintf_chk (char * restrict, size_t, int, size_t,
      const char * restrict, ...);







extern int __vsprintf_chk (char * restrict, int, size_t,
      const char * restrict, va_list);







extern int __vsnprintf_chk (char * restrict, size_t, int, size_t,
       const char * restrict, va_list);
# 491 "/usr/include/stdio.h" 2 3 4
# 6 "main.c" 2
# 1 "/usr/include/unistd.h" 1 3 4
# 72 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/sys/unistd.h" 1 3 4
# 84 "/usr/include/sys/unistd.h" 3 4
# 1 "/usr/include/sys/_types/_posix_vdisable.h" 1 3 4
# 85 "/usr/include/sys/unistd.h" 2 3 4
# 122 "/usr/include/sys/unistd.h" 3 4
# 1 "/usr/include/sys/_types/_seek_set.h" 1 3 4
# 123 "/usr/include/sys/unistd.h" 2 3 4
# 132 "/usr/include/sys/unistd.h" 3 4
struct accessx_descriptor {
 unsigned int ad_name_offset;
 int ad_flags;
 int ad_pad[2];
};
# 73 "/usr/include/unistd.h" 2 3 4

# 1 "/usr/include/sys/_types/_gid_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_gid_t.h" 3 4
typedef __darwin_gid_t gid_t;
# 75 "/usr/include/unistd.h" 2 3 4
# 1 "/usr/include/sys/_types/_intptr_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_intptr_t.h" 3 4
typedef __darwin_intptr_t intptr_t;
# 76 "/usr/include/unistd.h" 2 3 4

# 1 "/usr/include/sys/_types/_pid_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_pid_t.h" 3 4
typedef __darwin_pid_t pid_t;
# 78 "/usr/include/unistd.h" 2 3 4




# 1 "/usr/include/sys/_types/_uid_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_uid_t.h" 3 4
typedef __darwin_uid_t uid_t;
# 83 "/usr/include/unistd.h" 2 3 4
# 1 "/usr/include/sys/_types/_useconds_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_useconds_t.h" 3 4
typedef __darwin_useconds_t useconds_t;
# 84 "/usr/include/unistd.h" 2 3 4
# 424 "/usr/include/unistd.h" 3 4
void _exit(int) __attribute__((noreturn));
int access(const char *, int);
unsigned int
  alarm(unsigned int);
int chdir(const char *);
int chown(const char *, uid_t, gid_t);

int close(int) __asm("_" "close") ;

int dup(int);
int dup2(int, int);
int execl(const char *, const char *, ...);
int execle(const char *, const char *, ...);
int execlp(const char *, const char *, ...);
int execv(const char *, char * const *);
int execve(const char *, char * const *, char * const *);
int execvp(const char *, char * const *);
pid_t fork(void);
long fpathconf(int, int);
char *getcwd(char *, size_t);
gid_t getegid(void);
uid_t geteuid(void);
gid_t getgid(void);



int getgroups(int, gid_t []);

char *getlogin(void);
pid_t getpgrp(void);
pid_t getpid(void);
pid_t getppid(void);
uid_t getuid(void);
int isatty(int);
int link(const char *, const char *);
off_t lseek(int, off_t, int);
long pathconf(const char *, int);

int pause(void) __asm("_" "pause") ;

int pipe(int [2]);

ssize_t read(int, void *, size_t) __asm("_" "read") ;

int rmdir(const char *);
int setgid(gid_t);
int setpgid(pid_t, pid_t);
pid_t setsid(void);
int setuid(uid_t);

unsigned int
  sleep(unsigned int) __asm("_" "sleep") ;

long sysconf(int);
pid_t tcgetpgrp(int);
int tcsetpgrp(int, pid_t);
char *ttyname(int);


int ttyname_r(int, char *, size_t) __asm("_" "ttyname_r") ;




int unlink(const char *);

ssize_t write(int, const void *, size_t) __asm("_" "write") ;
# 501 "/usr/include/unistd.h" 3 4
size_t confstr(int, char *, size_t) __asm("_" "confstr") ;

int getopt(int, char * const [], const char *) __asm("_" "getopt") ;

extern char *optarg;
extern int optind, opterr, optopt;
# 531 "/usr/include/unistd.h" 3 4
__attribute__((deprecated))

void *brk(const void *);
int chroot(const char *) ;


char *crypt(const char *, const char *);






void encrypt(char *, int) __asm("_" "encrypt") ;



int fchdir(int);
long gethostid(void);
pid_t getpgid(pid_t);
pid_t getsid(pid_t);



int getdtablesize(void) ;
int getpagesize(void) __attribute__((const)) ;
char *getpass(const char *) ;




char *getwd(char *) ;


int lchown(const char *, uid_t, gid_t) __asm("_" "lchown") ;

int lockf(int, int, off_t) __asm("_" "lockf") ;

int nice(int) __asm("_" "nice") ;

ssize_t pread(int, void *, size_t, off_t) __asm("_" "pread") ;

ssize_t pwrite(int, const void *, size_t, off_t) __asm("_" "pwrite") ;






__attribute__((deprecated))

void *sbrk(int);



pid_t setpgrp(void) __asm("_" "setpgrp") ;




int setregid(gid_t, gid_t) __asm("_" "setregid") ;

int setreuid(uid_t, uid_t) __asm("_" "setreuid") ;

void swab(const void * restrict, void * restrict, ssize_t);
void sync(void);
int truncate(const char *, off_t);
useconds_t ualarm(useconds_t, useconds_t);
int usleep(useconds_t) __asm("_" "usleep") ;
pid_t vfork(void);


int fsync(int) __asm("_" "fsync") ;

int ftruncate(int, off_t);
int getlogin_r(char *, size_t);
# 619 "/usr/include/unistd.h" 3 4
int fchown(int, uid_t, gid_t);
int gethostname(char *, size_t);
ssize_t readlink(const char * restrict, char * restrict, size_t);
int setegid(gid_t);
int seteuid(uid_t);
int symlink(const char *, const char *);
# 633 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/sys/select.h" 1 3 4
# 66 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/sys/appleapiopts.h" 1 3 4
# 67 "/usr/include/sys/select.h" 2 3 4








# 1 "/usr/include/sys/_types/_fd_def.h" 1 3 4
# 46 "/usr/include/sys/_types/_fd_def.h" 3 4
typedef struct fd_set {
 __int32_t fds_bits[((((1024) % ((sizeof(__int32_t) * 8))) == 0) ? ((1024) / ((sizeof(__int32_t) * 8))) : (((1024) / ((sizeof(__int32_t) * 8))) + 1))];
} fd_set;



static __inline int
__darwin_fd_isset(int _n, const struct fd_set *_p)
{
 return (_p->fds_bits[(unsigned long)_n/(sizeof(__int32_t) * 8)] & ((__int32_t)(1<<((unsigned long)_n % (sizeof(__int32_t) * 8)))));
}
# 76 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/sys/_types/_timespec.h" 1 3 4
# 30 "/usr/include/sys/_types/_timespec.h" 3 4
struct timespec
{
 __darwin_time_t tv_sec;
 long tv_nsec;
};
# 77 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/sys/_types/_timeval.h" 1 3 4
# 30 "/usr/include/sys/_types/_timeval.h" 3 4
struct timeval
{
 __darwin_time_t tv_sec;
 __darwin_suseconds_t tv_usec;
};
# 78 "/usr/include/sys/select.h" 2 3 4






# 1 "/usr/include/sys/_types/_time_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_time_t.h" 3 4
typedef __darwin_time_t time_t;
# 85 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/sys/_types/_suseconds_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_suseconds_t.h" 3 4
typedef __darwin_suseconds_t suseconds_t;
# 86 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/sys/_types/_sigset_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_sigset_t.h" 3 4
typedef __darwin_sigset_t sigset_t;
# 87 "/usr/include/sys/select.h" 2 3 4
# 100 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/sys/_types/_fd_setsize.h" 1 3 4
# 101 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_set.h" 1 3 4
# 102 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_clr.h" 1 3 4
# 103 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_isset.h" 1 3 4
# 104 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_zero.h" 1 3 4
# 105 "/usr/include/sys/select.h" 2 3 4


# 1 "/usr/include/sys/_types/_fd_copy.h" 1 3 4
# 108 "/usr/include/sys/select.h" 2 3 4






int pselect(int, fd_set * restrict, fd_set * restrict,
  fd_set * restrict, const struct timespec * restrict,
  const sigset_t * restrict)




  __asm("_" "pselect" "$1050")




  ;



# 1 "/usr/include/sys/_select.h" 1 3 4
# 39 "/usr/include/sys/_select.h" 3 4
int select(int, fd_set * restrict, fd_set * restrict,
  fd_set * restrict, struct timeval * restrict)




  __asm("_" "select" "$1050")




  ;
# 130 "/usr/include/sys/select.h" 2 3 4
# 634 "/usr/include/unistd.h" 2 3 4

# 1 "/usr/include/sys/_types/_dev_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_dev_t.h" 3 4
typedef __darwin_dev_t dev_t;
# 636 "/usr/include/unistd.h" 2 3 4
# 1 "/usr/include/sys/_types/_mode_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_mode_t.h" 3 4
typedef __darwin_mode_t mode_t;
# 637 "/usr/include/unistd.h" 2 3 4
# 1 "/usr/include/sys/_types/_uuid_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_uuid_t.h" 3 4
typedef __darwin_uuid_t uuid_t;
# 638 "/usr/include/unistd.h" 2 3 4


void _Exit(int) __attribute__((noreturn));
int accessx_np(const struct accessx_descriptor *, size_t, int *, uid_t);
int acct(const char *);
int add_profil(char *, size_t, unsigned long, unsigned int);
void endusershell(void);
int execvP(const char *, const char *, char * const *);
char *fflagstostr(unsigned long);
int getdomainname(char *, int);
int getgrouplist(const char *, int, int *, int *);





# 1 "/usr/include/gethostuuid.h" 1 3 4
# 39 "/usr/include/gethostuuid.h" 3 4
int gethostuuid(uuid_t, const struct timespec *) __attribute__((availability(macosx,introduced=10.5)));
# 654 "/usr/include/unistd.h" 2 3 4




mode_t getmode(const void *, mode_t);
int getpeereid(int, uid_t *, gid_t *);
int getsgroups_np(int *, uuid_t);
char *getusershell(void);
int getwgroups_np(int *, uuid_t);
int initgroups(const char *, int);
int iruserok(unsigned long, int, const char *, const char *);
int iruserok_sa(const void *, int, int, const char *, const char *);
int issetugid(void);
char *mkdtemp(char *);
int mknod(const char *, mode_t, dev_t);
int mkpath_np(const char *path, mode_t omode) __attribute__((availability(macosx,introduced=10.8)));
int mkstemp(char *);
int mkstemps(char *, int);
char *mktemp(char *);
int nfssvc(int, void *);
int profil(char *, size_t, unsigned long, unsigned int);
int pthread_setugid_np(uid_t, gid_t);
int pthread_getugid_np( uid_t *, gid_t *);
int rcmd(char **, int, const char *, const char *, const char *, int *);
int rcmd_af(char **, int, const char *, const char *, const char *, int *,
  int);
int reboot(int);
int revoke(const char *);
int rresvport(int *);
int rresvport_af(int *, int);
int ruserok(const char *, int, const char *, const char *);
int setdomainname(const char *, int);
int setgroups(int, const gid_t *);
void sethostid(long);
int sethostname(const char *, int);

void setkey(const char *) __asm("_" "setkey") ;



int setlogin(const char *);
void *setmode(const char *) __asm("_" "setmode");
int setrgid(gid_t);
int setruid(uid_t);
int setsgroups_np(int, const uuid_t);
void setusershell(void);
int setwgroups_np(int, const uuid_t);
int strtofflags(char **, unsigned long *, unsigned long *);
int swapon(const char *);
int syscall(int, ...);
int ttyslot(void);
int undelete(const char *);
int unwhiteout(const char *);
void *valloc(size_t);

extern char *suboptarg;
int getsubopt(char **, char * const *, char **);



int fgetattrlist(int,void*,void*,size_t,unsigned int) __attribute__((availability(macosx,introduced=10.6)));
int fsetattrlist(int,void*,void*,size_t,unsigned int) __attribute__((availability(macosx,introduced=10.6)));
int getattrlist(const char*,void*,void*,size_t,unsigned int) __asm("_" "getattrlist") ;
int setattrlist(const char*,void*,void*,size_t,unsigned int) __asm("_" "setattrlist") ;
int exchangedata(const char*,const char*,unsigned int);
int getdirentriesattr(int,void*,void*,size_t,unsigned int*,unsigned int*,unsigned int*,unsigned int);
# 731 "/usr/include/unistd.h" 3 4
struct fssearchblock;
struct searchstate;

int searchfs(const char *, struct fssearchblock *, unsigned long *, unsigned int, unsigned int, struct searchstate *);
int fsctl(const char *,unsigned long,void*,unsigned int);
int ffsctl(int,unsigned long,void*,unsigned int) __attribute__((availability(macosx,introduced=10.6)));




int fsync_volume_np(int, int) __attribute__((availability(macosx,introduced=10.8)));
int sync_volume_np(const char *, int) __attribute__((availability(macosx,introduced=10.8)));

extern int optreset;
# 7 "main.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 70 "/usr/include/string.h" 3 4
void *memchr(const void *, int, size_t);
int memcmp(const void *, const void *, size_t);
void *memcpy(void *, const void *, size_t);
void *memmove(void *, const void *, size_t);
void *memset(void *, int, size_t);
char *strcat(char *, const char *);
char *strchr(const char *, int);
int strcmp(const char *, const char *);
int strcoll(const char *, const char *);
char *strcpy(char *, const char *);
size_t strcspn(const char *, const char *);
char *strerror(int) __asm("_" "strerror") ;
size_t strlen(const char *);
char *strncat(char *, const char *, size_t);
int strncmp(const char *, const char *, size_t);
char *strncpy(char *, const char *, size_t);
char *strpbrk(const char *, const char *);
char *strrchr(const char *, int);
size_t strspn(const char *, const char *);
char *strstr(const char *, const char *);
char *strtok(char *, const char *);
size_t strxfrm(char *, const char *, size_t);
# 104 "/usr/include/string.h" 3 4
char *strtok_r(char *, const char *, char **);
# 116 "/usr/include/string.h" 3 4
int strerror_r(int, char *, size_t);
char *strdup(const char *);
void *memccpy(void *, const void *, int, size_t);
# 130 "/usr/include/string.h" 3 4
char *stpcpy(char *, const char *);
char *stpncpy(char *, const char *, size_t) __attribute__((availability(macosx,introduced=10.7)));
char *strndup(const char *, size_t) __attribute__((availability(macosx,introduced=10.7)));
size_t strnlen(const char *, size_t) __attribute__((availability(macosx,introduced=10.7)));
char *strsignal(int sig);







# 1 "/usr/include/sys/_types/_rsize_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_rsize_t.h" 3 4
typedef __darwin_size_t rsize_t;
# 142 "/usr/include/string.h" 2 3 4
# 1 "/usr/include/sys/_types/_errno_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_errno_t.h" 3 4
typedef int errno_t;
# 143 "/usr/include/string.h" 2 3 4


errno_t memset_s(void *, rsize_t, int, rsize_t) __attribute__((availability(macosx,introduced=10.9)));
# 155 "/usr/include/string.h" 3 4
void *memmem(const void *, size_t, const void *, size_t) __attribute__((availability(macosx,introduced=10.7)));
void memset_pattern4(void *, const void *, size_t) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern8(void *, const void *, size_t) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern16(void *, const void *, size_t) __attribute__((availability(macosx,introduced=10.5)));

char *strcasestr(const char *, const char *);
char *strnstr(const char *, const char *, size_t);
size_t strlcat(char *, const char *, size_t);
size_t strlcpy(char *, const char *, size_t);
void strmode(int, char *);
char *strsep(char **, const char *);


void swab(const void * restrict, void * restrict, ssize_t);








# 1 "/usr/include/strings.h" 1 3 4
# 70 "/usr/include/strings.h" 3 4
int bcmp(const void *, const void *, size_t) ;
void bcopy(const void *, void *, size_t) ;
void bzero(void *, size_t) ;
char *index(const char *, int) ;
char *rindex(const char *, int) ;


int ffs(int);
int strcasecmp(const char *, const char *);
int strncasecmp(const char *, const char *, size_t);





int ffsl(long) __attribute__((availability(macosx,introduced=10.5)));
int ffsll(long long) __attribute__((availability(macosx,introduced=10.9)));
int fls(int) __attribute__((availability(macosx,introduced=10.5)));
int flsl(long) __attribute__((availability(macosx,introduced=10.5)));
int flsll(long long) __attribute__((availability(macosx,introduced=10.9)));



# 1 "/usr/include/string.h" 1 3 4
# 93 "/usr/include/strings.h" 2 3 4
# 177 "/usr/include/string.h" 2 3 4
# 186 "/usr/include/string.h" 3 4
# 1 "/usr/include/secure/_string.h" 1 3 4
# 187 "/usr/include/string.h" 2 3 4
# 8 "main.c" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 65 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/sys/wait.h" 1 3 4
# 79 "/usr/include/sys/wait.h" 3 4
typedef enum {
 P_ALL,
 P_PID,
 P_PGID
} idtype_t;







# 1 "/usr/include/sys/_types/_id_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_id_t.h" 3 4
typedef __darwin_id_t id_t;
# 91 "/usr/include/sys/wait.h" 2 3 4
# 109 "/usr/include/sys/wait.h" 3 4
# 1 "/usr/include/sys/signal.h" 1 3 4
# 81 "/usr/include/sys/signal.h" 3 4
# 1 "/usr/include/machine/signal.h" 1 3 4
# 32 "/usr/include/machine/signal.h" 3 4
# 1 "/usr/include/i386/signal.h" 1 3 4
# 39 "/usr/include/i386/signal.h" 3 4
typedef int sig_atomic_t;
# 33 "/usr/include/machine/signal.h" 2 3 4
# 82 "/usr/include/sys/signal.h" 2 3 4
# 145 "/usr/include/sys/signal.h" 3 4
# 1 "/usr/include/machine/_mcontext.h" 1 3 4
# 29 "/usr/include/machine/_mcontext.h" 3 4
# 1 "/usr/include/i386/_mcontext.h" 1 3 4
# 33 "/usr/include/i386/_mcontext.h" 3 4
# 1 "/usr/include/mach/i386/_structs.h" 1 3 4
# 43 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_thread_state
{
    unsigned int __eax;
    unsigned int __ebx;
    unsigned int __ecx;
    unsigned int __edx;
    unsigned int __edi;
    unsigned int __esi;
    unsigned int __ebp;
    unsigned int __esp;
    unsigned int __ss;
    unsigned int __eflags;
    unsigned int __eip;
    unsigned int __cs;
    unsigned int __ds;
    unsigned int __es;
    unsigned int __fs;
    unsigned int __gs;
};
# 89 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_fp_control
{
    unsigned short __invalid :1,
        __denorm :1,
    __zdiv :1,
    __ovrfl :1,
    __undfl :1,
    __precis :1,
      :2,
    __pc :2,





    __rc :2,






             :1,
      :3;
};
typedef struct __darwin_fp_control __darwin_fp_control_t;
# 147 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_fp_status
{
    unsigned short __invalid :1,
        __denorm :1,
    __zdiv :1,
    __ovrfl :1,
    __undfl :1,
    __precis :1,
    __stkflt :1,
    __errsumm :1,
    __c0 :1,
    __c1 :1,
    __c2 :1,
    __tos :3,
    __c3 :1,
    __busy :1;
};
typedef struct __darwin_fp_status __darwin_fp_status_t;
# 191 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_mmst_reg
{
 char __mmst_reg[10];
 char __mmst_rsrv[6];
};
# 210 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_xmm_reg
{
 char __xmm_reg[16];
};
# 232 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_float_state
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;
 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;
 __uint16_t __fpu_rsrv2;
 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;
 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 char __fpu_rsrv4[14*16];
 int __fpu_reserved1;
};


struct __darwin_i386_avx_state
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;
 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;
 __uint16_t __fpu_rsrv2;
 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;
 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 char __fpu_rsrv4[14*16];
 int __fpu_reserved1;
 char __avx_reserved1[64];
 struct __darwin_xmm_reg __fpu_ymmh0;
 struct __darwin_xmm_reg __fpu_ymmh1;
 struct __darwin_xmm_reg __fpu_ymmh2;
 struct __darwin_xmm_reg __fpu_ymmh3;
 struct __darwin_xmm_reg __fpu_ymmh4;
 struct __darwin_xmm_reg __fpu_ymmh5;
 struct __darwin_xmm_reg __fpu_ymmh6;
 struct __darwin_xmm_reg __fpu_ymmh7;
};
# 402 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_exception_state
{
 __uint16_t __trapno;
 __uint16_t __cpu;
 __uint32_t __err;
 __uint32_t __faultvaddr;
};
# 422 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_debug_state32
{
 unsigned int __dr0;
 unsigned int __dr1;
 unsigned int __dr2;
 unsigned int __dr3;
 unsigned int __dr4;
 unsigned int __dr5;
 unsigned int __dr6;
 unsigned int __dr7;
};
# 454 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_thread_state64
{
 __uint64_t __rax;
 __uint64_t __rbx;
 __uint64_t __rcx;
 __uint64_t __rdx;
 __uint64_t __rdi;
 __uint64_t __rsi;
 __uint64_t __rbp;
 __uint64_t __rsp;
 __uint64_t __r8;
 __uint64_t __r9;
 __uint64_t __r10;
 __uint64_t __r11;
 __uint64_t __r12;
 __uint64_t __r13;
 __uint64_t __r14;
 __uint64_t __r15;
 __uint64_t __rip;
 __uint64_t __rflags;
 __uint64_t __cs;
 __uint64_t __fs;
 __uint64_t __gs;
};
# 509 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_float_state64
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;


 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;

 __uint16_t __fpu_rsrv2;


 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;

 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 struct __darwin_xmm_reg __fpu_xmm8;
 struct __darwin_xmm_reg __fpu_xmm9;
 struct __darwin_xmm_reg __fpu_xmm10;
 struct __darwin_xmm_reg __fpu_xmm11;
 struct __darwin_xmm_reg __fpu_xmm12;
 struct __darwin_xmm_reg __fpu_xmm13;
 struct __darwin_xmm_reg __fpu_xmm14;
 struct __darwin_xmm_reg __fpu_xmm15;
 char __fpu_rsrv4[6*16];
 int __fpu_reserved1;
};


struct __darwin_x86_avx_state64
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;


 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;

 __uint16_t __fpu_rsrv2;


 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;

 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 struct __darwin_xmm_reg __fpu_xmm8;
 struct __darwin_xmm_reg __fpu_xmm9;
 struct __darwin_xmm_reg __fpu_xmm10;
 struct __darwin_xmm_reg __fpu_xmm11;
 struct __darwin_xmm_reg __fpu_xmm12;
 struct __darwin_xmm_reg __fpu_xmm13;
 struct __darwin_xmm_reg __fpu_xmm14;
 struct __darwin_xmm_reg __fpu_xmm15;
 char __fpu_rsrv4[6*16];
 int __fpu_reserved1;
 char __avx_reserved1[64];
 struct __darwin_xmm_reg __fpu_ymmh0;
 struct __darwin_xmm_reg __fpu_ymmh1;
 struct __darwin_xmm_reg __fpu_ymmh2;
 struct __darwin_xmm_reg __fpu_ymmh3;
 struct __darwin_xmm_reg __fpu_ymmh4;
 struct __darwin_xmm_reg __fpu_ymmh5;
 struct __darwin_xmm_reg __fpu_ymmh6;
 struct __darwin_xmm_reg __fpu_ymmh7;
 struct __darwin_xmm_reg __fpu_ymmh8;
 struct __darwin_xmm_reg __fpu_ymmh9;
 struct __darwin_xmm_reg __fpu_ymmh10;
 struct __darwin_xmm_reg __fpu_ymmh11;
 struct __darwin_xmm_reg __fpu_ymmh12;
 struct __darwin_xmm_reg __fpu_ymmh13;
 struct __darwin_xmm_reg __fpu_ymmh14;
 struct __darwin_xmm_reg __fpu_ymmh15;
};
# 751 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_exception_state64
{
    __uint16_t __trapno;
    __uint16_t __cpu;
    __uint32_t __err;
    __uint64_t __faultvaddr;
};
# 771 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_debug_state64
{
 __uint64_t __dr0;
 __uint64_t __dr1;
 __uint64_t __dr2;
 __uint64_t __dr3;
 __uint64_t __dr4;
 __uint64_t __dr5;
 __uint64_t __dr6;
 __uint64_t __dr7;
};
# 34 "/usr/include/i386/_mcontext.h" 2 3 4




struct __darwin_mcontext32
{
 struct __darwin_i386_exception_state __es;
 struct __darwin_i386_thread_state __ss;
 struct __darwin_i386_float_state __fs;
};


struct __darwin_mcontext_avx32
{
 struct __darwin_i386_exception_state __es;
 struct __darwin_i386_thread_state __ss;
 struct __darwin_i386_avx_state __fs;
};
# 76 "/usr/include/i386/_mcontext.h" 3 4
struct __darwin_mcontext64
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_state64 __ss;
 struct __darwin_x86_float_state64 __fs;
};


struct __darwin_mcontext_avx64
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_state64 __ss;
 struct __darwin_x86_avx_state64 __fs;
};
# 115 "/usr/include/i386/_mcontext.h" 3 4
typedef struct __darwin_mcontext64 *mcontext_t;
# 30 "/usr/include/machine/_mcontext.h" 2 3 4
# 146 "/usr/include/sys/signal.h" 2 3 4
# 1 "/usr/include/sys/_types/_sigaltstack.h" 1 3 4
# 36 "/usr/include/sys/_types/_sigaltstack.h" 3 4
struct __darwin_sigaltstack
{
 void *ss_sp;
 __darwin_size_t ss_size;
 int ss_flags;
};
typedef struct __darwin_sigaltstack stack_t;
# 147 "/usr/include/sys/signal.h" 2 3 4
# 1 "/usr/include/sys/_types/_ucontext.h" 1 3 4
# 34 "/usr/include/sys/_types/_ucontext.h" 3 4
struct __darwin_ucontext
{
 int uc_onstack;
 __darwin_sigset_t uc_sigmask;
 struct __darwin_sigaltstack uc_stack;
 struct __darwin_ucontext *uc_link;
 __darwin_size_t uc_mcsize;
 struct __darwin_mcontext64 *uc_mcontext;



};


typedef struct __darwin_ucontext ucontext_t;
# 148 "/usr/include/sys/signal.h" 2 3 4


# 1 "/usr/include/sys/_types/_pthread_attr_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_pthread_attr_t.h" 3 4
typedef __darwin_pthread_attr_t pthread_attr_t;
# 151 "/usr/include/sys/signal.h" 2 3 4




union sigval {

 int sival_int;
 void *sival_ptr;
};





struct sigevent {
 int sigev_notify;
 int sigev_signo;
 union sigval sigev_value;
 void (*sigev_notify_function)(union sigval);
 pthread_attr_t *sigev_notify_attributes;
};


typedef struct __siginfo {
 int si_signo;
 int si_errno;
 int si_code;
 pid_t si_pid;
 uid_t si_uid;
 int si_status;
 void *si_addr;
 union sigval si_value;
 long si_band;
 unsigned long __pad[7];
} siginfo_t;
# 266 "/usr/include/sys/signal.h" 3 4
union __sigaction_u {
 void (*__sa_handler)(int);
 void (*__sa_sigaction)(int, struct __siginfo *,
         void *);
};


struct __sigaction {
 union __sigaction_u __sigaction_u;
 void (*sa_tramp)(void *, int, int, siginfo_t *, void *);
 sigset_t sa_mask;
 int sa_flags;
};




struct sigaction {
 union __sigaction_u __sigaction_u;
 sigset_t sa_mask;
 int sa_flags;
};
# 328 "/usr/include/sys/signal.h" 3 4
typedef void (*sig_t)(int);
# 345 "/usr/include/sys/signal.h" 3 4
struct sigvec {
 void (*sv_handler)(int);
 int sv_mask;
 int sv_flags;
};
# 364 "/usr/include/sys/signal.h" 3 4
struct sigstack {
 char *ss_sp;
 int ss_onstack;
};
# 387 "/usr/include/sys/signal.h" 3 4
void (*signal(int, void (*)(int)))(int);
# 110 "/usr/include/sys/wait.h" 2 3 4
# 1 "/usr/include/sys/resource.h" 1 3 4
# 72 "/usr/include/sys/resource.h" 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdint.h" 1 3 4
# 64 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 18 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/sys/_types/_int8_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int8_t.h" 3 4
typedef signed char int8_t;
# 19 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_int16_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int16_t.h" 3 4
typedef short int16_t;
# 20 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_int32_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int32_t.h" 3 4
typedef int int32_t;
# 21 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_int64_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int64_t.h" 3 4
typedef long long int64_t;
# 22 "/usr/include/stdint.h" 2 3 4

# 1 "/usr/include/_types/_uint8_t.h" 1 3 4
# 31 "/usr/include/_types/_uint8_t.h" 3 4
typedef unsigned char uint8_t;
# 24 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uint16_t.h" 1 3 4
# 31 "/usr/include/_types/_uint16_t.h" 3 4
typedef unsigned short uint16_t;
# 25 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uint32_t.h" 1 3 4
# 31 "/usr/include/_types/_uint32_t.h" 3 4
typedef unsigned int uint32_t;
# 26 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uint64_t.h" 1 3 4
# 31 "/usr/include/_types/_uint64_t.h" 3 4
typedef unsigned long long uint64_t;
# 27 "/usr/include/stdint.h" 2 3 4


typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_least64_t;
typedef uint8_t uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;



typedef int8_t int_fast8_t;
typedef int16_t int_fast16_t;
typedef int32_t int_fast32_t;
typedef int64_t int_fast64_t;
typedef uint8_t uint_fast8_t;
typedef uint16_t uint_fast16_t;
typedef uint32_t uint_fast32_t;
typedef uint64_t uint_fast64_t;







# 1 "/usr/include/sys/_types/_uintptr_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_uintptr_t.h" 3 4
typedef unsigned long uintptr_t;
# 55 "/usr/include/stdint.h" 2 3 4



# 1 "/usr/include/_types/_intmax_t.h" 1 3 4
# 32 "/usr/include/_types/_intmax_t.h" 3 4
typedef long int intmax_t;
# 59 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uintmax_t.h" 1 3 4
# 32 "/usr/include/_types/_uintmax_t.h" 3 4
typedef long unsigned int uintmax_t;
# 60 "/usr/include/stdint.h" 2 3 4
# 65 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdint.h" 2 3 4
# 73 "/usr/include/sys/resource.h" 2 3 4
# 89 "/usr/include/sys/resource.h" 3 4
typedef __uint64_t rlim_t;
# 151 "/usr/include/sys/resource.h" 3 4
struct rusage {
 struct timeval ru_utime;
 struct timeval ru_stime;
# 162 "/usr/include/sys/resource.h" 3 4
 long ru_maxrss;

 long ru_ixrss;
 long ru_idrss;
 long ru_isrss;
 long ru_minflt;
 long ru_majflt;
 long ru_nswap;
 long ru_inblock;
 long ru_oublock;
 long ru_msgsnd;
 long ru_msgrcv;
 long ru_nsignals;
 long ru_nvcsw;
 long ru_nivcsw;


};
# 190 "/usr/include/sys/resource.h" 3 4
typedef void *rusage_info_t;

struct rusage_info_v0 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
};

struct rusage_info_v1 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
};

struct rusage_info_v2 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
};
# 290 "/usr/include/sys/resource.h" 3 4
struct rlimit {
 rlim_t rlim_cur;
 rlim_t rlim_max;
};
# 317 "/usr/include/sys/resource.h" 3 4
struct proc_rlimit_control_wakeupmon {
 uint32_t wm_flags;
 int32_t wm_rate;
};
# 347 "/usr/include/sys/resource.h" 3 4
int getpriority(int, id_t);

int getiopolicy_np(int, int) __attribute__((availability(macosx,introduced=10.5)));

int getrlimit(int, struct rlimit *) __asm("_" "getrlimit") ;
int getrusage(int, struct rusage *);
int setpriority(int, id_t, int);

int setiopolicy_np(int, int, int) __attribute__((availability(macosx,introduced=10.5)));

int setrlimit(int, const struct rlimit *) __asm("_" "setrlimit") ;
# 111 "/usr/include/sys/wait.h" 2 3 4
# 186 "/usr/include/sys/wait.h" 3 4
# 1 "/usr/include/machine/endian.h" 1 3 4
# 35 "/usr/include/machine/endian.h" 3 4
# 1 "/usr/include/i386/endian.h" 1 3 4
# 99 "/usr/include/i386/endian.h" 3 4
# 1 "/usr/include/sys/_endian.h" 1 3 4
# 124 "/usr/include/sys/_endian.h" 3 4
# 1 "/usr/include/libkern/_OSByteOrder.h" 1 3 4
# 66 "/usr/include/libkern/_OSByteOrder.h" 3 4
# 1 "/usr/include/libkern/i386/_OSByteOrder.h" 1 3 4
# 44 "/usr/include/libkern/i386/_OSByteOrder.h" 3 4
static inline
__uint16_t
_OSSwapInt16(
    __uint16_t _data
)
{
    return ((__uint16_t)((_data << 8) | (_data >> 8)));
}

static inline
__uint32_t
_OSSwapInt32(
    __uint32_t _data
)
{

    return __builtin_bswap32(_data);




}


static inline
__uint64_t
_OSSwapInt64(
    __uint64_t _data
)
{
    return __builtin_bswap64(_data);
}
# 67 "/usr/include/libkern/_OSByteOrder.h" 2 3 4
# 125 "/usr/include/sys/_endian.h" 2 3 4
# 100 "/usr/include/i386/endian.h" 2 3 4
# 36 "/usr/include/machine/endian.h" 2 3 4
# 187 "/usr/include/sys/wait.h" 2 3 4







union wait {
 int w_status;



 struct {

  unsigned int w_Termsig:7,
    w_Coredump:1,
    w_Retcode:8,
    w_Filler:16;







 } w_T;





 struct {

  unsigned int w_Stopval:8,
    w_Stopsig:8,
    w_Filler:16;






 } w_S;
};
# 248 "/usr/include/sys/wait.h" 3 4
pid_t wait(int *) __asm("_" "wait") ;
pid_t waitpid(pid_t, int *, int) __asm("_" "waitpid") ;

int waitid(idtype_t, id_t, siginfo_t *, int) __asm("_" "waitid") ;


pid_t wait3(int *, int, struct rusage *);
pid_t wait4(pid_t, int *, int, struct rusage *);
# 66 "/usr/include/stdlib.h" 2 3 4

# 1 "/usr/include/alloca.h" 1 3 4
# 32 "/usr/include/alloca.h" 3 4
void *alloca(size_t);
# 68 "/usr/include/stdlib.h" 2 3 4








# 1 "/usr/include/sys/_types/_ct_rune_t.h" 1 3 4
# 31 "/usr/include/sys/_types/_ct_rune_t.h" 3 4
typedef __darwin_ct_rune_t ct_rune_t;
# 77 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/sys/_types/_rune_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_rune_t.h" 3 4
typedef __darwin_rune_t rune_t;
# 78 "/usr/include/stdlib.h" 2 3 4


# 1 "/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 33 "/usr/include/sys/_types/_wchar_t.h" 3 4
typedef __darwin_wchar_t wchar_t;
# 81 "/usr/include/stdlib.h" 2 3 4

typedef struct {
 int quot;
 int rem;
} div_t;

typedef struct {
 long quot;
 long rem;
} ldiv_t;


typedef struct {
 long long quot;
 long long rem;
} lldiv_t;
# 117 "/usr/include/stdlib.h" 3 4
extern int __mb_cur_max;
# 128 "/usr/include/stdlib.h" 3 4
void abort(void) __attribute__((noreturn));
int abs(int) __attribute__((const));
int atexit(void (*)(void));
double atof(const char *);
int atoi(const char *);
long atol(const char *);

long long
  atoll(const char *);

void *bsearch(const void *, const void *, size_t,
     size_t, int (*)(const void *, const void *));
void *calloc(size_t, size_t);
div_t div(int, int) __attribute__((const));
void exit(int) __attribute__((noreturn));
void free(void *);
char *getenv(const char *);
long labs(long) __attribute__((const));
ldiv_t ldiv(long, long) __attribute__((const));

long long
  llabs(long long);
lldiv_t lldiv(long long, long long);

void *malloc(size_t);
int mblen(const char *, size_t);
size_t mbstowcs(wchar_t * restrict , const char * restrict, size_t);
int mbtowc(wchar_t * restrict, const char * restrict, size_t);
int posix_memalign(void **, size_t, size_t) __attribute__((availability(macosx,introduced=10.6)));
void qsort(void *, size_t, size_t,
     int (*)(const void *, const void *));
int rand(void);
void *realloc(void *, size_t);
void srand(unsigned);
double strtod(const char *, char **) __asm("_" "strtod") ;
float strtof(const char *, char **) __asm("_" "strtof") ;
long strtol(const char *, char **, int);
long double
  strtold(const char *, char **);

long long
  strtoll(const char *, char **, int);

unsigned long
  strtoul(const char *, char **, int);

unsigned long long
  strtoull(const char *, char **, int);

int system(const char *) __asm("_" "system") ;
size_t wcstombs(char * restrict, const wchar_t * restrict, size_t);
int wctomb(char *, wchar_t);


void _Exit(int) __attribute__((noreturn));
long a64l(const char *);
double drand48(void);
char *ecvt(double, int, int *restrict, int *restrict);
double erand48(unsigned short[3]);
char *fcvt(double, int, int *restrict, int *restrict);
char *gcvt(double, int, char *);
int getsubopt(char **, char * const *, char **);
int grantpt(int);

char *initstate(unsigned, char *, size_t);



long jrand48(unsigned short[3]);
char *l64a(long);
void lcong48(unsigned short[7]);
long lrand48(void);
char *mktemp(char *);
int mkstemp(char *);
long mrand48(void);
long nrand48(unsigned short[3]);
int posix_openpt(int);
char *ptsname(int);
int putenv(char *) __asm("_" "putenv") ;
long random(void);
int rand_r(unsigned *);

char *realpath(const char * restrict, char * restrict) __asm("_" "realpath" "$DARWIN_EXTSN");



unsigned short
 *seed48(unsigned short[3]);
int setenv(const char *, const char *, int) __asm("_" "setenv") ;

void setkey(const char *) __asm("_" "setkey") ;



char *setstate(const char *);
void srand48(long);

void srandom(unsigned);



int unlockpt(int);

int unsetenv(const char *) __asm("_" "unsetenv") ;







# 1 "/usr/include/machine/types.h" 1 3 4
# 35 "/usr/include/machine/types.h" 3 4
# 1 "/usr/include/i386/types.h" 1 3 4
# 81 "/usr/include/i386/types.h" 3 4
typedef unsigned char u_int8_t;
typedef unsigned short u_int16_t;
typedef unsigned int u_int32_t;
typedef unsigned long long u_int64_t;


typedef int64_t register_t;
# 97 "/usr/include/i386/types.h" 3 4
typedef u_int64_t user_addr_t;
typedef u_int64_t user_size_t;
typedef int64_t user_ssize_t;
typedef int64_t user_long_t;
typedef u_int64_t user_ulong_t;
typedef int64_t user_time_t;
typedef int64_t user_off_t;







typedef u_int64_t syscall_arg_t;


# 1 "/usr/include/sys/_types/___offsetof.h" 1 3 4
# 114 "/usr/include/i386/types.h" 2 3 4
# 36 "/usr/include/machine/types.h" 2 3 4
# 239 "/usr/include/stdlib.h" 2 3 4




u_int32_t arc4random(void);
void arc4random_addrandom(unsigned char * , int );
void arc4random_buf(void * , size_t ) __attribute__((availability(macosx,introduced=10.7)));
void arc4random_stir(void);
u_int32_t
  arc4random_uniform(u_int32_t ) __attribute__((availability(macosx,introduced=10.7)));

int atexit_b(void (^)(void)) __attribute__((availability(macosx,introduced=10.6)));
void *bsearch_b(const void *, const void *, size_t,
     size_t, int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));



char *cgetcap(char *, const char *, int);
int cgetclose(void);
int cgetent(char **, char **, const char *);
int cgetfirst(char **, char **);
int cgetmatch(const char *, const char *);
int cgetnext(char **, char **);
int cgetnum(char *, const char *, long *);
int cgetset(const char *);
int cgetstr(char *, const char *, char **);
int cgetustr(char *, const char *, char **);

int daemon(int, int) __asm("_" "daemon" "$1050") __attribute__((availability(macosx,introduced=10.0,deprecated=10.5)));
char *devname(dev_t, mode_t);
char *devname_r(dev_t, mode_t, char *buf, int len);
char *getbsize(int *, long *);
int getloadavg(double [], int);
const char
 *getprogname(void);

int heapsort(void *, size_t, size_t,
     int (*)(const void *, const void *));

int heapsort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

int mergesort(void *, size_t, size_t,
     int (*)(const void *, const void *));

int mergesort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void psort(void *, size_t, size_t,
     int (*)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void psort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void psort_r(void *, size_t, size_t, void *,
     int (*)(void *, const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void qsort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void qsort_r(void *, size_t, size_t, void *,
     int (*)(void *, const void *, const void *));
int radixsort(const unsigned char **, int, const unsigned char *,
     unsigned);
void setprogname(const char *);
int sradixsort(const unsigned char **, int, const unsigned char *,
     unsigned);
void sranddev(void);
void srandomdev(void);
void *reallocf(void *, size_t);

long long
  strtoq(const char *, char **, int);
unsigned long long
  strtouq(const char *, char **, int);

extern char *suboptarg;
void *valloc(size_t);
# 9 "main.c" 2
# 1 "/usr/local/include/gc/gc.h" 1 3
# 34 "/usr/local/include/gc/gc.h" 3
# 1 "/usr/local/include/gc/gc_version.h" 1 3
# 35 "/usr/local/include/gc/gc.h" 2 3






# 1 "/usr/local/include/gc/gc_config_macros.h" 1 3
# 150 "/usr/local/include/gc/gc_config_macros.h" 3
# 1 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stddef.h" 1 3 4
# 34 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 151 "/usr/local/include/gc/gc_config_macros.h" 2 3
# 42 "/usr/local/include/gc/gc.h" 2 3





typedef void * GC_PTR;
# 65 "/usr/local/include/gc/gc.h" 3
  typedef unsigned long GC_word;
  typedef long GC_signed_word;




extern unsigned GC_get_version(void);




extern GC_word GC_gc_no;

extern GC_word GC_get_gc_no(void);
# 103 "/usr/local/include/gc/gc.h" 3
typedef void * ( * GC_oom_func)(size_t );
extern GC_oom_func GC_oom_fn;
# 114 "/usr/local/include/gc/gc.h" 3
extern void GC_set_oom_fn(GC_oom_func);
extern GC_oom_func GC_get_oom_fn(void);

extern int GC_find_leak;







extern void GC_set_find_leak(int);
extern int GC_get_find_leak(void);

extern int GC_all_interior_pointers;
# 141 "/usr/local/include/gc/gc.h" 3
extern void GC_set_all_interior_pointers(int);
extern int GC_get_all_interior_pointers(void);

extern int GC_finalize_on_demand;






extern void GC_set_finalize_on_demand(int);
extern int GC_get_finalize_on_demand(void);

extern int GC_java_finalization;
# 163 "/usr/local/include/gc/gc.h" 3
extern void GC_set_java_finalization(int);
extern int GC_get_java_finalization(void);

typedef void ( * GC_finalizer_notifier_proc)(void);
extern GC_finalizer_notifier_proc GC_finalizer_notifier;
# 177 "/usr/local/include/gc/gc.h" 3
extern void GC_set_finalizer_notifier(GC_finalizer_notifier_proc);
extern GC_finalizer_notifier_proc GC_get_finalizer_notifier(void);

extern int GC_dont_gc;
# 190 "/usr/local/include/gc/gc.h" 3
extern int GC_dont_expand;



extern void GC_set_dont_expand(int);
extern int GC_get_dont_expand(void);

extern int GC_use_entire_heap;
# 208 "/usr/local/include/gc/gc.h" 3
extern int GC_full_freq;
# 221 "/usr/local/include/gc/gc.h" 3
extern void GC_set_full_freq(int);
extern int GC_get_full_freq(void);

extern GC_word GC_non_gc_bytes;
# 234 "/usr/local/include/gc/gc.h" 3
extern void GC_set_non_gc_bytes(GC_word);
extern GC_word GC_get_non_gc_bytes(void);

extern int GC_no_dls;
# 246 "/usr/local/include/gc/gc.h" 3
extern void GC_set_no_dls(int);
extern int GC_get_no_dls(void);

extern GC_word GC_free_space_divisor;
# 266 "/usr/local/include/gc/gc.h" 3
extern void GC_set_free_space_divisor(GC_word);
extern GC_word GC_get_free_space_divisor(void);

extern GC_word GC_max_retries;







extern void GC_set_max_retries(GC_word);
extern GC_word GC_get_max_retries(void);


extern char *GC_stackbottom;
# 296 "/usr/local/include/gc/gc.h" 3
extern int GC_dont_precollect;
# 306 "/usr/local/include/gc/gc.h" 3
extern void GC_set_dont_precollect(int);
extern int GC_get_dont_precollect(void);

extern unsigned long GC_time_limit;
# 326 "/usr/local/include/gc/gc.h" 3
extern void GC_set_time_limit(unsigned long);
extern unsigned long GC_get_time_limit(void);
# 339 "/usr/local/include/gc/gc.h" 3
extern void GC_set_pages_executable(int);





extern int GC_get_pages_executable(void);







extern void GC_set_handle_fork(int);



extern void GC_init(void);
# 372 "/usr/local/include/gc/gc.h" 3
extern void * GC_malloc(size_t )
                        __attribute__((__malloc__)) ;
extern void * GC_malloc_atomic(size_t )
                        __attribute__((__malloc__)) ;
extern char * GC_strdup(const char *) __attribute__((__malloc__));
extern char * GC_strndup(const char *, size_t) __attribute__((__malloc__));
extern void * GC_malloc_uncollectable(size_t )
                        __attribute__((__malloc__)) ;
extern void * GC_malloc_stubborn(size_t )
                        __attribute__((__malloc__)) ;


extern void * GC_memalign(size_t , size_t )
                        __attribute__((__malloc__)) ;
extern int GC_posix_memalign(void ** , size_t ,
                        size_t );







extern void GC_free(void *);
# 410 "/usr/local/include/gc/gc.h" 3
extern void GC_change_stubborn(void *);
extern void GC_end_stubborn_change(void *);
# 424 "/usr/local/include/gc/gc.h" 3
extern void * GC_base(void * );




extern size_t GC_size(const void * );
# 439 "/usr/local/include/gc/gc.h" 3
extern void * GC_realloc(void * ,
                                 size_t )
                                                                  ;



extern int GC_expand_hp(size_t );






extern void GC_set_max_heap_size(GC_word );
# 461 "/usr/local/include/gc/gc.h" 3
extern void GC_exclude_static_roots(void * ,
                                        void * );


extern void GC_clear_roots(void);




extern void GC_add_roots(void * ,
                                 void * );



extern void GC_remove_roots(void * ,
                                    void * );
# 490 "/usr/local/include/gc/gc.h" 3
extern void GC_register_displacement(size_t );



extern void GC_debug_register_displacement(size_t );


extern void GC_gcollect(void);






extern void GC_gcollect_and_unmap(void);
# 519 "/usr/local/include/gc/gc.h" 3
typedef int ( * GC_stop_func)(void);
extern int GC_try_to_collect(GC_stop_func );





extern void GC_set_stop_func(GC_stop_func );
extern GC_stop_func GC_get_stop_func(void);
# 541 "/usr/local/include/gc/gc.h" 3
extern size_t GC_get_heap_size(void);




extern size_t GC_get_free_bytes(void);





extern size_t GC_get_unmapped_bytes(void);




extern size_t GC_get_bytes_since_gc(void);




extern size_t GC_get_total_bytes(void);
# 571 "/usr/local/include/gc/gc.h" 3
extern void GC_get_heap_usage_safe(GC_word * ,
                                           GC_word * ,
                                           GC_word * ,
                                           GC_word * ,
                                           GC_word * );



extern void GC_disable(void);



extern int GC_is_disabled(void);




extern void GC_enable(void);
# 601 "/usr/local/include/gc/gc.h" 3
extern void GC_enable_incremental(void);
# 611 "/usr/local/include/gc/gc.h" 3
extern int GC_incremental_protection_needs(void);
# 620 "/usr/local/include/gc/gc.h" 3
extern int GC_collect_a_little(void);
# 636 "/usr/local/include/gc/gc.h" 3
extern void * GC_malloc_ignore_off_page(size_t )
                        __attribute__((__malloc__)) ;
extern void * GC_malloc_atomic_ignore_off_page(size_t )
                        __attribute__((__malloc__)) ;
# 651 "/usr/local/include/gc/gc.h" 3
extern void * GC_malloc_atomic_uncollectable(
                                                size_t )
                        __attribute__((__malloc__)) ;
extern void * GC_debug_malloc_atomic_uncollectable(size_t,
                                                           const char * s, int i)
                        __attribute__((__malloc__)) ;



extern void * GC_debug_malloc(size_t ,
                                      const char * s, int i)
                        __attribute__((__malloc__)) ;
extern void * GC_debug_malloc_atomic(size_t ,
                                             const char * s, int i)
                        __attribute__((__malloc__)) ;
extern char * GC_debug_strdup(const char *,
                                      const char * s, int i) __attribute__((__malloc__));
extern char * GC_debug_strndup(const char *, size_t,
                                       const char * s, int i) __attribute__((__malloc__));
extern void * GC_debug_malloc_uncollectable(
                        size_t , const char * s, int i)
                        __attribute__((__malloc__)) ;
extern void * GC_debug_malloc_stubborn(size_t ,
                                               const char * s, int i)
                        __attribute__((__malloc__)) ;
extern void * GC_debug_malloc_ignore_off_page(
                        size_t , const char * s, int i)
                        __attribute__((__malloc__)) ;
extern void * GC_debug_malloc_atomic_ignore_off_page(
                        size_t , const char * s, int i)
                        __attribute__((__malloc__)) ;
extern void GC_debug_free(void *);
extern void * GC_debug_realloc(void * ,
                        size_t , const char * s, int i)
                                                                  ;
extern void GC_debug_change_stubborn(void *);
extern void GC_debug_end_stubborn_change(void *);
# 701 "/usr/local/include/gc/gc.h" 3
extern void * GC_debug_malloc_replacement(size_t )
                        __attribute__((__malloc__)) ;
extern void * GC_debug_realloc_replacement(void * ,
                                                   size_t )
                                                                  ;
# 802 "/usr/local/include/gc/gc.h" 3
typedef void ( * GC_finalization_proc)(void * ,
                                                  void * );

extern void GC_register_finalizer(void * ,
                        GC_finalization_proc , void * ,
                        GC_finalization_proc * , void ** );
extern void GC_debug_register_finalizer(void * ,
                        GC_finalization_proc , void * ,
                        GC_finalization_proc * , void ** );
# 859 "/usr/local/include/gc/gc.h" 3
extern void GC_register_finalizer_ignore_self(void * ,
                        GC_finalization_proc , void * ,
                        GC_finalization_proc * , void ** );
extern void GC_debug_register_finalizer_ignore_self(void * ,
                        GC_finalization_proc , void * ,
                        GC_finalization_proc * , void ** );





extern void GC_register_finalizer_no_order(void * ,
                        GC_finalization_proc , void * ,
                        GC_finalization_proc * , void ** );
extern void GC_debug_register_finalizer_no_order(void * ,
                        GC_finalization_proc , void * ,
                        GC_finalization_proc * , void ** );
# 893 "/usr/local/include/gc/gc.h" 3
extern void GC_register_finalizer_unreachable(void * ,
                        GC_finalization_proc , void * ,
                        GC_finalization_proc * , void ** );
extern void GC_debug_register_finalizer_unreachable(void * ,
                        GC_finalization_proc , void * ,
                        GC_finalization_proc * , void ** );
# 909 "/usr/local/include/gc/gc.h" 3
extern int GC_register_disappearing_link(void ** );
# 930 "/usr/local/include/gc/gc.h" 3
extern int GC_general_register_disappearing_link(void ** ,
                                                         void * );
# 963 "/usr/local/include/gc/gc.h" 3
extern int GC_unregister_disappearing_link(void ** );





extern int GC_should_invoke_finalizers(void);

extern int GC_invoke_finalizers(void);
# 999 "/usr/local/include/gc/gc.h" 3
typedef void ( * GC_warn_proc)(char * ,
                                          GC_word );
extern void GC_set_warn_proc(GC_warn_proc );

extern GC_warn_proc GC_get_warn_proc(void);



extern void GC_ignore_warn_proc(char *, GC_word);
# 1017 "/usr/local/include/gc/gc.h" 3
typedef GC_word GC_hidden_pointer;
# 1031 "/usr/local/include/gc/gc.h" 3
typedef void * ( * GC_fn_type)(void * );
extern void * GC_call_with_alloc_lock(GC_fn_type ,
                                                void * );
# 1047 "/usr/local/include/gc/gc.h" 3
struct GC_stack_base {
  void * mem_base;



};

typedef void * ( * GC_stack_base_func)(
                struct GC_stack_base * , void * );





extern void * GC_call_with_stack_base(GC_stack_base_func ,
                                              void * );
# 1138 "/usr/local/include/gc/gc.h" 3
extern void * GC_do_blocking(GC_fn_type ,
                                     void * );
# 1150 "/usr/local/include/gc/gc.h" 3
extern void * GC_call_with_gc_active(GC_fn_type ,
                                             void * );
# 1160 "/usr/local/include/gc/gc.h" 3
extern int GC_get_stack_base(struct GC_stack_base *);
# 1171 "/usr/local/include/gc/gc.h" 3
extern void * GC_same_obj(void * , void * );





extern void * GC_pre_incr(void **, ptrdiff_t );
extern void * GC_post_incr(void **, ptrdiff_t );
# 1188 "/usr/local/include/gc/gc.h" 3
extern void * GC_is_visible(void * );






extern void * GC_is_valid_displacement(void * );





extern void GC_dump(void);
# 1241 "/usr/local/include/gc/gc.h" 3
extern void ( * GC_same_obj_print_proc)(void * ,
                                                   void * );
extern void ( * GC_is_valid_displacement_print_proc)(void *);
extern void ( * GC_is_visible_print_proc)(void *);
# 1255 "/usr/local/include/gc/gc.h" 3
extern void * GC_malloc_many(size_t );
# 1267 "/usr/local/include/gc/gc.h" 3
typedef int ( * GC_has_static_roots_func)(
                                        const char * ,
                                        void * ,
                                        size_t );





extern void GC_register_has_static_roots_callback(
                                        GC_has_static_roots_func);
# 1378 "/usr/local/include/gc/gc.h" 3
extern void GC_set_force_unmap_on_gcollect(int);
extern int GC_get_force_unmap_on_gcollect(void);
# 1498 "/usr/local/include/gc/gc.h" 3
extern void GC_win32_free_heap(void);
# 10 "main.c" 2
# 1 "./pegvm.h" 1
# 1 "./input_source.h" 1







# 1 "/usr/include/assert.h" 1 3 4
# 76 "/usr/include/assert.h" 3 4
void __assert_rtn(const char *, const char *, int, const char *) __attribute__((noreturn));
# 9 "./input_source.h" 2



typedef struct InputSource {
  const char *source;
  size_t pos;
  size_t length;
  const char *filename;
} InputSource;

InputSource *InputSource_Init(InputSource *is, const char *filename);
void InputSource_Dispose(InputSource *is);

static inline uint8_t InputSource_GetUint8(InputSource *input)
{
    return (input->pos < input->length) ?
        ((uint8_t *)input->source)[input->pos++] : -1;
}

uint8_t *InputSource_CopyText(InputSource *input, size_t pos, size_t length);

static inline uint32_t InputSource_GetUint32(InputSource *input)
{
    uint32_t data;
    (__builtin_expect(!(input->pos < input->length), 0) ? __assert_rtn(__func__, "./input_source.h", 33, "input->pos < input->length") : (void)0);
    data = ((uint32_t *)input->source)[input->pos];
    input->pos += sizeof(uint32_t) / sizeof(uint8_t);
    return data;
}
# 2 "./pegvm.h" 2
# 1 "./loader.h" 1





# 1 "./input_source.h" 1







# 1 "/usr/include/assert.h" 1 3 4
# 76 "/usr/include/assert.h" 3 4
void __assert_rtn(const char *, const char *, int, const char *) __attribute__((noreturn));
# 9 "./input_source.h" 2
# 7 "./loader.h" 2



typedef struct Instruction {
    long opcode;
    union {
        unsigned long ndata;
        uint8_t *bdata;
        struct Instruction *dst;
    };
} PegVMInstruction, Instruction;

PegVMInstruction *ByteCodeLoader_Load(InputSource *input);
void PegVMInstruction_dump(PegVMInstruction *code, size_t len);
# 3 "./pegvm.h" 2
# 1 "./node.h" 1

# 1 "./input_source.h" 1







# 1 "/usr/include/assert.h" 1 3 4
# 76 "/usr/include/assert.h" 3 4
void __assert_rtn(const char *, const char *, int, const char *) __attribute__((noreturn));
# 9 "./input_source.h" 2
# 3 "./node.h" 2



typedef struct NODE NODE;

NODE *NODE_New(unsigned type, size_t pos);
void NODE_Dispose(NODE *self);
void NODE_SetTag(NODE *self, uint8_t *bdata, InputSource *input);
uint8_t *NODE_GetText(NODE *self);
uint8_t *NODE_GetTag(NODE *self);
void NODE_AppendChild(NODE *parent, NODE *node);
void NODE_Dump(NODE *node, int level);
NODE **Node_GetChildren(NODE *node, unsigned *length);

enum node_type {
  NODE_TYPE_DEFAULT
};
# 4 "./pegvm.h" 2







typedef struct ParserContext {
    long *stack_pointer;
    PegVMInstruction **call_stack_pointer;
    size_t failure_pos;
    NODE *current_node;
    InputSource *current_source;
    PegVMInstruction *instructions;
    long *stack_pointer_base;
    PegVMInstruction **call_stack_pointer_base;
    char last_error[256];
} ParserContext;

void ParserContext_Init(ParserContext *context);
void ParserContext_Dispose(ParserContext *context);
int ParserContext_LoadSyntax(ParserContext *context, const char *file);
int ParserContext_Execute(ParserContext *context, PegVMInstruction *inst, InputSource *input);
int ParserContext_ParseFiles(ParserContext *context, int argc, char **argv);
# 73 "./pegvm.h"
enum pegvm_opcode {

    PEGVM_OP_EXIT, PEGVM_OP_JUMP, PEGVM_OP_CALL, PEGVM_OP_RET, PEGVM_OP_IFSUCC, PEGVM_OP_IFFAIL, PEGVM_OP_NOP, PEGVM_OP_Failure, PEGVM_OP_MatchText, PEGVM_OP_MatchByteChar, PEGVM_OP_MatchCharset, PEGVM_OP_MatchAnyChar, PEGVM_OP_MatchTextNot, PEGVM_OP_MatchByteCharNot, PEGVM_OP_MatchCharsetNot, PEGVM_OP_MatchOptionalText, PEGVM_OP_MatchOptionalByteChar, PEGVM_OP_MatchOptionalCharset, PEGVM_OP_RememberPosition, PEGVM_OP_CommitPosition, PEGVM_OP_BacktrackPosition, PEGVM_OP_RememberSequencePosition, PEGVM_OP_CommitSequencePosition, PEGVM_OP_BackTrackSequencePosition, PEGVM_OP_RememberFailurePosition, PEGVM_OP_UpdateFailurePosition, PEGVM_OP_ForgetFailurePosition, PEGVM_OP_StoreObject, PEGVM_OP_DropStoredObject, PEGVM_OP_RestoreObject, PEGVM_OP_RestoreObjectIfFailure, PEGVM_OP_RestoreNegativeObject, PEGVM_OP_ConnectObject, PEGVM_OP_DisableTransCapture, PEGVM_OP_EnableTransCapture, PEGVM_OP_NewObject, PEGVM_OP_LeftJoinObject, PEGVM_OP_CommitObject, PEGVM_OP_RefreshStoredObject, PEGVM_OP_Tagging, PEGVM_OP_Value, PEGVM_OP_Indent,

    PEGVM_OP_ERROR = -1
};
# 11 "main.c" 2

static void pegvm_usage(const char *file)
{
    fprintf(__stderrp, "Usage: %s -f peg_bytecode target_file\n", file);
    exit(1);
}

static void pegvm_error(const char *errmsg)
{
    fprintf(__stderrp, "%s\n", errmsg);
    exit(1);
}

int main(int argc, char * const argv[])
{
    ParserContext context;
    {;;;;;;; GC_init();;;; } ;
    const char *syntax_file = ((void*)0);
    const char *orig_argv0 = argv[0];
    int opt;
    while ((opt = getopt(argc, argv, "f:")) != -1) {
        switch (opt) {
        case 'f':
            syntax_file = optarg;
            break;
        default:
            pegvm_usage(orig_argv0);
        }
    }
    if (syntax_file == ((void*)0)) {
        pegvm_usage(orig_argv0);
    }
    argc -= optind;
    argv += optind;
    if (argc == 0) {
        pegvm_usage(orig_argv0);
    }
    ParserContext_Init(&context);
    if (ParserContext_LoadSyntax(&context, syntax_file)) {
        pegvm_error("invalid bytecode");
    }
    if (ParserContext_ParseFiles(&context, argc, (char **)argv)) {
        pegvm_error(context.last_error);
    }
    ParserContext_Dispose(&context);
    return 0;
}
# 1 "karray.h"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 170 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "karray.h" 2
# 26 "karray.h"
# 1 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdbool.h" 1 3 4
# 27 "karray.h" 2
# 1 "/usr/local/include/gc/gc.h" 1 3
# 34 "/usr/local/include/gc/gc.h" 3
# 1 "/usr/local/include/gc/gc_version.h" 1 3
# 35 "/usr/local/include/gc/gc.h" 2 3






# 1 "/usr/local/include/gc/gc_config_macros.h" 1 3
# 150 "/usr/local/include/gc/gc_config_macros.h" 3
# 1 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stddef.h" 1 3 4
# 34 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stddef.h" 3 4
typedef long int ptrdiff_t;







typedef long unsigned int size_t;
# 65 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stddef.h" 3 4
typedef int wchar_t;
# 151 "/usr/local/include/gc/gc_config_macros.h" 2 3
# 42 "/usr/local/include/gc/gc.h" 2 3





typedef void * GC_PTR;
# 65 "/usr/local/include/gc/gc.h" 3
  typedef unsigned long GC_word;
  typedef long GC_signed_word;




extern unsigned GC_get_version(void);




extern GC_word GC_gc_no;

extern GC_word GC_get_gc_no(void);
# 103 "/usr/local/include/gc/gc.h" 3
typedef void * ( * GC_oom_func)(size_t );
extern GC_oom_func GC_oom_fn;
# 114 "/usr/local/include/gc/gc.h" 3
extern void GC_set_oom_fn(GC_oom_func);
extern GC_oom_func GC_get_oom_fn(void);

extern int GC_find_leak;







extern void GC_set_find_leak(int);
extern int GC_get_find_leak(void);

extern int GC_all_interior_pointers;
# 141 "/usr/local/include/gc/gc.h" 3
extern void GC_set_all_interior_pointers(int);
extern int GC_get_all_interior_pointers(void);

extern int GC_finalize_on_demand;






extern void GC_set_finalize_on_demand(int);
extern int GC_get_finalize_on_demand(void);

extern int GC_java_finalization;
# 163 "/usr/local/include/gc/gc.h" 3
extern void GC_set_java_finalization(int);
extern int GC_get_java_finalization(void);

typedef void ( * GC_finalizer_notifier_proc)(void);
extern GC_finalizer_notifier_proc GC_finalizer_notifier;
# 177 "/usr/local/include/gc/gc.h" 3
extern void GC_set_finalizer_notifier(GC_finalizer_notifier_proc);
extern GC_finalizer_notifier_proc GC_get_finalizer_notifier(void);

extern int GC_dont_gc;
# 190 "/usr/local/include/gc/gc.h" 3
extern int GC_dont_expand;



extern void GC_set_dont_expand(int);
extern int GC_get_dont_expand(void);

extern int GC_use_entire_heap;
# 208 "/usr/local/include/gc/gc.h" 3
extern int GC_full_freq;
# 221 "/usr/local/include/gc/gc.h" 3
extern void GC_set_full_freq(int);
extern int GC_get_full_freq(void);

extern GC_word GC_non_gc_bytes;
# 234 "/usr/local/include/gc/gc.h" 3
extern void GC_set_non_gc_bytes(GC_word);
extern GC_word GC_get_non_gc_bytes(void);

extern int GC_no_dls;
# 246 "/usr/local/include/gc/gc.h" 3
extern void GC_set_no_dls(int);
extern int GC_get_no_dls(void);

extern GC_word GC_free_space_divisor;
# 266 "/usr/local/include/gc/gc.h" 3
extern void GC_set_free_space_divisor(GC_word);
extern GC_word GC_get_free_space_divisor(void);

extern GC_word GC_max_retries;







extern void GC_set_max_retries(GC_word);
extern GC_word GC_get_max_retries(void);


extern char *GC_stackbottom;
# 296 "/usr/local/include/gc/gc.h" 3
extern int GC_dont_precollect;
# 306 "/usr/local/include/gc/gc.h" 3
extern void GC_set_dont_precollect(int);
extern int GC_get_dont_precollect(void);

extern unsigned long GC_time_limit;
# 326 "/usr/local/include/gc/gc.h" 3
extern void GC_set_time_limit(unsigned long);
extern unsigned long GC_get_time_limit(void);
# 339 "/usr/local/include/gc/gc.h" 3
extern void GC_set_pages_executable(int);





extern int GC_get_pages_executable(void);







extern void GC_set_handle_fork(int);



extern void GC_init(void);
# 372 "/usr/local/include/gc/gc.h" 3
extern void * GC_malloc(size_t )
                        __attribute__((__malloc__)) ;
extern void * GC_malloc_atomic(size_t )
                        __attribute__((__malloc__)) ;
extern char * GC_strdup(const char *) __attribute__((__malloc__));
extern char * GC_strndup(const char *, size_t) __attribute__((__malloc__));
extern void * GC_malloc_uncollectable(size_t )
                        __attribute__((__malloc__)) ;
extern void * GC_malloc_stubborn(size_t )
                        __attribute__((__malloc__)) ;


extern void * GC_memalign(size_t , size_t )
                        __attribute__((__malloc__)) ;
extern int GC_posix_memalign(void ** , size_t ,
                        size_t );







extern void GC_free(void *);
# 410 "/usr/local/include/gc/gc.h" 3
extern void GC_change_stubborn(void *);
extern void GC_end_stubborn_change(void *);
# 424 "/usr/local/include/gc/gc.h" 3
extern void * GC_base(void * );




extern size_t GC_size(const void * );
# 439 "/usr/local/include/gc/gc.h" 3
extern void * GC_realloc(void * ,
                                 size_t )
                                                                  ;



extern int GC_expand_hp(size_t );






extern void GC_set_max_heap_size(GC_word );
# 461 "/usr/local/include/gc/gc.h" 3
extern void GC_exclude_static_roots(void * ,
                                        void * );


extern void GC_clear_roots(void);




extern void GC_add_roots(void * ,
                                 void * );



extern void GC_remove_roots(void * ,
                                    void * );
# 490 "/usr/local/include/gc/gc.h" 3
extern void GC_register_displacement(size_t );



extern void GC_debug_register_displacement(size_t );


extern void GC_gcollect(void);






extern void GC_gcollect_and_unmap(void);
# 519 "/usr/local/include/gc/gc.h" 3
typedef int ( * GC_stop_func)(void);
extern int GC_try_to_collect(GC_stop_func );





extern void GC_set_stop_func(GC_stop_func );
extern GC_stop_func GC_get_stop_func(void);
# 541 "/usr/local/include/gc/gc.h" 3
extern size_t GC_get_heap_size(void);




extern size_t GC_get_free_bytes(void);





extern size_t GC_get_unmapped_bytes(void);




extern size_t GC_get_bytes_since_gc(void);




extern size_t GC_get_total_bytes(void);
# 571 "/usr/local/include/gc/gc.h" 3
extern void GC_get_heap_usage_safe(GC_word * ,
                                           GC_word * ,
                                           GC_word * ,
                                           GC_word * ,
                                           GC_word * );



extern void GC_disable(void);



extern int GC_is_disabled(void);




extern void GC_enable(void);
# 601 "/usr/local/include/gc/gc.h" 3
extern void GC_enable_incremental(void);
# 611 "/usr/local/include/gc/gc.h" 3
extern int GC_incremental_protection_needs(void);
# 620 "/usr/local/include/gc/gc.h" 3
extern int GC_collect_a_little(void);
# 636 "/usr/local/include/gc/gc.h" 3
extern void * GC_malloc_ignore_off_page(size_t )
                        __attribute__((__malloc__)) ;
extern void * GC_malloc_atomic_ignore_off_page(size_t )
                        __attribute__((__malloc__)) ;
# 651 "/usr/local/include/gc/gc.h" 3
extern void * GC_malloc_atomic_uncollectable(
                                                size_t )
                        __attribute__((__malloc__)) ;
extern void * GC_debug_malloc_atomic_uncollectable(size_t,
                                                           const char * s, int i)
                        __attribute__((__malloc__)) ;



extern void * GC_debug_malloc(size_t ,
                                      const char * s, int i)
                        __attribute__((__malloc__)) ;
extern void * GC_debug_malloc_atomic(size_t ,
                                             const char * s, int i)
                        __attribute__((__malloc__)) ;
extern char * GC_debug_strdup(const char *,
                                      const char * s, int i) __attribute__((__malloc__));
extern char * GC_debug_strndup(const char *, size_t,
                                       const char * s, int i) __attribute__((__malloc__));
extern void * GC_debug_malloc_uncollectable(
                        size_t , const char * s, int i)
                        __attribute__((__malloc__)) ;
extern void * GC_debug_malloc_stubborn(size_t ,
                                               const char * s, int i)
                        __attribute__((__malloc__)) ;
extern void * GC_debug_malloc_ignore_off_page(
                        size_t , const char * s, int i)
                        __attribute__((__malloc__)) ;
extern void * GC_debug_malloc_atomic_ignore_off_page(
                        size_t , const char * s, int i)
                        __attribute__((__malloc__)) ;
extern void GC_debug_free(void *);
extern void * GC_debug_realloc(void * ,
                        size_t , const char * s, int i)
                                                                  ;
extern void GC_debug_change_stubborn(void *);
extern void GC_debug_end_stubborn_change(void *);
# 701 "/usr/local/include/gc/gc.h" 3
extern void * GC_debug_malloc_replacement(size_t )
                        __attribute__((__malloc__)) ;
extern void * GC_debug_realloc_replacement(void * ,
                                                   size_t )
                                                                  ;
# 802 "/usr/local/include/gc/gc.h" 3
typedef void ( * GC_finalization_proc)(void * ,
                                                  void * );

extern void GC_register_finalizer(void * ,
                        GC_finalization_proc , void * ,
                        GC_finalization_proc * , void ** );
extern void GC_debug_register_finalizer(void * ,
                        GC_finalization_proc , void * ,
                        GC_finalization_proc * , void ** );
# 859 "/usr/local/include/gc/gc.h" 3
extern void GC_register_finalizer_ignore_self(void * ,
                        GC_finalization_proc , void * ,
                        GC_finalization_proc * , void ** );
extern void GC_debug_register_finalizer_ignore_self(void * ,
                        GC_finalization_proc , void * ,
                        GC_finalization_proc * , void ** );





extern void GC_register_finalizer_no_order(void * ,
                        GC_finalization_proc , void * ,
                        GC_finalization_proc * , void ** );
extern void GC_debug_register_finalizer_no_order(void * ,
                        GC_finalization_proc , void * ,
                        GC_finalization_proc * , void ** );
# 893 "/usr/local/include/gc/gc.h" 3
extern void GC_register_finalizer_unreachable(void * ,
                        GC_finalization_proc , void * ,
                        GC_finalization_proc * , void ** );
extern void GC_debug_register_finalizer_unreachable(void * ,
                        GC_finalization_proc , void * ,
                        GC_finalization_proc * , void ** );
# 909 "/usr/local/include/gc/gc.h" 3
extern int GC_register_disappearing_link(void ** );
# 930 "/usr/local/include/gc/gc.h" 3
extern int GC_general_register_disappearing_link(void ** ,
                                                         void * );
# 963 "/usr/local/include/gc/gc.h" 3
extern int GC_unregister_disappearing_link(void ** );





extern int GC_should_invoke_finalizers(void);

extern int GC_invoke_finalizers(void);
# 999 "/usr/local/include/gc/gc.h" 3
typedef void ( * GC_warn_proc)(char * ,
                                          GC_word );
extern void GC_set_warn_proc(GC_warn_proc );

extern GC_warn_proc GC_get_warn_proc(void);



extern void GC_ignore_warn_proc(char *, GC_word);
# 1017 "/usr/local/include/gc/gc.h" 3
typedef GC_word GC_hidden_pointer;
# 1031 "/usr/local/include/gc/gc.h" 3
typedef void * ( * GC_fn_type)(void * );
extern void * GC_call_with_alloc_lock(GC_fn_type ,
                                                void * );
# 1047 "/usr/local/include/gc/gc.h" 3
struct GC_stack_base {
  void * mem_base;



};

typedef void * ( * GC_stack_base_func)(
                struct GC_stack_base * , void * );





extern void * GC_call_with_stack_base(GC_stack_base_func ,
                                              void * );
# 1138 "/usr/local/include/gc/gc.h" 3
extern void * GC_do_blocking(GC_fn_type ,
                                     void * );
# 1150 "/usr/local/include/gc/gc.h" 3
extern void * GC_call_with_gc_active(GC_fn_type ,
                                             void * );
# 1160 "/usr/local/include/gc/gc.h" 3
extern int GC_get_stack_base(struct GC_stack_base *);
# 1171 "/usr/local/include/gc/gc.h" 3
extern void * GC_same_obj(void * , void * );





extern void * GC_pre_incr(void **, ptrdiff_t );
extern void * GC_post_incr(void **, ptrdiff_t );
# 1188 "/usr/local/include/gc/gc.h" 3
extern void * GC_is_visible(void * );






extern void * GC_is_valid_displacement(void * );





extern void GC_dump(void);
# 1241 "/usr/local/include/gc/gc.h" 3
extern void ( * GC_same_obj_print_proc)(void * ,
                                                   void * );
extern void ( * GC_is_valid_displacement_print_proc)(void *);
extern void ( * GC_is_visible_print_proc)(void *);
# 1255 "/usr/local/include/gc/gc.h" 3
extern void * GC_malloc_many(size_t );
# 1267 "/usr/local/include/gc/gc.h" 3
typedef int ( * GC_has_static_roots_func)(
                                        const char * ,
                                        void * ,
                                        size_t );





extern void GC_register_has_static_roots_callback(
                                        GC_has_static_roots_func);
# 1378 "/usr/local/include/gc/gc.h" 3
extern void GC_set_force_unmap_on_gcollect(int);
extern int GC_get_force_unmap_on_gcollect(void);
# 1498 "/usr/local/include/gc/gc.h" 3
extern void GC_win32_free_heap(void);
# 28 "karray.h" 2
# 1 "/usr/include/assert.h" 1 3 4
# 42 "/usr/include/assert.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 484 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 485 "/usr/include/sys/cdefs.h" 2 3 4
# 550 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_posix_availability.h" 1 3 4
# 551 "/usr/include/sys/cdefs.h" 2 3 4
# 43 "/usr/include/assert.h" 2 3 4
# 76 "/usr/include/assert.h" 3 4
void __assert_rtn(const char *, const char *, int, const char *) __attribute__((noreturn));
# 29 "karray.h" 2
# 1 "/usr/include/string.h" 1 3 4
# 61 "/usr/include/string.h" 3 4
# 1 "/usr/include/_types.h" 1 3 4
# 27 "/usr/include/_types.h" 3 4
# 1 "/usr/include/sys/_types.h" 1 3 4
# 33 "/usr/include/sys/_types.h" 3 4
# 1 "/usr/include/machine/_types.h" 1 3 4
# 32 "/usr/include/machine/_types.h" 3 4
# 1 "/usr/include/i386/_types.h" 1 3 4
# 37 "/usr/include/i386/_types.h" 3 4
typedef signed char __int8_t;



typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long long __int64_t;
typedef unsigned long long __uint64_t;

typedef long __darwin_intptr_t;
typedef unsigned int __darwin_natural_t;
# 70 "/usr/include/i386/_types.h" 3 4
typedef int __darwin_ct_rune_t;





typedef union {
 char __mbstate8[128];
 long long _mbstateL;
} __mbstate_t;

typedef __mbstate_t __darwin_mbstate_t;


typedef long int __darwin_ptrdiff_t;







typedef long unsigned int __darwin_size_t;





typedef __builtin_va_list __darwin_va_list;





typedef int __darwin_wchar_t;




typedef __darwin_wchar_t __darwin_rune_t;


typedef int __darwin_wint_t;




typedef unsigned long __darwin_clock_t;
typedef __uint32_t __darwin_socklen_t;
typedef long __darwin_ssize_t;
typedef long __darwin_time_t;
# 33 "/usr/include/machine/_types.h" 2 3 4
# 34 "/usr/include/sys/_types.h" 2 3 4
# 58 "/usr/include/sys/_types.h" 3 4
struct __darwin_pthread_handler_rec
{
 void (*__routine)(void *);
 void *__arg;
 struct __darwin_pthread_handler_rec *__next;
};
struct _opaque_pthread_attr_t { long __sig; char __opaque[56]; };
struct _opaque_pthread_cond_t { long __sig; char __opaque[40]; };
struct _opaque_pthread_condattr_t { long __sig; char __opaque[8]; };
struct _opaque_pthread_mutex_t { long __sig; char __opaque[56]; };
struct _opaque_pthread_mutexattr_t { long __sig; char __opaque[8]; };
struct _opaque_pthread_once_t { long __sig; char __opaque[8]; };
struct _opaque_pthread_rwlock_t { long __sig; char __opaque[192]; };
struct _opaque_pthread_rwlockattr_t { long __sig; char __opaque[16]; };
struct _opaque_pthread_t { long __sig; struct __darwin_pthread_handler_rec *__cleanup_stack; char __opaque[1168]; };
# 94 "/usr/include/sys/_types.h" 3 4
typedef __int64_t __darwin_blkcnt_t;
typedef __int32_t __darwin_blksize_t;
typedef __int32_t __darwin_dev_t;
typedef unsigned int __darwin_fsblkcnt_t;
typedef unsigned int __darwin_fsfilcnt_t;
typedef __uint32_t __darwin_gid_t;
typedef __uint32_t __darwin_id_t;
typedef __uint64_t __darwin_ino64_t;

typedef __darwin_ino64_t __darwin_ino_t;



typedef __darwin_natural_t __darwin_mach_port_name_t;
typedef __darwin_mach_port_name_t __darwin_mach_port_t;
typedef __uint16_t __darwin_mode_t;
typedef __int64_t __darwin_off_t;
typedef __int32_t __darwin_pid_t;
typedef struct _opaque_pthread_attr_t
   __darwin_pthread_attr_t;
typedef struct _opaque_pthread_cond_t
   __darwin_pthread_cond_t;
typedef struct _opaque_pthread_condattr_t
   __darwin_pthread_condattr_t;
typedef unsigned long __darwin_pthread_key_t;
typedef struct _opaque_pthread_mutex_t
   __darwin_pthread_mutex_t;
typedef struct _opaque_pthread_mutexattr_t
   __darwin_pthread_mutexattr_t;
typedef struct _opaque_pthread_once_t
   __darwin_pthread_once_t;
typedef struct _opaque_pthread_rwlock_t
   __darwin_pthread_rwlock_t;
typedef struct _opaque_pthread_rwlockattr_t
   __darwin_pthread_rwlockattr_t;
typedef struct _opaque_pthread_t
   *__darwin_pthread_t;
typedef __uint32_t __darwin_sigset_t;
typedef __int32_t __darwin_suseconds_t;
typedef __uint32_t __darwin_uid_t;
typedef __uint32_t __darwin_useconds_t;
typedef unsigned char __darwin_uuid_t[16];
typedef char __darwin_uuid_string_t[37];
# 28 "/usr/include/_types.h" 2 3 4
# 39 "/usr/include/_types.h" 3 4
typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;

typedef __uint32_t __darwin_wctype_t;
# 62 "/usr/include/string.h" 2 3 4

# 1 "/usr/include/Availability.h" 1 3 4
# 148 "/usr/include/Availability.h" 3 4
# 1 "/usr/include/AvailabilityInternal.h" 1 3 4
# 149 "/usr/include/Availability.h" 2 3 4
# 64 "/usr/include/string.h" 2 3 4
# 1 "/usr/include/sys/_types/_size_t.h" 1 3 4
# 65 "/usr/include/string.h" 2 3 4
# 1 "/usr/include/sys/_types/_null.h" 1 3 4
# 66 "/usr/include/string.h" 2 3 4




void *memchr(const void *, int, size_t);
int memcmp(const void *, const void *, size_t);
void *memcpy(void *, const void *, size_t);
void *memmove(void *, const void *, size_t);
void *memset(void *, int, size_t);
char *strcat(char *, const char *);
char *strchr(const char *, int);
int strcmp(const char *, const char *);
int strcoll(const char *, const char *);
char *strcpy(char *, const char *);
size_t strcspn(const char *, const char *);
char *strerror(int) __asm("_" "strerror") ;
size_t strlen(const char *);
char *strncat(char *, const char *, size_t);
int strncmp(const char *, const char *, size_t);
char *strncpy(char *, const char *, size_t);
char *strpbrk(const char *, const char *);
char *strrchr(const char *, int);
size_t strspn(const char *, const char *);
char *strstr(const char *, const char *);
char *strtok(char *, const char *);
size_t strxfrm(char *, const char *, size_t);
# 104 "/usr/include/string.h" 3 4
char *strtok_r(char *, const char *, char **);
# 116 "/usr/include/string.h" 3 4
int strerror_r(int, char *, size_t);
char *strdup(const char *);
void *memccpy(void *, const void *, int, size_t);
# 130 "/usr/include/string.h" 3 4
char *stpcpy(char *, const char *);
char *stpncpy(char *, const char *, size_t) __attribute__((availability(macosx,introduced=10.7)));
char *strndup(const char *, size_t) __attribute__((availability(macosx,introduced=10.7)));
size_t strnlen(const char *, size_t) __attribute__((availability(macosx,introduced=10.7)));
char *strsignal(int sig);







# 1 "/usr/include/sys/_types/_rsize_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_rsize_t.h" 3 4
typedef __darwin_size_t rsize_t;
# 142 "/usr/include/string.h" 2 3 4
# 1 "/usr/include/sys/_types/_errno_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_errno_t.h" 3 4
typedef int errno_t;
# 143 "/usr/include/string.h" 2 3 4


errno_t memset_s(void *, rsize_t, int, rsize_t) __attribute__((availability(macosx,introduced=10.9)));







# 1 "/usr/include/sys/_types/_ssize_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_ssize_t.h" 3 4
typedef __darwin_ssize_t ssize_t;
# 153 "/usr/include/string.h" 2 3 4


void *memmem(const void *, size_t, const void *, size_t) __attribute__((availability(macosx,introduced=10.7)));
void memset_pattern4(void *, const void *, size_t) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern8(void *, const void *, size_t) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern16(void *, const void *, size_t) __attribute__((availability(macosx,introduced=10.5)));

char *strcasestr(const char *, const char *);
char *strnstr(const char *, const char *, size_t);
size_t strlcat(char *, const char *, size_t);
size_t strlcpy(char *, const char *, size_t);
void strmode(int, char *);
char *strsep(char **, const char *);


void swab(const void * restrict, void * restrict, ssize_t);








# 1 "/usr/include/strings.h" 1 3 4
# 65 "/usr/include/strings.h" 3 4
# 1 "/usr/include/sys/_types/_size_t.h" 1 3 4
# 66 "/usr/include/strings.h" 2 3 4




int bcmp(const void *, const void *, size_t) ;
void bcopy(const void *, void *, size_t) ;
void bzero(void *, size_t) ;
char *index(const char *, int) ;
char *rindex(const char *, int) ;


int ffs(int);
int strcasecmp(const char *, const char *);
int strncasecmp(const char *, const char *, size_t);





int ffsl(long) __attribute__((availability(macosx,introduced=10.5)));
int ffsll(long long) __attribute__((availability(macosx,introduced=10.9)));
int fls(int) __attribute__((availability(macosx,introduced=10.5)));
int flsl(long) __attribute__((availability(macosx,introduced=10.5)));
int flsll(long long) __attribute__((availability(macosx,introduced=10.9)));



# 1 "/usr/include/string.h" 1 3 4
# 93 "/usr/include/strings.h" 2 3 4
# 177 "/usr/include/string.h" 2 3 4
# 186 "/usr/include/string.h" 3 4
# 1 "/usr/include/secure/_string.h" 1 3 4
# 33 "/usr/include/secure/_string.h" 3 4
# 1 "/usr/include/secure/_common.h" 1 3 4
# 34 "/usr/include/secure/_string.h" 2 3 4
# 187 "/usr/include/string.h" 2 3 4
# 30 "karray.h" 2

# 1 "loader.generated.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 170 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "loader.generated.c" 2


# 1 "./karray.h" 1
# 26 "./karray.h"
# 1 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdbool.h" 1 3 4
# 27 "./karray.h" 2
# 1 "/usr/local/include/gc/gc.h" 1 3
# 34 "/usr/local/include/gc/gc.h" 3
# 1 "/usr/local/include/gc/gc_version.h" 1 3
# 35 "/usr/local/include/gc/gc.h" 2 3






# 1 "/usr/local/include/gc/gc_config_macros.h" 1 3
# 150 "/usr/local/include/gc/gc_config_macros.h" 3
# 1 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stddef.h" 1 3 4
# 34 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stddef.h" 3 4
typedef long int ptrdiff_t;







typedef long unsigned int size_t;
# 65 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stddef.h" 3 4
typedef int wchar_t;
# 151 "/usr/local/include/gc/gc_config_macros.h" 2 3
# 42 "/usr/local/include/gc/gc.h" 2 3





typedef void * GC_PTR;
# 65 "/usr/local/include/gc/gc.h" 3
  typedef unsigned long GC_word;
  typedef long GC_signed_word;




extern unsigned GC_get_version(void);




extern GC_word GC_gc_no;

extern GC_word GC_get_gc_no(void);
# 103 "/usr/local/include/gc/gc.h" 3
typedef void * ( * GC_oom_func)(size_t );
extern GC_oom_func GC_oom_fn;
# 114 "/usr/local/include/gc/gc.h" 3
extern void GC_set_oom_fn(GC_oom_func);
extern GC_oom_func GC_get_oom_fn(void);

extern int GC_find_leak;







extern void GC_set_find_leak(int);
extern int GC_get_find_leak(void);

extern int GC_all_interior_pointers;
# 141 "/usr/local/include/gc/gc.h" 3
extern void GC_set_all_interior_pointers(int);
extern int GC_get_all_interior_pointers(void);

extern int GC_finalize_on_demand;






extern void GC_set_finalize_on_demand(int);
extern int GC_get_finalize_on_demand(void);

extern int GC_java_finalization;
# 163 "/usr/local/include/gc/gc.h" 3
extern void GC_set_java_finalization(int);
extern int GC_get_java_finalization(void);

typedef void ( * GC_finalizer_notifier_proc)(void);
extern GC_finalizer_notifier_proc GC_finalizer_notifier;
# 177 "/usr/local/include/gc/gc.h" 3
extern void GC_set_finalizer_notifier(GC_finalizer_notifier_proc);
extern GC_finalizer_notifier_proc GC_get_finalizer_notifier(void);

extern int GC_dont_gc;
# 190 "/usr/local/include/gc/gc.h" 3
extern int GC_dont_expand;



extern void GC_set_dont_expand(int);
extern int GC_get_dont_expand(void);

extern int GC_use_entire_heap;
# 208 "/usr/local/include/gc/gc.h" 3
extern int GC_full_freq;
# 221 "/usr/local/include/gc/gc.h" 3
extern void GC_set_full_freq(int);
extern int GC_get_full_freq(void);

extern GC_word GC_non_gc_bytes;
# 234 "/usr/local/include/gc/gc.h" 3
extern void GC_set_non_gc_bytes(GC_word);
extern GC_word GC_get_non_gc_bytes(void);

extern int GC_no_dls;
# 246 "/usr/local/include/gc/gc.h" 3
extern void GC_set_no_dls(int);
extern int GC_get_no_dls(void);

extern GC_word GC_free_space_divisor;
# 266 "/usr/local/include/gc/gc.h" 3
extern void GC_set_free_space_divisor(GC_word);
extern GC_word GC_get_free_space_divisor(void);

extern GC_word GC_max_retries;







extern void GC_set_max_retries(GC_word);
extern GC_word GC_get_max_retries(void);


extern char *GC_stackbottom;
# 296 "/usr/local/include/gc/gc.h" 3
extern int GC_dont_precollect;
# 306 "/usr/local/include/gc/gc.h" 3
extern void GC_set_dont_precollect(int);
extern int GC_get_dont_precollect(void);

extern unsigned long GC_time_limit;
# 326 "/usr/local/include/gc/gc.h" 3
extern void GC_set_time_limit(unsigned long);
extern unsigned long GC_get_time_limit(void);
# 339 "/usr/local/include/gc/gc.h" 3
extern void GC_set_pages_executable(int);





extern int GC_get_pages_executable(void);







extern void GC_set_handle_fork(int);



extern void GC_init(void);
# 372 "/usr/local/include/gc/gc.h" 3
extern void * GC_malloc(size_t )
                        __attribute__((__malloc__)) ;
extern void * GC_malloc_atomic(size_t )
                        __attribute__((__malloc__)) ;
extern char * GC_strdup(const char *) __attribute__((__malloc__));
extern char * GC_strndup(const char *, size_t) __attribute__((__malloc__));
extern void * GC_malloc_uncollectable(size_t )
                        __attribute__((__malloc__)) ;
extern void * GC_malloc_stubborn(size_t )
                        __attribute__((__malloc__)) ;


extern void * GC_memalign(size_t , size_t )
                        __attribute__((__malloc__)) ;
extern int GC_posix_memalign(void ** , size_t ,
                        size_t );







extern void GC_free(void *);
# 410 "/usr/local/include/gc/gc.h" 3
extern void GC_change_stubborn(void *);
extern void GC_end_stubborn_change(void *);
# 424 "/usr/local/include/gc/gc.h" 3
extern void * GC_base(void * );




extern size_t GC_size(const void * );
# 439 "/usr/local/include/gc/gc.h" 3
extern void * GC_realloc(void * ,
                                 size_t )
                                                                  ;



extern int GC_expand_hp(size_t );






extern void GC_set_max_heap_size(GC_word );
# 461 "/usr/local/include/gc/gc.h" 3
extern void GC_exclude_static_roots(void * ,
                                        void * );


extern void GC_clear_roots(void);




extern void GC_add_roots(void * ,
                                 void * );



extern void GC_remove_roots(void * ,
                                    void * );
# 490 "/usr/local/include/gc/gc.h" 3
extern void GC_register_displacement(size_t );



extern void GC_debug_register_displacement(size_t );


extern void GC_gcollect(void);






extern void GC_gcollect_and_unmap(void);
# 519 "/usr/local/include/gc/gc.h" 3
typedef int ( * GC_stop_func)(void);
extern int GC_try_to_collect(GC_stop_func );





extern void GC_set_stop_func(GC_stop_func );
extern GC_stop_func GC_get_stop_func(void);
# 541 "/usr/local/include/gc/gc.h" 3
extern size_t GC_get_heap_size(void);




extern size_t GC_get_free_bytes(void);





extern size_t GC_get_unmapped_bytes(void);




extern size_t GC_get_bytes_since_gc(void);




extern size_t GC_get_total_bytes(void);
# 571 "/usr/local/include/gc/gc.h" 3
extern void GC_get_heap_usage_safe(GC_word * ,
                                           GC_word * ,
                                           GC_word * ,
                                           GC_word * ,
                                           GC_word * );



extern void GC_disable(void);



extern int GC_is_disabled(void);




extern void GC_enable(void);
# 601 "/usr/local/include/gc/gc.h" 3
extern void GC_enable_incremental(void);
# 611 "/usr/local/include/gc/gc.h" 3
extern int GC_incremental_protection_needs(void);
# 620 "/usr/local/include/gc/gc.h" 3
extern int GC_collect_a_little(void);
# 636 "/usr/local/include/gc/gc.h" 3
extern void * GC_malloc_ignore_off_page(size_t )
                        __attribute__((__malloc__)) ;
extern void * GC_malloc_atomic_ignore_off_page(size_t )
                        __attribute__((__malloc__)) ;
# 651 "/usr/local/include/gc/gc.h" 3
extern void * GC_malloc_atomic_uncollectable(
                                                size_t )
                        __attribute__((__malloc__)) ;
extern void * GC_debug_malloc_atomic_uncollectable(size_t,
                                                           const char * s, int i)
                        __attribute__((__malloc__)) ;



extern void * GC_debug_malloc(size_t ,
                                      const char * s, int i)
                        __attribute__((__malloc__)) ;
extern void * GC_debug_malloc_atomic(size_t ,
                                             const char * s, int i)
                        __attribute__((__malloc__)) ;
extern char * GC_debug_strdup(const char *,
                                      const char * s, int i) __attribute__((__malloc__));
extern char * GC_debug_strndup(const char *, size_t,
                                       const char * s, int i) __attribute__((__malloc__));
extern void * GC_debug_malloc_uncollectable(
                        size_t , const char * s, int i)
                        __attribute__((__malloc__)) ;
extern void * GC_debug_malloc_stubborn(size_t ,
                                               const char * s, int i)
                        __attribute__((__malloc__)) ;
extern void * GC_debug_malloc_ignore_off_page(
                        size_t , const char * s, int i)
                        __attribute__((__malloc__)) ;
extern void * GC_debug_malloc_atomic_ignore_off_page(
                        size_t , const char * s, int i)
                        __attribute__((__malloc__)) ;
extern void GC_debug_free(void *);
extern void * GC_debug_realloc(void * ,
                        size_t , const char * s, int i)
                                                                  ;
extern void GC_debug_change_stubborn(void *);
extern void GC_debug_end_stubborn_change(void *);
# 701 "/usr/local/include/gc/gc.h" 3
extern void * GC_debug_malloc_replacement(size_t )
                        __attribute__((__malloc__)) ;
extern void * GC_debug_realloc_replacement(void * ,
                                                   size_t )
                                                                  ;
# 802 "/usr/local/include/gc/gc.h" 3
typedef void ( * GC_finalization_proc)(void * ,
                                                  void * );

extern void GC_register_finalizer(void * ,
                        GC_finalization_proc , void * ,
                        GC_finalization_proc * , void ** );
extern void GC_debug_register_finalizer(void * ,
                        GC_finalization_proc , void * ,
                        GC_finalization_proc * , void ** );
# 859 "/usr/local/include/gc/gc.h" 3
extern void GC_register_finalizer_ignore_self(void * ,
                        GC_finalization_proc , void * ,
                        GC_finalization_proc * , void ** );
extern void GC_debug_register_finalizer_ignore_self(void * ,
                        GC_finalization_proc , void * ,
                        GC_finalization_proc * , void ** );





extern void GC_register_finalizer_no_order(void * ,
                        GC_finalization_proc , void * ,
                        GC_finalization_proc * , void ** );
extern void GC_debug_register_finalizer_no_order(void * ,
                        GC_finalization_proc , void * ,
                        GC_finalization_proc * , void ** );
# 893 "/usr/local/include/gc/gc.h" 3
extern void GC_register_finalizer_unreachable(void * ,
                        GC_finalization_proc , void * ,
                        GC_finalization_proc * , void ** );
extern void GC_debug_register_finalizer_unreachable(void * ,
                        GC_finalization_proc , void * ,
                        GC_finalization_proc * , void ** );
# 909 "/usr/local/include/gc/gc.h" 3
extern int GC_register_disappearing_link(void ** );
# 930 "/usr/local/include/gc/gc.h" 3
extern int GC_general_register_disappearing_link(void ** ,
                                                         void * );
# 963 "/usr/local/include/gc/gc.h" 3
extern int GC_unregister_disappearing_link(void ** );





extern int GC_should_invoke_finalizers(void);

extern int GC_invoke_finalizers(void);
# 999 "/usr/local/include/gc/gc.h" 3
typedef void ( * GC_warn_proc)(char * ,
                                          GC_word );
extern void GC_set_warn_proc(GC_warn_proc );

extern GC_warn_proc GC_get_warn_proc(void);



extern void GC_ignore_warn_proc(char *, GC_word);
# 1017 "/usr/local/include/gc/gc.h" 3
typedef GC_word GC_hidden_pointer;
# 1031 "/usr/local/include/gc/gc.h" 3
typedef void * ( * GC_fn_type)(void * );
extern void * GC_call_with_alloc_lock(GC_fn_type ,
                                                void * );
# 1047 "/usr/local/include/gc/gc.h" 3
struct GC_stack_base {
  void * mem_base;



};

typedef void * ( * GC_stack_base_func)(
                struct GC_stack_base * , void * );





extern void * GC_call_with_stack_base(GC_stack_base_func ,
                                              void * );
# 1138 "/usr/local/include/gc/gc.h" 3
extern void * GC_do_blocking(GC_fn_type ,
                                     void * );
# 1150 "/usr/local/include/gc/gc.h" 3
extern void * GC_call_with_gc_active(GC_fn_type ,
                                             void * );
# 1160 "/usr/local/include/gc/gc.h" 3
extern int GC_get_stack_base(struct GC_stack_base *);
# 1171 "/usr/local/include/gc/gc.h" 3
extern void * GC_same_obj(void * , void * );





extern void * GC_pre_incr(void **, ptrdiff_t );
extern void * GC_post_incr(void **, ptrdiff_t );
# 1188 "/usr/local/include/gc/gc.h" 3
extern void * GC_is_visible(void * );






extern void * GC_is_valid_displacement(void * );





extern void GC_dump(void);
# 1241 "/usr/local/include/gc/gc.h" 3
extern void ( * GC_same_obj_print_proc)(void * ,
                                                   void * );
extern void ( * GC_is_valid_displacement_print_proc)(void *);
extern void ( * GC_is_visible_print_proc)(void *);
# 1255 "/usr/local/include/gc/gc.h" 3
extern void * GC_malloc_many(size_t );
# 1267 "/usr/local/include/gc/gc.h" 3
typedef int ( * GC_has_static_roots_func)(
                                        const char * ,
                                        void * ,
                                        size_t );





extern void GC_register_has_static_roots_callback(
                                        GC_has_static_roots_func);
# 1378 "/usr/local/include/gc/gc.h" 3
extern void GC_set_force_unmap_on_gcollect(int);
extern int GC_get_force_unmap_on_gcollect(void);
# 1498 "/usr/local/include/gc/gc.h" 3
extern void GC_win32_free_heap(void);
# 28 "./karray.h" 2
# 1 "/usr/include/assert.h" 1 3 4
# 42 "/usr/include/assert.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 484 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 485 "/usr/include/sys/cdefs.h" 2 3 4
# 550 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_posix_availability.h" 1 3 4
# 551 "/usr/include/sys/cdefs.h" 2 3 4
# 43 "/usr/include/assert.h" 2 3 4
# 76 "/usr/include/assert.h" 3 4
void __assert_rtn(const char *, const char *, int, const char *) __attribute__((noreturn));
# 29 "./karray.h" 2
# 1 "/usr/include/string.h" 1 3 4
# 61 "/usr/include/string.h" 3 4
# 1 "/usr/include/_types.h" 1 3 4
# 27 "/usr/include/_types.h" 3 4
# 1 "/usr/include/sys/_types.h" 1 3 4
# 33 "/usr/include/sys/_types.h" 3 4
# 1 "/usr/include/machine/_types.h" 1 3 4
# 32 "/usr/include/machine/_types.h" 3 4
# 1 "/usr/include/i386/_types.h" 1 3 4
# 37 "/usr/include/i386/_types.h" 3 4
typedef signed char __int8_t;



typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long long __int64_t;
typedef unsigned long long __uint64_t;

typedef long __darwin_intptr_t;
typedef unsigned int __darwin_natural_t;
# 70 "/usr/include/i386/_types.h" 3 4
typedef int __darwin_ct_rune_t;





typedef union {
 char __mbstate8[128];
 long long _mbstateL;
} __mbstate_t;

typedef __mbstate_t __darwin_mbstate_t;


typedef long int __darwin_ptrdiff_t;







typedef long unsigned int __darwin_size_t;





typedef __builtin_va_list __darwin_va_list;





typedef int __darwin_wchar_t;




typedef __darwin_wchar_t __darwin_rune_t;


typedef int __darwin_wint_t;




typedef unsigned long __darwin_clock_t;
typedef __uint32_t __darwin_socklen_t;
typedef long __darwin_ssize_t;
typedef long __darwin_time_t;
# 33 "/usr/include/machine/_types.h" 2 3 4
# 34 "/usr/include/sys/_types.h" 2 3 4
# 58 "/usr/include/sys/_types.h" 3 4
struct __darwin_pthread_handler_rec
{
 void (*__routine)(void *);
 void *__arg;
 struct __darwin_pthread_handler_rec *__next;
};
struct _opaque_pthread_attr_t { long __sig; char __opaque[56]; };
struct _opaque_pthread_cond_t { long __sig; char __opaque[40]; };
struct _opaque_pthread_condattr_t { long __sig; char __opaque[8]; };
struct _opaque_pthread_mutex_t { long __sig; char __opaque[56]; };
struct _opaque_pthread_mutexattr_t { long __sig; char __opaque[8]; };
struct _opaque_pthread_once_t { long __sig; char __opaque[8]; };
struct _opaque_pthread_rwlock_t { long __sig; char __opaque[192]; };
struct _opaque_pthread_rwlockattr_t { long __sig; char __opaque[16]; };
struct _opaque_pthread_t { long __sig; struct __darwin_pthread_handler_rec *__cleanup_stack; char __opaque[1168]; };
# 94 "/usr/include/sys/_types.h" 3 4
typedef __int64_t __darwin_blkcnt_t;
typedef __int32_t __darwin_blksize_t;
typedef __int32_t __darwin_dev_t;
typedef unsigned int __darwin_fsblkcnt_t;
typedef unsigned int __darwin_fsfilcnt_t;
typedef __uint32_t __darwin_gid_t;
typedef __uint32_t __darwin_id_t;
typedef __uint64_t __darwin_ino64_t;

typedef __darwin_ino64_t __darwin_ino_t;



typedef __darwin_natural_t __darwin_mach_port_name_t;
typedef __darwin_mach_port_name_t __darwin_mach_port_t;
typedef __uint16_t __darwin_mode_t;
typedef __int64_t __darwin_off_t;
typedef __int32_t __darwin_pid_t;
typedef struct _opaque_pthread_attr_t
   __darwin_pthread_attr_t;
typedef struct _opaque_pthread_cond_t
   __darwin_pthread_cond_t;
typedef struct _opaque_pthread_condattr_t
   __darwin_pthread_condattr_t;
typedef unsigned long __darwin_pthread_key_t;
typedef struct _opaque_pthread_mutex_t
   __darwin_pthread_mutex_t;
typedef struct _opaque_pthread_mutexattr_t
   __darwin_pthread_mutexattr_t;
typedef struct _opaque_pthread_once_t
   __darwin_pthread_once_t;
typedef struct _opaque_pthread_rwlock_t
   __darwin_pthread_rwlock_t;
typedef struct _opaque_pthread_rwlockattr_t
   __darwin_pthread_rwlockattr_t;
typedef struct _opaque_pthread_t
   *__darwin_pthread_t;
typedef __uint32_t __darwin_sigset_t;
typedef __int32_t __darwin_suseconds_t;
typedef __uint32_t __darwin_uid_t;
typedef __uint32_t __darwin_useconds_t;
typedef unsigned char __darwin_uuid_t[16];
typedef char __darwin_uuid_string_t[37];
# 28 "/usr/include/_types.h" 2 3 4
# 39 "/usr/include/_types.h" 3 4
typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;

typedef __uint32_t __darwin_wctype_t;
# 62 "/usr/include/string.h" 2 3 4

# 1 "/usr/include/Availability.h" 1 3 4
# 148 "/usr/include/Availability.h" 3 4
# 1 "/usr/include/AvailabilityInternal.h" 1 3 4
# 149 "/usr/include/Availability.h" 2 3 4
# 64 "/usr/include/string.h" 2 3 4
# 1 "/usr/include/sys/_types/_size_t.h" 1 3 4
# 65 "/usr/include/string.h" 2 3 4
# 1 "/usr/include/sys/_types/_null.h" 1 3 4
# 66 "/usr/include/string.h" 2 3 4




void *memchr(const void *, int, size_t);
int memcmp(const void *, const void *, size_t);
void *memcpy(void *, const void *, size_t);
void *memmove(void *, const void *, size_t);
void *memset(void *, int, size_t);
char *strcat(char *, const char *);
char *strchr(const char *, int);
int strcmp(const char *, const char *);
int strcoll(const char *, const char *);
char *strcpy(char *, const char *);
size_t strcspn(const char *, const char *);
char *strerror(int) __asm("_" "strerror") ;
size_t strlen(const char *);
char *strncat(char *, const char *, size_t);
int strncmp(const char *, const char *, size_t);
char *strncpy(char *, const char *, size_t);
char *strpbrk(const char *, const char *);
char *strrchr(const char *, int);
size_t strspn(const char *, const char *);
char *strstr(const char *, const char *);
char *strtok(char *, const char *);
size_t strxfrm(char *, const char *, size_t);
# 104 "/usr/include/string.h" 3 4
char *strtok_r(char *, const char *, char **);
# 116 "/usr/include/string.h" 3 4
int strerror_r(int, char *, size_t);
char *strdup(const char *);
void *memccpy(void *, const void *, int, size_t);
# 130 "/usr/include/string.h" 3 4
char *stpcpy(char *, const char *);
char *stpncpy(char *, const char *, size_t) __attribute__((availability(macosx,introduced=10.7)));
char *strndup(const char *, size_t) __attribute__((availability(macosx,introduced=10.7)));
size_t strnlen(const char *, size_t) __attribute__((availability(macosx,introduced=10.7)));
char *strsignal(int sig);







# 1 "/usr/include/sys/_types/_rsize_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_rsize_t.h" 3 4
typedef __darwin_size_t rsize_t;
# 142 "/usr/include/string.h" 2 3 4
# 1 "/usr/include/sys/_types/_errno_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_errno_t.h" 3 4
typedef int errno_t;
# 143 "/usr/include/string.h" 2 3 4


errno_t memset_s(void *, rsize_t, int, rsize_t) __attribute__((availability(macosx,introduced=10.9)));







# 1 "/usr/include/sys/_types/_ssize_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_ssize_t.h" 3 4
typedef __darwin_ssize_t ssize_t;
# 153 "/usr/include/string.h" 2 3 4


void *memmem(const void *, size_t, const void *, size_t) __attribute__((availability(macosx,introduced=10.7)));
void memset_pattern4(void *, const void *, size_t) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern8(void *, const void *, size_t) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern16(void *, const void *, size_t) __attribute__((availability(macosx,introduced=10.5)));

char *strcasestr(const char *, const char *);
char *strnstr(const char *, const char *, size_t);
size_t strlcat(char *, const char *, size_t);
size_t strlcpy(char *, const char *, size_t);
void strmode(int, char *);
char *strsep(char **, const char *);


void swab(const void * restrict, void * restrict, ssize_t);








# 1 "/usr/include/strings.h" 1 3 4
# 65 "/usr/include/strings.h" 3 4
# 1 "/usr/include/sys/_types/_size_t.h" 1 3 4
# 66 "/usr/include/strings.h" 2 3 4




int bcmp(const void *, const void *, size_t) ;
void bcopy(const void *, void *, size_t) ;
void bzero(void *, size_t) ;
char *index(const char *, int) ;
char *rindex(const char *, int) ;


int ffs(int);
int strcasecmp(const char *, const char *);
int strncasecmp(const char *, const char *, size_t);





int ffsl(long) __attribute__((availability(macosx,introduced=10.5)));
int ffsll(long long) __attribute__((availability(macosx,introduced=10.9)));
int fls(int) __attribute__((availability(macosx,introduced=10.5)));
int flsl(long) __attribute__((availability(macosx,introduced=10.5)));
int flsll(long long) __attribute__((availability(macosx,introduced=10.9)));



# 1 "/usr/include/string.h" 1 3 4
# 93 "/usr/include/strings.h" 2 3 4
# 177 "/usr/include/string.h" 2 3 4
# 186 "/usr/include/string.h" 3 4
# 1 "/usr/include/secure/_string.h" 1 3 4
# 33 "/usr/include/secure/_string.h" 3 4
# 1 "/usr/include/secure/_common.h" 1 3 4
# 34 "/usr/include/secure/_string.h" 2 3 4
# 187 "/usr/include/string.h" 2 3 4
# 30 "./karray.h" 2
# 4 "loader.generated.c" 2


static Instruction *Emit_EXIT(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_EXIT(Instruction *self)
{
    fprintf(stderr, "[%p] EXIT ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_JUMP(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    self->ndata = ndata;
    return self;
}
static void Dump_JUMP(Instruction *self)
{
    fprintf(stderr, "[%p] JUMP ", self);
    fprintf(stderr, "target=%p", self->dst);
    fprintf(stderr, "\n");
}
static Instruction *Emit_CALL(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    self->ndata = ndata;
    return self;
}
static void Dump_CALL(Instruction *self)
{
    fprintf(stderr, "[%p] CALL ", self);
    fprintf(stderr, "target=%p", self->dst);
    fprintf(stderr, "\n");
}
static Instruction *Emit_RET(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    self->ndata = ndata;
    return self;
}
static void Dump_RET(Instruction *self)
{
    fprintf(stderr, "[%p] RET ", self);
    fprintf(stderr, "target=%p", self->dst);
    fprintf(stderr, "\n");
}
static Instruction *Emit_IFSUCC(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    self->ndata = ndata;
    return self;
}
static void Dump_IFSUCC(Instruction *self)
{
    fprintf(stderr, "[%p] IFSUCC ", self);
    fprintf(stderr, "target=%p", self->dst);
    fprintf(stderr, "\n");
}
static Instruction *Emit_IFFAIL(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    self->ndata = ndata;
    return self;
}
static void Dump_IFFAIL(Instruction *self)
{
    fprintf(stderr, "[%p] IFFAIL ", self);
    fprintf(stderr, "target=%p", self->dst);
    fprintf(stderr, "\n");
}
static Instruction *Emit_NOP(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_NOP(Instruction *self)
{
    fprintf(stderr, "[%p] NOP ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_Failure(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_Failure(Instruction *self)
{
    fprintf(stderr, "[%p] Failure ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_MatchText(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    self->ndata = ndata;
    return self;
}
static void Dump_MatchText(Instruction *self)
{
    fprintf(stderr, "[%p] MatchText ", self);
    fprintf(stderr, "char='%c'", (char)self->ndata);
    fprintf(stderr, "\n");
}
static Instruction *Emit_MatchByteChar(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    self->bdata = pegvm_string_copy(bdata);
    return self;
}
static void Dump_MatchByteChar(Instruction *self)
{
    fprintf(stderr, "[%p] MatchByteChar ", self);
    fprintf(stderr, "text='%s'", (char *)self->bdata);
    fprintf(stderr, "\n");
}
static Instruction *Emit_MatchCharset(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    self->bdata = pegvm_make_charset(bdata);
    return self;
}
static void Dump_MatchCharset(Instruction *self)
{
    fprintf(stderr, "[%p] MatchCharset ", self);
    fprintf(stderr, "charset='%s'", pegvm_dump_charset(self->bdata));
    fprintf(stderr, "\n");
}
static Instruction *Emit_MatchAnyChar(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_MatchAnyChar(Instruction *self)
{
    fprintf(stderr, "[%p] MatchAnyChar ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_MatchTextNot(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_MatchTextNot(Instruction *self)
{
    fprintf(stderr, "[%p] MatchTextNot ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_MatchByteCharNot(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_MatchByteCharNot(Instruction *self)
{
    fprintf(stderr, "[%p] MatchByteCharNot ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_MatchCharsetNot(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_MatchCharsetNot(Instruction *self)
{
    fprintf(stderr, "[%p] MatchCharsetNot ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_MatchOptionalText(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_MatchOptionalText(Instruction *self)
{
    fprintf(stderr, "[%p] MatchOptionalText ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_MatchOptionalByteChar(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_MatchOptionalByteChar(Instruction *self)
{
    fprintf(stderr, "[%p] MatchOptionalByteChar ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_MatchOptionalCharset(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_MatchOptionalCharset(Instruction *self)
{
    fprintf(stderr, "[%p] MatchOptionalCharset ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_RememberPosition(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    self->ndata = ndata;
    return self;
}
static void Dump_RememberPosition(Instruction *self)
{
    fprintf(stderr, "[%p] RememberPosition ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_CommitPosition(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_CommitPosition(Instruction *self)
{
    fprintf(stderr, "[%p] CommitPosition ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_BacktrackPosition(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_BacktrackPosition(Instruction *self)
{
    fprintf(stderr, "[%p] BacktrackPosition ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_RememberSequencePosition(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_RememberSequencePosition(Instruction *self)
{
    fprintf(stderr, "[%p] RememberSequencePosition ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_CommitSequencePosition(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_CommitSequencePosition(Instruction *self)
{
    fprintf(stderr, "[%p] CommitSequencePosition ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_BackTrackSequencePosition(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_BackTrackSequencePosition(Instruction *self)
{
    fprintf(stderr, "[%p] BackTrackSequencePosition ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_RememberFailurePosition(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_RememberFailurePosition(Instruction *self)
{
    fprintf(stderr, "[%p] RememberFailurePosition ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_UpdateFailurePosition(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_UpdateFailurePosition(Instruction *self)
{
    fprintf(stderr, "[%p] UpdateFailurePosition ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_ForgetFailurePosition(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_ForgetFailurePosition(Instruction *self)
{
    fprintf(stderr, "[%p] ForgetFailurePosition ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_StoreObject(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_StoreObject(Instruction *self)
{
    fprintf(stderr, "[%p] StoreObject ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_DropStoredObject(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_DropStoredObject(Instruction *self)
{
    fprintf(stderr, "[%p] DropStoredObject ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_RestoreObject(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_RestoreObject(Instruction *self)
{
    fprintf(stderr, "[%p] RestoreObject ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_RestoreObjectIfFailure(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_RestoreObjectIfFailure(Instruction *self)
{
    fprintf(stderr, "[%p] RestoreObjectIfFailure ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_RestoreNegativeObject(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_RestoreNegativeObject(Instruction *self)
{
    fprintf(stderr, "[%p] RestoreNegativeObject ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_ConnectObject(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    self->bdata = pegvm_string_copy(bdata);
    return self;
}
static void Dump_ConnectObject(Instruction *self)
{
    fprintf(stderr, "[%p] ConnectObject ", self);
    fprintf(stderr, "text='%s'", (char *)self->bdata);
    fprintf(stderr, "\n");
}
static Instruction *Emit_DisableTransCapture(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_DisableTransCapture(Instruction *self)
{
    fprintf(stderr, "[%p] DisableTransCapture ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_EnableTransCapture(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_EnableTransCapture(Instruction *self)
{
    fprintf(stderr, "[%p] EnableTransCapture ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_NewObject(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_NewObject(Instruction *self)
{
    fprintf(stderr, "[%p] NewObject ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_LeftJoinObject(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_LeftJoinObject(Instruction *self)
{
    fprintf(stderr, "[%p] LeftJoinObject ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_CommitObject(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_CommitObject(Instruction *self)
{
    fprintf(stderr, "[%p] CommitObject ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_RefreshStoredObject(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_RefreshStoredObject(Instruction *self)
{
    fprintf(stderr, "[%p] RefreshStoredObject ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_Tagging(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    self->bdata = pegvm_string_copy(bdata);
    return self;
}
static void Dump_Tagging(Instruction *self)
{
    fprintf(stderr, "[%p] Tagging ", self);
    fprintf(stderr, "text='%s'", (char *)self->bdata);
    fprintf(stderr, "\n");
}
static Instruction *Emit_Value(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_Value(Instruction *self)
{
    fprintf(stderr, "[%p] Value ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_Indent(Instruction *self, uint32_t ndata, ARRAY_uint8_t_t *bdata)
{
    return self;
}
static void Dump_Indent(Instruction *self)
{
    fprintf(stderr, "[%p] Indent ", self);
    fprintf(stderr, "\n");
}
# 1 "src/pegvm.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 170 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "src/pegvm.c" 2





# 1 "src/pegvm.h" 1
# 1 "src/input_source.h" 1




# 1 "/usr/include/stdio.h" 1 3 4
# 64 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 484 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 485 "/usr/include/sys/cdefs.h" 2 3 4
# 550 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_posix_availability.h" 1 3 4
# 551 "/usr/include/sys/cdefs.h" 2 3 4
# 65 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/Availability.h" 1 3 4
# 148 "/usr/include/Availability.h" 3 4
# 1 "/usr/include/AvailabilityInternal.h" 1 3 4
# 149 "/usr/include/Availability.h" 2 3 4
# 66 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/_types.h" 1 3 4
# 27 "/usr/include/_types.h" 3 4
# 1 "/usr/include/sys/_types.h" 1 3 4
# 33 "/usr/include/sys/_types.h" 3 4
# 1 "/usr/include/machine/_types.h" 1 3 4
# 32 "/usr/include/machine/_types.h" 3 4
# 1 "/usr/include/i386/_types.h" 1 3 4
# 37 "/usr/include/i386/_types.h" 3 4
typedef signed char __int8_t;



typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long long __int64_t;
typedef unsigned long long __uint64_t;

typedef long __darwin_intptr_t;
typedef unsigned int __darwin_natural_t;
# 70 "/usr/include/i386/_types.h" 3 4
typedef int __darwin_ct_rune_t;





typedef union {
 char __mbstate8[128];
 long long _mbstateL;
} __mbstate_t;

typedef __mbstate_t __darwin_mbstate_t;


typedef long int __darwin_ptrdiff_t;







typedef long unsigned int __darwin_size_t;





typedef __builtin_va_list __darwin_va_list;





typedef int __darwin_wchar_t;




typedef __darwin_wchar_t __darwin_rune_t;


typedef int __darwin_wint_t;




typedef unsigned long __darwin_clock_t;
typedef __uint32_t __darwin_socklen_t;
typedef long __darwin_ssize_t;
typedef long __darwin_time_t;
# 33 "/usr/include/machine/_types.h" 2 3 4
# 34 "/usr/include/sys/_types.h" 2 3 4
# 58 "/usr/include/sys/_types.h" 3 4
struct __darwin_pthread_handler_rec
{
 void (*__routine)(void *);
 void *__arg;
 struct __darwin_pthread_handler_rec *__next;
};
struct _opaque_pthread_attr_t { long __sig; char __opaque[56]; };
struct _opaque_pthread_cond_t { long __sig; char __opaque[40]; };
struct _opaque_pthread_condattr_t { long __sig; char __opaque[8]; };
struct _opaque_pthread_mutex_t { long __sig; char __opaque[56]; };
struct _opaque_pthread_mutexattr_t { long __sig; char __opaque[8]; };
struct _opaque_pthread_once_t { long __sig; char __opaque[8]; };
struct _opaque_pthread_rwlock_t { long __sig; char __opaque[192]; };
struct _opaque_pthread_rwlockattr_t { long __sig; char __opaque[16]; };
struct _opaque_pthread_t { long __sig; struct __darwin_pthread_handler_rec *__cleanup_stack; char __opaque[1168]; };
# 94 "/usr/include/sys/_types.h" 3 4
typedef __int64_t __darwin_blkcnt_t;
typedef __int32_t __darwin_blksize_t;
typedef __int32_t __darwin_dev_t;
typedef unsigned int __darwin_fsblkcnt_t;
typedef unsigned int __darwin_fsfilcnt_t;
typedef __uint32_t __darwin_gid_t;
typedef __uint32_t __darwin_id_t;
typedef __uint64_t __darwin_ino64_t;

typedef __darwin_ino64_t __darwin_ino_t;



typedef __darwin_natural_t __darwin_mach_port_name_t;
typedef __darwin_mach_port_name_t __darwin_mach_port_t;
typedef __uint16_t __darwin_mode_t;
typedef __int64_t __darwin_off_t;
typedef __int32_t __darwin_pid_t;
typedef struct _opaque_pthread_attr_t
   __darwin_pthread_attr_t;
typedef struct _opaque_pthread_cond_t
   __darwin_pthread_cond_t;
typedef struct _opaque_pthread_condattr_t
   __darwin_pthread_condattr_t;
typedef unsigned long __darwin_pthread_key_t;
typedef struct _opaque_pthread_mutex_t
   __darwin_pthread_mutex_t;
typedef struct _opaque_pthread_mutexattr_t
   __darwin_pthread_mutexattr_t;
typedef struct _opaque_pthread_once_t
   __darwin_pthread_once_t;
typedef struct _opaque_pthread_rwlock_t
   __darwin_pthread_rwlock_t;
typedef struct _opaque_pthread_rwlockattr_t
   __darwin_pthread_rwlockattr_t;
typedef struct _opaque_pthread_t
   *__darwin_pthread_t;
typedef __uint32_t __darwin_sigset_t;
typedef __int32_t __darwin_suseconds_t;
typedef __uint32_t __darwin_uid_t;
typedef __uint32_t __darwin_useconds_t;
typedef unsigned char __darwin_uuid_t[16];
typedef char __darwin_uuid_string_t[37];
# 28 "/usr/include/_types.h" 2 3 4
# 39 "/usr/include/_types.h" 3 4
typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;

typedef __uint32_t __darwin_wctype_t;
# 68 "/usr/include/stdio.h" 2 3 4



# 1 "/usr/include/sys/_types/_va_list.h" 1 3 4
# 31 "/usr/include/sys/_types/_va_list.h" 3 4
typedef __darwin_va_list va_list;
# 72 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/sys/_types/_size_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_size_t.h" 3 4
typedef __darwin_size_t size_t;
# 73 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/sys/_types/_null.h" 1 3 4
# 74 "/usr/include/stdio.h" 2 3 4

typedef __darwin_off_t fpos_t;
# 86 "/usr/include/stdio.h" 3 4
struct __sbuf {
 unsigned char *_base;
 int _size;
};


struct __sFILEX;
# 120 "/usr/include/stdio.h" 3 4
typedef struct __sFILE {
 unsigned char *_p;
 int _r;
 int _w;
 short _flags;
 short _file;
 struct __sbuf _bf;
 int _lbfsize;


 void *_cookie;
 int (*_close)(void *);
 int (*_read) (void *, char *, int);
 fpos_t (*_seek) (void *, fpos_t, int);
 int (*_write)(void *, const char *, int);


 struct __sbuf _ub;
 struct __sFILEX *_extra;
 int _ur;


 unsigned char _ubuf[3];
 unsigned char _nbuf[1];


 struct __sbuf _lb;


 int _blksize;
 fpos_t _offset;
} FILE;


extern FILE *__stdinp;
extern FILE *__stdoutp;
extern FILE *__stderrp;
# 229 "/usr/include/stdio.h" 3 4
void clearerr(FILE *);
int fclose(FILE *);
int feof(FILE *);
int ferror(FILE *);
int fflush(FILE *);
int fgetc(FILE *);
int fgetpos(FILE * restrict, fpos_t *);
char *fgets(char * restrict, int, FILE *);



FILE *fopen(const char * restrict, const char * restrict) __asm("_" "fopen");

int fprintf(FILE * restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
int fputc(int, FILE *);
int fputs(const char * restrict, FILE * restrict) __asm("_" "fputs") ;
size_t fread(void * restrict, size_t, size_t, FILE * restrict);
FILE *freopen(const char * restrict, const char * restrict,
                 FILE * restrict) __asm("_" "freopen") ;
int fscanf(FILE * restrict, const char * restrict, ...) __attribute__((__format__ (__scanf__, 2, 3)));
int fseek(FILE *, long, int);
int fsetpos(FILE *, const fpos_t *);
long ftell(FILE *);
size_t fwrite(const void * restrict, size_t, size_t, FILE * restrict) __asm("_" "fwrite") ;
int getc(FILE *);
int getchar(void);
char *gets(char *);
void perror(const char *);
int printf(const char * restrict, ...) __attribute__((__format__ (__printf__, 1, 2)));
int putc(int, FILE *);
int putchar(int);
int puts(const char *);
int remove(const char *);
int rename (const char *, const char *);
void rewind(FILE *);
int scanf(const char * restrict, ...) __attribute__((__format__ (__scanf__, 1, 2)));
void setbuf(FILE * restrict, char * restrict);
int setvbuf(FILE * restrict, char * restrict, int, size_t);
int sprintf(char * restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
int sscanf(const char * restrict, const char * restrict, ...) __attribute__((__format__ (__scanf__, 2, 3)));
FILE *tmpfile(void);


__attribute__((deprecated("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tmpnam(3), it is highly recommended that you use mkstemp(3) instead.")))

char *tmpnam(char *);
int ungetc(int, FILE *);
int vfprintf(FILE * restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0)));
int vprintf(const char * restrict, va_list) __attribute__((__format__ (__printf__, 1, 0)));
int vsprintf(char * restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0)));
# 294 "/usr/include/stdio.h" 3 4
char *ctermid(char *);





FILE *fdopen(int, const char *) __asm("_" "fdopen");

int fileno(FILE *);
# 313 "/usr/include/stdio.h" 3 4
int pclose(FILE *);



FILE *popen(const char *, const char *) __asm("_" "popen");
# 335 "/usr/include/stdio.h" 3 4
int __srget(FILE *);
int __svfscanf(FILE *, const char *, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int __swbuf(int, FILE *);
# 346 "/usr/include/stdio.h" 3 4
inline __attribute__ ((__always_inline__)) int __sputc(int _c, FILE *_p) {
 if (--_p->_w >= 0 || (_p->_w >= _p->_lbfsize && (char)_c != '\n'))
  return (*_p->_p++ = _c);
 else
  return (__swbuf(_c, _p));
}
# 372 "/usr/include/stdio.h" 3 4
void flockfile(FILE *);
int ftrylockfile(FILE *);
void funlockfile(FILE *);
int getc_unlocked(FILE *);
int getchar_unlocked(void);
int putc_unlocked(int, FILE *);
int putchar_unlocked(int);



int getw(FILE *);
int putw(int, FILE *);



__attribute__((deprecated("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tempnam(3), it is highly recommended that you use mkstemp(3) instead.")))

char *tempnam(const char *, const char *) __asm("_" "tempnam") ;
# 409 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/_types/_off_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_off_t.h" 3 4
typedef __darwin_off_t off_t;
# 410 "/usr/include/stdio.h" 2 3 4


int fseeko(FILE *, off_t, int);
off_t ftello(FILE *);





int snprintf(char * restrict, size_t, const char * restrict, ...) __attribute__((__format__ (__printf__, 3, 4)));
int vfscanf(FILE * restrict, const char * restrict, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int vscanf(const char * restrict, va_list) __attribute__((__format__ (__scanf__, 1, 0)));
int vsnprintf(char * restrict, size_t, const char * restrict, va_list) __attribute__((__format__ (__printf__, 3, 0)));
int vsscanf(const char * restrict, const char * restrict, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
# 434 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/_types/_ssize_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_ssize_t.h" 3 4
typedef __darwin_ssize_t ssize_t;
# 435 "/usr/include/stdio.h" 2 3 4


int dprintf(int, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3))) __attribute__((availability(macosx,introduced=10.7)));
int vdprintf(int, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0))) __attribute__((availability(macosx,introduced=10.7)));
ssize_t getdelim(char ** restrict, size_t * restrict, int, FILE * restrict) __attribute__((availability(macosx,introduced=10.7)));
ssize_t getline(char ** restrict, size_t * restrict, FILE * restrict) __attribute__((availability(macosx,introduced=10.7)));
# 450 "/usr/include/stdio.h" 3 4
extern const int sys_nerr;
extern const char *const sys_errlist[];

int asprintf(char ** restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
char *ctermid_r(char *);
char *fgetln(FILE *, size_t *);
const char *fmtcheck(const char *, const char *);
int fpurge(FILE *);
void setbuffer(FILE *, char *, int);
int setlinebuf(FILE *);
int vasprintf(char ** restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0)));
FILE *zopen(const char *, const char *, int);





FILE *funopen(const void *,
                 int (*)(void *, char *, int),
                 int (*)(void *, const char *, int),
                 fpos_t (*)(void *, fpos_t, int),
                 int (*)(void *));
# 490 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/secure/_stdio.h" 1 3 4
# 31 "/usr/include/secure/_stdio.h" 3 4
# 1 "/usr/include/secure/_common.h" 1 3 4
# 32 "/usr/include/secure/_stdio.h" 2 3 4
# 42 "/usr/include/secure/_stdio.h" 3 4
extern int __sprintf_chk (char * restrict, int, size_t,
     const char * restrict, ...);
# 52 "/usr/include/secure/_stdio.h" 3 4
extern int __snprintf_chk (char * restrict, size_t, int, size_t,
      const char * restrict, ...);







extern int __vsprintf_chk (char * restrict, int, size_t,
      const char * restrict, va_list);







extern int __vsnprintf_chk (char * restrict, size_t, int, size_t,
       const char * restrict, va_list);
# 491 "/usr/include/stdio.h" 2 3 4
# 6 "src/input_source.h" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 65 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/sys/wait.h" 1 3 4
# 79 "/usr/include/sys/wait.h" 3 4
typedef enum {
 P_ALL,
 P_PID,
 P_PGID
} idtype_t;






# 1 "/usr/include/sys/_types/_pid_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_pid_t.h" 3 4
typedef __darwin_pid_t pid_t;
# 90 "/usr/include/sys/wait.h" 2 3 4
# 1 "/usr/include/sys/_types/_id_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_id_t.h" 3 4
typedef __darwin_id_t id_t;
# 91 "/usr/include/sys/wait.h" 2 3 4
# 109 "/usr/include/sys/wait.h" 3 4
# 1 "/usr/include/sys/signal.h" 1 3 4
# 73 "/usr/include/sys/signal.h" 3 4
# 1 "/usr/include/sys/appleapiopts.h" 1 3 4
# 74 "/usr/include/sys/signal.h" 2 3 4







# 1 "/usr/include/machine/signal.h" 1 3 4
# 32 "/usr/include/machine/signal.h" 3 4
# 1 "/usr/include/i386/signal.h" 1 3 4
# 39 "/usr/include/i386/signal.h" 3 4
typedef int sig_atomic_t;
# 33 "/usr/include/machine/signal.h" 2 3 4
# 82 "/usr/include/sys/signal.h" 2 3 4
# 145 "/usr/include/sys/signal.h" 3 4
# 1 "/usr/include/machine/_mcontext.h" 1 3 4
# 29 "/usr/include/machine/_mcontext.h" 3 4
# 1 "/usr/include/i386/_mcontext.h" 1 3 4
# 33 "/usr/include/i386/_mcontext.h" 3 4
# 1 "/usr/include/mach/i386/_structs.h" 1 3 4
# 43 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_thread_state
{
    unsigned int __eax;
    unsigned int __ebx;
    unsigned int __ecx;
    unsigned int __edx;
    unsigned int __edi;
    unsigned int __esi;
    unsigned int __ebp;
    unsigned int __esp;
    unsigned int __ss;
    unsigned int __eflags;
    unsigned int __eip;
    unsigned int __cs;
    unsigned int __ds;
    unsigned int __es;
    unsigned int __fs;
    unsigned int __gs;
};
# 89 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_fp_control
{
    unsigned short __invalid :1,
        __denorm :1,
    __zdiv :1,
    __ovrfl :1,
    __undfl :1,
    __precis :1,
      :2,
    __pc :2,





    __rc :2,






             :1,
      :3;
};
typedef struct __darwin_fp_control __darwin_fp_control_t;
# 147 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_fp_status
{
    unsigned short __invalid :1,
        __denorm :1,
    __zdiv :1,
    __ovrfl :1,
    __undfl :1,
    __precis :1,
    __stkflt :1,
    __errsumm :1,
    __c0 :1,
    __c1 :1,
    __c2 :1,
    __tos :3,
    __c3 :1,
    __busy :1;
};
typedef struct __darwin_fp_status __darwin_fp_status_t;
# 191 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_mmst_reg
{
 char __mmst_reg[10];
 char __mmst_rsrv[6];
};
# 210 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_xmm_reg
{
 char __xmm_reg[16];
};
# 232 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_float_state
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;
 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;
 __uint16_t __fpu_rsrv2;
 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;
 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 char __fpu_rsrv4[14*16];
 int __fpu_reserved1;
};


struct __darwin_i386_avx_state
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;
 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;
 __uint16_t __fpu_rsrv2;
 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;
 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 char __fpu_rsrv4[14*16];
 int __fpu_reserved1;
 char __avx_reserved1[64];
 struct __darwin_xmm_reg __fpu_ymmh0;
 struct __darwin_xmm_reg __fpu_ymmh1;
 struct __darwin_xmm_reg __fpu_ymmh2;
 struct __darwin_xmm_reg __fpu_ymmh3;
 struct __darwin_xmm_reg __fpu_ymmh4;
 struct __darwin_xmm_reg __fpu_ymmh5;
 struct __darwin_xmm_reg __fpu_ymmh6;
 struct __darwin_xmm_reg __fpu_ymmh7;
};
# 402 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_exception_state
{
 __uint16_t __trapno;
 __uint16_t __cpu;
 __uint32_t __err;
 __uint32_t __faultvaddr;
};
# 422 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_debug_state32
{
 unsigned int __dr0;
 unsigned int __dr1;
 unsigned int __dr2;
 unsigned int __dr3;
 unsigned int __dr4;
 unsigned int __dr5;
 unsigned int __dr6;
 unsigned int __dr7;
};
# 454 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_thread_state64
{
 __uint64_t __rax;
 __uint64_t __rbx;
 __uint64_t __rcx;
 __uint64_t __rdx;
 __uint64_t __rdi;
 __uint64_t __rsi;
 __uint64_t __rbp;
 __uint64_t __rsp;
 __uint64_t __r8;
 __uint64_t __r9;
 __uint64_t __r10;
 __uint64_t __r11;
 __uint64_t __r12;
 __uint64_t __r13;
 __uint64_t __r14;
 __uint64_t __r15;
 __uint64_t __rip;
 __uint64_t __rflags;
 __uint64_t __cs;
 __uint64_t __fs;
 __uint64_t __gs;
};
# 509 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_float_state64
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;


 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;

 __uint16_t __fpu_rsrv2;


 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;

 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 struct __darwin_xmm_reg __fpu_xmm8;
 struct __darwin_xmm_reg __fpu_xmm9;
 struct __darwin_xmm_reg __fpu_xmm10;
 struct __darwin_xmm_reg __fpu_xmm11;
 struct __darwin_xmm_reg __fpu_xmm12;
 struct __darwin_xmm_reg __fpu_xmm13;
 struct __darwin_xmm_reg __fpu_xmm14;
 struct __darwin_xmm_reg __fpu_xmm15;
 char __fpu_rsrv4[6*16];
 int __fpu_reserved1;
};


struct __darwin_x86_avx_state64
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;


 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;

 __uint16_t __fpu_rsrv2;


 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;

 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 struct __darwin_xmm_reg __fpu_xmm8;
 struct __darwin_xmm_reg __fpu_xmm9;
 struct __darwin_xmm_reg __fpu_xmm10;
 struct __darwin_xmm_reg __fpu_xmm11;
 struct __darwin_xmm_reg __fpu_xmm12;
 struct __darwin_xmm_reg __fpu_xmm13;
 struct __darwin_xmm_reg __fpu_xmm14;
 struct __darwin_xmm_reg __fpu_xmm15;
 char __fpu_rsrv4[6*16];
 int __fpu_reserved1;
 char __avx_reserved1[64];
 struct __darwin_xmm_reg __fpu_ymmh0;
 struct __darwin_xmm_reg __fpu_ymmh1;
 struct __darwin_xmm_reg __fpu_ymmh2;
 struct __darwin_xmm_reg __fpu_ymmh3;
 struct __darwin_xmm_reg __fpu_ymmh4;
 struct __darwin_xmm_reg __fpu_ymmh5;
 struct __darwin_xmm_reg __fpu_ymmh6;
 struct __darwin_xmm_reg __fpu_ymmh7;
 struct __darwin_xmm_reg __fpu_ymmh8;
 struct __darwin_xmm_reg __fpu_ymmh9;
 struct __darwin_xmm_reg __fpu_ymmh10;
 struct __darwin_xmm_reg __fpu_ymmh11;
 struct __darwin_xmm_reg __fpu_ymmh12;
 struct __darwin_xmm_reg __fpu_ymmh13;
 struct __darwin_xmm_reg __fpu_ymmh14;
 struct __darwin_xmm_reg __fpu_ymmh15;
};
# 751 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_exception_state64
{
    __uint16_t __trapno;
    __uint16_t __cpu;
    __uint32_t __err;
    __uint64_t __faultvaddr;
};
# 771 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_debug_state64
{
 __uint64_t __dr0;
 __uint64_t __dr1;
 __uint64_t __dr2;
 __uint64_t __dr3;
 __uint64_t __dr4;
 __uint64_t __dr5;
 __uint64_t __dr6;
 __uint64_t __dr7;
};
# 34 "/usr/include/i386/_mcontext.h" 2 3 4




struct __darwin_mcontext32
{
 struct __darwin_i386_exception_state __es;
 struct __darwin_i386_thread_state __ss;
 struct __darwin_i386_float_state __fs;
};


struct __darwin_mcontext_avx32
{
 struct __darwin_i386_exception_state __es;
 struct __darwin_i386_thread_state __ss;
 struct __darwin_i386_avx_state __fs;
};
# 76 "/usr/include/i386/_mcontext.h" 3 4
struct __darwin_mcontext64
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_state64 __ss;
 struct __darwin_x86_float_state64 __fs;
};


struct __darwin_mcontext_avx64
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_state64 __ss;
 struct __darwin_x86_avx_state64 __fs;
};
# 115 "/usr/include/i386/_mcontext.h" 3 4
typedef struct __darwin_mcontext64 *mcontext_t;
# 30 "/usr/include/machine/_mcontext.h" 2 3 4
# 146 "/usr/include/sys/signal.h" 2 3 4
# 1 "/usr/include/sys/_types/_sigaltstack.h" 1 3 4
# 36 "/usr/include/sys/_types/_sigaltstack.h" 3 4
struct __darwin_sigaltstack
{
 void *ss_sp;
 __darwin_size_t ss_size;
 int ss_flags;
};
typedef struct __darwin_sigaltstack stack_t;
# 147 "/usr/include/sys/signal.h" 2 3 4
# 1 "/usr/include/sys/_types/_ucontext.h" 1 3 4
# 34 "/usr/include/sys/_types/_ucontext.h" 3 4
struct __darwin_ucontext
{
 int uc_onstack;
 __darwin_sigset_t uc_sigmask;
 struct __darwin_sigaltstack uc_stack;
 struct __darwin_ucontext *uc_link;
 __darwin_size_t uc_mcsize;
 struct __darwin_mcontext64 *uc_mcontext;



};


typedef struct __darwin_ucontext ucontext_t;
# 148 "/usr/include/sys/signal.h" 2 3 4


# 1 "/usr/include/sys/_types/_pthread_attr_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_pthread_attr_t.h" 3 4
typedef __darwin_pthread_attr_t pthread_attr_t;
# 151 "/usr/include/sys/signal.h" 2 3 4
# 1 "/usr/include/sys/_types/_sigset_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_sigset_t.h" 3 4
typedef __darwin_sigset_t sigset_t;
# 152 "/usr/include/sys/signal.h" 2 3 4

# 1 "/usr/include/sys/_types/_uid_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_uid_t.h" 3 4
typedef __darwin_uid_t uid_t;
# 154 "/usr/include/sys/signal.h" 2 3 4

union sigval {

 int sival_int;
 void *sival_ptr;
};





struct sigevent {
 int sigev_notify;
 int sigev_signo;
 union sigval sigev_value;
 void (*sigev_notify_function)(union sigval);
 pthread_attr_t *sigev_notify_attributes;
};


typedef struct __siginfo {
 int si_signo;
 int si_errno;
 int si_code;
 pid_t si_pid;
 uid_t si_uid;
 int si_status;
 void *si_addr;
 union sigval si_value;
 long si_band;
 unsigned long __pad[7];
} siginfo_t;
# 266 "/usr/include/sys/signal.h" 3 4
union __sigaction_u {
 void (*__sa_handler)(int);
 void (*__sa_sigaction)(int, struct __siginfo *,
         void *);
};


struct __sigaction {
 union __sigaction_u __sigaction_u;
 void (*sa_tramp)(void *, int, int, siginfo_t *, void *);
 sigset_t sa_mask;
 int sa_flags;
};




struct sigaction {
 union __sigaction_u __sigaction_u;
 sigset_t sa_mask;
 int sa_flags;
};
# 328 "/usr/include/sys/signal.h" 3 4
typedef void (*sig_t)(int);
# 345 "/usr/include/sys/signal.h" 3 4
struct sigvec {
 void (*sv_handler)(int);
 int sv_mask;
 int sv_flags;
};
# 364 "/usr/include/sys/signal.h" 3 4
struct sigstack {
 char *ss_sp;
 int ss_onstack;
};
# 387 "/usr/include/sys/signal.h" 3 4
void (*signal(int, void (*)(int)))(int);
# 110 "/usr/include/sys/wait.h" 2 3 4
# 1 "/usr/include/sys/resource.h" 1 3 4
# 72 "/usr/include/sys/resource.h" 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdint.h" 1 3 4
# 64 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 18 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/sys/_types/_int8_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int8_t.h" 3 4
typedef signed char int8_t;
# 19 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_int16_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int16_t.h" 3 4
typedef short int16_t;
# 20 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_int32_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int32_t.h" 3 4
typedef int int32_t;
# 21 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_int64_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int64_t.h" 3 4
typedef long long int64_t;
# 22 "/usr/include/stdint.h" 2 3 4

# 1 "/usr/include/_types/_uint8_t.h" 1 3 4
# 31 "/usr/include/_types/_uint8_t.h" 3 4
typedef unsigned char uint8_t;
# 24 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uint16_t.h" 1 3 4
# 31 "/usr/include/_types/_uint16_t.h" 3 4
typedef unsigned short uint16_t;
# 25 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uint32_t.h" 1 3 4
# 31 "/usr/include/_types/_uint32_t.h" 3 4
typedef unsigned int uint32_t;
# 26 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uint64_t.h" 1 3 4
# 31 "/usr/include/_types/_uint64_t.h" 3 4
typedef unsigned long long uint64_t;
# 27 "/usr/include/stdint.h" 2 3 4


typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_least64_t;
typedef uint8_t uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;



typedef int8_t int_fast8_t;
typedef int16_t int_fast16_t;
typedef int32_t int_fast32_t;
typedef int64_t int_fast64_t;
typedef uint8_t uint_fast8_t;
typedef uint16_t uint_fast16_t;
typedef uint32_t uint_fast32_t;
typedef uint64_t uint_fast64_t;






# 1 "/usr/include/sys/_types/_intptr_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_intptr_t.h" 3 4
typedef __darwin_intptr_t intptr_t;
# 54 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_uintptr_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_uintptr_t.h" 3 4
typedef unsigned long uintptr_t;
# 55 "/usr/include/stdint.h" 2 3 4



# 1 "/usr/include/_types/_intmax_t.h" 1 3 4
# 32 "/usr/include/_types/_intmax_t.h" 3 4
typedef long int intmax_t;
# 59 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uintmax_t.h" 1 3 4
# 32 "/usr/include/_types/_uintmax_t.h" 3 4
typedef long unsigned int uintmax_t;
# 60 "/usr/include/stdint.h" 2 3 4
# 65 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdint.h" 2 3 4
# 73 "/usr/include/sys/resource.h" 2 3 4







# 1 "/usr/include/sys/_types/_timeval.h" 1 3 4
# 30 "/usr/include/sys/_types/_timeval.h" 3 4
struct timeval
{
 __darwin_time_t tv_sec;
 __darwin_suseconds_t tv_usec;
};
# 81 "/usr/include/sys/resource.h" 2 3 4








typedef __uint64_t rlim_t;
# 151 "/usr/include/sys/resource.h" 3 4
struct rusage {
 struct timeval ru_utime;
 struct timeval ru_stime;
# 162 "/usr/include/sys/resource.h" 3 4
 long ru_maxrss;

 long ru_ixrss;
 long ru_idrss;
 long ru_isrss;
 long ru_minflt;
 long ru_majflt;
 long ru_nswap;
 long ru_inblock;
 long ru_oublock;
 long ru_msgsnd;
 long ru_msgrcv;
 long ru_nsignals;
 long ru_nvcsw;
 long ru_nivcsw;


};
# 190 "/usr/include/sys/resource.h" 3 4
typedef void *rusage_info_t;

struct rusage_info_v0 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
};

struct rusage_info_v1 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
};

struct rusage_info_v2 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
};
# 290 "/usr/include/sys/resource.h" 3 4
struct rlimit {
 rlim_t rlim_cur;
 rlim_t rlim_max;
};
# 317 "/usr/include/sys/resource.h" 3 4
struct proc_rlimit_control_wakeupmon {
 uint32_t wm_flags;
 int32_t wm_rate;
};
# 347 "/usr/include/sys/resource.h" 3 4
int getpriority(int, id_t);

int getiopolicy_np(int, int) __attribute__((availability(macosx,introduced=10.5)));

int getrlimit(int, struct rlimit *) __asm("_" "getrlimit") ;
int getrusage(int, struct rusage *);
int setpriority(int, id_t, int);

int setiopolicy_np(int, int, int) __attribute__((availability(macosx,introduced=10.5)));

int setrlimit(int, const struct rlimit *) __asm("_" "setrlimit") ;
# 111 "/usr/include/sys/wait.h" 2 3 4
# 186 "/usr/include/sys/wait.h" 3 4
# 1 "/usr/include/machine/endian.h" 1 3 4
# 35 "/usr/include/machine/endian.h" 3 4
# 1 "/usr/include/i386/endian.h" 1 3 4
# 99 "/usr/include/i386/endian.h" 3 4
# 1 "/usr/include/sys/_endian.h" 1 3 4
# 124 "/usr/include/sys/_endian.h" 3 4
# 1 "/usr/include/libkern/_OSByteOrder.h" 1 3 4
# 66 "/usr/include/libkern/_OSByteOrder.h" 3 4
# 1 "/usr/include/libkern/i386/_OSByteOrder.h" 1 3 4
# 44 "/usr/include/libkern/i386/_OSByteOrder.h" 3 4
static inline
__uint16_t
_OSSwapInt16(
    __uint16_t _data
)
{
    return ((__uint16_t)((_data << 8) | (_data >> 8)));
}

static inline
__uint32_t
_OSSwapInt32(
    __uint32_t _data
)
{

    return __builtin_bswap32(_data);




}


static inline
__uint64_t
_OSSwapInt64(
    __uint64_t _data
)
{
    return __builtin_bswap64(_data);
}
# 67 "/usr/include/libkern/_OSByteOrder.h" 2 3 4
# 125 "/usr/include/sys/_endian.h" 2 3 4
# 100 "/usr/include/i386/endian.h" 2 3 4
# 36 "/usr/include/machine/endian.h" 2 3 4
# 187 "/usr/include/sys/wait.h" 2 3 4







union wait {
 int w_status;



 struct {

  unsigned int w_Termsig:7,
    w_Coredump:1,
    w_Retcode:8,
    w_Filler:16;







 } w_T;





 struct {

  unsigned int w_Stopval:8,
    w_Stopsig:8,
    w_Filler:16;






 } w_S;
};
# 248 "/usr/include/sys/wait.h" 3 4
pid_t wait(int *) __asm("_" "wait") ;
pid_t waitpid(pid_t, int *, int) __asm("_" "waitpid") ;

int waitid(idtype_t, id_t, siginfo_t *, int) __asm("_" "waitid") ;


pid_t wait3(int *, int, struct rusage *);
pid_t wait4(pid_t, int *, int, struct rusage *);
# 66 "/usr/include/stdlib.h" 2 3 4

# 1 "/usr/include/alloca.h" 1 3 4
# 32 "/usr/include/alloca.h" 3 4
void *alloca(size_t);
# 68 "/usr/include/stdlib.h" 2 3 4








# 1 "/usr/include/sys/_types/_ct_rune_t.h" 1 3 4
# 31 "/usr/include/sys/_types/_ct_rune_t.h" 3 4
typedef __darwin_ct_rune_t ct_rune_t;
# 77 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/sys/_types/_rune_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_rune_t.h" 3 4
typedef __darwin_rune_t rune_t;
# 78 "/usr/include/stdlib.h" 2 3 4


# 1 "/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 33 "/usr/include/sys/_types/_wchar_t.h" 3 4
typedef __darwin_wchar_t wchar_t;
# 81 "/usr/include/stdlib.h" 2 3 4

typedef struct {
 int quot;
 int rem;
} div_t;

typedef struct {
 long quot;
 long rem;
} ldiv_t;


typedef struct {
 long long quot;
 long long rem;
} lldiv_t;
# 117 "/usr/include/stdlib.h" 3 4
extern int __mb_cur_max;
# 128 "/usr/include/stdlib.h" 3 4
void abort(void) __attribute__((noreturn));
int abs(int) __attribute__((const));
int atexit(void (*)(void));
double atof(const char *);
int atoi(const char *);
long atol(const char *);

long long
  atoll(const char *);

void *bsearch(const void *, const void *, size_t,
     size_t, int (*)(const void *, const void *));
void *calloc(size_t, size_t);
div_t div(int, int) __attribute__((const));
void exit(int) __attribute__((noreturn));
void free(void *);
char *getenv(const char *);
long labs(long) __attribute__((const));
ldiv_t ldiv(long, long) __attribute__((const));

long long
  llabs(long long);
lldiv_t lldiv(long long, long long);

void *malloc(size_t);
int mblen(const char *, size_t);
size_t mbstowcs(wchar_t * restrict , const char * restrict, size_t);
int mbtowc(wchar_t * restrict, const char * restrict, size_t);
int posix_memalign(void **, size_t, size_t) __attribute__((availability(macosx,introduced=10.6)));
void qsort(void *, size_t, size_t,
     int (*)(const void *, const void *));
int rand(void);
void *realloc(void *, size_t);
void srand(unsigned);
double strtod(const char *, char **) __asm("_" "strtod") ;
float strtof(const char *, char **) __asm("_" "strtof") ;
long strtol(const char *, char **, int);
long double
  strtold(const char *, char **);

long long
  strtoll(const char *, char **, int);

unsigned long
  strtoul(const char *, char **, int);

unsigned long long
  strtoull(const char *, char **, int);

int system(const char *) __asm("_" "system") ;
size_t wcstombs(char * restrict, const wchar_t * restrict, size_t);
int wctomb(char *, wchar_t);


void _Exit(int) __attribute__((noreturn));
long a64l(const char *);
double drand48(void);
char *ecvt(double, int, int *restrict, int *restrict);
double erand48(unsigned short[3]);
char *fcvt(double, int, int *restrict, int *restrict);
char *gcvt(double, int, char *);
int getsubopt(char **, char * const *, char **);
int grantpt(int);

char *initstate(unsigned, char *, size_t);



long jrand48(unsigned short[3]);
char *l64a(long);
void lcong48(unsigned short[7]);
long lrand48(void);
char *mktemp(char *);
int mkstemp(char *);
long mrand48(void);
long nrand48(unsigned short[3]);
int posix_openpt(int);
char *ptsname(int);
int putenv(char *) __asm("_" "putenv") ;
long random(void);
int rand_r(unsigned *);

char *realpath(const char * restrict, char * restrict) __asm("_" "realpath" "$DARWIN_EXTSN");



unsigned short
 *seed48(unsigned short[3]);
int setenv(const char *, const char *, int) __asm("_" "setenv") ;

void setkey(const char *) __asm("_" "setkey") ;



char *setstate(const char *);
void srand48(long);

void srandom(unsigned);



int unlockpt(int);

int unsetenv(const char *) __asm("_" "unsetenv") ;







# 1 "/usr/include/machine/types.h" 1 3 4
# 35 "/usr/include/machine/types.h" 3 4
# 1 "/usr/include/i386/types.h" 1 3 4
# 81 "/usr/include/i386/types.h" 3 4
typedef unsigned char u_int8_t;
typedef unsigned short u_int16_t;
typedef unsigned int u_int32_t;
typedef unsigned long long u_int64_t;


typedef int64_t register_t;
# 97 "/usr/include/i386/types.h" 3 4
typedef u_int64_t user_addr_t;
typedef u_int64_t user_size_t;
typedef int64_t user_ssize_t;
typedef int64_t user_long_t;
typedef u_int64_t user_ulong_t;
typedef int64_t user_time_t;
typedef int64_t user_off_t;







typedef u_int64_t syscall_arg_t;


# 1 "/usr/include/sys/_types/___offsetof.h" 1 3 4
# 114 "/usr/include/i386/types.h" 2 3 4
# 36 "/usr/include/machine/types.h" 2 3 4
# 239 "/usr/include/stdlib.h" 2 3 4

# 1 "/usr/include/sys/_types/_dev_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_dev_t.h" 3 4
typedef __darwin_dev_t dev_t;
# 241 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/sys/_types/_mode_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_mode_t.h" 3 4
typedef __darwin_mode_t mode_t;
# 242 "/usr/include/stdlib.h" 2 3 4

u_int32_t arc4random(void);
void arc4random_addrandom(unsigned char * , int );
void arc4random_buf(void * , size_t ) __attribute__((availability(macosx,introduced=10.7)));
void arc4random_stir(void);
u_int32_t
  arc4random_uniform(u_int32_t ) __attribute__((availability(macosx,introduced=10.7)));

int atexit_b(void (^)(void)) __attribute__((availability(macosx,introduced=10.6)));
void *bsearch_b(const void *, const void *, size_t,
     size_t, int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));



char *cgetcap(char *, const char *, int);
int cgetclose(void);
int cgetent(char **, char **, const char *);
int cgetfirst(char **, char **);
int cgetmatch(const char *, const char *);
int cgetnext(char **, char **);
int cgetnum(char *, const char *, long *);
int cgetset(const char *);
int cgetstr(char *, const char *, char **);
int cgetustr(char *, const char *, char **);

int daemon(int, int) __asm("_" "daemon" "$1050") __attribute__((availability(macosx,introduced=10.0,deprecated=10.5)));
char *devname(dev_t, mode_t);
char *devname_r(dev_t, mode_t, char *buf, int len);
char *getbsize(int *, long *);
int getloadavg(double [], int);
const char
 *getprogname(void);

int heapsort(void *, size_t, size_t,
     int (*)(const void *, const void *));

int heapsort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

int mergesort(void *, size_t, size_t,
     int (*)(const void *, const void *));

int mergesort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void psort(void *, size_t, size_t,
     int (*)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void psort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void psort_r(void *, size_t, size_t, void *,
     int (*)(void *, const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void qsort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void qsort_r(void *, size_t, size_t, void *,
     int (*)(void *, const void *, const void *));
int radixsort(const unsigned char **, int, const unsigned char *,
     unsigned);
void setprogname(const char *);
int sradixsort(const unsigned char **, int, const unsigned char *,
     unsigned);
void sranddev(void);
void srandomdev(void);
void *reallocf(void *, size_t);

long long
  strtoq(const char *, char **, int);
unsigned long long
  strtouq(const char *, char **, int);

extern char *suboptarg;
void *valloc(size_t);
# 7 "src/input_source.h" 2

# 1 "/usr/include/assert.h" 1 3 4
# 76 "/usr/include/assert.h" 3 4
void __assert_rtn(const char *, const char *, int, const char *) __attribute__((noreturn));
# 9 "src/input_source.h" 2



typedef struct InputSource {
  const char *source;
  size_t pos;
  size_t length;
  const char *filename;
} InputSource;

InputSource *InputSource_Init(InputSource *is, const char *filename);
void InputSource_Dispose(InputSource *is);

static inline uint8_t InputSource_GetUint8(InputSource *input)
{
    return (input->pos < input->length) ?
        ((uint8_t *)input->source)[input->pos++] : -1;
}

uint8_t *InputSource_CopyText(InputSource *input, size_t pos, size_t length);

static inline uint32_t InputSource_GetUint32(InputSource *input)
{
    uint32_t data;
    (__builtin_expect(!(input->pos < input->length), 0) ? __assert_rtn(__func__, "src/input_source.h", 33, "input->pos < input->length") : (void)0);
    data = ((uint32_t *)input->source)[input->pos];
    input->pos += sizeof(uint32_t) / sizeof(uint8_t);
    return data;
}
# 2 "src/pegvm.h" 2
# 1 "src/loader.h" 1





# 1 "src/input_source.h" 1







# 1 "/usr/include/assert.h" 1 3 4
# 76 "/usr/include/assert.h" 3 4
void __assert_rtn(const char *, const char *, int, const char *) __attribute__((noreturn));
# 9 "src/input_source.h" 2
# 7 "src/loader.h" 2



typedef struct Instruction {
    long opcode;
    union {
        unsigned long ndata;
        uint8_t *bdata;
        struct Instruction *dst;
    };
} PegVMInstruction, Instruction;

PegVMInstruction *ByteCodeLoader_Load(InputSource *input);
void PegVMInstruction_dump(PegVMInstruction *code, size_t len);
# 3 "src/pegvm.h" 2
# 1 "src/node.h" 1

# 1 "src/input_source.h" 1







# 1 "/usr/include/assert.h" 1 3 4
# 76 "/usr/include/assert.h" 3 4
void __assert_rtn(const char *, const char *, int, const char *) __attribute__((noreturn));
# 9 "src/input_source.h" 2
# 3 "src/node.h" 2



typedef struct NODE NODE;

NODE *NODE_New(unsigned type, size_t pos);
void NODE_Dispose(NODE *self);
void NODE_SetTag(NODE *self, uint8_t *bdata, InputSource *input);
uint8_t *NODE_GetText(NODE *self);
uint8_t *NODE_GetTag(NODE *self);
void NODE_AppendChild(NODE *parent, NODE *node);
void NODE_Dump(NODE *node, int level);
NODE **Node_GetChildren(NODE *node, unsigned *length);

enum node_type {
  NODE_TYPE_DEFAULT
};
# 4 "src/pegvm.h" 2
# 1 "/usr/local/include/gc/gc.h" 1 3
# 34 "/usr/local/include/gc/gc.h" 3
# 1 "/usr/local/include/gc/gc_version.h" 1 3
# 35 "/usr/local/include/gc/gc.h" 2 3






# 1 "/usr/local/include/gc/gc_config_macros.h" 1 3
# 150 "/usr/local/include/gc/gc_config_macros.h" 3
# 1 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stddef.h" 1 3 4
# 34 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 53 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stddef.h" 3 4
typedef long unsigned int rsize_t;
# 151 "/usr/local/include/gc/gc_config_macros.h" 2 3
# 42 "/usr/local/include/gc/gc.h" 2 3





typedef void * GC_PTR;
# 65 "/usr/local/include/gc/gc.h" 3
  typedef unsigned long GC_word;
  typedef long GC_signed_word;




extern unsigned GC_get_version(void);




extern GC_word GC_gc_no;

extern GC_word GC_get_gc_no(void);
# 103 "/usr/local/include/gc/gc.h" 3
typedef void * ( * GC_oom_func)(size_t );
extern GC_oom_func GC_oom_fn;
# 114 "/usr/local/include/gc/gc.h" 3
extern void GC_set_oom_fn(GC_oom_func);
extern GC_oom_func GC_get_oom_fn(void);

extern int GC_find_leak;







extern void GC_set_find_leak(int);
extern int GC_get_find_leak(void);

extern int GC_all_interior_pointers;
# 141 "/usr/local/include/gc/gc.h" 3
extern void GC_set_all_interior_pointers(int);
extern int GC_get_all_interior_pointers(void);

extern int GC_finalize_on_demand;






extern void GC_set_finalize_on_demand(int);
extern int GC_get_finalize_on_demand(void);

extern int GC_java_finalization;
# 163 "/usr/local/include/gc/gc.h" 3
extern void GC_set_java_finalization(int);
extern int GC_get_java_finalization(void);

typedef void ( * GC_finalizer_notifier_proc)(void);
extern GC_finalizer_notifier_proc GC_finalizer_notifier;
# 177 "/usr/local/include/gc/gc.h" 3
extern void GC_set_finalizer_notifier(GC_finalizer_notifier_proc);
extern GC_finalizer_notifier_proc GC_get_finalizer_notifier(void);

extern int GC_dont_gc;
# 190 "/usr/local/include/gc/gc.h" 3
extern int GC_dont_expand;



extern void GC_set_dont_expand(int);
extern int GC_get_dont_expand(void);

extern int GC_use_entire_heap;
# 208 "/usr/local/include/gc/gc.h" 3
extern int GC_full_freq;
# 221 "/usr/local/include/gc/gc.h" 3
extern void GC_set_full_freq(int);
extern int GC_get_full_freq(void);

extern GC_word GC_non_gc_bytes;
# 234 "/usr/local/include/gc/gc.h" 3
extern void GC_set_non_gc_bytes(GC_word);
extern GC_word GC_get_non_gc_bytes(void);

extern int GC_no_dls;
# 246 "/usr/local/include/gc/gc.h" 3
extern void GC_set_no_dls(int);
extern int GC_get_no_dls(void);

extern GC_word GC_free_space_divisor;
# 266 "/usr/local/include/gc/gc.h" 3
extern void GC_set_free_space_divisor(GC_word);
extern GC_word GC_get_free_space_divisor(void);

extern GC_word GC_max_retries;







extern void GC_set_max_retries(GC_word);
extern GC_word GC_get_max_retries(void);


extern char *GC_stackbottom;
# 296 "/usr/local/include/gc/gc.h" 3
extern int GC_dont_precollect;
# 306 "/usr/local/include/gc/gc.h" 3
extern void GC_set_dont_precollect(int);
extern int GC_get_dont_precollect(void);

extern unsigned long GC_time_limit;
# 326 "/usr/local/include/gc/gc.h" 3
extern void GC_set_time_limit(unsigned long);
extern unsigned long GC_get_time_limit(void);
# 339 "/usr/local/include/gc/gc.h" 3
extern void GC_set_pages_executable(int);





extern int GC_get_pages_executable(void);







extern void GC_set_handle_fork(int);



extern void GC_init(void);
# 372 "/usr/local/include/gc/gc.h" 3
extern void * GC_malloc(size_t )
                        __attribute__((__malloc__)) ;
extern void * GC_malloc_atomic(size_t )
                        __attribute__((__malloc__)) ;
extern char * GC_strdup(const char *) __attribute__((__malloc__));
extern char * GC_strndup(const char *, size_t) __attribute__((__malloc__));
extern void * GC_malloc_uncollectable(size_t )
                        __attribute__((__malloc__)) ;
extern void * GC_malloc_stubborn(size_t )
                        __attribute__((__malloc__)) ;


extern void * GC_memalign(size_t , size_t )
                        __attribute__((__malloc__)) ;
extern int GC_posix_memalign(void ** , size_t ,
                        size_t );







extern void GC_free(void *);
# 410 "/usr/local/include/gc/gc.h" 3
extern void GC_change_stubborn(void *);
extern void GC_end_stubborn_change(void *);
# 424 "/usr/local/include/gc/gc.h" 3
extern void * GC_base(void * );




extern size_t GC_size(const void * );
# 439 "/usr/local/include/gc/gc.h" 3
extern void * GC_realloc(void * ,
                                 size_t )
                                                                  ;



extern int GC_expand_hp(size_t );






extern void GC_set_max_heap_size(GC_word );
# 461 "/usr/local/include/gc/gc.h" 3
extern void GC_exclude_static_roots(void * ,
                                        void * );


extern void GC_clear_roots(void);




extern void GC_add_roots(void * ,
                                 void * );



extern void GC_remove_roots(void * ,
                                    void * );
# 490 "/usr/local/include/gc/gc.h" 3
extern void GC_register_displacement(size_t );



extern void GC_debug_register_displacement(size_t );


extern void GC_gcollect(void);






extern void GC_gcollect_and_unmap(void);
# 519 "/usr/local/include/gc/gc.h" 3
typedef int ( * GC_stop_func)(void);
extern int GC_try_to_collect(GC_stop_func );





extern void GC_set_stop_func(GC_stop_func );
extern GC_stop_func GC_get_stop_func(void);
# 541 "/usr/local/include/gc/gc.h" 3
extern size_t GC_get_heap_size(void);




extern size_t GC_get_free_bytes(void);





extern size_t GC_get_unmapped_bytes(void);




extern size_t GC_get_bytes_since_gc(void);




extern size_t GC_get_total_bytes(void);
# 571 "/usr/local/include/gc/gc.h" 3
extern void GC_get_heap_usage_safe(GC_word * ,
                                           GC_word * ,
                                           GC_word * ,
                                           GC_word * ,
                                           GC_word * );



extern void GC_disable(void);



extern int GC_is_disabled(void);




extern void GC_enable(void);
# 601 "/usr/local/include/gc/gc.h" 3
extern void GC_enable_incremental(void);
# 611 "/usr/local/include/gc/gc.h" 3
extern int GC_incremental_protection_needs(void);
# 620 "/usr/local/include/gc/gc.h" 3
extern int GC_collect_a_little(void);
# 636 "/usr/local/include/gc/gc.h" 3
extern void * GC_malloc_ignore_off_page(size_t )
                        __attribute__((__malloc__)) ;
extern void * GC_malloc_atomic_ignore_off_page(size_t )
                        __attribute__((__malloc__)) ;
# 651 "/usr/local/include/gc/gc.h" 3
extern void * GC_malloc_atomic_uncollectable(
                                                size_t )
                        __attribute__((__malloc__)) ;
extern void * GC_debug_malloc_atomic_uncollectable(size_t,
                                                           const char * s, int i)
                        __attribute__((__malloc__)) ;



extern void * GC_debug_malloc(size_t ,
                                      const char * s, int i)
                        __attribute__((__malloc__)) ;
extern void * GC_debug_malloc_atomic(size_t ,
                                             const char * s, int i)
                        __attribute__((__malloc__)) ;
extern char * GC_debug_strdup(const char *,
                                      const char * s, int i) __attribute__((__malloc__));
extern char * GC_debug_strndup(const char *, size_t,
                                       const char * s, int i) __attribute__((__malloc__));
extern void * GC_debug_malloc_uncollectable(
                        size_t , const char * s, int i)
                        __attribute__((__malloc__)) ;
extern void * GC_debug_malloc_stubborn(size_t ,
                                               const char * s, int i)
                        __attribute__((__malloc__)) ;
extern void * GC_debug_malloc_ignore_off_page(
                        size_t , const char * s, int i)
                        __attribute__((__malloc__)) ;
extern void * GC_debug_malloc_atomic_ignore_off_page(
                        size_t , const char * s, int i)
                        __attribute__((__malloc__)) ;
extern void GC_debug_free(void *);
extern void * GC_debug_realloc(void * ,
                        size_t , const char * s, int i)
                                                                  ;
extern void GC_debug_change_stubborn(void *);
extern void GC_debug_end_stubborn_change(void *);
# 701 "/usr/local/include/gc/gc.h" 3
extern void * GC_debug_malloc_replacement(size_t )
                        __attribute__((__malloc__)) ;
extern void * GC_debug_realloc_replacement(void * ,
                                                   size_t )
                                                                  ;
# 802 "/usr/local/include/gc/gc.h" 3
typedef void ( * GC_finalization_proc)(void * ,
                                                  void * );

extern void GC_register_finalizer(void * ,
                        GC_finalization_proc , void * ,
                        GC_finalization_proc * , void ** );
extern void GC_debug_register_finalizer(void * ,
                        GC_finalization_proc , void * ,
                        GC_finalization_proc * , void ** );
# 859 "/usr/local/include/gc/gc.h" 3
extern void GC_register_finalizer_ignore_self(void * ,
                        GC_finalization_proc , void * ,
                        GC_finalization_proc * , void ** );
extern void GC_debug_register_finalizer_ignore_self(void * ,
                        GC_finalization_proc , void * ,
                        GC_finalization_proc * , void ** );





extern void GC_register_finalizer_no_order(void * ,
                        GC_finalization_proc , void * ,
                        GC_finalization_proc * , void ** );
extern void GC_debug_register_finalizer_no_order(void * ,
                        GC_finalization_proc , void * ,
                        GC_finalization_proc * , void ** );
# 893 "/usr/local/include/gc/gc.h" 3
extern void GC_register_finalizer_unreachable(void * ,
                        GC_finalization_proc , void * ,
                        GC_finalization_proc * , void ** );
extern void GC_debug_register_finalizer_unreachable(void * ,
                        GC_finalization_proc , void * ,
                        GC_finalization_proc * , void ** );
# 909 "/usr/local/include/gc/gc.h" 3
extern int GC_register_disappearing_link(void ** );
# 930 "/usr/local/include/gc/gc.h" 3
extern int GC_general_register_disappearing_link(void ** ,
                                                         void * );
# 963 "/usr/local/include/gc/gc.h" 3
extern int GC_unregister_disappearing_link(void ** );





extern int GC_should_invoke_finalizers(void);

extern int GC_invoke_finalizers(void);
# 999 "/usr/local/include/gc/gc.h" 3
typedef void ( * GC_warn_proc)(char * ,
                                          GC_word );
extern void GC_set_warn_proc(GC_warn_proc );

extern GC_warn_proc GC_get_warn_proc(void);



extern void GC_ignore_warn_proc(char *, GC_word);
# 1017 "/usr/local/include/gc/gc.h" 3
typedef GC_word GC_hidden_pointer;
# 1031 "/usr/local/include/gc/gc.h" 3
typedef void * ( * GC_fn_type)(void * );
extern void * GC_call_with_alloc_lock(GC_fn_type ,
                                                void * );
# 1047 "/usr/local/include/gc/gc.h" 3
struct GC_stack_base {
  void * mem_base;



};

typedef void * ( * GC_stack_base_func)(
                struct GC_stack_base * , void * );





extern void * GC_call_with_stack_base(GC_stack_base_func ,
                                              void * );
# 1138 "/usr/local/include/gc/gc.h" 3
extern void * GC_do_blocking(GC_fn_type ,
                                     void * );
# 1150 "/usr/local/include/gc/gc.h" 3
extern void * GC_call_with_gc_active(GC_fn_type ,
                                             void * );
# 1160 "/usr/local/include/gc/gc.h" 3
extern int GC_get_stack_base(struct GC_stack_base *);
# 1171 "/usr/local/include/gc/gc.h" 3
extern void * GC_same_obj(void * , void * );





extern void * GC_pre_incr(void **, ptrdiff_t );
extern void * GC_post_incr(void **, ptrdiff_t );
# 1188 "/usr/local/include/gc/gc.h" 3
extern void * GC_is_visible(void * );






extern void * GC_is_valid_displacement(void * );





extern void GC_dump(void);
# 1241 "/usr/local/include/gc/gc.h" 3
extern void ( * GC_same_obj_print_proc)(void * ,
                                                   void * );
extern void ( * GC_is_valid_displacement_print_proc)(void *);
extern void ( * GC_is_visible_print_proc)(void *);
# 1255 "/usr/local/include/gc/gc.h" 3
extern void * GC_malloc_many(size_t );
# 1267 "/usr/local/include/gc/gc.h" 3
typedef int ( * GC_has_static_roots_func)(
                                        const char * ,
                                        void * ,
                                        size_t );





extern void GC_register_has_static_roots_callback(
                                        GC_has_static_roots_func);
# 1378 "/usr/local/include/gc/gc.h" 3
extern void GC_set_force_unmap_on_gcollect(int);
extern int GC_get_force_unmap_on_gcollect(void);
# 1498 "/usr/local/include/gc/gc.h" 3
extern void GC_win32_free_heap(void);
# 5 "src/pegvm.h" 2






typedef struct ParserContext {
    long *stack_pointer;
    PegVMInstruction **call_stack_pointer;
    size_t failure_pos;
    NODE *current_node;
    InputSource *current_source;
    PegVMInstruction *instructions;
    long *stack_pointer_base;
    PegVMInstruction **call_stack_pointer_base;
    char last_error[256];
} ParserContext;

void ParserContext_Init(ParserContext *context);
void ParserContext_Dispose(ParserContext *context);
int ParserContext_LoadSyntax(ParserContext *context, const char *file);
int ParserContext_Execute(ParserContext *context, PegVMInstruction *inst, InputSource *input);
int ParserContext_ParseFiles(ParserContext *context, int argc, char **argv);
# 73 "src/pegvm.h"
enum pegvm_opcode {

    PEGVM_OP_EXIT, PEGVM_OP_JUMP, PEGVM_OP_CALL, PEGVM_OP_RET, PEGVM_OP_IFSUCC, PEGVM_OP_IFFAIL, PEGVM_OP_NOP, PEGVM_OP_Failure, PEGVM_OP_MatchText, PEGVM_OP_MatchByteChar, PEGVM_OP_MatchCharset, PEGVM_OP_MatchAnyChar, PEGVM_OP_MatchTextNot, PEGVM_OP_MatchByteCharNot, PEGVM_OP_MatchCharsetNot, PEGVM_OP_MatchOptionalText, PEGVM_OP_MatchOptionalByteChar, PEGVM_OP_MatchOptionalCharset, PEGVM_OP_RememberPosition, PEGVM_OP_CommitPosition, PEGVM_OP_BacktrackPosition, PEGVM_OP_RememberSequencePosition, PEGVM_OP_CommitSequencePosition, PEGVM_OP_BackTrackSequencePosition, PEGVM_OP_RememberFailurePosition, PEGVM_OP_UpdateFailurePosition, PEGVM_OP_ForgetFailurePosition, PEGVM_OP_StoreObject, PEGVM_OP_DropStoredObject, PEGVM_OP_RestoreObject, PEGVM_OP_RestoreObjectIfFailure, PEGVM_OP_RestoreNegativeObject, PEGVM_OP_ConnectObject, PEGVM_OP_DisableTransCapture, PEGVM_OP_EnableTransCapture, PEGVM_OP_NewObject, PEGVM_OP_LeftJoinObject, PEGVM_OP_CommitObject, PEGVM_OP_RefreshStoredObject, PEGVM_OP_Tagging, PEGVM_OP_Value, PEGVM_OP_Indent,

    PEGVM_OP_ERROR = -1
};
# 7 "src/pegvm.c" 2
# 1 "src/input_source.h" 1







# 1 "/usr/include/assert.h" 1 3 4
# 76 "/usr/include/assert.h" 3 4
void __assert_rtn(const char *, const char *, int, const char *) __attribute__((noreturn));
# 9 "src/input_source.h" 2
# 8 "src/pegvm.c" 2

# 1 "/usr/include/string.h" 1 3 4
# 70 "/usr/include/string.h" 3 4
void *memchr(const void *, int, size_t);
int memcmp(const void *, const void *, size_t);
void *memcpy(void *, const void *, size_t);
void *memmove(void *, const void *, size_t);
void *memset(void *, int, size_t);
char *strcat(char *, const char *);
char *strchr(const char *, int);
int strcmp(const char *, const char *);
int strcoll(const char *, const char *);
char *strcpy(char *, const char *);
size_t strcspn(const char *, const char *);
char *strerror(int) __asm("_" "strerror") ;
size_t strlen(const char *);
char *strncat(char *, const char *, size_t);
int strncmp(const char *, const char *, size_t);
char *strncpy(char *, const char *, size_t);
char *strpbrk(const char *, const char *);
char *strrchr(const char *, int);
size_t strspn(const char *, const char *);
char *strstr(const char *, const char *);
char *strtok(char *, const char *);
size_t strxfrm(char *, const char *, size_t);
# 104 "/usr/include/string.h" 3 4
char *strtok_r(char *, const char *, char **);
# 116 "/usr/include/string.h" 3 4
int strerror_r(int, char *, size_t);
char *strdup(const char *);
void *memccpy(void *, const void *, int, size_t);
# 130 "/usr/include/string.h" 3 4
char *stpcpy(char *, const char *);
char *stpncpy(char *, const char *, size_t) __attribute__((availability(macosx,introduced=10.7)));
char *strndup(const char *, size_t) __attribute__((availability(macosx,introduced=10.7)));
size_t strnlen(const char *, size_t) __attribute__((availability(macosx,introduced=10.7)));
char *strsignal(int sig);







# 1 "/usr/include/sys/_types/_rsize_t.h" 1 3 4
# 142 "/usr/include/string.h" 2 3 4
# 1 "/usr/include/sys/_types/_errno_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_errno_t.h" 3 4
typedef int errno_t;
# 143 "/usr/include/string.h" 2 3 4


errno_t memset_s(void *, rsize_t, int, rsize_t) __attribute__((availability(macosx,introduced=10.9)));
# 155 "/usr/include/string.h" 3 4
void *memmem(const void *, size_t, const void *, size_t) __attribute__((availability(macosx,introduced=10.7)));
void memset_pattern4(void *, const void *, size_t) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern8(void *, const void *, size_t) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern16(void *, const void *, size_t) __attribute__((availability(macosx,introduced=10.5)));

char *strcasestr(const char *, const char *);
char *strnstr(const char *, const char *, size_t);
size_t strlcat(char *, const char *, size_t);
size_t strlcpy(char *, const char *, size_t);
void strmode(int, char *);
char *strsep(char **, const char *);


void swab(const void * restrict, void * restrict, ssize_t);








# 1 "/usr/include/strings.h" 1 3 4
# 70 "/usr/include/strings.h" 3 4
int bcmp(const void *, const void *, size_t) ;
void bcopy(const void *, void *, size_t) ;
void bzero(void *, size_t) ;
char *index(const char *, int) ;
char *rindex(const char *, int) ;


int ffs(int);
int strcasecmp(const char *, const char *);
int strncasecmp(const char *, const char *, size_t);





int ffsl(long) __attribute__((availability(macosx,introduced=10.5)));
int ffsll(long long) __attribute__((availability(macosx,introduced=10.9)));
int fls(int) __attribute__((availability(macosx,introduced=10.5)));
int flsl(long) __attribute__((availability(macosx,introduced=10.5)));
int flsll(long long) __attribute__((availability(macosx,introduced=10.9)));



# 1 "/usr/include/string.h" 1 3 4
# 93 "/usr/include/strings.h" 2 3 4
# 177 "/usr/include/string.h" 2 3 4
# 186 "/usr/include/string.h" 3 4
# 1 "/usr/include/secure/_string.h" 1 3 4
# 187 "/usr/include/string.h" 2 3 4
# 10 "src/pegvm.c" 2
# 1 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdarg.h" 1 3 4
# 30 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdarg.h" 3 4
typedef __builtin_va_list va_list;
# 48 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 11 "src/pegvm.c" 2
# 1 "/usr/include/assert.h" 1 3 4
# 76 "/usr/include/assert.h" 3 4
void __assert_rtn(const char *, const char *, int, const char *) __attribute__((noreturn));
# 12 "src/pegvm.c" 2



static inline void PUSH_IP(ParserContext *context, PegVMInstruction *ip);

static void ParserContext_SetError(ParserContext *context, const char *fmt, ...)
    __attribute__((format(printf, 2, 3)));

void ParserContext_Init(ParserContext *context)
{
    __builtin___memset_chk (context, 0, sizeof(*context), __builtin_object_size (context, 0));
    context->stack_pointer_base = (long *) GC_malloc(sizeof(long) * 1024);
    context->call_stack_pointer_base = (PegVMInstruction **) GC_malloc(sizeof(PegVMInstruction *) * 1024);
    context->stack_pointer = &context->stack_pointer_base[0];
    context->call_stack_pointer = &context->call_stack_pointer_base[0];
}

void ParserContext_Dispose(ParserContext *context)
{
}

static void ParserContext_SetError(ParserContext *context, const char *fmt, ...)
{
    va_list ap;
    __builtin_va_start(ap, fmt);
    __builtin___vsnprintf_chk (context->last_error, 256, 0, __builtin_object_size (context->last_error, 2 > 1 ? 1 : 0), fmt, ap);
    __builtin_va_end(ap);
}

int ParserContext_LoadSyntax(ParserContext *context, const char *file)
{
    InputSource is;
    if (InputSource_Init(&is, file) == ((void*)0)) {
        return 1;
    }
    context->instructions = ByteCodeLoader_Load(&is);
    InputSource_Dispose(&is);
    return 0;
}

static PegVMInstruction *ParserContext_PrepareIP(ParserContext *context)
{
    PegVMInstruction *insts;

    insts = context->instructions;
    PUSH_IP(context, insts - 1);
    insts += 1;
    return insts;
}

int ParserContext_ParseFiles(ParserContext *context, int argc, char **argv)
{
    int i;
    InputSource is;
    PegVMInstruction *insts;
    (__builtin_expect(!(context->instructions && "load syntax file before parsing file"), 0) ? __assert_rtn(__func__, "src/pegvm.c", 67, "context->instructions && \"load syntax file before parsing file\"") : (void)0);
    for (i = 0; i < argc; i++) {
        if (InputSource_Init(&is, argv[i]) == ((void*)0)) {
            ParserContext_SetError(context,
                    "parse error: cannot load input file(%s)", argv[i]);
            return 1;
        }

        insts = ParserContext_PrepareIP(context);


        context->current_node = NODE_New(NODE_TYPE_DEFAULT, is.pos);

        if (ParserContext_Execute(context, insts, &is)) {
            ParserContext_SetError(context,
                    "parse error: input file(%s)", argv[i]);
            InputSource_Dispose(&is);
            return 1;
        }
        if (0 || 0) {
            fprintf(__stderrp, "\nparsed:\n\n");
            NODE_Dump(context->current_node, 0);
            fprintf(__stderrp, "\n");
        }
        InputSource_Dispose(&is);
    }
    return 0;
}

static inline int ParserContext_IsFailure(ParserContext *context)
{
    return context->current_node == ((void*)0);
}


static inline void ParserContext_RecordFailurePos(ParserContext *context, InputSource *input, size_t consumed)
{
    context->failure_pos = ((input->pos)>(context->failure_pos)?(input->pos):(context->failure_pos));
    context->current_node = ((void*)0);
    input->pos -= consumed;
}



static inline long INC_SP(ParserContext *context, int N)
{
    context->stack_pointer += (N);
    (__builtin_expect(!(context->stack_pointer >= context->stack_pointer_base && context->stack_pointer < &context->stack_pointer_base[1024]), 0) ? __assert_rtn(__func__, "src/pegvm.c", 115, "context->stack_pointer >= context->stack_pointer_base && context->stack_pointer < &context->stack_pointer_base[PARSER_CONTEXT_MAX_STACK_LENGTH]") : (void)0);

    return *context->stack_pointer;
}

static inline long DEC_SP(ParserContext *context, int N)
{
    context->stack_pointer -= N;
    (__builtin_expect(!(context->stack_pointer >= context->stack_pointer_base && context->stack_pointer < &context->stack_pointer_base[1024]), 0) ? __assert_rtn(__func__, "src/pegvm.c", 123, "context->stack_pointer >= context->stack_pointer_base && context->stack_pointer < &context->stack_pointer_base[PARSER_CONTEXT_MAX_STACK_LENGTH]") : (void)0);

    return *context->stack_pointer;
}

static inline void PUSH_IP(ParserContext *context, PegVMInstruction *ip)
{
    *context->call_stack_pointer++ = ip;
    (__builtin_expect(!(context->call_stack_pointer >= context->call_stack_pointer_base && context->call_stack_pointer < &context->call_stack_pointer_base[1024]), 0) ? __assert_rtn(__func__, "src/pegvm.c", 131, "context->call_stack_pointer >= context->call_stack_pointer_base && context->call_stack_pointer < &context->call_stack_pointer_base[PARSER_CONTEXT_MAX_STACK_LENGTH]") : (void)0);

}

static inline PegVMInstruction *POP_IP(ParserContext *context)
{
    --context->call_stack_pointer;
    (__builtin_expect(!(context->call_stack_pointer >= context->call_stack_pointer_base && context->call_stack_pointer < &context->call_stack_pointer_base[1024]), 0) ? __assert_rtn(__func__, "src/pegvm.c", 138, "context->call_stack_pointer >= context->call_stack_pointer_base && context->call_stack_pointer < &context->call_stack_pointer_base[PARSER_CONTEXT_MAX_STACK_LENGTH]") : (void)0);

    return *context->call_stack_pointer;
}






int ParserContext_Execute(ParserContext *context, Instruction *inst, InputSource *input)
{
    while (1) {
L_head:
        switch (inst->opcode) {



            case PEGVM_OP_EXIT: if (0) { PegVMInstruction_dump(inst, 1); } else {} {
                return 0;
            }
            case PEGVM_OP_JUMP: if (0) { PegVMInstruction_dump(inst, 1); } else {} {
                inst = (inst->dst); goto L_head;;
            }
            case PEGVM_OP_CALL: if (0) { PegVMInstruction_dump(inst, 1); } else {} {
                PUSH_IP(context, inst);
                inst = (inst->dst); goto L_head;;
            }
            case PEGVM_OP_RET: if (0) { PegVMInstruction_dump(inst, 1); } else {} {
                inst = POP_IP(context);
                ++inst; break;
            }
            case PEGVM_OP_IFSUCC: if (0) { PegVMInstruction_dump(inst, 1); } else {} {
                if (!ParserContext_IsFailure(context)) {
                    inst = (inst->dst); goto L_head;;
                }
                ++inst; break;
            }
            case PEGVM_OP_IFFAIL: if (0) { PegVMInstruction_dump(inst, 1); } else {} {
                if (ParserContext_IsFailure(context)) {
                    inst = (inst->dst); goto L_head;;
                }
                ++inst; break;
            }
            case PEGVM_OP_NOP: if (0) { PegVMInstruction_dump(inst, 1); } else {} {
                ++inst; break;
            }
            case PEGVM_OP_Failure: if (0) { PegVMInstruction_dump(inst, 1); } else {} {
                (__builtin_expect(!(0 && "Not implemented"), 0) ? __assert_rtn(__func__, "src/pegvm.c", 185, "0 && \"Not implemented\"") : (void)0);
                ++inst; break;
            }
            case PEGVM_OP_MatchText: if (0) { PegVMInstruction_dump(inst, 1); } else {} {
                uint8_t c = InputSource_GetUint8(input);
                if (0) {
                    fprintf(__stderrp, "T c='%c', n='%c'\n", (char)c, (char)inst->ndata);
                }
                if (c != (uint8_t)inst->ndata) {
                    ParserContext_RecordFailurePos(context, input, 1);
                }
                ++inst; break;
            }
            case PEGVM_OP_MatchByteChar: if (0) { PegVMInstruction_dump(inst, 1); } else {} {
                (__builtin_expect(!(0 && "Not implemented"), 0) ? __assert_rtn(__func__, "src/pegvm.c", 199, "0 && \"Not implemented\"") : (void)0);
                ++inst; break;
            }
            case PEGVM_OP_MatchCharset: if (0) { PegVMInstruction_dump(inst, 1); } else {} {
                uint8_t c = InputSource_GetUint8(input);
                uint8_t *charset = inst->bdata;
                if (0) {
                    fprintf(__stderrp, "Charset c='%c'\n", (char)c);
                }
                if (!(charset[c / 8] & (1 << (c % 8)))) {
                    ParserContext_RecordFailurePos(context, input, 1);
                }
                ++inst; break;
            }
            case PEGVM_OP_MatchAnyChar: if (0) { PegVMInstruction_dump(inst, 1); } else {} {
                uint8_t c = InputSource_GetUint8(input);
                if (0) {
                    fprintf(__stderrp, "A c='%c'\n", (char)c);
                }
                if (c == (uint8_t)-1) {

                    ParserContext_RecordFailurePos(context, input, 1);
                }
                ++inst; break;
            }
            case PEGVM_OP_MatchTextNot: if (0) { PegVMInstruction_dump(inst, 1); } else {} {
                (__builtin_expect(!(0 && "Not implemented"), 0) ? __assert_rtn(__func__, "src/pegvm.c", 225, "0 && \"Not implemented\"") : (void)0);
                ++inst; break;
            }
            case PEGVM_OP_MatchByteCharNot: if (0) { PegVMInstruction_dump(inst, 1); } else {} {
                (__builtin_expect(!(0 && "Not implemented"), 0) ? __assert_rtn(__func__, "src/pegvm.c", 229, "0 && \"Not implemented\"") : (void)0);
                ++inst; break;
            }
            case PEGVM_OP_MatchCharsetNot: if (0) { PegVMInstruction_dump(inst, 1); } else {} {
                (__builtin_expect(!(0 && "Not implemented"), 0) ? __assert_rtn(__func__, "src/pegvm.c", 233, "0 && \"Not implemented\"") : (void)0);
                ++inst; break;
            }
            case PEGVM_OP_MatchOptionalText: if (0) { PegVMInstruction_dump(inst, 1); } else {} {
                (__builtin_expect(!(0 && "Not implemented"), 0) ? __assert_rtn(__func__, "src/pegvm.c", 237, "0 && \"Not implemented\"") : (void)0);
                ++inst; break;
            }
            case PEGVM_OP_MatchOptionalByteChar: if (0) { PegVMInstruction_dump(inst, 1); } else {} {
                (__builtin_expect(!(0 && "Not implemented"), 0) ? __assert_rtn(__func__, "src/pegvm.c", 241, "0 && \"Not implemented\"") : (void)0);
                ++inst; break;
            }
            case PEGVM_OP_MatchOptionalCharset: if (0) { PegVMInstruction_dump(inst, 1); } else {} {
                (__builtin_expect(!(0 && "Not implemented"), 0) ? __assert_rtn(__func__, "src/pegvm.c", 245, "0 && \"Not implemented\"") : (void)0);
                ++inst; break;
            }
            case PEGVM_OP_RememberPosition: if (0) { PegVMInstruction_dump(inst, 1); } else {} {
                (*context->stack_pointer = (input->pos), INC_SP(context, 1));
                ++inst; break;
            }
            case PEGVM_OP_CommitPosition: if (0) { PegVMInstruction_dump(inst, 1); } else {} {
                (DEC_SP(context, 1));
                ++inst; break;
            }
            case PEGVM_OP_BacktrackPosition: if (0) { PegVMInstruction_dump(inst, 1); } else {} {
                size_t pos = (size_t)(DEC_SP(context, 1));

                input->pos = pos;
                ++inst; break;
            }
            case PEGVM_OP_RememberSequencePosition: if (0) { PegVMInstruction_dump(inst, 1); } else {} {
                (*context->stack_pointer = (input->pos), INC_SP(context, 1));
                (*context->stack_pointer = (input->pos), INC_SP(context, 1));
                (*context->stack_pointer = ((long)context->current_node), INC_SP(context, 1));
                ++inst; break;
            }
            case PEGVM_OP_CommitSequencePosition: if (0) { PegVMInstruction_dump(inst, 1); } else {} {
                (DEC_SP(context, 1));
                (DEC_SP(context, 1));
                (DEC_SP(context, 1));
                ++inst; break;
            }
            case PEGVM_OP_BackTrackSequencePosition: if (0) { PegVMInstruction_dump(inst, 1); } else {} {
                context->current_node = (NODE *)(DEC_SP(context, 1));
                (DEC_SP(context, 1));
                input->pos = (DEC_SP(context, 1));
                ++inst; break;
            }
            case PEGVM_OP_RememberFailurePosition: if (0) { PegVMInstruction_dump(inst, 1); } else {} {
                (__builtin_expect(!(0 && "Not implemented"), 0) ? __assert_rtn(__func__, "src/pegvm.c", 281, "0 && \"Not implemented\"") : (void)0);
                ++inst; break;
            }
            case PEGVM_OP_UpdateFailurePosition: if (0) { PegVMInstruction_dump(inst, 1); } else {} {
                (__builtin_expect(!(0 && "Not implemented"), 0) ? __assert_rtn(__func__, "src/pegvm.c", 285, "0 && \"Not implemented\"") : (void)0);
                ++inst; break;
            }
            case PEGVM_OP_ForgetFailurePosition: if (0) { PegVMInstruction_dump(inst, 1); } else {} {
                (DEC_SP(context, 1));
                ++inst; break;
            }
            case PEGVM_OP_StoreObject: if (0) { PegVMInstruction_dump(inst, 1); } else {} {
                (*context->stack_pointer = ((long)context->current_node), INC_SP(context, 1));
                ++inst; break;
            }
            case PEGVM_OP_DropStoredObject: if (0) { PegVMInstruction_dump(inst, 1); } else {} {
                (DEC_SP(context, 1));
                ++inst; break;
            }
            case PEGVM_OP_RestoreObject: if (0) { PegVMInstruction_dump(inst, 1); } else {} {
                context->current_node = (NODE *)(DEC_SP(context, 1));
                ++inst; break;
            }
            case PEGVM_OP_RestoreObjectIfFailure: if (0) { PegVMInstruction_dump(inst, 1); } else {} {
                (__builtin_expect(!(0 && "Not implemented"), 0) ? __assert_rtn(__func__, "src/pegvm.c", 305, "0 && \"Not implemented\"") : (void)0);
                ++inst; break;
            }
            case PEGVM_OP_RestoreNegativeObject: if (0) { PegVMInstruction_dump(inst, 1); } else {} {
                NODE *node = (NODE *)(DEC_SP(context, 1));
                if (ParserContext_IsFailure(context)) {
                    context->current_node = node;
                }
                else {

                    ParserContext_RecordFailurePos(context, input, 0);
                }
                ++inst; break;
            }
            case PEGVM_OP_ConnectObject: if (0) { PegVMInstruction_dump(inst, 1); } else {} {
                NODE *parent = (NODE *)(DEC_SP(context, 1));
                NODE_AppendChild(parent, context->current_node);
                context->current_node = parent;
                ++inst; break;
            }
            case PEGVM_OP_DisableTransCapture: if (0) { PegVMInstruction_dump(inst, 1); } else {} {
                (__builtin_expect(!(0 && "Not implemented"), 0) ? __assert_rtn(__func__, "src/pegvm.c", 326, "0 && \"Not implemented\"") : (void)0);
                ++inst; break;
            }
            case PEGVM_OP_EnableTransCapture: if (0) { PegVMInstruction_dump(inst, 1); } else {} {
                (__builtin_expect(!(0 && "Not implemented"), 0) ? __assert_rtn(__func__, "src/pegvm.c", 330, "0 && \"Not implemented\"") : (void)0);
                ++inst; break;
            }
            case PEGVM_OP_NewObject: if (0) { PegVMInstruction_dump(inst, 1); } else {} {
                context->current_node = NODE_New(NODE_TYPE_DEFAULT, input->pos);
                ++inst; break;
            }
            case PEGVM_OP_LeftJoinObject: if (0) { PegVMInstruction_dump(inst, 1); } else {} {
                NODE *parent = NODE_New(NODE_TYPE_DEFAULT, input->pos);
                NODE_AppendChild(parent, context->current_node);
                context->current_node = parent;
                ++inst; break;
            }
            case PEGVM_OP_CommitObject: if (0) { PegVMInstruction_dump(inst, 1); } else {} {
                (__builtin_expect(!(0 && "Not implemented"), 0) ? __assert_rtn(__func__, "src/pegvm.c", 344, "0 && \"Not implemented\"") : (void)0);
                ++inst; break;
            }
            case PEGVM_OP_RefreshStoredObject: if (0) { PegVMInstruction_dump(inst, 1); } else {} {
                (__builtin_expect(!(0 && "Not implemented"), 0) ? __assert_rtn(__func__, "src/pegvm.c", 348, "0 && \"Not implemented\"") : (void)0);
                ++inst; break;
            }
            case PEGVM_OP_Tagging: if (0) { PegVMInstruction_dump(inst, 1); } else {} {
                NODE_SetTag(context->current_node, inst->bdata, input);
                if (0) {
                    fprintf(__stderrp, "tag '%s'\ntext '%s'\n", inst->bdata, NODE_GetText(context->current_node));
                }
                ++inst; break;
            }
            case PEGVM_OP_Value: if (0) { PegVMInstruction_dump(inst, 1); } else {} {
                (__builtin_expect(!(0 && "Not implemented"), 0) ? __assert_rtn(__func__, "src/pegvm.c", 359, "0 && \"Not implemented\"") : (void)0);
                ++inst; break;
            }
            case PEGVM_OP_Indent: if (0) { PegVMInstruction_dump(inst, 1); } else {} {
                (__builtin_expect(!(0 && "Not implemented"), 0) ? __assert_rtn(__func__, "src/pegvm.c", 363, "0 && \"Not implemented\"") : (void)0);
                ++inst; break;
            }
        }
    }
    return 1;
}
