/* LEVEL_19:0x000340 -- reads one node of the level's list into a scratch
   record and hands two of its fields to the shared code. */
typedef struct {
    float x;
    int kind;
    int a;
    int b;
    int c;
} Node;

extern Node D_1C1680[];

void func_000318(int a, int b);

void func_000340(int index)
{
    Node node = D_1C1680[index];

    func_000318(node.b, node.kind);
}
