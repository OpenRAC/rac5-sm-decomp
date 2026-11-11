/* LEVEL_03:0x162958 -- registers the object's linked word with the shared table at full scale and installs its callback. */
struct Obj {
    char pad00[0x58];
    int f58;
};

extern char D_00239160[];
extern void func_162D80(void);
extern void func_1E06C0(struct Obj *a0, int a1, char *a2, float f12);
extern void func_099260(void (*cb)(void), struct Obj *a1, int a2, int a3);

void func_162958(struct Obj *o)
{
    func_1E06C0(o, o->f58, D_00239160, 1.0f);
    func_099260(func_162D80, o, 0, 0);
}
