typedef struct Node {
    int unused;
    struct Node *next;
    char *data;
    unsigned short first;
    unsigned short count;
} Node;

int func_0D82A0(void **output, Node *node, Node *stop,
                int stride, int float_offset)
{
    char *previous = node->data + node->first * stride;
    Node *cursor = node;
    do {
        char *current = cursor->data + cursor->first * stride;
        char *end = current + cursor->count * stride;
        do {
            if (*(float *)(current + float_offset) > 0.0f) {
                output[0] = node;
                output[1] = previous;
                return 1;
            }
            previous = current;
            current += stride;
            node = cursor;
        } while (current != end);
        cursor = cursor->next;
    } while (cursor != stop);
    return 0;
}
