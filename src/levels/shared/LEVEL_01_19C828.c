/* LEVEL_01:0x19C828 -- clears a field of the linked record of every 128-byte entry in a span whose flag bit is set. */
typedef struct {
    char pad00[0xC];
    char *f0C;
    char pad10[0x20];
    int f30;
} Span;

void func_19C828(Span *a)
{
    char *p;
    char *end;

    p = a->f0C;
    end = p + (a->f30 << 7);
    while (p != end) {
        if (*(unsigned int *)(p + 0x64) & 1) {
            *(int *)(*(char **)(p + 0x58) + 4) = 0;
        }
        p += 0x80;
    }
}
