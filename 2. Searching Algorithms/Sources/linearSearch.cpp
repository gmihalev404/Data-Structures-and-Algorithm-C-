int linear_search(int arr[], int length, int X) {
	for(int i = 0 ; i < length; i++) {
		if(arr[i] == X) {
			return i;
		}
	}
	return -1;
}
