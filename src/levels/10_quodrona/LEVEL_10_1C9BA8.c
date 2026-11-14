/* LEVEL_10:0x1C9BA8 -- drains the object's ten-slot ring from head to tail: marks each queued item, switches it when flag bits 1 or 2 are set and releases the matching record. */
extern void func_07CCA0(char *item, int a1);
extern void func_07CE00(char *item);
extern void func_081168(char *record);

void func_1C9BA8(char *o)
{
    char *s1;
    char *tb;
    char *item;
    int s0;
    int off;

    s1 = *(char **)(o + 0x58);
    s0 = *(int *)(s1 + 0x50);
    if (s0 == *(int *)(s1 + 0x54)) {
        return;
    }
    tb = s1 + 0x28;
    do {
        off = s0 << 2;
        item = *(char **)(s1 + off);
        func_07CCA0(item, 1);
        if (*(unsigned int *)(item + 0x64) & 6) {
            func_07CE00(item);
        }
        func_081168(*(char **)(tb + off));
        s0 = (s0 + 1) % 10;
    } while (s0 != *(int *)(s1 + 0x54));
}
