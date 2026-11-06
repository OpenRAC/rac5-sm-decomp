/* LEVEL_03.REL:0x08CA10, bounded 188-byte candidate.
 * Isolated pinned C object: 192 bytes; first linked
 * difference at body byte +76. Not linked into the accepted
 * gate or counted.
 * Reopen: Recheck the measured register or order difference.
 */
typedef struct Tag Tag;

struct Tag {
    unsigned short qwc;
    unsigned long long pad1 : 10;
    unsigned long long pad2 : 2;
    unsigned long long id : 3;
    unsigned long long irq : 1;
    unsigned long long addr : 31;
    unsigned long long spr : 1;
    unsigned short w8;
    unsigned char bA;
    unsigned char bB;
    unsigned short wC;
    unsigned char bE;
    unsigned char bF;
};

extern int D_0020E9D0;
extern int D_0020E9D4;
extern int D_0020E9D8;

void func_08CA10(Tag *p)
{
    p->qwc = 0;
    p->pad1 = 0;
    p->pad2 = 0;
    p->id = 6;
    p->irq = 0;
    p->addr = 0;
    p->spr = 0;
    *(unsigned short *)((char *)p + 8) = 0;
    *(unsigned char *)((char *)p + 0xA) = 0;
    *(unsigned char *)((char *)p + 0xB) = 0;
    *(unsigned short *)((char *)p + 0xC) = 0;
    *(unsigned char *)((char *)p + 0xE) = 0;
    *(unsigned char *)((char *)p + 0xF) = 0;
    p++;
    D_0020E9D0 = (int)p;
    D_0020E9D4 -= (((int)p - D_0020E9D8) >> 4) << 4;
}
