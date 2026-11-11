/* LEVEL_03:0x028620 -- copies the 52-byte block of an indexed table entry
   into the shared block. */
typedef struct {
    float f[13];
} Block;

typedef struct {
    int pad[58];
    Block block;
} Element;

extern Block D_24BDC0;
extern Block *D_20C62C;

void func_028620(int index)
{
    int offset = index * 52;
    Element *element = (Element *)(offset + (int)D_20C62C);

    D_24BDC0 = element->block;
}
