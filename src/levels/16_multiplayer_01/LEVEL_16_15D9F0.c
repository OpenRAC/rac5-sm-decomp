/* LEVEL_16:0x15D9F0 -- scans four table slots for a matching pointer and clears a flag byte in the paired slot. */

struct Obj {
    char pad_00[0x58];
    char *p_58;
};

void func_066830(unsigned char *p);

void func_15D9F0(struct Obj *o, char *target)
{
    char *base = o->p_58;
    char *q = base + 0x664;
    char *p = base + 0x604;
    unsigned int i;

    for (i = 0; i < 4; p += 0x64, i++) {
        if (p == target) {
            *q = 0;
            func_066830((unsigned char *)target);
            break;
        }
        q += 0x64;
    }
}
