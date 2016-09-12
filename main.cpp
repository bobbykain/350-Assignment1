#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	cout << "start" << endl;

	cout << "Enter your file path" << endl;
	string filepath;
	cin >> filepath;

	int a = 0;
	double ap = 0;
	int c = 0;
	double cp = 0;
	int t = 0;
	double tp = 0;
	int g = 0;
	double gp = 0;

	int aa = 0;
	double aap = 0;
	int ac = 0;
	double acp = 0;
	int at = 0;
	double atp = 0;
	int ag = 0;
	double agp = 0;

	int ca = 0;
	double cap = 0;
	int cc = 0;
	double ccp = 0;
	int ct = 0;
	double ctp = 0;
	int cg = 0;
	double cgp = 0;

	int ta = 0;
	double tap = 0;
	int tc = 0;
	double tcp = 0;
	int tt = 0;
	double ttp = 0;
	int tg = 0;
	double tgp = 0;

	int ga = 0;
	double gap = 0;
	int gc = 0;
	double gcp = 0;
	int gt = 0;
	double gtp = 0;
	int gg = 0;
	double ggp = 0;

	int lines = 0;
	int totalchar = 0;
	int mean = 0;

	int vsum = 0;
	int variance = 0;
	double sdev = 0;

	int totalpairs = 0;

	ifstream dnatxt;
	dnatxt.open(filepath);

	if (dnatxt.is_open())
	{
		cout << "file opened successfully" << endl;
		string line = "";
		while (getline(dnatxt, line))
		{
			cout << "In while loop" << endl;
			cout << "" << line << endl;
			totalchar += line.size();
			lines++;
		}

		cout << "Total chars: " << totalchar << endl;
		mean = (totalchar / lines);
		cout << "Mean: " << mean << endl;

		dnatxt.clear();
		dnatxt.seekg(0, ios::beg);

		while (getline(dnatxt, line))
		{
			vsum += ((line.size() - mean) * (line.size() - mean));
		}
		variance = (vsum / (lines - 1));
		cout << "variance: " << variance << endl;
		sdev = sqrt(variance);
		cout << "Deviation: " << sdev << endl;

		dnatxt.clear();
		dnatxt.seekg(0, ios::beg);

		cout << "Totalchars: " << totalchar << endl;

		totalpairs = (totalchar / 2);
		string check = "";
		while (getline(dnatxt, line))
		{
			for (int i = 0; i < line.size(); ++i)
			{
				line[i] = tolower(line[i]);
			}
			for (int i = 0; i < line.size(); ++i)
			{
				if (i % 2 == 0)
				{
					string check = "";
					check += line[i];
					check += line[i + 1];
					cout << "Check: " << check << endl;

					if (check == "aa")
					{
						a += 2;
						aa++;
					}
					if (check == "ac")
					{
						a++;
						c++;
						ac++;
					}
					if (check == "ag")
					{
						a++;
						g++;
						ag++;
					}
					if (check == "at")
					{
						a++;
						t++;
						at++;
					}
					if (check == "cc")
					{
						cc += 2;
						cc++;
					}
					if (check == "cg")
					{
						c++;
						g++;
						cg++;
					}
					if (check == "ct")
					{
						c++;
						t++;
						ct++;
					}
					if (check == "ca")
					{
						c++;
						a++;
						ca++;
					}
					if (check == "ta")
					{
						t++;
						a++;
						ta++;
					}
					if (check == "tt")
					{
						t += 2;
						tt++;
					}
					if (check == "tc")
					{
						t++;
						c++;
						tc++;
					}
					if (check == "tg")
					{
						t++;
						g++;
						tg++;
					}
					if (check == "gg")
					{
						g += 2;
						gg++;
					}
					if (check == "gc")
					{
						g++;
						c++;
						gc++;
					}
					if (check == "ga")
					{
						g++;
						a++;
						ga++;
					}
					if (check == "gt")
					{
						g++;
						t++;
						gt++;
					}

				}
			}
		}

		cout << "a: " << a << endl;
		cout << "c: " << c << endl;
		cout << "g: " << g << endl;
		cout << "t: " << t << endl;
		cout << "aa: " << aa << endl;
		cout << "at: " << at << endl;
		cout << "ac: " << ac << endl;
		cout << "ag: " << ag << endl;
		cout << "cc: " << cc << endl;
		cout << "ct: " << ct << endl;
		cout << "ca: " << ca << endl;
		cout << "cg: " << cg << endl;
		cout << "ta: " << ta << endl;
		cout << "tt: " << tt << endl;
		cout << "tc: " << tc << endl;
		cout << "tg: " << tg << endl;
		cout << "gg: " << gg << endl;
		cout << "ga: " << ga << endl;
		cout << "gt: " << gt << endl;
		cout << "gc: " << gc << endl;

		ap = ((double)a / totalchar);
		cp = ((double)c / totalchar);
		gp = ((double)g / totalchar);
		tp = ((double)t / totalchar);
		aap = ((double)aa / totalpairs);
		atp = ((double)at / totalpairs);
		acp = ((double)ac / totalpairs);
		agp = ((double)ag / totalpairs);
		ccp = ((double)cc / totalpairs);
		ctp = ((double)ct / totalpairs);
		cap = ((double)ca / totalpairs);
		cgp = ((double)cg / totalpairs);
		tap = ((double)ta / totalpairs);
		ttp = ((double)tt / totalpairs);
		tcp = ((double)tc / totalpairs);
		tgp = ((double)tg / totalpairs);
		ggp = ((double)gg / totalpairs);
		gap = ((double)ga / totalpairs);
		gtp = ((double)gt / totalpairs);
		gcp = ((double)gc / totalpairs);

		cout << "a percent: " << ap << endl;
		cout << "c percent:  " << cp << endl;
		cout << "g percent: " << gp << endl;
		cout << "t percent: " << tp << endl;
		cout << "aa percent: " << aap << endl;
		cout << "at percent: " << atp << endl;
		cout << "ac percent: " << acp << endl;
		cout << "ag percent: " << agp << endl;
		cout << "cc percent: " << ccp << endl;
		cout << "ct percent: " << ctp << endl;
		cout << "ca percent: " << cap << endl;
		cout << "cg percent: " << cgp << endl;
		cout << "ta percent: " << tap << endl;
		cout << "tt percent: " << ttp << endl;
		cout << "tc percent: " << tcp << endl;
		cout << "tg percent: " << tgp << endl;
		cout << "gg percent: " << ggp << endl;
		cout << "ga percent: " << gap << endl;
		cout << "gt percent: " << gtp << endl;
		cout << "gc percent: " << gcp << endl;

	}
	else
	{
		cout << "file error" << endl;
	}

	//dnatxt << "helloooo";

	dnatxt.close();
	return 0;
}