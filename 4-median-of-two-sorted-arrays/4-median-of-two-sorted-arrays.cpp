class Solution {
public:
    int siz(vector<int>& v, int num)
{
    if (!v.size()) return 0;
    int lo = 0, hi = v.size() - 1;

    while (hi > lo)
    {
        int mid = (lo + hi + 1) >> 1;

        if (v[mid] <= num) lo = mid;
        else hi = mid - 1;
    }

    int ans = 0;

    if (v[lo] <= num) ans = lo + 1;
    return ans;
}

int find_num(vector<int>& v1, vector<int>& v2, int pos)
{
    int lo = INT_MAX, hi = INT_MIN;
    if (v1.size()) lo = v1[0], hi = v1[v1.size() - 1];
    if (v2.size()) lo = min(lo, v2[0]), hi = max(hi, v2[v2.size() - 1]);


    while (hi > lo)
    {
        int mid = (lo + hi) >> 1;

        if (siz(v1, mid) + siz(v2, mid) >= pos) hi = mid;
        else lo = mid + 1;
    }

    return lo;
}


double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int l1 = nums1.size(), l2 = nums2.size();

    double ans;

    if ((l1 + l2) & 1)
    {
        int pos = (l1 + l2) >> 1;
        int num1 = find_num(nums1, nums2, pos + 1);
        ans = 1.0 * num1;
    }
    else
    {
        int pos = (l1 + l2) >> 1;
        int num1 = find_num(nums1, nums2, pos);
        int num2 = find_num(nums1, nums2, pos + 1);
        ans = ((1.0 * num1) + (1.0 * num2)) / 2.0;
    }

    return ans;
}
};