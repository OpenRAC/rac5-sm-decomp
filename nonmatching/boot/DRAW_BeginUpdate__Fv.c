/* USA SCUS_976.15 boot: DRAW_BeginUpdate__Fv, 0x01E78860..0x01E78A04.
 * Authored adaptation of the accepted repository source
 * src/levels/01_pokitaru/DRAW_BeginUpdate__Fv_LEVEL_01.c, with boot addresses
 * checked against the owner's pinned body, caller and adjacent accepted code.
 * Observed 420-byte body; the following zero alignment word is excluded.
 * Measured 17 November 2026, -O2 -G0, GNU assembly and independent SN links:
 * rebuilt default GNU emits 412 bytes, 247 equal positions in the compared
 * 412-byte prefix; gnu-ee-trial emits 416 bytes, 249 equal positions in its
 * 416-byte prefix. Both first differ at +0x62. Not exact; no gate or C credit.
 * Offset 8 is an integer space count, consistent with accepted DRAW_Init and
 * DRAW_ReserveMemory. The material-cache declaration remains int, matching
 * accepted DRAW_EndUpdate; its all-ones reset becomes the target int value -1.
 * A diagnostic unsigned cache view reproduces the 420 bytes, but that view
 * is not retained because it conflicts with the existing declaration.
 * Reopen after separate evidence/review of the cache-word type and a checked
 * declaration reconciliation, not register forcing or artificial operations.
 * These node/context views expose only observed fields and opaque bytes;
 * context stride 0x170C and the 32-node pool are independently corroborated.
 * The original one-context loop, toggle, 20-byte end reserve, untouched node
 * payload, next links and 256-byte clear remain. Valid initialized buffers,
 * toggle values, storage/capacity and indirect-entry bounds still need review.
 * No normalization, allocation or guard is added. Qualification, complete-
 * program integration, acceptance and promotion remain separate obligations.
 */
typedef struct DrawBeginNode {
    struct DrawBeginNode *next;
    unsigned char unknown_4[8];
} DrawBeginNode;

typedef struct DrawBeginContext {
    unsigned char *buf[2];
    int vertexSpace;
    char pad0C[0x18];
    unsigned int toggle;
    unsigned char *meshEnd;
    int f2C;
    char pad30[0xC10];
    int fC40;
    DrawBeginNode nodes[32];
    DrawBeginNode *head;
    char table[0x100];
    char tail[0x844];
} DrawBeginContext;

typedef char DrawBeginNode_size[sizeof(DrawBeginNode) == 0xC ? 1 : -1];
typedef char DrawBeginContext_size[sizeof(DrawBeginContext) == 0x170C ? 1 : -1];

extern DrawBeginContext D_01F67E50[];
extern unsigned char *g_draw_vertTail[1];
extern int g_draw_vertSpace[1];
extern unsigned char *g_draw_currentMesh[1];
extern int g_draw_currentMaterial[1];
extern int g_draw_preRenderContextSpace[1];
extern char *g_draw_preRenderContextTail[1];
extern void *memset(void *dst, int value, unsigned int size);

static __inline__ void draw_begin_init_nodes(DrawBeginNode **headp, DrawBeginNode *first)
{
    DrawBeginNode *n;
    DrawBeginNode *last;

    last = first + 31;
    n = first;
    while (n != last) {
        n->next = n + 1;
        n++;
    }
    first[31].next = 0;
    *headp = first;
}

void DRAW_BeginUpdate__Fv(void)
{
    unsigned int i;
    char *table;

    for (i = 0; i < 1; i++) {
        D_01F67E50[i].toggle ^= 1;
        g_draw_currentMesh[i] = D_01F67E50[i].meshEnd - 0x14;
        g_draw_vertTail[i] = D_01F67E50[i].buf[D_01F67E50[i].toggle];
        g_draw_vertSpace[i] = D_01F67E50[i].vertexSpace;
        D_01F67E50[i].f2C = 0;
        g_draw_currentMaterial[i] = 0xFFFFFFFFu;
        g_draw_preRenderContextSpace[i] = 0x800;
        D_01F67E50[i].fC40 = 0;
        g_draw_preRenderContextTail[i] = D_01F67E50[i].tail;
        draw_begin_init_nodes(&D_01F67E50[i].head, D_01F67E50[i].nodes);
        table = D_01F67E50[i].table;
        memset(table, 0, 0x100);
    }
}
