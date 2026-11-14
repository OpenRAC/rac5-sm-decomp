/* LEVEL_01:0x0A2558 -- copies a 16-byte tag block into a display list record, writes a header, and brackets a display list with begin, data and end calls. */
extern char db_dlist[];
extern char g_cntTag[];
extern void *memcpy(void *a0, const void *a1, unsigned int a2);
extern void dlib_displist_direct_begin(char *a0) __asm__("dlib_displist_direct_begin__FP13DLIB_DISPLIST");
extern void dlib_displist_add_data_ul64(char *a0, unsigned long a1, unsigned long a2) __asm__("dlib_displist_add_data_ul64__FP13DLIB_DISPLISTUlUl");
extern void dlib_displist_direct_end(char *a0) __asm__("dlib_displist_direct_end__FP13DLIB_DISPLIST");

void SYSTEM_SetBloomWrite__Fb(int a0)
{
    char *d;
    char *c;
    char *t1;
    char *p8;
    char *t2;
    unsigned long flag;

    d = *(char **)(db_dlist + 0x54);
    memcpy(*(char **)(d + 8), g_cntTag, 16);
    c = *(char **)(d + 4);
    *(int *)(c + 0xC) = 0x13000000;
    *(int *)(c + 4) = 0;
    *(int *)(c + 8) = 0;
    *(int *)(c + 0) = 0;
    t1 = *(char **)(d + 4);
    p8 = *(char **)(d + 8);
    *(char **)(d + 4) = t1 + 0x10;
    *(short *)p8 = 1;
    t2 = *(char **)(d + 4);
    *(char **)(d + 8) = t2;
    *(char **)(d + 4) = t2 + 0x10;
    dlib_displist_direct_begin(d);
    flag = 1;
    if (a0 == 0) {
        flag = 0;
    }
    dlib_displist_add_data_ul64(d, flag, 0x4A);
    dlib_displist_direct_end(d);
}
