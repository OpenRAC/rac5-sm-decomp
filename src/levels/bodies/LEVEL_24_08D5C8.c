/* LEVEL_24:0x08D5C8 -- placement copy of LEVEL_01_0947C8.c: sets up render targets and a full-screen pass while an effect is active. */
typedef struct {
    unsigned int w[4];
} DLIB_GIFTAG;

typedef struct AuxRT {
    char pad[8];
    short w;
    short h;
    short d;
} AuxRT;

typedef struct BackRT {
    char pad[8];
    unsigned short w;
    unsigned short h;
} BackRT;

extern AuxRT gRT_AuxBuffer;
extern BackRT gRT_BackBuffer;
extern char db_dlist[];
extern DLIB_GIFTAG g_cntTag[];

extern int func_093480(int a, int b, int c);
extern void func_093518(int a, int b, int c);
extern void func_09A188(int a);
extern void func_09A1A8(int a);
extern void func_09A440(int a, int b, int c, int d, int e);
extern void func_09A2A0(unsigned int c);
extern void func_09F540(void *rt, int a);
extern void func_09F2C8(void *rt, int a);
extern void func_09B868(int a, int b, int c);
extern void func_09BE90(int a);
extern void func_09D8F8(int a, int b, int c, int d, unsigned int e, unsigned int f, float x, float y, float w, float h);
extern void dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(void *dl, unsigned long state);

void func_08D5C8(int arg)
{
    int *list;
    unsigned int *q;

    if (func_093480(0xC, 0xC, arg)) {
        func_09A188(9);
        func_09A1A8(0);
        func_09A440(0, 2, 3, 0, 0);
        func_09A2A0(0xFFFFFFFF);
        func_09A1A8(5);
        func_09A1A8(3);
        func_09A1A8(4);
        gRT_AuxBuffer.w = 0x80;
        gRT_AuxBuffer.d = 0x80;
        gRT_AuxBuffer.h = 0x80;
        func_09F540(&gRT_BackBuffer, 0);
        func_09F2C8(&gRT_AuxBuffer, 0);
        list = *(int **)(db_dlist + 0x54);
        dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(list, 0x80000000A8UL);
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
        func_09B868(1, 0, 1);
        func_09BE90(0);
        func_09D8F8(0, 0, gRT_AuxBuffer.w, gRT_AuxBuffer.h, 0xFFFFFFFF, 0x00FFFFFF, 0.0f, 0.0f,
                    (float)gRT_BackBuffer.w, (float)gRT_BackBuffer.h);
        func_09A188(4);
        func_09F540(&gRT_AuxBuffer, 0);
        func_09F2C8(&gRT_BackBuffer, 0);
        func_093518(0xC, 0xC, arg);
        func_09BE90(1);
        dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(list, 0x44);
    }
}
