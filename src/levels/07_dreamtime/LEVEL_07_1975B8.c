/* LEVEL_07:0x1975B8 -- placement copy of LEVEL_06_17DFA0.c: fills the handle of each of the seven slots: zero when the slot key is the all-ones marker, otherwise the handle made by the id helper. */
typedef struct {
    int w_00;
    unsigned int key_04;
    int handle_08;
} Slot;

extern Slot D_0021CF38[7];
extern int func_12D068(unsigned int value);

void func_1975B8(void)
{
    Slot *slot = D_0021CF38;
    unsigned int i;

    for (i = 0; i < 7; i++) {
        if (slot[i].key_04 != 0xFFFFFFFFu)
            slot[i].handle_08 = func_12D068(slot[i].key_04);
        else
            slot[i].handle_08 = 0;
    }
}
