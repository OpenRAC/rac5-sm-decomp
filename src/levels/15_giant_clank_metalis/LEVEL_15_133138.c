/* LEVEL_15:0x133138 -- runs the slot helper on both global slots with the
   same argument. */
typedef struct {
    char pad[0x30];
} Slot;

extern Slot D_002F3D68[2];
extern void func_0E96C8(Slot *slot, void *arg);

void func_133138(void *arg)
{
    Slot *slots = D_002F3D68;

    func_0E96C8(&slots[0], arg);
    func_0E96C8(&slots[1], arg);
}
