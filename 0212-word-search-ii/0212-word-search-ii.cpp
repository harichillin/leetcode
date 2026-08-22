
class TrieNode {
public:
    string word;
    TrieNode* chars[26];

    TrieNode() {
        word = "";
        for (int i = 0; i < 26; i++) {
            chars[i] = NULL;
        }
    }
};

class Solution {
private:
    int diff[5] = {0, 1, 0, -1, 0};

    void buildTrie(TrieNode* root, const string& word) {
        TrieNode* curr = root;
        for (char ch : word) {
            int idx = ch - 'a';
            if (curr->chars[idx] == NULL) {
                curr->chars[idx] = new TrieNode();
            }
            curr = curr->chars[idx];
        }
        curr->word = word;
    }

    void dfs(int R, int C, int row, int col, vector<vector<char>>& board, TrieNode* curr, vector<string>& ans) {
        char ch = board[row][col];
        int chidx = ch - 'a';

        if (ch == '#' || curr->chars[chidx] == NULL) {
            return;
        }

        curr = curr->chars[chidx];

        if (!curr->word.empty()) {
            ans.push_back(curr->word);
            curr->word = "";
        }

        board[row][col] = '#';

        for (int i = 0; i < 4; i++) {
            int ar = row + diff[i];
            int ac = col + diff[i + 1];
            if (ar >= 0 && ac >= 0 && ar < R && ac < C && board[ar][ac] != '#') {
                dfs(R, C, ar, ac, board, curr, ans);
            }
        }

        board[row][col] = ch;
    }

public:
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        TrieNode* root = new TrieNode();

        for (const string& word : words) {
            buildTrie(root, word);
        }

        vector<string> ans;
        int R = board.size();
        int C = board[0].size();

        for (int row = 0; row < R; row++) {
            for (int col = 0; col < C; col++) {
                dfs(R, C, row, col, board, root, ans);
            }
        }

        return ans;
    }
};