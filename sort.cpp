	//this will sort vector acording to percent change
	float max;

	for (int i = 0; i < index.size(); i++) {
		vector <trade> a;
		max = i;
		for (int j = i+1; j < index.size()-i; j++) {
			if (index[j].Percent_Change > index[max].Percent_Change)
				max = j;
		}
		a.push_back(index[i]);
		index[i] = index[max];
		index[max] = a[0];
	}
