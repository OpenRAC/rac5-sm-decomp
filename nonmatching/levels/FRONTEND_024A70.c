/* USA FRONTEND.REL:0x024A70. Candidate traversal of a packed node chain.
 * Matching requires the entire linked body at each placement. */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;

typedef struct Node Node;
struct __attribute__((aligned(8))) Node {
    int index;
    Node *child;
    u8 pad08[0x292];
    u16 count;
    u8 active[0x54];
};

typedef struct {
    int result;
    int unused04;
    int limit;
    int override_index;
} SearchState;

extern Node *func_000249D8(int index, Node *current, Node *buffer);
extern Node *func_000248D0(u32 count, Node *node, Node *previous);
extern void func_00024958(u32 index, Node *node, Node *target);
extern int func_00024788(int index, Node *child, int limit,
                         int from_override, int *status);
extern int func_000246B0(int index, Node *child, int limit);
extern void func_00024A68(void);
extern void func_00024208(void);

int func_00024A70(SearchState *state, int index, Node *target, Node **cursor) {
    Node scratch;
    Node saved;
    Node *current = *cursor;
    Node *buffer = &scratch;
    Node *found;
    Node *next;
    int initial_index = index;
    int result = 0;
    int limit = state->limit;
    int from_override = state->override_index != 0;
    int status = 0;
    int use_saved = 0;
    int have_saved = 0;
    int saved_result = 0;
    int saved_index = 0;

    for (;;) {
        Node *next;
        int special;
        found = func_000249D8(index, current, buffer);
        if (found == 0) break;
        special = found->child != 0 && found->child->index == -2;
        if (from_override) {
            from_override = 0;
            result = func_00024788(state->override_index, found->child,
                                   limit, 1, &status);
            state->override_index = 0;
        } else if (special) {
            result = func_00024788(index, found->child, limit, 0, &status);
        } else {
            result = func_000246B0(index, found->child, limit);
        }
        if (result != 0) {
            if (status == 0) {
                use_saved = 0;
                break;
            }
            if (have_saved == 0) {
                saved = *found;
                have_saved = 1;
                use_saved = 1;
                saved_result = result;
                saved_index = index;
            }
        }
        next = func_000248D0(found->count, found, current);
        index = next->index - 1;
        buffer = current;
        current = found;
    }

    if (have_saved != 0 && use_saved != 0) {
        func_00024A68();
        index = saved_index;
        result = saved_result;
        found = &saved;
    }
    if (result == 0) {
        func_00024208();
        state->result = 0;
    } else {
        state->result = result;
    }

    if (index != initial_index) {
        int walk = initial_index;
        Node *walk_previous = current;
        Node *walk_current = found;
        *found = *target;
        while (walk != index) {
            Node *step = func_000249D8(walk, walk_current, walk_previous);
            u32 i;
            u32 selected = step->count;
            for (i = 0; i < 79; ++i) {
                if (i != selected && step->active[i] != 0) {
                    func_00024958(i, step, target);
                    selected = step->count;
                }
            }
            next = func_000248D0(selected, step, walk_current);
            walk = next->index - 1;
            walk_previous = walk_current;
            walk_current = step;
        }
        found = walk_current;
    } else {
        found = target;
    }
    *cursor = found;
    return result;
}
