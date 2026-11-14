/* MCP_LoadLevelModule__Fi 0x01E672E0 (14 November 2026).
 * Measured pinned: 11 differing words; first difference at 0x64.
 * Recover the observed types, statement order and lifetimes before retrying.
 * No matching credit.
 */
typedef struct {
    int attr;
    void *entry;
    void *stack;
    int stack_size;
    void *gp;
    int priority;
    int option[2];
    int spare[4];
} ThreadParam;

extern int g_LevelToLaunch;
extern int g_GameLoadThread;
extern char gameLoadThreadStack[];
extern char _gp[];
extern void MCPI_SetGameId__Fi(int id);
extern void mcp_load_thread_entry_01E67568(void *arg);
extern int CreateThread(ThreadParam *param);
extern int StartThread(int id, int arg);

int MCP_LoadLevelModule__Fi(int level) {
    ThreadParam param;
    int id;

    MCPI_SetGameId__Fi(-1);
    g_LevelToLaunch = level;
    param.entry = mcp_load_thread_entry_01E67568;
    param.stack = gameLoadThreadStack;
    param.stack_size = 0x2000;
    param.gp = _gp;
    param.priority = 0x2C;
    id = CreateThread(&param);
    g_GameLoadThread = id;
    if (id <= 0) {
        return 0;
    }
    if (StartThread(id, 0) == g_GameLoadThread) {
        return 1;
    }
    return 0;
}
