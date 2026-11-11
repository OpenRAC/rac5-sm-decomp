/* LEVEL_23:0x08A1E8 -- placement copy of LEVEL_01_0947C8.c: sets up render targets and a full-screen pass while an effect is active. */
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

extern int func_08FEB0(int a, int b, int c);
extern void func_08FF48(int a, int b, int c);
extern void func_097650(int a);
extern void func_097670(int a);
extern void func_097908(int a, int b, int c, int d, int e);
extern void func_097768(unsigned int c);
extern void func_09CA08(void *rt, int a);
extern void func_09C790(void *rt, int a);
extern void func_098D30(int a, int b, int c);
extern void func_099358(int a);
extern void func_09ADC0(int a, int b, int c, int d, unsigned int e, unsigned int f, float x, float y, float w, float h);
extern void dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(void *dl, unsigned long state);

void func_08A1E8(int arg)
{
    int *list;
    unsigned int *q;

    if (func_08FEB0(0xC, 0xC, arg)) {
        func_097650(9);
        func_097670(0);
        func_097908(0, 2, 3, 0, 0);
        func_097768(0xFFFFFFFF);
        func_097670(5);
        func_097670(3);
        func_097670(4);
        gRT_AuxBuffer.w = 0x80;
        gRT_AuxBuffer.d = 0x80;
        gRT_AuxBuffer.h = 0x80;
        func_09CA08(&gRT_BackBuffer, 0);
        func_09C790(&gRT_AuxBuffer, 0);
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
        func_098D30(1, 0, 1);
        func_099358(0);
        func_09ADC0(0, 0, gRT_AuxBuffer.w, gRT_AuxBuffer.h, 0xFFFFFFFF, 0x00FFFFFF, 0.0f, 0.0f,
                    (float)gRT_BackBuffer.w, (float)gRT_BackBuffer.h);
        func_097650(4);
        func_09CA08(&gRT_AuxBuffer, 0);
        func_09C790(&gRT_BackBuffer, 0);
        func_08FF48(0xC, 0xC, arg);
        func_099358(1);
        dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(list, 0x44);
    }
}
