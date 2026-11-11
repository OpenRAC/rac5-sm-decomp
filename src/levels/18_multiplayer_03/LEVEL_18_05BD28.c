/* LEVEL_18.REL:0x05BD28 -- primes the record through func_036608, then parks
   the float func_001050 returns at its +0xF08 slot. */
typedef struct {
    unsigned char pad0[0xF08];
    float v_F08;
} Obj;

extern void func_036608(Obj *a0);
extern float func_001050(void);

void func_05BD28(Obj *a0)
{
    func_036608(a0);
    a0->v_F08 = func_001050();
}
