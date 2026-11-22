/* LEVEL_06:0x09AD78 -- placement copy of LEVEL_01_0A05A0.c: walks a chunk list, relocates its records and registers the two table records. */
typedef struct {
    unsigned short tag;
    short pad;
    int next;
    int pad2;
    int rec;
} Chunk;
typedef struct {
    short pad0;
    unsigned short done;
    char pad1[4];
    unsigned short w8;
    unsigned short wA;
    char pad2[0x18 - 0xC];
    int ptrs;
    char pad3[0x2A - 0x1C];
    unsigned short n1;
    short pad4;
    unsigned short n2;
} Rec;
typedef struct {
    char pad[0xC];
    Rec *a;
    Rec *b;
} Ctx;
typedef struct {
    int pad;
    int size;
    int off;
} Hdr;

extern void func_09AD70(Ctx *c);

int sceGimPictureLoad__FP13SceGimPicturePC11SceGimChunk(Ctx *c, Hdr *h)
{
    Chunk *cur;
    Chunk *end;
    Rec *rec;
    int *p;
    int n;

    cur = (Chunk *)h;
    if (c == 0)
        return 0;
    if (cur == 0)
        return 0;
    c->a = 0;
    c->b = 0;
    end = (Chunk *)((char *)cur + h->size);
    cur = (Chunk *)((char *)cur + h->off);
    while (cur < end) {
        rec = (Rec *)((char *)cur + cur->rec);
        switch (cur->tag) {
        case 4:
            c->a = rec;
            if (rec->done == 0) {
                rec->done = rec->done + 1;
                p = (int *)((char *)rec + rec->ptrs);
                for (n = rec->n1 * rec->n2; n > 0; n--) {
                    *p = *p + (int)rec;
                    p++;
                }
                if (rec->w8 > 0x200)
                    return 0;
                if (rec->wA > 0x200)
                    return 0;
            }
            break;
        case 5:
            c->b = rec;
            if (rec->done == 0) {
                rec->done = rec->done + 1;
                p = (int *)((char *)rec + rec->ptrs);
                for (n = rec->n1 * rec->n2; n > 0; n--) {
                    *p = *p + (int)rec;
                    p++;
                }
                if (rec->w8 > 0x100)
                    return 0;
            }
            break;
        }
        cur = (Chunk *)((char *)cur + cur->next);
    }
    func_09AD70(c);
    return 1;
}
