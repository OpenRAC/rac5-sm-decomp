/* LEVEL_09.REL:0x14F980 -- sets the effect channel at +0x6C from the live
   value at +0x70, with the two fixed flags of this emitter. */
typedef struct {
    char pad[0x6C];
    int f_6C;
    float f_70;
} Obj;

extern int func_11A440(unsigned int a0, unsigned int a1, float f);

void func_14F980(Obj *a0)
{
    a0->f_6C = func_11A440(0xFF000055, 0xFF00CC00, a0->f_70);
}
