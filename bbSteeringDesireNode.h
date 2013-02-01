



<!DOCTYPE html>
<html>
<head>
 <meta http-equiv="Content-Type" content="text/html; charset=UTF-8" >
 <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" >
 
 <meta name="ROBOTS" content="NOARCHIVE">
 
 <link rel="icon" type="image/vnd.microsoft.icon" href="http://www.gstatic.com/codesite/ph/images/phosting.ico">
 
 
 <script type="text/javascript">
 
 
 
 
 var codesite_token = "ez76suIGEf5vV16rMmt6S2eComY:1359741910543";
 
 
 var CS_env = {"profileUrl":"/u/116163957316704900813/","token":"ez76suIGEf5vV16rMmt6S2eComY:1359741910543","domainName":null,"assetHostPath":"http://www.gstatic.com/codesite/ph","assetVersionPath":"http://www.gstatic.com/codesite/ph/6441139730022036690","projectName":"brainbugz","projectHomeUrl":"/p/brainbugz","relativeBaseUrl":"","loggedInUserEmail":"spookyhouseAdmin@gmail.com"};
 var _gaq = _gaq || [];
 _gaq.push(
 ['siteTracker._setAccount', 'UA-18071-1'],
 ['siteTracker._trackPageview']);
 
 (function() {
 var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
 ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
 (document.getElementsByTagName('head')[0] || document.getElementsByTagName('body')[0]).appendChild(ga);
 })();
 
 </script>
 
 
 <title>bbSteeringDesireNode.h - 
 brainbugz -
 
 
 Behavioural Animation System for Maya Particles - Google Project Hosting
 </title>
 <link type="text/css" rel="stylesheet" href="http://www.gstatic.com/codesite/ph/6441139730022036690/css/core.css">
 
 <link type="text/css" rel="stylesheet" href="http://www.gstatic.com/codesite/ph/6441139730022036690/css/ph_detail.css" >
 
 
 <link type="text/css" rel="stylesheet" href="http://www.gstatic.com/codesite/ph/6441139730022036690/css/d_sb.css" >
 
 
 
<!--[if IE]>
 <link type="text/css" rel="stylesheet" href="http://www.gstatic.com/codesite/ph/6441139730022036690/css/d_ie.css" >
