/* LEVEL_07.REL:0x1DBFB8 -- walks four nodes of the array and refreshes the
   +0x24 value of each from the +0x14 value behind its +0x20 pointer. */
typedef struct {
    char pad0[0x14];
    float f14;
} Inner;

typedef struct {
    char pad0[0x20];
    Inner *p20;
    float f24;
} Node;

void func_1DBFB8(int a0, Node **a1)
{
    unsigned i;

    for (i = 0; i < 4; i++, a1++) {
        Node *q = *a1;

        if (q != 0) {
            q->f24 = 1.0f + fabsf(q->p20->f14);
        }
    }
}
