/* LEVEL_06:0x08D418 -- placement copy of LEVEL_01_0947C8.c: sets up render targets and a full-screen pass while an effect is active. */
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

extern int func_093238(int a, int b, int c);
extern void func_0932D0(int a, int b, int c);
extern void func_09B0E0(int a);
extern void func_09B100(int a);
extern void func_09B398(int a, int b, int c, int d, int e);
extern void func_09B1F8(unsigned int c);
extern void func_0A0498(void *rt, int a);
extern void func_0A0220(void *rt, int a);
extern void func_09C7C0(int a, int b, int c);
extern void func_09CDE8(int a);
extern void func_09E850(int a, int b, int c, int d, unsigned int e, unsigned int f, float x, float y, float w, float h);
extern void dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(void *dl, unsigned long state);

void func_08D418(int arg)
{
    int *list;
    unsigned int *q;

    if (func_093238(0xC, 0xC, arg)) {
        func_09B0E0(9);
        func_09B100(0);
        func_09B398(0, 2, 3, 0, 0);
        func_09B1F8(0xFFFFFFFF);
        func_09B100(5);
        func_09B100(3);
        func_09B100(4);
        gRT_AuxBuffer.w = 0x80;
        gRT_AuxBuffer.d = 0x80;
        gRT_AuxBuffer.h = 0x80;
        func_0A0498(&gRT_BackBuffer, 0);
        func_0A0220(&gRT_AuxBuffer, 0);
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
        func_09C7C0(1, 0, 1);
        func_09CDE8(0);
        func_09E850(0, 0, gRT_AuxBuffer.w, gRT_AuxBuffer.h, 0xFFFFFFFF, 0x00FFFFFF, 0.0f, 0.0f,
                    (float)gRT_BackBuffer.w, (float)gRT_BackBuffer.h);
        func_09B0E0(4);
        func_0A0498(&gRT_AuxBuffer, 0);
        func_0A0220(&gRT_BackBuffer, 0);
        func_0932D0(0xC, 0xC, arg);
        func_09CDE8(1);
        dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(list, 0x44);
    }
}
