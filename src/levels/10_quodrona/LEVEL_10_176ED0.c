/* LEVEL_10:0x176ED0 -- callback: sets up the target record (mode 13), copies the default 28-byte block into it, clears the owner's second word and finishes the target. */
typedef struct Block {
    float f[7];
} Block;

typedef struct Target {
    char pad0[0xA4];
    Block block;
} Target;

typedef struct Owner {
    int w0;
    int w4;
} Owner;

extern Block D_0022A4C8;
extern void func_1730A0(Target *t, int mode, float a, float b);
extern void func_173850(Target *t);

void func_176ED0(Owner *o, Target *t)
{
    func_1730A0(t, 13, 0.0f, 0.1f);
    t->block = D_0022A4C8;
    o->w4 = 0;
    func_173850(t);
}
