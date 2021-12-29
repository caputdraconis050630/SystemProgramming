#define malloc(size) mm_malloc(size)
#define free(ptr) mm_free(ptr)

void *mm_malloc(size_t size);
void mm_free(void *bp);
void *Malloc(size_t size);

/* $begin mmheader */
/* $begin mallocinterface */
extern int mm_init(void);
/* $end mallocinterface */

extern void *mm_realloc(void *ptr, size_t size);
extern void *mm_calloc (size_t nmemb, size_t size);
extern void mm_checkheap(int verbose);
/* $end mmheader */
