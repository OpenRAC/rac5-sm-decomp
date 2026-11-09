/* LEVEL_15:0x12B138 -- drains 48 circular node lists into a free list and links a 63-node pool. */

extern void *D_002F36A0;
extern char D_002F2FE0[];
extern void func_12B4C0(void);

void func_12B138(void)
{
    int i;
    char *slot;
    char *sentinel;
    char *cur;
    char *h;
    void **head;
    char *n;
    char *p;
    char *first;
    char *end;

    i = 0;
    do {
        slot = D_002F2FE0 + i * 20;
        sentinel = slot + 4;
        cur = *(char **)(sentinel + 4);
        while (cur != sentinel) {
            n = cur - 4;
            *(void **)(n + 4) = D_002F36A0;
            D_002F36A0 = n;
            cur = *(char **)(cur + 4);
        }
        h = slot + 4;
        *(char **)(h + 4) = h;
        *(char **)h = h;
        *(int *)(slot + 12) = 0;
        i++;
    } while (i < 48);

    head = &D_002F36A0;
    first = (char *)head - 0x300;
    end = (char *)head - 0xC;
    p = first;
    if (p != end) {
        do {
            *(char **)(p + 4) = p + 12;
            p += 12;
        } while (p != end);
    }
    *head = first;
    *(int *)(first + 0x2F8) = 0;
    func_12B4C0();
}