<![endif]-->
 <style type="text/css">
 .menuIcon.off { background: no-repeat url(http://www.gstatic.com/codesite/ph/images/dropdown_sprite.gif) 0 -42px }
 .menuIcon.on { background: no-repeat url(http://www.gstatic.com/codesite/ph/images/dropdown_sprite.gif) 0 -28px }
 .menuIcon.down { background: no-repeat url(http://www.gstatic.com/codesite/ph/images/dropdown_sprite.gif) 0 0; }
 
 
 
  tr.inline_comment {
 background: #fff;
 vertical-align: top;
 }
 div.draft, div.published {
 padding: .3em;
 border: 1px solid #999; 
 margin-bottom: .1em;
 font-family: arial, sans-serif;
 max-width: 60em;
 }
 div.draft {
 background: #ffa;
 } 
 div.published {
 background: #e5ecf9;
 }
 div.published .body, div.draft .body {
 padding: .5em .1em .1em .1em;
 max-width: 60em;
 white-space: pre-wrap;
 white-space: -moz-pre-wrap;
 white-space: -pre-wrap;
 white-space: -o-pre-wrap;
 word-wrap: break-word;
 font-size: 1em;
 }
 div.draft .actions {
 margin-left: 1em;
 font-size: 90%;
 }
 div.draft form {
 padding: .5em .5em .5em 0;
 }
 div.draft textarea, div.published textarea {
 width: 95%;
 height: 10em;
 font-family: arial, sans-serif;
 margin-bottom: .5em;
 }

 
 .nocursor, .nocursor td, .cursor_hidden, .cursor_hidden td {
 background-color: white;
 height: 2px;
 }
 .cursor, .cursor td {
 background-color: darkblue;
 height: 2px;
 display: '';
 }
 
 
.list {
 border: 1px solid white;
 border-bottom: 0;
}

 
 </style>
</head>
<body class="t4">
<script type="text/javascript">
 window.___gcfg = {lang: 'en'};
 (function() 
 {var po = document.createElement("script");
 po.type = "text/javascript"; po.async = true;po.src = "https://apis.google.com/js/plusone.js";
 var s = document.getElementsByTagName("script")[0];
 s.parentNode.insertBefore(po, s);
 })();
</script>
<div class="headbg">

 <div id="gaia">
 

 <span>
 
 
 
 <a href="#" id="multilogin-dropdown" onclick="return false;"
 ><u><b>spookyhouseAdmin@gmail.com</b></u> <small>&#9660;</small></a>
 
 
 | <a href="/u/116163957316704900813/" id="projects-dropdown" onclick="return false;"
 ><u>My favorites</u> <small>&#9660;</small></a>
 | <a href="/u/116163957316704900813/" onclick="_CS_click('/gb/ph/profile');"
 title="Profile, Updates, and Settings"
 ><u>Profile</u></a>
 | <a href="https://www.google.com/accounts/Logout?continue=http%3A%2F%2Fcode.google.com%2Fp%2Fbrainbugz%2Fsource%2Fbrowse%2Ftrunk%2Fsource%2FbbSteeringDesireNode.h" 
 onclick="_CS_click('/gb/ph/signout');"
 ><u>Sign out</u></a>
 
 </span>

 </div>

 <div class="gbh" style="left: 0pt;"></div>
 <div class="gbh" style="right: 0pt;"></div>
 
 
 <div style="height: 1px"></div>
<!--[if lte IE 7]>
<div style="text-align:center;">
Your version of Internet Explorer is not supported. Try a browser that
contributes to open source, such as <a href="http://www.firefox.com">Firefox</a>,
<a href="http://www.google.com/chrome">Google Chrome</a>, or
<a href="http://code.google.com/chrome/chromeframe/">Google Chrome Frame</a>.
</div>
<![endif]-->



 <table style="padding:0px; margin: 0px 0px 10px 0px; width:100%" cellpadding="0" cellspacing="0"
 itemscope itemtype="http://schema.org/CreativeWork">
 <tr style="height: 58px;">
 
 
 
 <td id="plogo">
 <link itemprop="url" href="/p/brainbugz">
 <a href="/p/brainbugz/">
 
 <img src="http://www.gstatic.com/codesite/ph/images/defaultlogo.png" alt="Logo" itemprop="image">
 
 </a>
 </td>
 
 <td style="padding-left: 0.5em">
 
 <div id="pname">
 <a href="/p/brainbugz/"><span itemprop="name">brainbugz</span></a>
 </div>
 
 <div id="psum">
 <a id="project_summary_link"
 href="/p/brainbugz/"><span itemprop="description">Behavioural Animation System for Maya Particles</span></a>
 
 </div>
 
 
 </td>
 <td style="white-space:nowrap;text-align:right; vertical-align:bottom;">
 
 <form action="/hosting/search">
 <input size="30" name="q" value="" type="text">
 
 <input type="submit" name="projectsearch" value="Search projects" >
 </form>
 
 </tr>
 </table>

</div>

 
<div id="mt" class="gtb"> 
 <a href="/p/brainbugz/" class="tab ">Project&nbsp;Home</a>
 
 
 
 
 <a href="/p/brainbugz/downloads/list" class="tab ">Downloads</a>
 
 
 
 
 
 <a href="/p/brainbugz/w/list" class="tab ">Wiki</a>
 
 
 
 
 
 <a href="/p/brainbugz/issues/list"
 class="tab ">Issues</a>
 
 
 
 
 
 <a href="/p/brainbugz/source/checkout"
 class="tab active">Source</a>
 
 
 
 
 
 
 
 
 <div class=gtbc></div>
</div>
<table cellspacing="0" cellpadding="0" width="100%" align="center" border="0" class="st">
 <tr>
 
 
 
 
 
 
 <td class="subt">
 <div class="st2">
 <div class="isf">
 
 


 <span class="inst1"><a href="/p/brainbugz/source/checkout">Checkout</a></span> &nbsp;
 <span class="inst2"><a href="/p/brainbugz/source/browse/">Browse</a></span> &nbsp;
 <span class="inst3"><a href="/p/brainbugz/source/list">Changes</a></span> &nbsp;
 
 &nbsp;
 
 
 <form action="/p/brainbugz/source/search" method="get" style="display:inline"
 onsubmit="document.getElementById('codesearchq').value = document.getElementById('origq').value">
 <input type="hidden" name="q" id="codesearchq" value="">
 <input type="text" maxlength="2048" size="38" id="origq" name="origq" value="" title="Google Code Search" style="font-size:92%">&nbsp;<input type="submit" value="Search Trunk" name="btnG" style="font-size:92%">
 
 
 
 
 
 
 </form>
 <script type="text/javascript">
 
 function codesearchQuery(form) {
 var query = document.getElementById('q').value;
 if (query) { form.action += '%20' + query; }
 }
 </script>
 </div>
</div>

 </td>
 
 
 
 <td align="right" valign="top" class="bevel-right"></td>
 </tr>
</table>


<script type="text/javascript">
 var cancelBubble = false;
 function _go(url) { document.location = url; }
</script>
<div id="maincol"
 
>

 




<div class="expand">
<div id="colcontrol">
<style type="text/css">
 #file_flipper { white-space: nowrap; padding-right: 2em; }
 #file_flipper.hidden { display: none; }
 #file_flipper .pagelink { color: #0000CC; text-decoration: underline; }
 #file_flipper #visiblefiles { padding-left: 0.5em; padding-right: 0.5em; }
</style>
<table id="nav_and_rev" class="list"
 cellpadding="0" cellspacing="0" width="100%">
 <tr>
 
 <td nowrap="nowrap" class="src_crumbs src_nav" width="33%">
 <strong class="src_nav">Source path:&nbsp;</strong>
 <span id="crumb_root">
 
 <a href="/p/brainbugz/source/browse/">svn</a>/&nbsp;</span>
 <span id="crumb_links" class="ifClosed"><a href="/p/brainbugz/source/browse/trunk/">trunk</a><span class="sp">/&nbsp;</span><a href="/p/brainbugz/source/browse/trunk/source/">source</a><span class="sp">/&nbsp;</span>bbSteeringDesireNode.h</span>
 
 


 </td>
 
 
 <td nowrap="nowrap" width="33%" align="center">
 <a href="/p/brainbugz/source/browse/trunk/source/bbSteeringDesireNode.h?edit=1"
 ><img src="http://www.gstatic.com/codesite/ph/images/pencil-y14.png"
 class="edit_icon">Edit file</a>
 </td>
 
 
 <td nowrap="nowrap" width="33%" align="right">
 <table cellpadding="0" cellspacing="0" style="font-size: 100%"><tr>
 
 
 <td class="flipper"><b>r79</b></td>
 
 </tr></table>
 </td> 
 </tr>
</table>

<div class="fc">
 
 
 
<style type="text/css">
.undermouse span {
 background-image: url(http://www.gstatic.com/codesite/ph/images/comments.gif); }
</style>
<table class="opened" id="review_comment_area"
><tr>
<td id="nums">
<pre><table width="100%"><tr class="nocursor"><td></td></tr></table></pre>
<pre><table width="100%" id="nums_table_0"><tr id="gr_svn79_1"

><td id="1"><a href="#1">1</a></td></tr
><tr id="gr_svn79_2"

><td id="2"><a href="#2">2</a></td></tr
><tr id="gr_svn79_3"

><td id="3"><a href="#3">3</a></td></tr
><tr id="gr_svn79_4"

><td id="4"><a href="#4">4</a></td></tr
><tr id="gr_svn79_5"

><td id="5"><a href="#5">5</a></td></tr
><tr id="gr_svn79_6"

><td id="6"><a href="#6">6</a></td></tr
><tr id="gr_svn79_7"

><td id="7"><a href="#7">7</a></td></tr
><tr id="gr_svn79_8"

><td id="8"><a href="#8">8</a></td></tr
><tr id="gr_svn79_9"

><td id="9"><a href="#9">9</a></td></tr
><tr id="gr_svn79_10"

><td id="10"><a href="#10">10</a></td></tr
><tr id="gr_svn79_11"

><td id="11"><a href="#11">11</a></td></tr
><tr id="gr_svn79_12"

><td id="12"><a href="#12">12</a></td></tr
><tr id="gr_svn79_13"

><td id="13"><a href="#13">13</a></td></tr
><tr id="gr_svn79_14"

><td id="14"><a href="#14">14</a></td></tr
><tr id="gr_svn79_15"

><td id="15"><a href="#15">15</a></td></tr
><tr id="gr_svn79_16"

><td id="16"><a href="#16">16</a></td></tr
><tr id="gr_svn79_17"

><td id="17"><a href="#17">17</a></td></tr
><tr id="gr_svn79_18"

><td id="18"><a href="#18">18</a></td></tr
><tr id="gr_svn79_19"

><td id="19"><a href="#19">19</a></td></tr
><tr id="gr_svn79_20"

><td id="20"><a href="#20">20</a></td></tr
><tr id="gr_svn79_21"

><td id="21"><a href="#21">21</a></td></tr
><tr id="gr_svn79_22"

><td id="22"><a href="#22">22</a></td></tr
><tr id="gr_svn79_23"

><td id="23"><a href="#23">23</a></td></tr
><tr id="gr_svn79_24"

><td id="24"><a href="#24">24</a></td></tr
><tr id="gr_svn79_25"

><td id="25"><a href="#25">25</a></td></tr
><tr id="gr_svn79_26"

><td id="26"><a href="#26">26</a></td></tr
><tr id="gr_svn79_27"

><td id="27"><a href="#27">27</a></td></tr
><tr id="gr_svn79_28"

><td id="28"><a href="#28">28</a></td></tr
><tr id="gr_svn79_29"

><td id="29"><a href="#29">29</a></td></tr
><tr id="gr_svn79_30"

><td id="30"><a href="#30">30</a></td></tr
><tr id="gr_svn79_31"

><td id="31"><a href="#31">31</a></td></tr
><tr id="gr_svn79_32"

><td id="32"><a href="#32">32</a></td></tr
><tr id="gr_svn79_33"

><td id="33"><a href="#33">33</a></td></tr
><tr id="gr_svn79_34"

><td id="34"><a href="#34">34</a></td></tr
><tr id="gr_svn79_35"

><td id="35"><a href="#35">35</a></td></tr
><tr id="gr_svn79_36"

><td id="36"><a href="#36">36</a></td></tr
><tr id="gr_svn79_37"

><td id="37"><a href="#37">37</a></td></tr
><tr id="gr_svn79_38"

><td id="38"><a href="#38">38</a></td></tr
><tr id="gr_svn79_39"

><td id="39"><a href="#39">39</a></td></tr
><tr id="gr_svn79_40"

><td id="40"><a href="#40">40</a></td></tr
><tr id="gr_svn79_41"

><td id="41"><a href="#41">41</a></td></tr
><tr id="gr_svn79_42"

><td id="42"><a href="#42">42</a></td></tr
><tr id="gr_svn79_43"

><td id="43"><a href="#43">43</a></td></tr
><tr id="gr_svn79_44"

><td id="44"><a href="#44">44</a></td></tr
><tr id="gr_svn79_45"

><td id="45"><a href="#45">45</a></td></tr
><tr id="gr_svn79_46"

><td id="46"><a href="#46">46</a></td></tr
><tr id="gr_svn79_47"

><td id="47"><a href="#47">47</a></td></tr
><tr id="gr_svn79_48"

><td id="48"><a href="#48">48</a></td></tr
><tr id="gr_svn79_49"

><td id="49"><a href="#49">49</a></td></tr
><tr id="gr_svn79_50"

><td id="50"><a href="#50">50</a></td></tr
><tr id="gr_svn79_51"

><td id="51"><a href="#51">51</a></td></tr
><tr id="gr_svn79_52"

><td id="52"><a href="#52">52</a></td></tr
><tr id="gr_svn79_53"

><td id="53"><a href="#53">53</a></td></tr
><tr id="gr_svn79_54"

><td id="54"><a href="#54">54</a></td></tr
><tr id="gr_svn79_55"

><td id="55"><a href="#55">55</a></td></tr
><tr id="gr_svn79_56"

><td id="56"><a href="#56">56</a></td></tr
><tr id="gr_svn79_57"

><td id="57"><a href="#57">57</a></td></tr
><tr id="gr_svn79_58"

><td id="58"><a href="#58">58</a></td></tr
><tr id="gr_svn79_59"

><td id="59"><a href="#59">59</a></td></tr
><tr id="gr_svn79_60"

><td id="60"><a href="#60">60</a></td></tr
><tr id="gr_svn79_61"

><td id="61"><a href="#61">61</a></td></tr
><tr id="gr_svn79_62"

><td id="62"><a href="#62">62</a></td></tr
><tr id="gr_svn79_63"

><td id="63"><a href="#63">63</a></td></tr
><tr id="gr_svn79_64"

><td id="64"><a href="#64">64</a></td></tr
><tr id="gr_svn79_65"

><td id="65"><a href="#65">65</a></td></tr
><tr id="gr_svn79_66"

><td id="66"><a href="#66">66</a></td></tr
><tr id="gr_svn79_67"

><td id="67"><a href="#67">67</a></td></tr
><tr id="gr_svn79_68"

><td id="68"><a href="#68">68</a></td></tr
><tr id="gr_svn79_69"

><td id="69"><a href="#69">69</a></td></tr
><tr id="gr_svn79_70"

><td id="70"><a href="#70">70</a></td></tr
><tr id="gr_svn79_71"

><td id="71"><a href="#71">71</a></td></tr
><tr id="gr_svn79_72"

><td id="72"><a href="#72">72</a></td></tr
><tr id="gr_svn79_73"

><td id="73"><a href="#73">73</a></td></tr
><tr id="gr_svn79_74"

><td id="74"><a href="#74">74</a></td></tr
><tr id="gr_svn79_75"

><td id="75"><a href="#75">75</a></td></tr
><tr id="gr_svn79_76"

><td id="76"><a href="#76">76</a></td></tr
><tr id="gr_svn79_77"

><td id="77"><a href="#77">77</a></td></tr
><tr id="gr_svn79_78"

><td id="78"><a href="#78">78</a></td></tr
><tr id="gr_svn79_79"

><td id="79"><a href="#79">79</a></td></tr
><tr id="gr_svn79_80"

><td id="80"><a href="#80">80</a></td></tr
><tr id="gr_svn79_81"

><td id="81"><a href="#81">81</a></td></tr
><tr id="gr_svn79_82"

><td id="82"><a href="#82">82</a></td></tr
><tr id="gr_svn79_83"

><td id="83"><a href="#83">83</a></td></tr
><tr id="gr_svn79_84"

><td id="84"><a href="#84">84</a></td></tr
><tr id="gr_svn79_85"

><td id="85"><a href="#85">85</a></td></tr
><tr id="gr_svn79_86"

><td id="86"><a href="#86">86</a></td></tr
><tr id="gr_svn79_87"

><td id="87"><a href="#87">87</a></td></tr
><tr id="gr_svn79_88"

><td id="88"><a href="#88">88</a></td></tr
><tr id="gr_svn79_89"

><td id="89"><a href="#89">89</a></td></tr
><tr id="gr_svn79_90"

><td id="90"><a href="#90">90</a></td></tr
><tr id="gr_svn79_91"

><td id="91"><a href="#91">91</a></td></tr
><tr id="gr_svn79_92"

><td id="92"><a href="#92">92</a></td></tr
><tr id="gr_svn79_93"

><td id="93"><a href="#93">93</a></td></tr
><tr id="gr_svn79_94"

><td id="94"><a href="#94">94</a></td></tr
><tr id="gr_svn79_95"

><td id="95"><a href="#95">95</a></td></tr
><tr id="gr_svn79_96"

><td id="96"><a href="#96">96</a></td></tr
><tr id="gr_svn79_97"

><td id="97"><a href="#97">97</a></td></tr
><tr id="gr_svn79_98"

><td id="98"><a href="#98">98</a></td></tr
><tr id="gr_svn79_99"

><td id="99"><a href="#99">99</a></td></tr
><tr id="gr_svn79_100"

><td id="100"><a href="#100">100</a></td></tr
><tr id="gr_svn79_101"

><td id="101"><a href="#101">101</a></td></tr
><tr id="gr_svn79_102"

><td id="102"><a href="#102">102</a></td></tr
><tr id="gr_svn79_103"

><td id="103"><a href="#103">103</a></td></tr
><tr id="gr_svn79_104"

><td id="104"><a href="#104">104</a></td></tr
><tr id="gr_svn79_105"

><td id="105"><a href="#105">105</a></td></tr
><tr id="gr_svn79_106"

><td id="106"><a href="#106">106</a></td></tr
><tr id="gr_svn79_107"

><td id="107"><a href="#107">107</a></td></tr
><tr id="gr_svn79_108"

><td id="108"><a href="#108">108</a></td></tr
><tr id="gr_svn79_109"

><td id="109"><a href="#109">109</a></td></tr
><tr id="gr_svn79_110"

><td id="110"><a href="#110">110</a></td></tr
><tr id="gr_svn79_111"

><td id="111"><a href="#111">111</a></td></tr
><tr id="gr_svn79_112"

><td id="112"><a href="#112">112</a></td></tr
><tr id="gr_svn79_113"

><td id="113"><a href="#113">113</a></td></tr
><tr id="gr_svn79_114"

><td id="114"><a href="#114">114</a></td></tr
><tr id="gr_svn79_115"

><td id="115"><a href="#115">115</a></td></tr
><tr id="gr_svn79_116"

><td id="116"><a href="#116">116</a></td></tr
><tr id="gr_svn79_117"

><td id="117"><a href="#117">117</a></td></tr
><tr id="gr_svn79_118"

><td id="118"><a href="#118">118</a></td></tr
><tr id="gr_svn79_119"

><td id="119"><a href="#119">119</a></td></tr
><tr id="gr_svn79_120"

><td id="120"><a href="#120">120</a></td></tr
><tr id="gr_svn79_121"

><td id="121"><a href="#121">121</a></td></tr
><tr id="gr_svn79_122"

><td id="122"><a href="#122">122</a></td></tr
><tr id="gr_svn79_123"

><td id="123"><a href="#123">123</a></td></tr
><tr id="gr_svn79_124"

><td id="124"><a href="#124">124</a></td></tr
><tr id="gr_svn79_125"

><td id="125"><a href="#125">125</a></td></tr
><tr id="gr_svn79_126"

><td id="126"><a href="#126">126</a></td></tr
><tr id="gr_svn79_127"

><td id="127"><a href="#127">127</a></td></tr
><tr id="gr_svn79_128"

><td id="128"><a href="#128">128</a></td></tr
><tr id="gr_svn79_129"

><td id="129"><a href="#129">129</a></td></tr
><tr id="gr_svn79_130"

><td id="130"><a href="#130">130</a></td></tr
><tr id="gr_svn79_131"

><td id="131"><a href="#131">131</a></td></tr
><tr id="gr_svn79_132"

><td id="132"><a href="#132">132</a></td></tr
><tr id="gr_svn79_133"

><td id="133"><a href="#133">133</a></td></tr
><tr id="gr_svn79_134"

><td id="134"><a href="#134">134</a></td></tr
><tr id="gr_svn79_135"

><td id="135"><a href="#135">135</a></td></tr
><tr id="gr_svn79_136"

><td id="136"><a href="#136">136</a></td></tr
><tr id="gr_svn79_137"

><td id="137"><a href="#137">137</a></td></tr
><tr id="gr_svn79_138"

><td id="138"><a href="#138">138</a></td></tr
><tr id="gr_svn79_139"

><td id="139"><a href="#139">139</a></td></tr
><tr id="gr_svn79_140"

><td id="140"><a href="#140">140</a></td></tr
><tr id="gr_svn79_141"

><td id="141"><a href="#141">141</a></td></tr
><tr id="gr_svn79_142"

><td id="142"><a href="#142">142</a></td></tr
><tr id="gr_svn79_143"

><td id="143"><a href="#143">143</a></td></tr
><tr id="gr_svn79_144"

><td id="144"><a href="#144">144</a></td></tr
><tr id="gr_svn79_145"

><td id="145"><a href="#145">145</a></td></tr
><tr id="gr_svn79_146"

><td id="146"><a href="#146">146</a></td></tr
><tr id="gr_svn79_147"

><td id="147"><a href="#147">147</a></td></tr
><tr id="gr_svn79_148"

><td id="148"><a href="#148">148</a></td></tr
><tr id="gr_svn79_149"

><td id="149"><a href="#149">149</a></td></tr
><tr id="gr_svn79_150"

><td id="150"><a href="#150">150</a></td></tr
><tr id="gr_svn79_151"

><td id="151"><a href="#151">151</a></td></tr
><tr id="gr_svn79_152"

><td id="152"><a href="#152">152</a></td></tr
><tr id="gr_svn79_153"

><td id="153"><a href="#153">153</a></td></tr
><tr id="gr_svn79_154"

><td id="154"><a href="#154">154</a></td></tr
><tr id="gr_svn79_155"

><td id="155"><a href="#155">155</a></td></tr
><tr id="gr_svn79_156"

><td id="156"><a href="#156">156</a></td></tr
><tr id="gr_svn79_157"

><td id="157"><a href="#157">157</a></td></tr
><tr id="gr_svn79_158"

><td id="158"><a href="#158">158</a></td></tr
><tr id="gr_svn79_159"

><td id="159"><a href="#159">159</a></td></tr
><tr id="gr_svn79_160"

><td id="160"><a href="#160">160</a></td></tr
><tr id="gr_svn79_161"

><td id="161"><a href="#161">161</a></td></tr
><tr id="gr_svn79_162"

><td id="162"><a href="#162">162</a></td></tr
><tr id="gr_svn79_163"

><td id="163"><a href="#163">163</a></td></tr
><tr id="gr_svn79_164"

><td id="164"><a href="#164">164</a></td></tr
><tr id="gr_svn79_165"

><td id="165"><a href="#165">165</a></td></tr
><tr id="gr_svn79_166"

><td id="166"><a href="#166">166</a></td></tr
><tr id="gr_svn79_167"

><td id="167"><a href="#167">167</a></td></tr
><tr id="gr_svn79_168"

><td id="168"><a href="#168">168</a></td></tr
><tr id="gr_svn79_169"

><td id="169"><a href="#169">169</a></td></tr
><tr id="gr_svn79_170"

><td id="170"><a href="#170">170</a></td></tr
><tr id="gr_svn79_171"

><td id="171"><a href="#171">171</a></td></tr
><tr id="gr_svn79_172"

><td id="172"><a href="#172">172</a></td></tr
><tr id="gr_svn79_173"

><td id="173"><a href="#173">173</a></td></tr
><tr id="gr_svn79_174"

><td id="174"><a href="#174">174</a></td></tr
><tr id="gr_svn79_175"

><td id="175"><a href="#175">175</a></td></tr
><tr id="gr_svn79_176"

><td id="176"><a href="#176">176</a></td></tr
><tr id="gr_svn79_177"

><td id="177"><a href="#177">177</a></td></tr
><tr id="gr_svn79_178"

><td id="178"><a href="#178">178</a></td></tr
><tr id="gr_svn79_179"

><td id="179"><a href="#179">179</a></td></tr
><tr id="gr_svn79_180"

><td id="180"><a href="#180">180</a></td></tr
><tr id="gr_svn79_181"

><td id="181"><a href="#181">181</a></td></tr
><tr id="gr_svn79_182"

><td id="182"><a href="#182">182</a></td></tr
><tr id="gr_svn79_183"

><td id="183"><a href="#183">183</a></td></tr
><tr id="gr_svn79_184"

><td id="184"><a href="#184">184</a></td></tr
><tr id="gr_svn79_185"

><td id="185"><a href="#185">185</a></td></tr
><tr id="gr_svn79_186"

><td id="186"><a href="#186">186</a></td></tr
><tr id="gr_svn79_187"

><td id="187"><a href="#187">187</a></td></tr
><tr id="gr_svn79_188"

><td id="188"><a href="#188">188</a></td></tr
><tr id="gr_svn79_189"

><td id="189"><a href="#189">189</a></td></tr
><tr id="gr_svn79_190"

><td id="190"><a href="#190">190</a></td></tr
><tr id="gr_svn79_191"

><td id="191"><a href="#191">191</a></td></tr
><tr id="gr_svn79_192"

><td id="192"><a href="#192">192</a></td></tr
><tr id="gr_svn79_193"

><td id="193"><a href="#193">193</a></td></tr
><tr id="gr_svn79_194"

><td id="194"><a href="#194">194</a></td></tr
><tr id="gr_svn79_195"

><td id="195"><a href="#195">195</a></td></tr
><tr id="gr_svn79_196"

><td id="196"><a href="#196">196</a></td></tr
><tr id="gr_svn79_197"

><td id="197"><a href="#197">197</a></td></tr
><tr id="gr_svn79_198"

><td id="198"><a href="#198">198</a></td></tr
><tr id="gr_svn79_199"

><td id="199"><a href="#199">199</a></td></tr
><tr id="gr_svn79_200"

><td id="200"><a href="#200">200</a></td></tr
><tr id="gr_svn79_201"

><td id="201"><a href="#201">201</a></td></tr
><tr id="gr_svn79_202"

><td id="202"><a href="#202">202</a></td></tr
><tr id="gr_svn79_203"

><td id="203"><a href="#203">203</a></td></tr
><tr id="gr_svn79_204"

><td id="204"><a href="#204">204</a></td></tr
><tr id="gr_svn79_205"

><td id="205"><a href="#205">205</a></td></tr
><tr id="gr_svn79_206"

><td id="206"><a href="#206">206</a></td></tr
><tr id="gr_svn79_207"

><td id="207"><a href="#207">207</a></td></tr
><tr id="gr_svn79_208"

><td id="208"><a href="#208">208</a></td></tr
><tr id="gr_svn79_209"

><td id="209"><a href="#209">209</a></td></tr
><tr id="gr_svn79_210"

><td id="210"><a href="#210">210</a></td></tr
><tr id="gr_svn79_211"

><td id="211"><a href="#211">211</a></td></tr
><tr id="gr_svn79_212"

><td id="212"><a href="#212">212</a></td></tr
><tr id="gr_svn79_213"

><td id="213"><a href="#213">213</a></td></tr
><tr id="gr_svn79_214"

><td id="214"><a href="#214">214</a></td></tr
><tr id="gr_svn79_215"

><td id="215"><a href="#215">215</a></td></tr
><tr id="gr_svn79_216"

><td id="216"><a href="#216">216</a></td></tr
><tr id="gr_svn79_217"

><td id="217"><a href="#217">217</a></td></tr
><tr id="gr_svn79_218"

><td id="218"><a href="#218">218</a></td></tr
><tr id="gr_svn79_219"

><td id="219"><a href="#219">219</a></td></tr
><tr id="gr_svn79_220"

><td id="220"><a href="#220">220</a></td></tr
><tr id="gr_svn79_221"

><td id="221"><a href="#221">221</a></td></tr
><tr id="gr_svn79_222"

><td id="222"><a href="#222">222</a></td></tr
><tr id="gr_svn79_223"

><td id="223"><a href="#223">223</a></td></tr
><tr id="gr_svn79_224"

><td id="224"><a href="#224">224</a></td></tr
><tr id="gr_svn79_225"

><td id="225"><a href="#225">225</a></td></tr
><tr id="gr_svn79_226"

><td id="226"><a href="#226">226</a></td></tr
><tr id="gr_svn79_227"

><td id="227"><a href="#227">227</a></td></tr
><tr id="gr_svn79_228"

><td id="228"><a href="#228">228</a></td></tr
><tr id="gr_svn79_229"

><td id="229"><a href="#229">229</a></td></tr
><tr id="gr_svn79_230"

><td id="230"><a href="#230">230</a></td></tr
><tr id="gr_svn79_231"

><td id="231"><a href="#231">231</a></td></tr
><tr id="gr_svn79_232"

><td id="232"><a href="#232">232</a></td></tr
><tr id="gr_svn79_233"

><td id="233"><a href="#233">233</a></td></tr
><tr id="gr_svn79_234"

><td id="234"><a href="#234">234</a></td></tr
><tr id="gr_svn79_235"

><td id="235"><a href="#235">235</a></td></tr
><tr id="gr_svn79_236"

><td id="236"><a href="#236">236</a></td></tr
><tr id="gr_svn79_237"

><td id="237"><a href="#237">237</a></td></tr
><tr id="gr_svn79_238"

><td id="238"><a href="#238">238</a></td></tr
><tr id="gr_svn79_239"

><td id="239"><a href="#239">239</a></td></tr
><tr id="gr_svn79_240"

><td id="240"><a href="#240">240</a></td></tr
><tr id="gr_svn79_241"

><td id="241"><a href="#241">241</a></td></tr
><tr id="gr_svn79_242"

><td id="242"><a href="#242">242</a></td></tr
><tr id="gr_svn79_243"

><td id="243"><a href="#243">243</a></td></tr
><tr id="gr_svn79_244"

><td id="244"><a href="#244">244</a></td></tr
><tr id="gr_svn79_245"

><td id="245"><a href="#245">245</a></td></tr
><tr id="gr_svn79_246"

><td id="246"><a href="#246">246</a></td></tr
><tr id="gr_svn79_247"

><td id="247"><a href="#247">247</a></td></tr
><tr id="gr_svn79_248"

><td id="248"><a href="#248">248</a></td></tr
><tr id="gr_svn79_249"

><td id="249"><a href="#249">249</a></td></tr
><tr id="gr_svn79_250"

><td id="250"><a href="#250">250</a></td></tr
><tr id="gr_svn79_251"

><td id="251"><a href="#251">251</a></td></tr
><tr id="gr_svn79_252"

><td id="252"><a href="#252">252</a></td></tr
><tr id="gr_svn79_253"

><td id="253"><a href="#253">253</a></td></tr
><tr id="gr_svn79_254"

><td id="254"><a href="#254">254</a></td></tr
><tr id="gr_svn79_255"

><td id="255"><a href="#255">255</a></td></tr
><tr id="gr_svn79_256"

><td id="256"><a href="#256">256</a></td></tr
><tr id="gr_svn79_257"

><td id="257"><a href="#257">257</a></td></tr
><tr id="gr_svn79_258"

><td id="258"><a href="#258">258</a></td></tr
><tr id="gr_svn79_259"

><td id="259"><a href="#259">259</a></td></tr
><tr id="gr_svn79_260"

><td id="260"><a href="#260">260</a></td></tr
><tr id="gr_svn79_261"

><td id="261"><a href="#261">261</a></td></tr
><tr id="gr_svn79_262"

><td id="262"><a href="#262">262</a></td></tr
><tr id="gr_svn79_263"

><td id="263"><a href="#263">263</a></td></tr
><tr id="gr_svn79_264"

><td id="264"><a href="#264">264</a></td></tr
><tr id="gr_svn79_265"

><td id="265"><a href="#265">265</a></td></tr
><tr id="gr_svn79_266"

><td id="266"><a href="#266">266</a></td></tr
><tr id="gr_svn79_267"

><td id="267"><a href="#267">267</a></td></tr
><tr id="gr_svn79_268"

><td id="268"><a href="#268">268</a></td></tr
><tr id="gr_svn79_269"

><td id="269"><a href="#269">269</a></td></tr
><tr id="gr_svn79_270"

><td id="270"><a href="#270">270</a></td></tr
><tr id="gr_svn79_271"

><td id="271"><a href="#271">271</a></td></tr
><tr id="gr_svn79_272"

><td id="272"><a href="#272">272</a></td></tr
><tr id="gr_svn79_273"

><td id="273"><a href="#273">273</a></td></tr
><tr id="gr_svn79_274"

><td id="274"><a href="#274">274</a></td></tr
><tr id="gr_svn79_275"

><td id="275"><a href="#275">275</a></td></tr
><tr id="gr_svn79_276"

><td id="276"><a href="#276">276</a></td></tr
><tr id="gr_svn79_277"

><td id="277"><a href="#277">277</a></td></tr
><tr id="gr_svn79_278"

><td id="278"><a href="#278">278</a></td></tr
><tr id="gr_svn79_279"

><td id="279"><a href="#279">279</a></td></tr
><tr id="gr_svn79_280"

><td id="280"><a href="#280">280</a></td></tr
><tr id="gr_svn79_281"

><td id="281"><a href="#281">281</a></td></tr
><tr id="gr_svn79_282"

><td id="282"><a href="#282">282</a></td></tr
><tr id="gr_svn79_283"

><td id="283"><a href="#283">283</a></td></tr
><tr id="gr_svn79_284"

><td id="284"><a href="#284">284</a></td></tr
><tr id="gr_svn79_285"

><td id="285"><a href="#285">285</a></td></tr
><tr id="gr_svn79_286"

><td id="286"><a href="#286">286</a></td></tr
><tr id="gr_svn79_287"

><td id="287"><a href="#287">287</a></td></tr
><tr id="gr_svn79_288"

><td id="288"><a href="#288">288</a></td></tr
><tr id="gr_svn79_289"

><td id="289"><a href="#289">289</a></td></tr
><tr id="gr_svn79_290"

><td id="290"><a href="#290">290</a></td></tr
><tr id="gr_svn79_291"

><td id="291"><a href="#291">291</a></td></tr
><tr id="gr_svn79_292"

><td id="292"><a href="#292">292</a></td></tr
><tr id="gr_svn79_293"

><td id="293"><a href="#293">293</a></td></tr
><tr id="gr_svn79_294"

><td id="294"><a href="#294">294</a></td></tr
><tr id="gr_svn79_295"

><td id="295"><a href="#295">295</a></td></tr
><tr id="gr_svn79_296"

><td id="296"><a href="#296">296</a></td></tr
><tr id="gr_svn79_297"

><td id="297"><a href="#297">297</a></td></tr
></table></pre>
<pre><table width="100%"><tr class="nocursor"><td></td></tr></table></pre>
</td>
<td id="lines">
<pre><table width="100%"><tr class="cursor_stop cursor_hidden"><td></td></tr></table></pre>
<pre class="prettyprint "><table id="src_table_0"><tr
id=sl_svn79_1

><td class="source">#ifndef _bbSteeringDesireNode<br></td></tr
><tr
id=sl_svn79_2

><td class="source">#define _bbSteeringDesireNode<br></td></tr
><tr
id=sl_svn79_3

><td class="source">//<br></td></tr
><tr
id=sl_svn79_4

><td class="source">// Copyright (C) 2002 bbSteeringDesire <br></td></tr
><tr
id=sl_svn79_5

><td class="source">// <br></td></tr
><tr
id=sl_svn79_6

><td class="source">// File: bbSteeringDesireNode.h<br></td></tr
><tr
id=sl_svn79_7

><td class="source">//<br></td></tr
><tr
id=sl_svn79_8

><td class="source">// Dependency Graph Node: bbSteeringDesire<br></td></tr
><tr
id=sl_svn79_9

><td class="source">//<br></td></tr
><tr
id=sl_svn79_10

><td class="source">// Author: Maya SDK Wizard<br></td></tr
><tr
id=sl_svn79_11

><td class="source">//<br></td></tr
><tr
id=sl_svn79_12

><td class="source"><br></td></tr
><tr
id=sl_svn79_13

><td class="source">#include &lt;iostream.h&gt;<br></td></tr
><tr
id=sl_svn79_14

><td class="source"><br></td></tr
><tr
id=sl_svn79_15

><td class="source"> #include &lt;maya/MVector.h&gt;<br></td></tr
><tr
id=sl_svn79_16

><td class="source"> #include &lt;maya/MObject.h&gt;<br></td></tr
><tr
id=sl_svn79_17

><td class="source"> #include &lt;maya/MPlug.h&gt;<br></td></tr
><tr
id=sl_svn79_18

><td class="source"> #include &lt;maya/MDataBlock.h&gt;<br></td></tr
><tr
id=sl_svn79_19

><td class="source"> #include &lt;maya/MPxFieldNode.h&gt;<br></td></tr
><tr
id=sl_svn79_20

><td class="source"><br></td></tr
><tr
id=sl_svn79_21

><td class="source"><br></td></tr
><tr
id=sl_svn79_22

><td class="source">#define McheckErr(stat, msg)		\<br></td></tr
><tr
id=sl_svn79_23

><td class="source">	if ( MS::kSuccess != stat )		\<br></td></tr
><tr
id=sl_svn79_24

><td class="source">	{								\<br></td></tr
><tr
id=sl_svn79_25

><td class="source">		cerr &lt;&lt; msg;				\<br></td></tr
><tr
id=sl_svn79_26

><td class="source">		return MS::kFailure;		\<br></td></tr
><tr
id=sl_svn79_27

><td class="source">	}<br></td></tr
><tr
id=sl_svn79_28

><td class="source"><br></td></tr
><tr
id=sl_svn79_29

><td class="source">#ifdef className<br></td></tr
><tr
id=sl_svn79_30

><td class="source">#undef className<br></td></tr
><tr
id=sl_svn79_31

><td class="source">#endif<br></td></tr
><tr
id=sl_svn79_32

><td class="source"><br></td></tr
><tr
id=sl_svn79_33

><td class="source">#define className bbSteeringDesire<br></td></tr
><tr
id=sl_svn79_34

><td class="source"> <br></td></tr
><tr
id=sl_svn79_35

><td class="source">class bbSteeringDesire : public MPxFieldNode<br></td></tr
><tr
id=sl_svn79_36

><td class="source">{<br></td></tr
><tr
id=sl_svn79_37

><td class="source">public:<br></td></tr
><tr
id=sl_svn79_38

><td class="source">	bbSteeringDesire() {};<br></td></tr
><tr
id=sl_svn79_39

><td class="source">	virtual	~bbSteeringDesire() {}; <br></td></tr
><tr
id=sl_svn79_40

><td class="source"><br></td></tr
><tr
id=sl_svn79_41

><td class="source">	static  void *creator();<br></td></tr
><tr
id=sl_svn79_42

><td class="source">	static  MStatus		initialize();<br></td></tr
><tr
id=sl_svn79_43

><td class="source">	<br></td></tr
><tr
id=sl_svn79_44

><td class="source">	virtual MStatus		compute( const MPlug&amp; plug, MDataBlock&amp; block );<br></td></tr
><tr
id=sl_svn79_45

><td class="source"><br></td></tr
><tr
id=sl_svn79_46

><td class="source">    virtual MStatus getForceAtPoint(const MVectorArray&amp; point,<br></td></tr
><tr
id=sl_svn79_47

><td class="source">									const MVectorArray&amp; velocity,<br></td></tr
><tr
id=sl_svn79_48

><td class="source">									const MDoubleArray&amp; mass,<br></td></tr
><tr
id=sl_svn79_49

><td class="source">									MVectorArray&amp; force,<br></td></tr
><tr
id=sl_svn79_50

><td class="source">									double deltaTime);<br></td></tr
><tr
id=sl_svn79_51

><td class="source"><br></td></tr
><tr
id=sl_svn79_52

><td class="source">	// attributes.<br></td></tr
><tr
id=sl_svn79_53

><td class="source"><br></td></tr
><tr
id=sl_svn79_54

><td class="source">	#define declareVector(_attr)\<br></td></tr
><tr
id=sl_svn79_55

><td class="source">			static MObject	_attr;\<br></td></tr
><tr
id=sl_svn79_56

><td class="source">			static MObject	_attr##X;\<br></td></tr
><tr
id=sl_svn79_57

><td class="source">			static MObject	_attr##Y;\<br></td></tr
><tr
id=sl_svn79_58

><td class="source">			static MObject	_attr##Z;\<br></td></tr
><tr
id=sl_svn79_59

><td class="source"><br></td></tr
><tr
id=sl_svn79_60

><td class="source">	// combination attributes<br></td></tr
><tr
id=sl_svn79_61

><td class="source"><br></td></tr
><tr
id=sl_svn79_62

><td class="source">	static  MObject	cPriority;			// priority value for combination<br></td></tr
><tr
id=sl_svn79_63

><td class="source">	static  MObject	cWeight;			// weight value for combination<br></td></tr
><tr
id=sl_svn79_64

><td class="source"><br></td></tr
><tr
id=sl_svn79_65

><td class="source">	<br></td></tr
><tr
id=sl_svn79_66

><td class="source">	// view attributes<br></td></tr
><tr
id=sl_svn79_67

><td class="source">	<br></td></tr
><tr
id=sl_svn79_68

><td class="source">	static  MObject	useSensorRange;<br></td></tr
><tr
id=sl_svn79_69

><td class="source">	static  MObject	sensorRange;		// radius in which bug can sense<br></td></tr
><tr
id=sl_svn79_70

><td class="source">	static  MObject	useSensorAngle;<br></td></tr
><tr
id=sl_svn79_71

><td class="source">	static  MObject	sensorAngle;		// pitch opening angle<br></td></tr
><tr
id=sl_svn79_72

><td class="source"><br></td></tr
><tr
id=sl_svn79_73

><td class="source">	// COMMON<br></td></tr
><tr
id=sl_svn79_74

><td class="source"><br></td></tr
><tr
id=sl_svn79_75

><td class="source">	static  MObject	steeringDesire;		// enum steering desire<br></td></tr
><tr
id=sl_svn79_76

><td class="source">	static  MObject desiredSpeed;<br></td></tr
><tr
id=sl_svn79_77

><td class="source">	static  MObject maximumForce;<br></td></tr
><tr
id=sl_svn79_78

><td class="source">	static  MObject bugRadius;<br></td></tr
><tr
id=sl_svn79_79

><td class="source">	static  MObject lastVector;		// storage for vector data from previous cycles<br></td></tr
><tr
id=sl_svn79_80

><td class="source"><br></td></tr
><tr
id=sl_svn79_81

><td class="source"><br></td></tr
><tr
id=sl_svn79_82

><td class="source"><br></td></tr
><tr
id=sl_svn79_83

><td class="source">	static  MObject inverseDesiredSteeringForce;<br></td></tr
><tr
id=sl_svn79_84

><td class="source"><br></td></tr
><tr
id=sl_svn79_85

><td class="source">	// target attributes<br></td></tr
><tr
id=sl_svn79_86

><td class="source"><br></td></tr
><tr
id=sl_svn79_87

><td class="source">	static  MObject targetType;<br></td></tr
><tr
id=sl_svn79_88

><td class="source">	static  MObject targetRadius;<br></td></tr
><tr
id=sl_svn79_89

><td class="source">	static  MObject	stoppingRange;		// stopping range for arrival steering<br></td></tr
><tr
id=sl_svn79_90

><td class="source"><br></td></tr
><tr
id=sl_svn79_91

><td class="source">	static  MObject inputPoint;	<br></td></tr
><tr
id=sl_svn79_92

><td class="source">	static  MObject inputCurve;<br></td></tr
><tr
id=sl_svn79_93

><td class="source">	static  MObject inputSurface;<br></td></tr
><tr
id=sl_svn79_94

><td class="source">	static  MObject inputMesh;<br></td></tr
><tr
id=sl_svn79_95

><td class="source"><br></td></tr
><tr
id=sl_svn79_96

><td class="source">	static  MObject inputSelection;<br></td></tr
><tr
id=sl_svn79_97

><td class="source">	static  MObject inputIndex;<br></td></tr
><tr
id=sl_svn79_98

><td class="source"><br></td></tr
><tr
id=sl_svn79_99

><td class="source">	static  MObject seekTargets;<br></td></tr
><tr
id=sl_svn79_100

><td class="source">	static  MObject tolerance;<br></td></tr
><tr
id=sl_svn79_101

><td class="source">	static  MObject subTargets;<br></td></tr
><tr
id=sl_svn79_102

><td class="source">	static  MObject probeLength;<br></td></tr
><tr
id=sl_svn79_103

><td class="source">	static  MObject shadowRange;<br></td></tr
><tr
id=sl_svn79_104

><td class="source"><br></td></tr
><tr
id=sl_svn79_105

><td class="source">	declareVector(target);				// target vector<br></td></tr
><tr
id=sl_svn79_106

><td class="source">	declareVector(lastTarget);<br></td></tr
><tr
id=sl_svn79_107

><td class="source"><br></td></tr
><tr
id=sl_svn79_108

><td class="source">	// bug attributes<br></td></tr
><tr
id=sl_svn79_109

><td class="source"><br></td></tr
><tr
id=sl_svn79_110

><td class="source">	declareVector(direction);<br></td></tr
><tr
id=sl_svn79_111

><td class="source"><br></td></tr
><tr
id=sl_svn79_112

><td class="source">		// wander<br></td></tr
><tr
id=sl_svn79_113

><td class="source"><br></td></tr
><tr
id=sl_svn79_114

><td class="source">	static  MObject wanderSphereRadius;<br></td></tr
><tr
id=sl_svn79_115

><td class="source"><br></td></tr
><tr
id=sl_svn79_116

><td class="source">	declareVector(wanderSphereOffset);<br></td></tr
><tr
id=sl_svn79_117

><td class="source">	declareVector(wanderMinimumRandomVector);<br></td></tr
><tr
id=sl_svn79_118

><td class="source">	declareVector(wanderMaximumRandomVector);<br></td></tr
><tr
id=sl_svn79_119

><td class="source"><br></td></tr
><tr
id=sl_svn79_120

><td class="source">	static  MObject chooseSpeed;<br></td></tr
><tr
id=sl_svn79_121

><td class="source">	static  MObject wanderMinimumSpeed;<br></td></tr
><tr
id=sl_svn79_122

><td class="source">	static  MObject wanderMaximumSpeed;<br></td></tr
><tr
id=sl_svn79_123

><td class="source"><br></td></tr
><tr
id=sl_svn79_124

><td class="source">	static  MObject currentTime;<br></td></tr
><tr
id=sl_svn79_125

><td class="source">	static  MObject initSeedFrame;<br></td></tr
><tr
id=sl_svn79_126

><td class="source">	static  MObject seed;<br></td></tr
><tr
id=sl_svn79_127

><td class="source"><br></td></tr
><tr
id=sl_svn79_128

><td class="source">	static  MObject useRandom;<br></td></tr
><tr
id=sl_svn79_129

><td class="source"><br></td></tr
><tr
id=sl_svn79_130

><td class="source">	// neighbor attr<br></td></tr
><tr
id=sl_svn79_131

><td class="source"><br></td></tr
><tr
id=sl_svn79_132

><td class="source">	static  MObject bugDistance; <br></td></tr
><tr
id=sl_svn79_133

><td class="source"><br></td></tr
><tr
id=sl_svn79_134

><td class="source">	static	MTypeId	id;<br></td></tr
><tr
id=sl_svn79_135

><td class="source"><br></td></tr
><tr
id=sl_svn79_136

><td class="source">private:<br></td></tr
><tr
id=sl_svn79_137

><td class="source"><br></td></tr
><tr
id=sl_svn79_138

><td class="source">	void	getTargetsFromPoint(MDataBlock&amp; block,MVectorArray &amp;target);<br></td></tr
><tr
id=sl_svn79_139

><td class="source">	void	getTargetsFromCurve(MDataBlock&amp; block,int posSize,MVectorArray &amp;target);<br></td></tr
><tr
id=sl_svn79_140

><td class="source">	void	getTargetsFromSurface(MDataBlock&amp; block,int posSize,MVectorArray &amp;target);<br></td></tr
><tr
id=sl_svn79_141

><td class="source">	void	getTargetsFromMesh(MDataBlock&amp; block,int posSize,MVectorArray &amp;target);<br></td></tr
><tr
id=sl_svn79_142

><td class="source"><br></td></tr
><tr
id=sl_svn79_143

><td class="source">	void	sdSeekTargets( MDataBlock&amp; block, const MVectorArray &amp;positions, const MVectorArray &amp;velocities, const MVectorArray &amp;target, MVectorArray &amp;outputForce);<br></td></tr
><tr
id=sl_svn79_144

><td class="source">	void	sdMothSeekTargets(  MDataBlock&amp; block, const MVectorArray &amp;positions, const MVectorArray &amp;velocities, const MVectorArray &amp;target, MVectorArray &amp;outputForce);<br></td></tr
><tr
id=sl_svn79_145

><td class="source">	void	sdArrivalTargets(  MDataBlock&amp; block, const MVectorArray &amp;positions, const MVectorArray &amp;velocities, const MVectorArray &amp;target, MVectorArray &amp;outputForce);<br></td></tr
><tr
id=sl_svn79_146

><td class="source">	void	sdPursuitTargets(  MDataBlock&amp; block, const MVectorArray &amp;positions, const MVectorArray &amp;velocities, const MVectorArray &amp;target, MVectorArray &amp;outputForce);<br></td></tr
><tr
id=sl_svn79_147

><td class="source">	void	sdShadowTargets(  MDataBlock&amp; block, const MVectorArray &amp;positions, const MVectorArray &amp;velocities, const MVectorArray &amp;target, const MTime &amp;deltaTime, MVectorArray &amp;outputForce);<br></td></tr
><tr
id=sl_svn79_148

><td class="source"><br></td></tr
><tr
id=sl_svn79_149

><td class="source">	<br></td></tr
><tr
id=sl_svn79_150

><td class="source">	void	sdNeighborAlignment( MDataBlock&amp; block, const MVectorArray &amp;points, const MVectorArray &amp;velocities, MVectorArray &amp;outputForce );<br></td></tr
><tr
id=sl_svn79_151

><td class="source">	void	sdNeighborCohesion( MDataBlock&amp; block, const MVectorArray &amp;points, const MVectorArray &amp;velocities, MVectorArray &amp;outputForce );<br></td></tr
><tr
id=sl_svn79_152

><td class="source">	void	sdNeighborSeparation( MDataBlock&amp; block, const MVectorArray &amp;points, const MVectorArray &amp;velocities, MVectorArray &amp;outputForce );<br></td></tr
><tr
id=sl_svn79_153

><td class="source">	void	sdNeighborUnalignedCollisionAvoidance(MDataBlock&amp; block, const MVectorArray &amp;points, const MVectorArray &amp;velocities, MVectorArray &amp;outputForce );<br></td></tr
><tr
id=sl_svn79_154

><td class="source">	void	sdNeighborKeepDistance(MDataBlock&amp; block, const MVectorArray &amp;points, const MVectorArray &amp;velocities, MVectorArray &amp;outputForce );<br></td></tr
><tr
id=sl_svn79_155

><td class="source">	void	sdNeighborOportunism(MDataBlock&amp; block, const MVectorArray &amp;points, const MVectorArray &amp;velocities, MVectorArray &amp;outputForce );<br></td></tr
><tr
id=sl_svn79_156

><td class="source">	<br></td></tr
><tr
id=sl_svn79_157

><td class="source">	void	sdBugHeadDirection( MDataBlock&amp; block, const MVectorArray &amp;points, const MVectorArray &amp;velocities, MVectorArray &amp;outputForce );<br></td></tr
><tr
id=sl_svn79_158

><td class="source">	void	sdBugWander( MDataBlock&amp; block, const MVectorArray &amp;points, const MVectorArray &amp;velocities, MVectorArray &amp;outputForce );<br></td></tr
><tr
id=sl_svn79_159

><td class="source">	<br></td></tr
><tr
id=sl_svn79_160

><td class="source">	void	sdPursuit( MDataBlock&amp; block,<br></td></tr
><tr
id=sl_svn79_161

><td class="source">					const MVectorArray &amp;points,<br></td></tr
><tr
id=sl_svn79_162

><td class="source">					const MVectorArray &amp;velocities,<br></td></tr
><tr
id=sl_svn79_163

><td class="source">					MVectorArray &amp;outputForce );<br></td></tr
><tr
id=sl_svn79_164

><td class="source"><br></td></tr
><tr
id=sl_svn79_165

><td class="source">	void	sdCurveFollowing( MDataBlock&amp; block, const MVectorArray &amp;points, const MVectorArray &amp;velocities, MVectorArray &amp;outputForce );<br></td></tr
><tr
id=sl_svn79_166

><td class="source"><br></td></tr
><tr
id=sl_svn79_167

><td class="source">	void	sdSurfaceFollowing( MDataBlock&amp; block, const MVectorArray &amp;points, const MVectorArray &amp;velocities, MVectorArray &amp;outputForce );<br></td></tr
><tr
id=sl_svn79_168

><td class="source">	void	sdSurfaceObstacleAvoidance( MDataBlock&amp; block, const MVectorArray &amp;points, const MVectorArray &amp;velocities, MVectorArray &amp;outputForce );<br></td></tr
><tr
id=sl_svn79_169

><td class="source"><br></td></tr
><tr
id=sl_svn79_170

><td class="source">	void	sdMeshFollowing( MDataBlock&amp; block, const MVectorArray &amp;points, const MVectorArray &amp;velocities, MVectorArray &amp;outputForce );<br></td></tr
><tr
id=sl_svn79_171

><td class="source">	void    sdMeshObstacleAvoidance( MDataBlock&amp; block, const MVectorArray &amp;points, const MVectorArray &amp;velocities, MVectorArray &amp;outputForce );<br></td></tr
><tr
id=sl_svn79_172

><td class="source">	<br></td></tr
><tr
id=sl_svn79_173

><td class="source">	// methods to get attribute value of local attributes.<br></td></tr
><tr
id=sl_svn79_174

><td class="source">	//<br></td></tr
><tr
id=sl_svn79_175

><td class="source">	short	steeringDesireValue( MDataBlock&amp; block );<br></td></tr
><tr
id=sl_svn79_176

><td class="source">	short	targetTypeValue( MDataBlock&amp; block );<br></td></tr
><tr
id=sl_svn79_177

><td class="source">	short	subTargetsValue(MDataBlock&amp; block );<br></td></tr
><tr
id=sl_svn79_178

><td class="source">	short	inputSelectionValue(MDataBlock&amp; block );<br></td></tr
><tr
id=sl_svn79_179

><td class="source">	short	inputIndexValue(MDataBlock&amp; block );<br></td></tr
><tr
id=sl_svn79_180

><td class="source">	short   seedValue( MDataBlock&amp; block );<br></td></tr
><tr
id=sl_svn79_181

><td class="source">	short   chooseSpeedValue(MDataBlock&amp; block );<br></td></tr
><tr
id=sl_svn79_182

><td class="source"><br></td></tr
><tr
id=sl_svn79_183

><td class="source">	double	sensorRangeValue( MDataBlock&amp; block );<br></td></tr
><tr
id=sl_svn79_184

><td class="source">	double	sensorAngleValue( MDataBlock&amp; block );<br></td></tr
><tr
id=sl_svn79_185

><td class="source">	double	scaleDesiredForceValue( MDataBlock&amp; block );<br></td></tr
><tr
id=sl_svn79_186

><td class="source">	double	stoppingRangeValue( MDataBlock&amp; block );<br></td></tr
><tr
id=sl_svn79_187

><td class="source">	double  desiredSpeedValue( MDataBlock&amp; block );<br></td></tr
><tr
id=sl_svn79_188

><td class="source">	double  maximumForceValue( MDataBlock&amp; block );<br></td></tr
><tr
id=sl_svn79_189

><td class="source">	double  targetRadiusValue( MDataBlock&amp; block );<br></td></tr
><tr
id=sl_svn79_190

><td class="source">	double  toleranceValue( MDataBlock&amp; block );<br></td></tr
><tr
id=sl_svn79_191

><td class="source">	double  bugRadiusValue( MDataBlock&amp; block );<br></td></tr
><tr
id=sl_svn79_192

><td class="source">	double  wanderSphereRadiusValue( MDataBlock&amp; block );<br></td></tr
><tr
id=sl_svn79_193

><td class="source">	double  wanderMinimumSpeedValue( MDataBlock&amp; block );<br></td></tr
><tr
id=sl_svn79_194

><td class="source">	double  wanderMaximumSpeedValue( MDataBlock&amp; block );<br></td></tr
><tr
id=sl_svn79_195

><td class="source">	double	shadowRangeValue( MDataBlock&amp; block );<br></td></tr
><tr
id=sl_svn79_196

><td class="source">	double  probeLengthValue( MDataBlock&amp; block );<br></td></tr
><tr
id=sl_svn79_197

><td class="source">	double  bugDistanceValue( MDataBlock&amp; block );<br></td></tr
><tr
id=sl_svn79_198

><td class="source">	bool	useSensorRangeValue( MDataBlock&amp; block );<br></td></tr
><tr
id=sl_svn79_199

><td class="source">	bool	useSensorAngleValue( MDataBlock&amp; block );<br></td></tr
><tr
id=sl_svn79_200

><td class="source">	bool    inverseDesiredSteeringForceValue(MDataBlock&amp; block);<br></td></tr
><tr
id=sl_svn79_201

><td class="source">	bool    useRandomValue(MDataBlock&amp; block);<br></td></tr
><tr
id=sl_svn79_202

><td class="source"><br></td></tr
><tr
id=sl_svn79_203

><td class="source">	MStatus lastTargetValue(MDataBlock&amp; block, MVector &amp;vector );<br></td></tr
><tr
id=sl_svn79_204

><td class="source">	MStatus	directionValue( MDataBlock&amp; block, MVector &amp;vector );<br></td></tr
><tr
id=sl_svn79_205

><td class="source">	MStatus	wanderMinimumRandomVectorValue( MDataBlock&amp; block, MVector &amp;vector );<br></td></tr
><tr
id=sl_svn79_206

><td class="source">	MStatus	wanderMaximumRandomVectorValue( MDataBlock&amp; block, MVector &amp;vector );<br></td></tr
><tr
id=sl_svn79_207

><td class="source">	MStatus	wanderSphereOffsetValue( MDataBlock&amp; block, MVector &amp;vector );<br></td></tr
><tr
id=sl_svn79_208

><td class="source"><br></td></tr
><tr
id=sl_svn79_209

><td class="source">	<br></td></tr
><tr
id=sl_svn79_210

><td class="source">};<br></td></tr
><tr
id=sl_svn79_211

><td class="source"><br></td></tr
><tr
id=sl_svn79_212

><td class="source">// inlines<br></td></tr
><tr
id=sl_svn79_213

><td class="source"><br></td></tr
><tr
id=sl_svn79_214

><td class="source">// short inlines<br></td></tr
><tr
id=sl_svn79_215

><td class="source"><br></td></tr
><tr
id=sl_svn79_216

><td class="source">#define getShortAttrInline(_attr)\<br></td></tr
><tr
id=sl_svn79_217

><td class="source">		inline short className##::##_attr##Value( MDataBlock&amp; block )\<br></td></tr
><tr
id=sl_svn79_218

><td class="source">		{	MStatus status;\<br></td></tr
><tr
id=sl_svn79_219

><td class="source">			MDataHandle hValue = block.inputValue( _attr, &amp;status );\<br></td></tr
><tr
id=sl_svn79_220

><td class="source">			short value = 0;\<br></td></tr
><tr
id=sl_svn79_221

><td class="source">			if( status == MS::kSuccess )\<br></td></tr
><tr
id=sl_svn79_222

><td class="source">				value = hValue.asShort();\<br></td></tr
><tr
id=sl_svn79_223

><td class="source">			return( value );}\<br></td></tr
><tr
id=sl_svn79_224

><td class="source"><br></td></tr
><tr
id=sl_svn79_225

><td class="source">getShortAttrInline( steeringDesire);<br></td></tr
><tr
id=sl_svn79_226

><td class="source">getShortAttrInline( targetType);<br></td></tr
><tr
id=sl_svn79_227

><td class="source">getShortAttrInline( subTargets);<br></td></tr
><tr
id=sl_svn79_228

><td class="source">getShortAttrInline( inputSelection);<br></td></tr
><tr
id=sl_svn79_229

><td class="source">getShortAttrInline( inputIndex);<br></td></tr
><tr
id=sl_svn79_230

><td class="source">getShortAttrInline( seed);<br></td></tr
><tr
id=sl_svn79_231

><td class="source">getShortAttrInline( chooseSpeed);<br></td></tr
><tr
id=sl_svn79_232

><td class="source"><br></td></tr
><tr
id=sl_svn79_233

><td class="source">// double inlines<br></td></tr
><tr
id=sl_svn79_234

><td class="source"><br></td></tr
><tr
id=sl_svn79_235

><td class="source">#define getDoubleAttrInline(_attr)\<br></td></tr
><tr
id=sl_svn79_236

><td class="source">		inline double className##::##_attr##Value( MDataBlock&amp; block )\<br></td></tr
><tr
id=sl_svn79_237

><td class="source">		{	MStatus status;\<br></td></tr
><tr
id=sl_svn79_238

><td class="source">			MDataHandle hValue = block.inputValue( _attr, &amp;status );\<br></td></tr
><tr
id=sl_svn79_239

><td class="source">			double value = 0.0;\<br></td></tr
><tr
id=sl_svn79_240

><td class="source">			if( status == MS::kSuccess )\<br></td></tr
><tr
id=sl_svn79_241

><td class="source">				value = hValue.asDouble();\<br></td></tr
><tr
id=sl_svn79_242

><td class="source">			return( value );}\<br></td></tr
><tr
id=sl_svn79_243

><td class="source"><br></td></tr
><tr
id=sl_svn79_244

><td class="source">getDoubleAttrInline( sensorRange);<br></td></tr
><tr
id=sl_svn79_245

><td class="source">getDoubleAttrInline( sensorAngle);<br></td></tr
><tr
id=sl_svn79_246

><td class="source">getDoubleAttrInline( stoppingRange);<br></td></tr
><tr
id=sl_svn79_247

><td class="source"><br></td></tr
><tr
id=sl_svn79_248

><td class="source">getDoubleAttrInline( desiredSpeed);<br></td></tr
><tr
id=sl_svn79_249

><td class="source">getDoubleAttrInline( maximumForce);<br></td></tr
><tr
id=sl_svn79_250

><td class="source">getDoubleAttrInline( targetRadius);<br></td></tr
><tr
id=sl_svn79_251

><td class="source">getDoubleAttrInline( tolerance);<br></td></tr
><tr
id=sl_svn79_252

><td class="source">getDoubleAttrInline( bugRadius);<br></td></tr
><tr
id=sl_svn79_253

><td class="source">getDoubleAttrInline( wanderSphereRadius);<br></td></tr
><tr
id=sl_svn79_254

><td class="source">getDoubleAttrInline( wanderMinimumSpeed);<br></td></tr
><tr
id=sl_svn79_255

><td class="source">getDoubleAttrInline( wanderMaximumSpeed);<br></td></tr
><tr
id=sl_svn79_256

><td class="source">getDoubleAttrInline( probeLength);<br></td></tr
><tr
id=sl_svn79_257

><td class="source">getDoubleAttrInline( shadowRange);<br></td></tr
><tr
id=sl_svn79_258

><td class="source">getDoubleAttrInline( bugDistance);<br></td></tr
><tr
id=sl_svn79_259

><td class="source"><br></td></tr
><tr
id=sl_svn79_260

><td class="source">// bool inlines<br></td></tr
><tr
id=sl_svn79_261

><td class="source"><br></td></tr
><tr
id=sl_svn79_262

><td class="source">#define getBoolAttrInline(_attr)\<br></td></tr
><tr
id=sl_svn79_263

><td class="source">		inline bool className##::##_attr##Value( MDataBlock&amp; block )\<br></td></tr
><tr
id=sl_svn79_264

><td class="source">		{	MStatus status;\<br></td></tr
><tr
id=sl_svn79_265

><td class="source">			MDataHandle hValue = block.inputValue( _attr, &amp;status );\<br></td></tr
><tr
id=sl_svn79_266

><td class="source">			bool value = false;\<br></td></tr
><tr
id=sl_svn79_267

><td class="source">			if( status == MS::kSuccess )\<br></td></tr
><tr
id=sl_svn79_268

><td class="source">				value = hValue.asBool();\<br></td></tr
><tr
id=sl_svn79_269

><td class="source">			return( value );}\<br></td></tr
><tr
id=sl_svn79_270

><td class="source"><br></td></tr
><tr
id=sl_svn79_271

><td class="source">getBoolAttrInline( useSensorRange);<br></td></tr
><tr
id=sl_svn79_272

><td class="source">getBoolAttrInline( useSensorAngle);<br></td></tr
><tr
id=sl_svn79_273

><td class="source">getBoolAttrInline( inverseDesiredSteeringForce);<br></td></tr
><tr
id=sl_svn79_274

><td class="source">getBoolAttrInline( useRandom);<br></td></tr
><tr
id=sl_svn79_275

><td class="source"><br></td></tr
><tr
id=sl_svn79_276

><td class="source">// vector inlines<br></td></tr
><tr
id=sl_svn79_277

><td class="source"><br></td></tr
><tr
id=sl_svn79_278

><td class="source">#define getVectorAttrInline(_attr)\<br></td></tr
><tr
id=sl_svn79_279

><td class="source">		inline MStatus className##::##_attr##Value(MDataBlock&amp; block,MVector &amp;vector)\<br></td></tr
><tr
id=sl_svn79_280

><td class="source">		{	MStatus status;\<br></td></tr
><tr
id=sl_svn79_281

><td class="source">			MDataHandle hValueX = block.inputValue( _attr##X, &amp;status );\<br></td></tr
><tr
id=sl_svn79_282

><td class="source">			MDataHandle hValueY = block.inputValue( _attr##Y, &amp;status );\<br></td></tr
><tr
id=sl_svn79_283

><td class="source">			MDataHandle hValueZ = block.inputValue( _attr##Z, &amp;status );\<br></td></tr
><tr
id=sl_svn79_284

><td class="source">			if( status == MS::kSuccess )\<br></td></tr
><tr
id=sl_svn79_285

><td class="source">			{	vector[0] = hValueX.asDouble();\<br></td></tr
><tr
id=sl_svn79_286

><td class="source">				vector[1] = hValueY.asDouble();\<br></td></tr
><tr
id=sl_svn79_287

><td class="source">				vector[2] = hValueZ.asDouble();	}\<br></td></tr
><tr
id=sl_svn79_288

><td class="source">			return( status );}\<br></td></tr
><tr
id=sl_svn79_289

><td class="source"><br></td></tr
><tr
id=sl_svn79_290

><td class="source">//getVectorAttrInline(inputPoint);<br></td></tr
><tr
id=sl_svn79_291

><td class="source">getVectorAttrInline(lastTarget);<br></td></tr
><tr
id=sl_svn79_292

><td class="source">getVectorAttrInline(direction);<br></td></tr
><tr
id=sl_svn79_293

><td class="source">getVectorAttrInline(wanderMinimumRandomVector);<br></td></tr
><tr
id=sl_svn79_294

><td class="source">getVectorAttrInline(wanderMaximumRandomVector);<br></td></tr
><tr
id=sl_svn79_295

><td class="source">getVectorAttrInline(wanderSphereOffset);<br></td></tr
><tr
id=sl_svn79_296

><td class="source"><br></td></tr
><tr
id=sl_svn79_297

><td class="source">#endif<br></td></tr
></table></pre>
<pre><table width="100%"><tr class="cursor_stop cursor_hidden"><td></td></tr></table></pre>
</td>
</tr></table>

 
<script type="text/javascript">
 var lineNumUnderMouse = -1;
 
 function gutterOver(num) {
 gutterOut();
 var newTR = document.getElementById('gr_svn79_' + num);
 if (newTR) {
 newTR.className = 'undermouse';
 }
 lineNumUnderMouse = num;
 }
 function gutterOut() {
 if (lineNumUnderMouse != -1) {
 var oldTR = document.getElementById(
 'gr_svn79_' + lineNumUnderMouse);
 if (oldTR) {
 oldTR.className = '';
 }
 lineNumUnderMouse = -1;
 }
 }
 var numsGenState = {table_base_id: 'nums_table_'};
 var srcGenState = {table_base_id: 'src_table_'};
 var alignerRunning = false;
 var startOver = false;
 function setLineNumberHeights() {
 if (alignerRunning) {
 startOver = true;
 return;
 }
 numsGenState.chunk_id = 0;
 numsGenState.table = document.getElementById('nums_table_0');
 numsGenState.row_num = 0;
 if (!numsGenState.table) {
 return; // Silently exit if no file is present.
 }
 srcGenState.chunk_id = 0;
 srcGenState.table = document.getElementById('src_table_0');
 srcGenState.row_num = 0;
 alignerRunning = true;
 continueToSetLineNumberHeights();
 }
 function rowGenerator(genState) {
 if (genState.row_num < genState.table.rows.length) {
 var currentRow = genState.table.rows[genState.row_num];
 genState.row_num++;
 return currentRow;
 }
 var newTable = document.getElementById(
 genState.table_base_id + (genState.chunk_id + 1));
 if (newTable) {
 genState.chunk_id++;
 genState.row_num = 0;
 genState.table = newTable;
 return genState.table.rows[0];
 }
 return null;
 }
 var MAX_ROWS_PER_PASS = 1000;
 function continueToSetLineNumberHeights() {
 var rowsInThisPass = 0;
 var numRow = 1;
 var srcRow = 1;
 while (numRow && srcRow && rowsInThisPass < MAX_ROWS_PER_PASS) {
 numRow = rowGenerator(numsGenState);
 srcRow = rowGenerator(srcGenState);
 rowsInThisPass++;
 if (numRow && srcRow) {
 if (numRow.offsetHeight != srcRow.offsetHeight) {
 numRow.firstChild.style.height = srcRow.offsetHeight + 'px';
 }
 }
 }
 if (rowsInThisPass >= MAX_ROWS_PER_PASS) {
 setTimeout(continueToSetLineNumberHeights, 10);
 } else {
 alignerRunning = false;
 if (startOver) {
 startOver = false;
 setTimeout(setLineNumberHeights, 500);
 }
 }
 }
 function initLineNumberHeights() {
 // Do 2 complete passes, because there can be races
 // between this code and prettify.
 startOver = true;
 setTimeout(setLineNumberHeights, 250);
 window.onresize = setLineNumberHeights;
 }
 initLineNumberHeights();
</script>

 
 
 <div id="log">
 <div style="text-align:right">
 <a class="ifCollapse" href="#" onclick="_toggleMeta(this); return false">Show details</a>
 <a class="ifExpand" href="#" onclick="_toggleMeta(this); return false">Hide details</a>
 </div>
 <div class="ifExpand">
 
 
 <div class="pmeta_bubble_bg" style="border:1px solid white">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <div id="changelog">
 <p>Change log</p>
 <div>
 <a href="/p/brainbugz/source/detail?spec=svn79&amp;r=2">r2</a>
 by carsten.kolve
 on Nov 5, 2006
 &nbsp; <a href="/p/brainbugz/source/diff?spec=svn79&r=2&amp;format=side&amp;path=/trunk/source/bbSteeringDesireNode.h&amp;old_path=/trunk/source/bbSteeringDesireNode.h&amp;old=">Diff</a>
 </div>
 <pre>initial upload to svn</pre>
 </div>
 
 
 
 
 
 
 <script type="text/javascript">
 var detail_url = '/p/brainbugz/source/detail?r=2&spec=svn79';
 var publish_url = '/p/brainbugz/source/detail?r=2&spec=svn79#publish';
 // describe the paths of this revision in javascript.
 var changed_paths = [];
 var changed_urls = [];
 
 changed_paths.push('/trunk/.project');
 changed_urls.push('/p/brainbugz/source/browse/trunk/.project?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/bb_about.htm');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/bb_about.htm?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/bb_bugstructure.htm');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/bb_bugstructure.htm?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/bb_clamp.htm');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/bb_clamp.htm?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/bb_combine.htm');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/bb_combine.htm?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/bb_connect.htm');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/bb_connect.htm?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/bb_generalBugAttr.htm');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/bb_generalBugAttr.htm?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/bb_installation.htm');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/bb_installation.htm?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/bb_issues.htm');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/bb_issues.htm?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/bb_sd_bug.htm');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/bb_sd_bug.htm?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/bb_sd_neighbor.htm');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/bb_sd_neighbor.htm?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/bb_sd_target.htm');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/bb_sd_target.htm?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/bb_setup.htm');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/bb_setup.htm?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/bb_steering.htm');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/bb_steering.htm?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/bb_toc.htm');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/bb_toc.htm?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/bb_tutorial.htm');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/bb_tutorial.htm?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/bb_whatis.htm');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/bb_whatis.htm?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/brainbugz.htm');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/brainbugz.htm?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/AEbbCombineDesires.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/AEbbCombineDesires.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/bbcf.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/bbcf.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/bbsd.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/bbsd.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/bug1.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/bug1.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/bug2.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/bug2.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/bugstruc.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/bugstruc.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/bugstructure.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/bugstructure.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/bugz.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/bugz.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/cdAE.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/cdAE.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/generalBugAttr.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/generalBugAttr.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/hg_1.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/hg_1.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/hg_2.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/hg_2.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/hg_3.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/hg_3.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/hg_4.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/hg_4.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/logo_bug.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/logo_bug.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/sdBugHeadAE.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/sdBugHeadAE.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/sdBugWanderAE.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/sdBugWanderAE.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/sdNeighborAlign.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/sdNeighborAlign.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/sdNeighborCohesion.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/sdNeighborCohesion.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/sdNeighborSeparation.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/sdNeighborSeparation.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/sdTargetAE.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/sdTargetAE.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/sd_BugHead.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/sd_BugHead.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/sd_CurveFollowing.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/sd_CurveFollowing.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/sd_cSeek.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/sd_cSeek.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/sd_keepDistance.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/sd_keepDistance.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/sd_obstacleAvoidance.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/sd_obstacleAvoidance.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/sd_pArrival.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/sd_pArrival.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/sd_pMothSeek.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/sd_pMothSeek.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/sd_pSeek.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/sd_pSeek.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/sd_pursuit.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/sd_pursuit.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/sd_shadow.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/sd_shadow.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/sd_wander.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/sd_wander.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/selectConnEdit.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/selectConnEdit.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/tut_CompEdit.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/tut_CompEdit.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/tut_ConnEdit.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/tut_ConnEdit.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/tut_ConnEdit2.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/tut_ConnEdit2.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/tut_ConnEdit3.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/tut_ConnEdit3.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/tut_ConnEdit4.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/tut_ConnEdit4.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/tut_ConnEdit5.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/tut_ConnEdit5.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/tut_ConnEdit6.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/tut_ConnEdit6.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/tut_NodeRename.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/tut_NodeRename.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/tut_aeCD1.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/tut_aeCD1.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/tut_aeCD2.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/tut_aeCD2.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/tut_aePa1.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/tut_aePa1.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/tut_aeSD1.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/tut_aeSD1.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/tut_aeSD2.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/tut_aeSD2.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/tut_aeSD3.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/tut_aeSD3.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/tut_bbMenu.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/tut_bbMenu.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/tut_bbMenu2.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/tut_bbMenu2.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/tut_pathWorkArea.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/tut_pathWorkArea.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/tut_prepWorkArea.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/tut_prepWorkArea.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/examples');
 changed_urls.push('/p/brainbugz/source/browse/trunk/examples?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/examples/bbCurve.mb');
 changed_urls.push('/p/brainbugz/source/browse/trunk/examples/bbCurve.mb?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/examples/bbObstacleFlock.mb');
 changed_urls.push('/p/brainbugz/source/browse/trunk/examples/bbObstacleFlock.mb?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/examples/bbSwarm.mb');
 changed_urls.push('/p/brainbugz/source/browse/trunk/examples/bbSwarm.mb?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/examples/bbTutorial.mb');
 changed_urls.push('/p/brainbugz/source/browse/trunk/examples/bbTutorial.mb?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/icons');
 changed_urls.push('/p/brainbugz/source/browse/trunk/icons?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/icons/BBCEA1.XPM');
 changed_urls.push('/p/brainbugz/source/browse/trunk/icons/BBCEA1.XPM?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/icons/BBCEA2.XPM');
 changed_urls.push('/p/brainbugz/source/browse/trunk/icons/BBCEA2.XPM?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/icons/BBCEA3.XPM');
 changed_urls.push('/p/brainbugz/source/browse/trunk/icons/BBCEA3.XPM?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/icons/bbCombineDesires.fti');
 changed_urls.push('/p/brainbugz/source/browse/trunk/icons/bbCombineDesires.fti?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/icons/bbSteeringDesire.fti');
 changed_urls.push('/p/brainbugz/source/browse/trunk/icons/bbSteeringDesire.fti?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/icons/out_bbCombineDesires.xpm');
 changed_urls.push('/p/brainbugz/source/browse/trunk/icons/out_bbCombineDesires.xpm?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/icons/out_bbSteeringDesire.xpm');
 changed_urls.push('/p/brainbugz/source/browse/trunk/icons/out_bbSteeringDesire.xpm?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/mel');
 changed_urls.push('/p/brainbugz/source/browse/trunk/mel?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/mel/AEbbCombineDesiresTemplate.mel');
 changed_urls.push('/p/brainbugz/source/browse/trunk/mel/AEbbCombineDesiresTemplate.mel?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/mel/AEbbConnectionEditor.mel');
 changed_urls.push('/p/brainbugz/source/browse/trunk/mel/AEbbConnectionEditor.mel?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/mel/AEbbSteeringDesireTemplate.mel');
 changed_urls.push('/p/brainbugz/source/browse/trunk/mel/AEbbSteeringDesireTemplate.mel?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/mel/bbCreateUI.mel');
 changed_urls.push('/p/brainbugz/source/browse/trunk/mel/bbCreateUI.mel?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/mel/bbDeleteUI.mel');
 changed_urls.push('/p/brainbugz/source/browse/trunk/mel/bbDeleteUI.mel?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/source');
 changed_urls.push('/p/brainbugz/source/browse/trunk/source?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/source/MTools.h');
 changed_urls.push('/p/brainbugz/source/browse/trunk/source/MTools.h?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/source/bbCombineDesires.cpp');
 changed_urls.push('/p/brainbugz/source/browse/trunk/source/bbCombineDesires.cpp?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/source/bbCombineDesiresNode.h');
 changed_urls.push('/p/brainbugz/source/browse/trunk/source/bbCombineDesiresNode.h?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/source/bbSteeringDesireNode.cpp');
 changed_urls.push('/p/brainbugz/source/browse/trunk/source/bbSteeringDesireNode.cpp?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/source/bbSteeringDesireNode.h');
 changed_urls.push('/p/brainbugz/source/browse/trunk/source/bbSteeringDesireNode.h?r\x3d2\x26spec\x3dsvn79');
 
 var selected_path = '/trunk/source/bbSteeringDesireNode.h';
 
 
 changed_paths.push('/trunk/source/brainbugz.dsp');
 changed_urls.push('/p/brainbugz/source/browse/trunk/source/brainbugz.dsp?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/source/brainbugz.plg');
 changed_urls.push('/p/brainbugz/source/browse/trunk/source/brainbugz.plg?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/source/pluginMain.cpp');
 changed_urls.push('/p/brainbugz/source/browse/trunk/source/pluginMain.cpp?r\x3d2\x26spec\x3dsvn79');
 
 
 function getCurrentPageIndex() {
 for (var i = 0; i < changed_paths.length; i++) {
 if (selected_path == changed_paths[i]) {
 return i;
 }
 }
 }
 function getNextPage() {
 var i = getCurrentPageIndex();
 if (i < changed_paths.length - 1) {
 return changed_urls[i + 1];
 }
 return null;
 }
 function getPreviousPage() {
 var i = getCurrentPageIndex();
 if (i > 0) {
 return changed_urls[i - 1];
 }
 return null;
 }
 function gotoNextPage() {
 var page = getNextPage();
 if (!page) {
 page = detail_url;
 }
 window.location = page;
 }
 function gotoPreviousPage() {
 var page = getPreviousPage();
 if (!page) {
 page = detail_url;
 }
 window.location = page;
 }
 function gotoDetailPage() {
 window.location = detail_url;
 }
 function gotoPublishPage() {
 window.location = publish_url;
 }
</script>

 
 <style type="text/css">
 #review_nav {
 border-top: 3px solid white;
 padding-top: 6px;
 margin-top: 1em;
 }
 #review_nav td {
 vertical-align: middle;
 }
 #review_nav select {
 margin: .5em 0;
 }
 </style>
 <div id="review_nav">
 <table><tr><td>Go to:&nbsp;</td><td>
 <select name="files_in_rev" onchange="window.location=this.value">
 
 <option value="/p/brainbugz/source/browse/trunk/.project?r=2&amp;spec=svn79"
 
 >/trunk/.project</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs?r=2&amp;spec=svn79"
 
 >/trunk/docs</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/bb_about.htm?r=2&amp;spec=svn79"
 
 >/trunk/docs/bb_about.htm</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/bb_bugstructure.htm?r=2&amp;spec=svn79"
 
 >/trunk/docs/bb_bugstructure.htm</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/bb_clamp.htm?r=2&amp;spec=svn79"
 
 >/trunk/docs/bb_clamp.htm</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/bb_combine.htm?r=2&amp;spec=svn79"
 
 >/trunk/docs/bb_combine.htm</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/bb_connect.htm?r=2&amp;spec=svn79"
 
 >/trunk/docs/bb_connect.htm</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/bb_generalBugAttr.htm?r=2&amp;spec=svn79"
 
 >/trunk/docs/bb_generalBugAttr.htm</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/bb_installation.htm?r=2&amp;spec=svn79"
 
 >/trunk/docs/bb_installation.htm</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/bb_issues.htm?r=2&amp;spec=svn79"
 
 >/trunk/docs/bb_issues.htm</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/bb_sd_bug.htm?r=2&amp;spec=svn79"
 
 >/trunk/docs/bb_sd_bug.htm</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/bb_sd_neighbor.htm?r=2&amp;spec=svn79"
 
 >/trunk/docs/bb_sd_neighbor.htm</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/bb_sd_target.htm?r=2&amp;spec=svn79"
 
 >/trunk/docs/bb_sd_target.htm</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/bb_setup.htm?r=2&amp;spec=svn79"
 
 >/trunk/docs/bb_setup.htm</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/bb_steering.htm?r=2&amp;spec=svn79"
 
 >/trunk/docs/bb_steering.htm</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/bb_toc.htm?r=2&amp;spec=svn79"
 
 >/trunk/docs/bb_toc.htm</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/bb_tutorial.htm?r=2&amp;spec=svn79"
 
 >/trunk/docs/bb_tutorial.htm</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/bb_whatis.htm?r=2&amp;spec=svn79"
 
 >/trunk/docs/bb_whatis.htm</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/brainbugz.htm?r=2&amp;spec=svn79"
 
 >/trunk/docs/brainbugz.htm</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images?r=2&amp;spec=svn79"
 
 >/trunk/docs/images</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/AEbbCombineDesires.gif?r=2&amp;spec=svn79"
 
 >...cs/images/AEbbCombineDesires.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/bbcf.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/bbcf.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/bbsd.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/bbsd.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/bug1.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/bug1.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/bug2.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/bug2.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/bugstruc.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/bugstruc.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/bugstructure.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/bugstructure.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/bugz.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/bugz.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/cdAE.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/cdAE.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/generalBugAttr.gif?r=2&amp;spec=svn79"
 
 >...k/docs/images/generalBugAttr.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/hg_1.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/hg_1.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/hg_2.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/hg_2.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/hg_3.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/hg_3.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/hg_4.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/hg_4.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/logo_bug.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/logo_bug.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/sdBugHeadAE.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/sdBugHeadAE.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/sdBugWanderAE.gif?r=2&amp;spec=svn79"
 
 >...nk/docs/images/sdBugWanderAE.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/sdNeighborAlign.gif?r=2&amp;spec=svn79"
 
 >.../docs/images/sdNeighborAlign.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/sdNeighborCohesion.gif?r=2&amp;spec=svn79"
 
 >...cs/images/sdNeighborCohesion.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/sdNeighborSeparation.gif?r=2&amp;spec=svn79"
 
 >.../images/sdNeighborSeparation.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/sdTargetAE.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/sdTargetAE.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/sd_BugHead.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/sd_BugHead.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/sd_CurveFollowing.gif?r=2&amp;spec=svn79"
 
 >...ocs/images/sd_CurveFollowing.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/sd_cSeek.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/sd_cSeek.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/sd_keepDistance.gif?r=2&amp;spec=svn79"
 
 >.../docs/images/sd_keepDistance.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/sd_obstacleAvoidance.gif?r=2&amp;spec=svn79"
 
 >.../images/sd_obstacleAvoidance.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/sd_pArrival.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/sd_pArrival.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/sd_pMothSeek.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/sd_pMothSeek.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/sd_pSeek.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/sd_pSeek.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/sd_pursuit.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/sd_pursuit.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/sd_shadow.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/sd_shadow.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/sd_wander.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/sd_wander.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/selectConnEdit.gif?r=2&amp;spec=svn79"
 
 >...k/docs/images/selectConnEdit.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/tut_CompEdit.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/tut_CompEdit.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/tut_ConnEdit.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/tut_ConnEdit.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/tut_ConnEdit2.gif?r=2&amp;spec=svn79"
 
 >...nk/docs/images/tut_ConnEdit2.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/tut_ConnEdit3.gif?r=2&amp;spec=svn79"
 
 >...nk/docs/images/tut_ConnEdit3.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/tut_ConnEdit4.gif?r=2&amp;spec=svn79"
 
 >...nk/docs/images/tut_ConnEdit4.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/tut_ConnEdit5.gif?r=2&amp;spec=svn79"
 
 >...nk/docs/images/tut_ConnEdit5.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/tut_ConnEdit6.gif?r=2&amp;spec=svn79"
 
 >...nk/docs/images/tut_ConnEdit6.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/tut_NodeRename.gif?r=2&amp;spec=svn79"
 
 >...k/docs/images/tut_NodeRename.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/tut_aeCD1.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/tut_aeCD1.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/tut_aeCD2.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/tut_aeCD2.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/tut_aePa1.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/tut_aePa1.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/tut_aeSD1.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/tut_aeSD1.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/tut_aeSD2.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/tut_aeSD2.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/tut_aeSD3.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/tut_aeSD3.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/tut_bbMenu.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/tut_bbMenu.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/tut_bbMenu2.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/tut_bbMenu2.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/tut_pathWorkArea.gif?r=2&amp;spec=svn79"
 
 >...docs/images/tut_pathWorkArea.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/tut_prepWorkArea.gif?r=2&amp;spec=svn79"
 
 >...docs/images/tut_prepWorkArea.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/examples?r=2&amp;spec=svn79"
 
 >/trunk/examples</option>
 
 <option value="/p/brainbugz/source/browse/trunk/examples/bbCurve.mb?r=2&amp;spec=svn79"
 
 >/trunk/examples/bbCurve.mb</option>
 
 <option value="/p/brainbugz/source/browse/trunk/examples/bbObstacleFlock.mb?r=2&amp;spec=svn79"
 
 >/trunk/examples/bbObstacleFlock.mb</option>
 
 <option value="/p/brainbugz/source/browse/trunk/examples/bbSwarm.mb?r=2&amp;spec=svn79"
 
 >/trunk/examples/bbSwarm.mb</option>
 
 <option value="/p/brainbugz/source/browse/trunk/examples/bbTutorial.mb?r=2&amp;spec=svn79"
 
 >/trunk/examples/bbTutorial.mb</option>
 
 <option value="/p/brainbugz/source/browse/trunk/icons?r=2&amp;spec=svn79"
 
 >/trunk/icons</option>
 
 <option value="/p/brainbugz/source/browse/trunk/icons/BBCEA1.XPM?r=2&amp;spec=svn79"
 
 >/trunk/icons/BBCEA1.XPM</option>
 
 <option value="/p/brainbugz/source/browse/trunk/icons/BBCEA2.XPM?r=2&amp;spec=svn79"
 
 >/trunk/icons/BBCEA2.XPM</option>
 
 <option value="/p/brainbugz/source/browse/trunk/icons/BBCEA3.XPM?r=2&amp;spec=svn79"
 
 >/trunk/icons/BBCEA3.XPM</option>
 
 <option value="/p/brainbugz/source/browse/trunk/icons/bbCombineDesires.fti?r=2&amp;spec=svn79"
 
 >/trunk/icons/bbCombineDesires.fti</option>
 
 <option value="/p/brainbugz/source/browse/trunk/icons/bbSteeringDesire.fti?r=2&amp;spec=svn79"
 
 >/trunk/icons/bbSteeringDesire.fti</option>
 
 <option value="/p/brainbugz/source/browse/trunk/icons/out_bbCombineDesires.xpm?r=2&amp;spec=svn79"
 
 >...k/icons/out_bbCombineDesires.xpm</option>
 
 <option value="/p/brainbugz/source/browse/trunk/icons/out_bbSteeringDesire.xpm?r=2&amp;spec=svn79"
 
 >...k/icons/out_bbSteeringDesire.xpm</option>
 
 <option value="/p/brainbugz/source/browse/trunk/mel?r=2&amp;spec=svn79"
 
 >/trunk/mel</option>
 
 <option value="/p/brainbugz/source/browse/trunk/mel/AEbbCombineDesiresTemplate.mel?r=2&amp;spec=svn79"
 
 >...l/AEbbCombineDesiresTemplate.mel</option>
 
 <option value="/p/brainbugz/source/browse/trunk/mel/AEbbConnectionEditor.mel?r=2&amp;spec=svn79"
 
 >/trunk/mel/AEbbConnectionEditor.mel</option>
 
 <option value="/p/brainbugz/source/browse/trunk/mel/AEbbSteeringDesireTemplate.mel?r=2&amp;spec=svn79"
 
 >...l/AEbbSteeringDesireTemplate.mel</option>
 
 <option value="/p/brainbugz/source/browse/trunk/mel/bbCreateUI.mel?r=2&amp;spec=svn79"
 
 >/trunk/mel/bbCreateUI.mel</option>
 
 <option value="/p/brainbugz/source/browse/trunk/mel/bbDeleteUI.mel?r=2&amp;spec=svn79"
 
 >/trunk/mel/bbDeleteUI.mel</option>
 
 <option value="/p/brainbugz/source/browse/trunk/source?r=2&amp;spec=svn79"
 
 >/trunk/source</option>
 
 <option value="/p/brainbugz/source/browse/trunk/source/MTools.h?r=2&amp;spec=svn79"
 
 >/trunk/source/MTools.h</option>
 
 <option value="/p/brainbugz/source/browse/trunk/source/bbCombineDesires.cpp?r=2&amp;spec=svn79"
 
 >/trunk/source/bbCombineDesires.cpp</option>
 
 <option value="/p/brainbugz/source/browse/trunk/source/bbCombineDesiresNode.h?r=2&amp;spec=svn79"
 
 >...nk/source/bbCombineDesiresNode.h</option>
 
 <option value="/p/brainbugz/source/browse/trunk/source/bbSteeringDesireNode.cpp?r=2&amp;spec=svn79"
 
 >.../source/bbSteeringDesireNode.cpp</option>
 
 <option value="/p/brainbugz/source/browse/trunk/source/bbSteeringDesireNode.h?r=2&amp;spec=svn79"
 selected="selected"
 >...nk/source/bbSteeringDesireNode.h</option>
 
 <option value="/p/brainbugz/source/browse/trunk/source/brainbugz.dsp?r=2&amp;spec=svn79"
 
 >/trunk/source/brainbugz.dsp</option>
 
 <option value="/p/brainbugz/source/browse/trunk/source/brainbugz.plg?r=2&amp;spec=svn79"
 
 >/trunk/source/brainbugz.plg</option>
 
 <option value="/p/brainbugz/source/browse/trunk/source/pluginMain.cpp?r=2&amp;spec=svn79"
 
 >/trunk/source/pluginMain.cpp</option>
 
 </select>
 </td></tr></table>
 
 
 



 
 </div>
 
 
 </div>
 <div class="round1"></div>
 <div class="round2"></div>
 <div class="round4"></div>
 </div>
 <div class="pmeta_bubble_bg" style="border:1px solid white">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <div id="older_bubble">
 <p>Older revisions</p>
 
 <a href="/p/brainbugz/source/list?path=/trunk/source/bbSteeringDesireNode.h&start=2">All revisions of this file</a>
 </div>
 </div>
 <div class="round1"></div>
 <div class="round2"></div>
 <div class="round4"></div>
 </div>
 
 <div class="pmeta_bubble_bg" style="border:1px solid white">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <div id="fileinfo_bubble">
 <p>File info</p>
 
 <div>Size: 10584 bytes,
 297 lines</div>
 
 <div><a href="//brainbugz.googlecode.com/svn/trunk/source/bbSteeringDesireNode.h">View raw file</a></div>
 </div>
 
 <div id="props">
 <p>File properties</p>
 <dl>
 
 <dt>svn:executable</dt>
 <dd>*</dd>
 
 </dl>
 </div>
 
 </div>
 <div class="round1"></div>
 <div class="round2"></div>
 <div class="round4"></div>
 </div>
 </div>
 </div>


