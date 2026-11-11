/* LEVEL_01.REL:0x110D30 -- forwards the request to the queue writer, with
   the caller buffer when it gave one and a local scratch block otherwise. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
} Rec;

typedef struct {
    char pad[0xC];
    float f_0C;
} Obj;

extern Rec *D_00206DA8;

extern void func_110D70(void *a0, int a1, int a2, Obj *a3, float f);

void func_110D30(int a0, Obj *a1, int *a2)
{
    int buf[4];
    int *p;

    p = a2 ? a2 : buf;
    func_110D70(p, a0, D_00206DA8->f_08, a1, a1->f_0C);
}
