/* LEVEL_19:0x06E620 -- packs a position and a float into a stack block. */
struct Vec {
    float x;
    float y;
    float z;
};

struct Block {
    struct Vec pos;
    float weight;
};

extern void func_06E658(struct Block *block);

void func_06E620(struct Vec *src, float weight)
{
    struct Block block;

    block.pos = *src;
    block.weight = weight;
    func_06E658(&block);
}