</div>

</div>
</div>

<script src="http://www.gstatic.com/codesite/ph/6441139730022036690/js/prettify/prettify.js"></script>
<script type="text/javascript">prettyPrint();</script>


<script src="http://www.gstatic.com/codesite/ph/6441139730022036690/js/source_file_scripts.js"></script>

 <script type="text/javascript" src="http://www.gstatic.com/codesite/ph/6441139730022036690/js/kibbles.js"></script>
 <script type="text/javascript">
 var lastStop = null;
 var initialized = false;
 
 function updateCursor(next, prev) {
 if (prev && prev.element) {
 prev.element.className = 'cursor_stop cursor_hidden';
 }
 if (next && next.element) {
 next.element.className = 'cursor_stop cursor';
 lastStop = next.index;
 }
 }
 
 function pubRevealed(data) {
 updateCursorForCell(data.cellId, 'cursor_stop cursor_hidden');
 if (initialized) {
 reloadCursors();
 }
 }
 
 function draftRevealed(data) {
 updateCursorForCell(data.cellId, 'cursor_stop cursor_hidden');
 if (initialized) {
 reloadCursors();
 }
 }
 
 function draftDestroyed(data) {
 updateCursorForCell(data.cellId, 'nocursor');
 if (initialized) {
 reloadCursors();
 }
 }
 function reloadCursors() {
 kibbles.skipper.reset();
 loadCursors();
 if (lastStop != null) {
 kibbles.skipper.setCurrentStop(lastStop);
 }
 }
 // possibly the simplest way to insert any newly added comments
 // is to update the class of the corresponding cursor row,
 // then refresh the entire list of rows.
 function updateCursorForCell(cellId, className) {
 var cell = document.getElementById(cellId);
 // we have to go two rows back to find the cursor location
 var row = getPreviousElement(cell.parentNode);
 row.className = className;
 }
 // returns the previous element, ignores text nodes.
 function getPreviousElement(e) {
 var element = e.previousSibling;
 if (element.nodeType == 3) {
 element = element.previousSibling;
 }
 if (element && element.tagName) {
 return element;
 }
 }
 function loadCursors() {
 // register our elements with skipper
 var elements = CR_getElements('*', 'cursor_stop');
 var len = elements.length;
 for (var i = 0; i < len; i++) {
 var element = elements[i]; 
 element.className = 'cursor_stop cursor_hidden';
 kibbles.skipper.append(element);
 }
 }
 function toggleComments() {
 CR_toggleCommentDisplay();
 reloadCursors();
 }
 function keysOnLoadHandler() {
 // setup skipper
 kibbles.skipper.addStopListener(
 kibbles.skipper.LISTENER_TYPE.PRE, updateCursor);
 // Set the 'offset' option to return the middle of the client area
 // an option can be a static value, or a callback
 kibbles.skipper.setOption('padding_top', 50);
 // Set the 'offset' option to return the middle of the client area
 // an option can be a static value, or a callback
 kibbles.skipper.setOption('padding_bottom', 100);
 // Register our keys
 kibbles.skipper.addFwdKey("n");
 kibbles.skipper.addRevKey("p");
 kibbles.keys.addKeyPressListener(
 'u', function() { window.location = detail_url; });
 kibbles.keys.addKeyPressListener(
 'r', function() { window.location = detail_url + '#publish'; });
 
 kibbles.keys.addKeyPressListener('j', gotoNextPage);
 kibbles.keys.addKeyPressListener('k', gotoPreviousPage);
 
 
 }
 </script>
