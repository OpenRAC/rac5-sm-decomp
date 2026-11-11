/* LEVEL_01:0x06BDE8 -- 156-byte body, 13 placements.
 *
 * What it does: randomises the two float fields at 0x1F8 and clears a few
 * byte and int fields of the record.  The factor is 2^-31 (0x30000000), kept
 * in a callee-saved float register across both rand() calls.
 *
 * Where the form comes from:
 *   - the record is zeroed in two three-int groups reached through a base
 *     pointer per group; the first store of each group uses the record's own
 *     base and the other two use the base pointer with 8 and 4 displacements;
 *   - declaring those pointers before the calls makes them callee-saved
 *     ($s1/$s2) and grows the frame; the pointers are therefore created after
 *     the second call, inside a block of their own.
 *
 * Proof: *** EXACT *** at LEVEL_01.REL:0x06BDE8, profile gnu-ee-trial-divpad
 * (the retail saves $ra before $f20; the pinned chain inverts that order).
 */
typedef struct {
    char pad[0x1BC];
    int a1BC;
    int a1C0;
    int a1C4;
    int a1C8;
    int a1CC;
    int a1D0;
    char pad2[0x24];
    float f1F8;
    float f1FC;
    char b200;
    char pad3[3];
    char b204;
    char b205;
    char b206;
    char b207;
    char b208;
} Rec;

extern int rand(void);

void func_06BDE8(Rec *p)
{
    float k;
    int v;

    k = 0x1p-31f;
    p->b207 = 0;
    p->b208 = 0;
    p->b205 = 0;
    p->b206 = 0;
    p->b204 = 11;
    v = rand();
    p->f1F8 = (float)v * k;
    v = rand();
    p->f1FC = (float)v * k;
    p->b200 = 0;
    {
        int *q = (int *)((char *)p + 0x1C8);
        q[0] = 0;
        q[1] = 0;
        q[2] = 0;
    }
    {
        int *r = (int *)((char *)p + 0x1BC);
        r[0] = 0;
        r[1] = 0;
        r[2] = 0;
    }
}
