typedef struct {
    char pad[0x174];
    float f174;
} Inner;

typedef struct {
    char pad[0x58];
    Inner *p58;
} S;

int func_15C1E0(S *s)
{
    return s->p58->f174 > 0.5f;
}
