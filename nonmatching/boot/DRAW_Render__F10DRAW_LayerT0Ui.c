/* USA SCUS_976.15 boot: DRAW_Render__F10DRAW_LayerT0Ui.
 * Observed 316-byte body at 0x01E7A0C0..0x01E7A1FC. The following zero word
 * and separately called 56-byte initializer are excluded.
 * Authored from the owner's hash-pinned body, six direct callers, three helper
 * entries and neighboring accepted boot layouts; no external source/data import.
 * Measured 17 November 2026, existing -O2 -G0/GNU assembly and independent SN link:
 * rebuilt default GNU reproduces all 316 linked body bytes, with real sole FUNC
 * and text extents. gnu-ee-trial emits 320 bytes, 270 equal positions in the
 * compared 316-byte prefix, first difference +0x2C. No qualification, complete
 * program gate, acceptance, promotion or C credit follows from these local runs.
 * Separate original layer and traversal cursor lifetimes preserve dispatch order.
 * These partial views expose the observed unsigned 16-bit prefix counts,
 * 20-byte mesh stride, 12-byte nodes and 0x170C context stride.
 * Callback payload is an opaque 32-bit ABI carrier, not a recovered historical
 * pointer/integer typedef. Callback result and helper ignored-argument contracts
 * remain review holds. Helpers keep the caller's actual argument registers.
 * Valid context/layer indices, backing mesh/node storage, finite lists, callback
 * ABI and lifetime effects remain required. No guard, purity promise or fix added.
 */
typedef unsigned char DrawRenderByte;
typedef struct DrawRenderMesh {
    DrawRenderByte opaque[20];
} DrawRenderMesh;
typedef struct DrawRenderNode {
    struct DrawRenderNode *next;
    void (*callback)(int layer, unsigned int argument);
    unsigned int argument;
} DrawRenderNode;
typedef struct DrawRenderContext {
    DrawRenderByte opaque_0[0x28];
    DrawRenderMesh *meshAnchor;
    DrawRenderByte opaque_2c[8];
    unsigned short prefix[33];
    DrawRenderByte opaque_76[0xDC8 - 0x76];
    DrawRenderNode *callbacks[64];
    DrawRenderByte opaque_ec8[0x844];
} DrawRenderContext;
typedef char DrawRenderMesh_size[sizeof(DrawRenderMesh)==20 ? 1 : -1];
typedef char DrawRenderNode_size[sizeof(DrawRenderNode)==12 ? 1 : -1];
typedef char DrawRenderContext_size[sizeof(DrawRenderContext)==0x170C ? 1 : -1];
extern unsigned char g_bDoDraw;
extern DrawRenderContext D_01F67E50[];
extern void func_1E79380(int mode, unsigned int context);
extern void func_1E79510(DrawRenderMesh *begin, DrawRenderMesh *end);
extern void func_1E794A8(int mode);

void DRAW_Render__F10DRAW_LayerT0Ui(int first, int last, unsigned int context)
{
    if (g_bDoDraw != 0) {
        int stop = last + 1;
        unsigned int beginCount = D_01F67E50[context].prefix[first];
        unsigned int endCount = D_01F67E50[context].prefix[stop];
        int mode = ((unsigned int)first - 20u) < 4u;
        DrawRenderNode **heads;
        DrawRenderNode **cursor;
        int layer;
        DrawRenderNode **end;
        if ((int)endCount - (int)beginCount > 0) {
            DrawRenderMesh *base = D_01F67E50[context].meshAnchor;
            DrawRenderMesh *begin = base + beginCount;
            DrawRenderMesh *limit = base + endCount;
            func_1E79380(mode, context);
            func_1E79510(begin, limit);
            func_1E794A8(mode);
        }
        heads = D_01F67E50[context].callbacks;
        cursor = heads + first;
        end = heads + stop;
        layer = first;
        while (cursor != end) {
            DrawRenderNode *node = *cursor;
            while (node != 0) {
                node->callback(layer, node->argument);
                node = node->next;
            }
            cursor++;
            layer++;
        }
    }
}
