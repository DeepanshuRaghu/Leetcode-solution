class Solution {
public:
   
     bool uniqueOccurrences(const vector<int>& arr) {
    unordered_map<int, int> freqMap;
    unordered_set<int> occurrences;

    // Count occurrences of each element
    for (int num : arr) {
        freqMap[num]++;
    }

    // Check if the counts of occurrences are unique
    for (const auto& pair : freqMap) {
        if (occurrences.count(pair.second) > 0) {
            return false; // Count is not unique
        }
        occurrences.insert(pair.second);
    }

    return true; // All counts are unique
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    if (uniqueOccurrences(arr)) {
        cout << "Number of occurrences of each value is unique." << endl;
    } else {
        cout << "Number of occurrences of each value is not unique." << endl;
    }

    return 0;
}
};