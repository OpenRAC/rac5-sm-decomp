/* sceGimPictureLoad__FP13SceGimPicturePC11SceGimChunk  0x01E813E0, 360 bytes */
typedef struct {
    unsigned short type;     /* 0x00 */
    unsigned short ref;      /* 0x02 */
    unsigned int next;       /* 0x04 */
    unsigned int offset;     /* 0x08 */
    unsigned int data;       /* 0x0C */
    char pad10[8];
    unsigned int ps2addr;    /* 0x18 */
    char pad1C[0x0E];
    unsigned short n1;       /* 0x2A */
    unsigned short pad2C;
    unsigned short n2;       /* 0x2E */
} SceGimChunk;

typedef struct {
    char pad00[2];
    unsigned short ref;      /* 0x02 */
    char pad04[4];
    unsigned short width;    /* 0x08 */
    unsigned short height;   /* 0x0A */
    char pad0C[0x0C];
    unsigned int ps2addr;    /* 0x18 */
    char pad1C[0x0E];
    unsigned short n1;       /* 0x2A */
    unsigned short pad2C;
    unsigned short n2;       /* 0x2E */
} SceGimImage;

typedef struct {
    char pad00[0x0C];
    SceGimImage *f0C;        /* 0x0C */
    SceGimImage *f10;        /* 0x10 */
} SceGimPicture;

extern void sceGimPictureReconfigure(SceGimPicture *pic);

int sceGimPictureLoad__FP13SceGimPicturePC11SceGimChunk(SceGimPicture *pic,
                                                        const SceGimChunk *chunk) {
    SceGimChunk *end;
    SceGimChunk *c;

    SceGimImage *img;
    unsigned int *p;
    int n;

    c = (SceGimChunk *)chunk;

    if (pic == 0)
        return 0;
    if (c == 0)
        return 0;
    pic->f0C = 0;
    pic->f10 = 0;

    end = (SceGimChunk *)((char *)c + c->next);
    c = (SceGimChunk *)((char *)c + c->offset);
    while (c < end) {
        img = (SceGimImage *)((char *)c + c->data);
        switch (c->type) {
        case 4:
            pic->f0C = img;
            if (img->ref == 0) {
                img->ref++;
                n = img->n1 * img->n2;
                p = (unsigned int *)((char *)img + img->ps2addr);
                while (n > 0) {
                    *p = *p + (unsigned int)img;
                    p++;
                    n--;
                }
                if (img->width >= 0x201)
                    return 0;
                if (img->height >= 0x201)
                    return 0;
            }
            break;
        case 5:
            pic->f10 = img;
            if (img->ref == 0) {
                img->ref++;
                n = img->n1 * img->n2;
                p = (unsigned int *)((char *)img + img->ps2addr);
                while (n > 0) {
                    *p = *p + (unsigned int)img;
                    p++;
                    n--;
                }
                if (img->width >= 0x101)
                    return 0;
            }
            break;
        }
        c = (SceGimChunk *)((char *)c + c->next);
    }
    sceGimPictureReconfigure(pic);
    return 1;
}
