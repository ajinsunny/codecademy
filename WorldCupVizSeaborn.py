import codecademylib3_seaborn
from matplotlib import pyplot as plt
import pandas as pd
import seaborn as sns

df = pd.read_csv('WorldCupMatches.csv')
df_goals  = pd.read_csv('goals.csv')

df['Total Goals'] = df['Home Team Goals'] + df['Away Team Goals']


sns.set_style('whitegrid')
sns.set_context('notebook', font_scale = 1.25)

f, ax = plt.subplots(figsize = (12, 7))
ax = sns.barplot(x = df['Year'], y = df['Total Goals'])
ax.set_title("Avg Goals Per Year in the World")
plt.show()

f,ax2 = plt.subplots(figsize = (12,7))
ax = sns.boxplot(x = 'year' , y = 'goals' , data = df_goals, palette = 'Spectral')
ax2.set_title("Goals visulization")

plt.show()
