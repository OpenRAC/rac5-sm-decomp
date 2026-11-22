/* LEVEL_18:0x090148 -- placement copy of LEVEL_01_0A1ED8.c: stores the display-state byte and emits the state register into the display list. */
typedef unsigned int u32;
typedef unsigned long u64;
typedef struct {
    u32 w[4];
} DLIB_GIFTAG;
typedef struct {
    unsigned char b0;
    char pad1[3];
    int w4;
    unsigned char b8;
    char pad9[3];
    u32 wC;
    unsigned char b10;
    unsigned char b11;
    unsigned char b12;
} State;

extern State D_00256EC0;
extern char db_dlist[];
extern DLIB_GIFTAG g_cntTag[];

extern void dlib_displist_direct_begin__FP13DLIB_DISPLIST(void *);
extern void dlib_displist_direct_end__FP13DLIB_DISPLIST(void *);
extern void dlib_displist_add_data_ul64__FP13DLIB_DISPLISTUlUl(void *, u64, u64);

void func_090148(int a)
{
    int *list;
    unsigned int *q;
    u64 v;
    u64 t;

    D_00256EC0.b12 = a;
    list = *(int **)(db_dlist + 0x54);
    *(DLIB_GIFTAG *)list[2] = g_cntTag[0];
    q = (unsigned int *)list[1];
    q[3] = 0x13000000;
    q[1] = 0;
    q[2] = 0;
    q[0] = 0;
    list[1] += 0x10;
    *(unsigned short *)list[2] = 1;
    list[2] = list[1];
    list[1] += 0x10;
    dlib_displist_direct_begin__FP13DLIB_DISPLIST(list);
    t = D_00256EC0.b8 | ((u64)D_00256EC0.wC << 1);
    t |= (u64)D_00256EC0.b10 << 4;
    t |= (u64)D_00256EC0.b12 << 14;
    v = t | 0x10000;
    if (D_00256EC0.b0)
        v |= (u64)(u32)D_00256EC0.w4 << 17;
    else
        v |= 0x20000;
    dlib_displist_add_data_ul64__FP13DLIB_DISPLISTUlUl(list, v, 0x47);
    dlib_displist_direct_end__FP13DLIB_DISPLIST(list);
}
