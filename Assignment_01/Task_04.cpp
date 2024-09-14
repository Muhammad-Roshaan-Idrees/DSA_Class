// ---------------- Online Quiz Competition ------------------
          // ---------------- Scores of Participants in 5 subjects, sorting the participants based on their scores in ascending order, and finding participant with the highest score------------------

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of participants: ";
    cin >> n;

    int a[n][5];          
    float sum[n] = {0};  
    float max = 0;       
    int maxParticipant = 0;

    cout << "\nEnter the scores of participants for 5 subjects:\n";
    
    for (int i = 0; i < n; i++)
    {
        cout << "\nParticipant " << i + 1 << ":" << endl;
        for (int j = 0; j < 5; j++)
        {
            cout << "Subject " << j + 1 << ": ";
            cin >> a[i][j];      
            sum[i] = sum[i] + a[i][j];   
        }

        if (sum[i] > max)
        {
            max = sum[i];
            maxParticipant = i;
        }
    }

    // Sorting participants based on their scores using bubble sort
for (int i = 0; i < n ; i++)
{
        for (int j = i+1; j < n ; j++)
        {
            if (sum[i] > sum[j])
            {
                // Swap scores
                float temp = sum[i];
                sum[i] = sum[j];
                sum[j] = temp;
            }
        }
    }

    cout << "\nTotal score of each participant (sorted in ascending order): " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Participant " << i + 1 << ": " << sum[i] << endl;
    }

    cout << "\nThe participant with the highest score is Participant " << maxParticipant + 1 
         << " with a score of " << max << endl;

    return 0;
}