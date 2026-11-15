/* USA SCUS_976.15 boot: Spiral_EmitJoint at 0x01E754C8.
 * Adapted from the accepted LEVEL_01 source and checked against the boot.
 * All 260 observed body bytes reproduce after independent SN linking under
 * rebuilt gnu-ee-trial, -O2 -G0, default GNU assembler. The default GNU route
 * has the same length but 252/260 equal positions, first difference +16,
 * from its different return-address/floating-save order in the prologue.
 * The body ends at 0x01E755CC. One zero alignment word follows; the further
 * stack adjustment and zero word through 0x01E755D8 remain unexplained and
 * outside this candidate. No complete-program gate or promotion is claimed.
 * Local prefix views preserve the measured 20-byte point stride, two
 * unsigned-short counters and the helper's integer output count. A valid
 * nonempty group and populated point storage are required for the previous
 * endpoint lookup; the counter sum and allocation bounds remain for review.
 */
typedef struct {
    float x;
    float y;
    char pad8[0xC];
} Pt;
typedef struct {
    float x;
    float y;
} P2;
typedef struct {
    char pad0[8];
    Pt *pts;
    unsigned short a;
    unsigned short b;
} Hdr;
typedef struct Node {
    Hdr *h;
    struct Node *next;
} Node;
extern void *PAR_Emit__FPiP9PAR_Groupi(int *ok, Node *n, int k);

void Spiral_EmitJoint__FP12Spiral_GroupPC12Spiral_Pointb(Node *n, const float *val, int flag)
{
    int ok0, ok1, ok2;
    P2 *v;
    P2 *v1;
    P2 *v2;
    Pt *e;
    float x, y;
    int cnt;

    if (flag != 0 && n->next != n) {
        cnt = n->h->a + n->h->b - 1;
        e = (Pt *)((char *)n->h->pts + cnt * 0x14);
        x = e->x;
        y = e->y;
        v = PAR_Emit__FPiP9PAR_Groupi(&ok0, n, 1);
        if (ok0 == 0)
            return;
        v->x = x;
        v->y = y;
        v1 = PAR_Emit__FPiP9PAR_Groupi(&ok1, n, 1);
        if (ok1 == 0)
            return;
        v1->y = *val;
        v1->x = 1.0f;
    }
    v2 = PAR_Emit__FPiP9PAR_Groupi(&ok2, n, 1);
    if (ok2 != 0) {
        v2->x = 1.0f;
        v2->y = *val;
    }
}
