/* LEVEL_19.REL:0x05C680 -- primes the record through func_037058, then parks
   the float func_000FE0 returns at its +0xF08 slot. */
typedef struct {
    unsigned char pad0[0xF08];
    float v_F08;
} Obj;

extern void func_037058(Obj *a0);
extern float func_000FE0(void);

void func_05C680(Obj *a0)
{
    func_037058(a0);
    a0->v_F08 = func_000FE0();
}
