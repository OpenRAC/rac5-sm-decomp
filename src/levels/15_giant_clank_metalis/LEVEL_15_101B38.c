/* LEVEL_15:0x101B38 -- scene setup: loads three tables, resets the head, builds the sub-record from the game block and runs the common finish. */
struct Link;
typedef struct Dst Dst;
typedef struct Src Src;

typedef struct {
    char pad_00[0x1C];
    char sub[0xD0];
    int w_EC;
} Scene;

typedef struct {
    char pad_00[0x14];
    int w14;
} Blk;

extern char D_0015BEA0[];
extern char D_0015C040[];
extern char D_0015C1E0[];
extern char D_0016FB38[];
extern char D_0016FA88[];
extern Scene D_002ED088;
extern char *D_002A8B58;

extern void func_13E8D8(char *a0);
extern void func_080488(struct Link *node, int value);
extern void func_0FFDB8(Dst *d, Src *s, int a);
extern void func_101AC8(void);

void func_101B38(void)
{
    Blk *b;

    func_13E8D8(D_0015BEA0);
    func_13E8D8(D_0015C040);
    func_13E8D8(D_0015C1E0);
    func_080488((struct Link *)&D_002ED088, (int)D_0016FB38);
    b = (Blk *)(D_002A8B58 + 0x3DC);
    func_0FFDB8((Dst *)D_002ED088.sub, (Src *)b, (int)D_0016FA88);
    D_002ED088.w_EC = b->w14;
    func_101AC8();
}
