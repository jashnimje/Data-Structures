#include <bits/stdc++.h>
#include <iostream>
#include <fstream>

using namespace std;
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
}

int main()
{
    int i, j, d, s, v, f, b, e, l, p, I;
    string street;
    fstream file;
    fstream out;

    string word, filename;
    map<int, vector<string>> mp;

    out.open("ans_f.txt", ios::out);
    filename = "f.txt";
    file.open(filename.c_str());

    file >> d >> I >> s >> v >> f;
    //out << d << i << s << v << f << "\n";
    vector<int> adj[I];
    map<string, pair<int, int>> mp_to_point;
    map<pair<int, int>, string> point_to_map;
    map<string, int> mp_to_weight;

    pair<int, int> temp;
    while (s--)
    {
        file >> b >> e >> street >> l;
        temp.first = b;
        temp.second = e;
        mp_to_point.insert({street, temp});
        point_to_map.insert({temp, street});
        mp_to_weight.insert({street, 0});
        addEdge(adj, e, b);

        //out << b << e << street << l << "\n";
    }
    map<string, int> mp_to_signal;
    for (auto itr = mp_to_point.begin(); itr != mp_to_point.end(); itr++)
    {
        mp_to_signal.insert({itr->first, 1});
    }
    vector<string> car[v];
    i = 0;
    while (v--)
    {
        file >> p;
        //out << p << " ";
        while (p--)
        {
            string word;
            file >> word;
            car[i].push_back(word);
            mp_to_weight[word] += 1;
            if (mp_to_signal[word] + 1 <= d)
                mp_to_signal[word] += 1;

            //out << word << " ";
        }
        i++;
    }
    for (auto itr = mp_to_weight.begin(); itr != mp_to_weight.end(); itr++)
    {
        if (itr->second >= sqrt(v))
            mp_to_signal[itr->first] = 5;
    }
    /*for (i = 0; i < I; i++)
    {
        for (j = 0; j < adj[i].size(); j++)
        {
            cout << i << "->" << adj[i][j] << endl;
        }
    }*/
    string str;
    for (i = 0; i < I; i++)
    {
        e = i;
        for (j = 0; j < adj[i].size(); j++)
        {
            b = adj[i][j];
            temp.first = b;
            temp.second = e;
            str = point_to_map[temp];
        }
    }

    int cur_pos, weight;
    out << I << endl;
    for (i = 0; i < I; i++)
    {
        out << i << endl;
        out << adj[i].size() << endl;
        e = i;

        for (j = 0; j < adj[i].size(); j++)
        {
            b = adj[i][j];
            temp.first = b;
            temp.second = e;
            str = point_to_map[temp];
            out << str << " " << mp_to_signal[str] << endl;
        }
    }
    return 0;
}