/* LEVEL_04:0x0978C0 -- placement copy of LEVEL_01_0947C8.c: sets up render targets and a full-screen pass while an effect is active. */
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

extern int func_09D630(int a, int b, int c);
extern void func_09D6C8(int a, int b, int c);
extern void func_0A5B20(int a);
extern void func_0A5B40(int a);
extern void func_0A5DD8(int a, int b, int c, int d, int e);
extern void func_0A5C38(unsigned int c);
extern void func_0AAED8(void *rt, int a);
extern void func_0AAC60(void *rt, int a);
extern void func_0A7200(int a, int b, int c);
extern void func_0A7828(int a);
extern void func_0A9290(int a, int b, int c, int d, unsigned int e, unsigned int f, float x, float y, float w, float h);
extern void dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(void *dl, unsigned long state);

void func_0978C0(int arg)
{
    int *list;
    unsigned int *q;

    if (func_09D630(0xC, 0xC, arg)) {
        func_0A5B20(9);
        func_0A5B40(0);
        func_0A5DD8(0, 2, 3, 0, 0);
        func_0A5C38(0xFFFFFFFF);
        func_0A5B40(5);
        func_0A5B40(3);
        func_0A5B40(4);
        gRT_AuxBuffer.w = 0x80;
        gRT_AuxBuffer.d = 0x80;
        gRT_AuxBuffer.h = 0x80;
        func_0AAED8(&gRT_BackBuffer, 0);
        func_0AAC60(&gRT_AuxBuffer, 0);
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
        func_0A7200(1, 0, 1);
        func_0A7828(0);
        func_0A9290(0, 0, gRT_AuxBuffer.w, gRT_AuxBuffer.h, 0xFFFFFFFF, 0x00FFFFFF, 0.0f, 0.0f,
                    (float)gRT_BackBuffer.w, (float)gRT_BackBuffer.h);
        func_0A5B20(4);
        func_0AAED8(&gRT_AuxBuffer, 0);
        func_0AAC60(&gRT_BackBuffer, 0);
        func_09D6C8(0xC, 0xC, arg);
        func_0A7828(1);
        dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(list, 0x44);
    }
}
