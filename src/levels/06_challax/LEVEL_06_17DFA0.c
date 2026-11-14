/* LEVEL_06:0x17DFA0 -- fills the handle of each of the seven slots: zero when the slot key is the all-ones marker, otherwise the handle made by the id helper. */
typedef struct {
    int w_00;
    unsigned int key_04;
    int handle_08;
} Slot;

extern Slot D_001F76D0[7];
extern int func_1206C0(unsigned int value);

void func_17DFA0(void)
{
    Slot *slot = D_001F76D0;
    unsigned int i;

    for (i = 0; i < 7; i++) {
        if (slot[i].key_04 != 0xFFFFFFFFu)
            slot[i].handle_08 = func_1206C0(slot[i].key_04);
        else
            slot[i].handle_08 = 0;
    }
}
