/* LEVEL_15.REL:0x021C18 -- scales the record's +0x1C and +0x18 integer
   counters by 255 and hands each result to the same erased routine, then
   passes the record's +0x50 pointer to it. */
typedef struct {
    unsigned char pad0[0x18];
    int v_18;
    int v_1C;
    unsigned char pad1[0x30];
    void *p_50;
} Obj;

extern Obj *D_00148C2C;
extern void send_float(float value) __asm__("func_000000");
extern void send_ptr(void *value) __asm__("func_000000");

void func_021C18(void)
{
    send_float((float)D_00148C2C->v_1C / 255.0f);
    send_float((float)D_00148C2C->v_18 / 255.0f);
    send_ptr(D_00148C2C->p_50);
}
