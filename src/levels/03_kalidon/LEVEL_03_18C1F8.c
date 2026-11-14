/* LEVEL_03:0x18C1F8 -- fills the handle of each of the five slots whose key is set. */
typedef struct {
    int w_00;
    unsigned int key_04;
    int handle_08;
} Slot;

extern Slot D_002211A0[5];
extern int func_1282D0(unsigned int value);

void func_18C1F8(void)
{
    Slot *slot = D_002211A0;
    unsigned int i;

    for (i = 0; i < 5; i++) {
        if (slot[i].key_04 != 0)
            slot[i].handle_08 = func_1282D0(slot[i].key_04);
    }
}
