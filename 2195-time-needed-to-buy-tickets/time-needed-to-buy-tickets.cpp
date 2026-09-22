class Solution {
public:
    queue<int> q;

    int timeRequiredToBuy(vector<int>& tickets, int k) {
        for(int i = 0; i < tickets.size(); i++) {
            q.push(i);
        }

        int turns = 0;

        while(tickets[k] > 0) {

            int front = q.front();
            q.pop();

            tickets[front]--;
            turns++;

            if(tickets[front] > 0) {
                q.push(front);
            }
        }

        return turns;
    }
};