<script src="http://www.gstatic.com/codesite/ph/6441139730022036690/js/code_review_scripts.js"></script>
<script type="text/javascript">
 function showPublishInstructions() {
 var element = document.getElementById('review_instr');
 if (element) {
 element.className = 'opened';
 }
 }
 var codereviews;
 function revsOnLoadHandler() {
 // register our source container with the commenting code
 var paths = {'svn79': '/trunk/source/bbSteeringDesireNode.h'}
 codereviews = CR_controller.setup(
 {"profileUrl":"/u/116163957316704900813/","token":"ez76suIGEf5vV16rMmt6S2eComY:1359741910543","domainName":null,"assetHostPath":"http://www.gstatic.com/codesite/ph","assetVersionPath":"http://www.gstatic.com/codesite/ph/6441139730022036690","projectName":"brainbugz","projectHomeUrl":"/p/brainbugz","relativeBaseUrl":"","loggedInUserEmail":"spookyhouseAdmin@gmail.com"}, '', 'svn79', paths,
 CR_BrowseIntegrationFactory);
 
 codereviews.registerActivityListener(CR_ActivityType.REVEAL_DRAFT_PLATE, showPublishInstructions);
 
 codereviews.registerActivityListener(CR_ActivityType.REVEAL_PUB_PLATE, pubRevealed);
 codereviews.registerActivityListener(CR_ActivityType.REVEAL_DRAFT_PLATE, draftRevealed);
 codereviews.registerActivityListener(CR_ActivityType.DISCARD_DRAFT_COMMENT, draftDestroyed);
 
 
 
 
 
 
 
 var initialized = true;
 reloadCursors();
 }
 window.onload = function() {keysOnLoadHandler(); revsOnLoadHandler();};

</script>
<script type="text/javascript" src="http://www.gstatic.com/codesite/ph/6441139730022036690/js/dit_scripts.js"></script>

 
 
 
 <script type="text/javascript" src="http://www.gstatic.com/codesite/ph/6441139730022036690/js/ph_core.js"></script>
 
 
 
 
</div> 

<div id="footer" dir="ltr">
 <div class="text">
 <a href="/projecthosting/terms.html">Terms</a> -
 <a href="http://www.google.com/privacy.html">Privacy</a> -
 <a href="/p/support/">Project Hosting Help</a>
 </div>
</div>
 <div class="hostedBy" style="margin-top: -20px;">
 <span style="vertical-align: top;">Powered by <a href="http://code.google.com/projecthosting/">Google Project Hosting</a></span>
 </div>

 
 


 
 </body>
</html>

