



<!DOCTYPE html>
<html>
<head>
 <meta http-equiv="Content-Type" content="text/html; charset=UTF-8" >
 <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" >
 
 <meta name="ROBOTS" content="NOARCHIVE">
 
 <link rel="icon" type="image/vnd.microsoft.icon" href="http://www.gstatic.com/codesite/ph/images/phosting.ico">
 
 
 <script type="text/javascript">
 
 
 
 
 var codesite_token = "LlZDkKAwoY771FgG3gzYNLDYQRs:1359741885333";
 
 
 var CS_env = {"assetHostPath":"http://www.gstatic.com/codesite/ph","loggedInUserEmail":"spookyhouseAdmin@gmail.com","profileUrl":"/u/116163957316704900813/","assetVersionPath":"http://www.gstatic.com/codesite/ph/6441139730022036690","projectHomeUrl":"/p/brainbugz","relativeBaseUrl":"","token":"LlZDkKAwoY771FgG3gzYNLDYQRs:1359741885333","domainName":null,"projectName":"brainbugz"};
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
 
 
 <title>bbSteeringDesireNode.cpp - 
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
 | <a href="https://www.google.com/accounts/Logout?continue=http%3A%2F%2Fcode.google.com%2Fp%2Fbrainbugz%2Fsource%2Fbrowse%2Ftrunk%2Fsource%2FbbSteeringDesireNode.cpp" 
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
 <span id="crumb_links" class="ifClosed"><a href="/p/brainbugz/source/browse/trunk/">trunk</a><span class="sp">/&nbsp;</span><a href="/p/brainbugz/source/browse/trunk/source/">source</a><span class="sp">/&nbsp;</span>bbSteeringDesireNode.cpp</span>
 
 


 </td>
 
 
 <td nowrap="nowrap" width="33%" align="center">
 <a href="/p/brainbugz/source/browse/trunk/source/bbSteeringDesireNode.cpp?edit=1"
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
><tr id="gr_svn79_298"

><td id="298"><a href="#298">298</a></td></tr
><tr id="gr_svn79_299"

><td id="299"><a href="#299">299</a></td></tr
><tr id="gr_svn79_300"

><td id="300"><a href="#300">300</a></td></tr
><tr id="gr_svn79_301"

><td id="301"><a href="#301">301</a></td></tr
><tr id="gr_svn79_302"

><td id="302"><a href="#302">302</a></td></tr
><tr id="gr_svn79_303"

><td id="303"><a href="#303">303</a></td></tr
><tr id="gr_svn79_304"

><td id="304"><a href="#304">304</a></td></tr
><tr id="gr_svn79_305"

><td id="305"><a href="#305">305</a></td></tr
><tr id="gr_svn79_306"

><td id="306"><a href="#306">306</a></td></tr
><tr id="gr_svn79_307"

><td id="307"><a href="#307">307</a></td></tr
><tr id="gr_svn79_308"

><td id="308"><a href="#308">308</a></td></tr
><tr id="gr_svn79_309"

><td id="309"><a href="#309">309</a></td></tr
><tr id="gr_svn79_310"

><td id="310"><a href="#310">310</a></td></tr
><tr id="gr_svn79_311"

><td id="311"><a href="#311">311</a></td></tr
><tr id="gr_svn79_312"

><td id="312"><a href="#312">312</a></td></tr
><tr id="gr_svn79_313"

><td id="313"><a href="#313">313</a></td></tr
><tr id="gr_svn79_314"

><td id="314"><a href="#314">314</a></td></tr
><tr id="gr_svn79_315"

><td id="315"><a href="#315">315</a></td></tr
><tr id="gr_svn79_316"

><td id="316"><a href="#316">316</a></td></tr
><tr id="gr_svn79_317"

><td id="317"><a href="#317">317</a></td></tr
><tr id="gr_svn79_318"

><td id="318"><a href="#318">318</a></td></tr
><tr id="gr_svn79_319"

><td id="319"><a href="#319">319</a></td></tr
><tr id="gr_svn79_320"

><td id="320"><a href="#320">320</a></td></tr
><tr id="gr_svn79_321"

><td id="321"><a href="#321">321</a></td></tr
><tr id="gr_svn79_322"

><td id="322"><a href="#322">322</a></td></tr
><tr id="gr_svn79_323"

><td id="323"><a href="#323">323</a></td></tr
><tr id="gr_svn79_324"

><td id="324"><a href="#324">324</a></td></tr
><tr id="gr_svn79_325"

><td id="325"><a href="#325">325</a></td></tr
><tr id="gr_svn79_326"

><td id="326"><a href="#326">326</a></td></tr
><tr id="gr_svn79_327"

><td id="327"><a href="#327">327</a></td></tr
><tr id="gr_svn79_328"

><td id="328"><a href="#328">328</a></td></tr
><tr id="gr_svn79_329"

><td id="329"><a href="#329">329</a></td></tr
><tr id="gr_svn79_330"

><td id="330"><a href="#330">330</a></td></tr
><tr id="gr_svn79_331"

><td id="331"><a href="#331">331</a></td></tr
><tr id="gr_svn79_332"

><td id="332"><a href="#332">332</a></td></tr
><tr id="gr_svn79_333"

><td id="333"><a href="#333">333</a></td></tr
><tr id="gr_svn79_334"

><td id="334"><a href="#334">334</a></td></tr
><tr id="gr_svn79_335"

><td id="335"><a href="#335">335</a></td></tr
><tr id="gr_svn79_336"

><td id="336"><a href="#336">336</a></td></tr
><tr id="gr_svn79_337"

><td id="337"><a href="#337">337</a></td></tr
><tr id="gr_svn79_338"

><td id="338"><a href="#338">338</a></td></tr
><tr id="gr_svn79_339"

><td id="339"><a href="#339">339</a></td></tr
><tr id="gr_svn79_340"

><td id="340"><a href="#340">340</a></td></tr
><tr id="gr_svn79_341"

><td id="341"><a href="#341">341</a></td></tr
><tr id="gr_svn79_342"

><td id="342"><a href="#342">342</a></td></tr
><tr id="gr_svn79_343"

><td id="343"><a href="#343">343</a></td></tr
><tr id="gr_svn79_344"

><td id="344"><a href="#344">344</a></td></tr
><tr id="gr_svn79_345"

><td id="345"><a href="#345">345</a></td></tr
><tr id="gr_svn79_346"

><td id="346"><a href="#346">346</a></td></tr
><tr id="gr_svn79_347"

><td id="347"><a href="#347">347</a></td></tr
><tr id="gr_svn79_348"

><td id="348"><a href="#348">348</a></td></tr
><tr id="gr_svn79_349"

><td id="349"><a href="#349">349</a></td></tr
><tr id="gr_svn79_350"

><td id="350"><a href="#350">350</a></td></tr
><tr id="gr_svn79_351"

><td id="351"><a href="#351">351</a></td></tr
><tr id="gr_svn79_352"

><td id="352"><a href="#352">352</a></td></tr
><tr id="gr_svn79_353"

><td id="353"><a href="#353">353</a></td></tr
><tr id="gr_svn79_354"

><td id="354"><a href="#354">354</a></td></tr
><tr id="gr_svn79_355"

><td id="355"><a href="#355">355</a></td></tr
><tr id="gr_svn79_356"

><td id="356"><a href="#356">356</a></td></tr
><tr id="gr_svn79_357"

><td id="357"><a href="#357">357</a></td></tr
><tr id="gr_svn79_358"

><td id="358"><a href="#358">358</a></td></tr
><tr id="gr_svn79_359"

><td id="359"><a href="#359">359</a></td></tr
><tr id="gr_svn79_360"

><td id="360"><a href="#360">360</a></td></tr
><tr id="gr_svn79_361"

><td id="361"><a href="#361">361</a></td></tr
><tr id="gr_svn79_362"

><td id="362"><a href="#362">362</a></td></tr
><tr id="gr_svn79_363"

><td id="363"><a href="#363">363</a></td></tr
><tr id="gr_svn79_364"

><td id="364"><a href="#364">364</a></td></tr
><tr id="gr_svn79_365"

><td id="365"><a href="#365">365</a></td></tr
><tr id="gr_svn79_366"

><td id="366"><a href="#366">366</a></td></tr
><tr id="gr_svn79_367"

><td id="367"><a href="#367">367</a></td></tr
><tr id="gr_svn79_368"

><td id="368"><a href="#368">368</a></td></tr
><tr id="gr_svn79_369"

><td id="369"><a href="#369">369</a></td></tr
><tr id="gr_svn79_370"

><td id="370"><a href="#370">370</a></td></tr
><tr id="gr_svn79_371"

><td id="371"><a href="#371">371</a></td></tr
><tr id="gr_svn79_372"

><td id="372"><a href="#372">372</a></td></tr
><tr id="gr_svn79_373"

><td id="373"><a href="#373">373</a></td></tr
><tr id="gr_svn79_374"

><td id="374"><a href="#374">374</a></td></tr
><tr id="gr_svn79_375"

><td id="375"><a href="#375">375</a></td></tr
><tr id="gr_svn79_376"

><td id="376"><a href="#376">376</a></td></tr
><tr id="gr_svn79_377"

><td id="377"><a href="#377">377</a></td></tr
><tr id="gr_svn79_378"

><td id="378"><a href="#378">378</a></td></tr
><tr id="gr_svn79_379"

><td id="379"><a href="#379">379</a></td></tr
><tr id="gr_svn79_380"

><td id="380"><a href="#380">380</a></td></tr
><tr id="gr_svn79_381"

><td id="381"><a href="#381">381</a></td></tr
><tr id="gr_svn79_382"

><td id="382"><a href="#382">382</a></td></tr
><tr id="gr_svn79_383"

><td id="383"><a href="#383">383</a></td></tr
><tr id="gr_svn79_384"

><td id="384"><a href="#384">384</a></td></tr
><tr id="gr_svn79_385"

><td id="385"><a href="#385">385</a></td></tr
><tr id="gr_svn79_386"

><td id="386"><a href="#386">386</a></td></tr
><tr id="gr_svn79_387"

><td id="387"><a href="#387">387</a></td></tr
><tr id="gr_svn79_388"

><td id="388"><a href="#388">388</a></td></tr
><tr id="gr_svn79_389"

><td id="389"><a href="#389">389</a></td></tr
><tr id="gr_svn79_390"

><td id="390"><a href="#390">390</a></td></tr
><tr id="gr_svn79_391"

><td id="391"><a href="#391">391</a></td></tr
><tr id="gr_svn79_392"

><td id="392"><a href="#392">392</a></td></tr
><tr id="gr_svn79_393"

><td id="393"><a href="#393">393</a></td></tr
><tr id="gr_svn79_394"

><td id="394"><a href="#394">394</a></td></tr
><tr id="gr_svn79_395"

><td id="395"><a href="#395">395</a></td></tr
><tr id="gr_svn79_396"

><td id="396"><a href="#396">396</a></td></tr
><tr id="gr_svn79_397"

><td id="397"><a href="#397">397</a></td></tr
><tr id="gr_svn79_398"

><td id="398"><a href="#398">398</a></td></tr
><tr id="gr_svn79_399"

><td id="399"><a href="#399">399</a></td></tr
><tr id="gr_svn79_400"

><td id="400"><a href="#400">400</a></td></tr
><tr id="gr_svn79_401"

><td id="401"><a href="#401">401</a></td></tr
><tr id="gr_svn79_402"

><td id="402"><a href="#402">402</a></td></tr
><tr id="gr_svn79_403"

><td id="403"><a href="#403">403</a></td></tr
><tr id="gr_svn79_404"

><td id="404"><a href="#404">404</a></td></tr
><tr id="gr_svn79_405"

><td id="405"><a href="#405">405</a></td></tr
><tr id="gr_svn79_406"

><td id="406"><a href="#406">406</a></td></tr
><tr id="gr_svn79_407"

><td id="407"><a href="#407">407</a></td></tr
><tr id="gr_svn79_408"

><td id="408"><a href="#408">408</a></td></tr
><tr id="gr_svn79_409"

><td id="409"><a href="#409">409</a></td></tr
><tr id="gr_svn79_410"

><td id="410"><a href="#410">410</a></td></tr
><tr id="gr_svn79_411"

><td id="411"><a href="#411">411</a></td></tr
><tr id="gr_svn79_412"

><td id="412"><a href="#412">412</a></td></tr
><tr id="gr_svn79_413"

><td id="413"><a href="#413">413</a></td></tr
><tr id="gr_svn79_414"

><td id="414"><a href="#414">414</a></td></tr
><tr id="gr_svn79_415"

><td id="415"><a href="#415">415</a></td></tr
><tr id="gr_svn79_416"

><td id="416"><a href="#416">416</a></td></tr
><tr id="gr_svn79_417"

><td id="417"><a href="#417">417</a></td></tr
><tr id="gr_svn79_418"

><td id="418"><a href="#418">418</a></td></tr
><tr id="gr_svn79_419"

><td id="419"><a href="#419">419</a></td></tr
><tr id="gr_svn79_420"

><td id="420"><a href="#420">420</a></td></tr
><tr id="gr_svn79_421"

><td id="421"><a href="#421">421</a></td></tr
><tr id="gr_svn79_422"

><td id="422"><a href="#422">422</a></td></tr
><tr id="gr_svn79_423"

><td id="423"><a href="#423">423</a></td></tr
><tr id="gr_svn79_424"

><td id="424"><a href="#424">424</a></td></tr
><tr id="gr_svn79_425"

><td id="425"><a href="#425">425</a></td></tr
><tr id="gr_svn79_426"

><td id="426"><a href="#426">426</a></td></tr
><tr id="gr_svn79_427"

><td id="427"><a href="#427">427</a></td></tr
><tr id="gr_svn79_428"

><td id="428"><a href="#428">428</a></td></tr
><tr id="gr_svn79_429"

><td id="429"><a href="#429">429</a></td></tr
><tr id="gr_svn79_430"

><td id="430"><a href="#430">430</a></td></tr
><tr id="gr_svn79_431"

><td id="431"><a href="#431">431</a></td></tr
><tr id="gr_svn79_432"

><td id="432"><a href="#432">432</a></td></tr
><tr id="gr_svn79_433"

><td id="433"><a href="#433">433</a></td></tr
><tr id="gr_svn79_434"

><td id="434"><a href="#434">434</a></td></tr
><tr id="gr_svn79_435"

><td id="435"><a href="#435">435</a></td></tr
><tr id="gr_svn79_436"

><td id="436"><a href="#436">436</a></td></tr
><tr id="gr_svn79_437"

><td id="437"><a href="#437">437</a></td></tr
><tr id="gr_svn79_438"

><td id="438"><a href="#438">438</a></td></tr
><tr id="gr_svn79_439"

><td id="439"><a href="#439">439</a></td></tr
><tr id="gr_svn79_440"

><td id="440"><a href="#440">440</a></td></tr
><tr id="gr_svn79_441"

><td id="441"><a href="#441">441</a></td></tr
><tr id="gr_svn79_442"

><td id="442"><a href="#442">442</a></td></tr
><tr id="gr_svn79_443"

><td id="443"><a href="#443">443</a></td></tr
><tr id="gr_svn79_444"

><td id="444"><a href="#444">444</a></td></tr
><tr id="gr_svn79_445"

><td id="445"><a href="#445">445</a></td></tr
><tr id="gr_svn79_446"

><td id="446"><a href="#446">446</a></td></tr
><tr id="gr_svn79_447"

><td id="447"><a href="#447">447</a></td></tr
><tr id="gr_svn79_448"

><td id="448"><a href="#448">448</a></td></tr
><tr id="gr_svn79_449"

><td id="449"><a href="#449">449</a></td></tr
><tr id="gr_svn79_450"

><td id="450"><a href="#450">450</a></td></tr
><tr id="gr_svn79_451"

><td id="451"><a href="#451">451</a></td></tr
><tr id="gr_svn79_452"

><td id="452"><a href="#452">452</a></td></tr
><tr id="gr_svn79_453"

><td id="453"><a href="#453">453</a></td></tr
><tr id="gr_svn79_454"

><td id="454"><a href="#454">454</a></td></tr
><tr id="gr_svn79_455"

><td id="455"><a href="#455">455</a></td></tr
><tr id="gr_svn79_456"

><td id="456"><a href="#456">456</a></td></tr
><tr id="gr_svn79_457"

><td id="457"><a href="#457">457</a></td></tr
><tr id="gr_svn79_458"

><td id="458"><a href="#458">458</a></td></tr
><tr id="gr_svn79_459"

><td id="459"><a href="#459">459</a></td></tr
><tr id="gr_svn79_460"

><td id="460"><a href="#460">460</a></td></tr
><tr id="gr_svn79_461"

><td id="461"><a href="#461">461</a></td></tr
><tr id="gr_svn79_462"

><td id="462"><a href="#462">462</a></td></tr
><tr id="gr_svn79_463"

><td id="463"><a href="#463">463</a></td></tr
><tr id="gr_svn79_464"

><td id="464"><a href="#464">464</a></td></tr
><tr id="gr_svn79_465"

><td id="465"><a href="#465">465</a></td></tr
><tr id="gr_svn79_466"

><td id="466"><a href="#466">466</a></td></tr
><tr id="gr_svn79_467"

><td id="467"><a href="#467">467</a></td></tr
><tr id="gr_svn79_468"

><td id="468"><a href="#468">468</a></td></tr
><tr id="gr_svn79_469"

><td id="469"><a href="#469">469</a></td></tr
><tr id="gr_svn79_470"

><td id="470"><a href="#470">470</a></td></tr
><tr id="gr_svn79_471"

><td id="471"><a href="#471">471</a></td></tr
><tr id="gr_svn79_472"

><td id="472"><a href="#472">472</a></td></tr
><tr id="gr_svn79_473"

><td id="473"><a href="#473">473</a></td></tr
><tr id="gr_svn79_474"

><td id="474"><a href="#474">474</a></td></tr
><tr id="gr_svn79_475"

><td id="475"><a href="#475">475</a></td></tr
><tr id="gr_svn79_476"

><td id="476"><a href="#476">476</a></td></tr
><tr id="gr_svn79_477"

><td id="477"><a href="#477">477</a></td></tr
><tr id="gr_svn79_478"

><td id="478"><a href="#478">478</a></td></tr
><tr id="gr_svn79_479"

><td id="479"><a href="#479">479</a></td></tr
><tr id="gr_svn79_480"

><td id="480"><a href="#480">480</a></td></tr
><tr id="gr_svn79_481"

><td id="481"><a href="#481">481</a></td></tr
><tr id="gr_svn79_482"

><td id="482"><a href="#482">482</a></td></tr
><tr id="gr_svn79_483"

><td id="483"><a href="#483">483</a></td></tr
><tr id="gr_svn79_484"

><td id="484"><a href="#484">484</a></td></tr
><tr id="gr_svn79_485"

><td id="485"><a href="#485">485</a></td></tr
><tr id="gr_svn79_486"

><td id="486"><a href="#486">486</a></td></tr
><tr id="gr_svn79_487"

><td id="487"><a href="#487">487</a></td></tr
><tr id="gr_svn79_488"

><td id="488"><a href="#488">488</a></td></tr
><tr id="gr_svn79_489"

><td id="489"><a href="#489">489</a></td></tr
><tr id="gr_svn79_490"

><td id="490"><a href="#490">490</a></td></tr
><tr id="gr_svn79_491"

><td id="491"><a href="#491">491</a></td></tr
><tr id="gr_svn79_492"

><td id="492"><a href="#492">492</a></td></tr
><tr id="gr_svn79_493"

><td id="493"><a href="#493">493</a></td></tr
><tr id="gr_svn79_494"

><td id="494"><a href="#494">494</a></td></tr
><tr id="gr_svn79_495"

><td id="495"><a href="#495">495</a></td></tr
><tr id="gr_svn79_496"

><td id="496"><a href="#496">496</a></td></tr
><tr id="gr_svn79_497"

><td id="497"><a href="#497">497</a></td></tr
><tr id="gr_svn79_498"

><td id="498"><a href="#498">498</a></td></tr
><tr id="gr_svn79_499"

><td id="499"><a href="#499">499</a></td></tr
><tr id="gr_svn79_500"

><td id="500"><a href="#500">500</a></td></tr
><tr id="gr_svn79_501"

><td id="501"><a href="#501">501</a></td></tr
><tr id="gr_svn79_502"

><td id="502"><a href="#502">502</a></td></tr
><tr id="gr_svn79_503"

><td id="503"><a href="#503">503</a></td></tr
><tr id="gr_svn79_504"

><td id="504"><a href="#504">504</a></td></tr
><tr id="gr_svn79_505"

><td id="505"><a href="#505">505</a></td></tr
><tr id="gr_svn79_506"

><td id="506"><a href="#506">506</a></td></tr
><tr id="gr_svn79_507"

><td id="507"><a href="#507">507</a></td></tr
><tr id="gr_svn79_508"

><td id="508"><a href="#508">508</a></td></tr
><tr id="gr_svn79_509"

><td id="509"><a href="#509">509</a></td></tr
><tr id="gr_svn79_510"

><td id="510"><a href="#510">510</a></td></tr
><tr id="gr_svn79_511"

><td id="511"><a href="#511">511</a></td></tr
><tr id="gr_svn79_512"

><td id="512"><a href="#512">512</a></td></tr
><tr id="gr_svn79_513"

><td id="513"><a href="#513">513</a></td></tr
><tr id="gr_svn79_514"

><td id="514"><a href="#514">514</a></td></tr
><tr id="gr_svn79_515"

><td id="515"><a href="#515">515</a></td></tr
><tr id="gr_svn79_516"

><td id="516"><a href="#516">516</a></td></tr
><tr id="gr_svn79_517"

><td id="517"><a href="#517">517</a></td></tr
><tr id="gr_svn79_518"

><td id="518"><a href="#518">518</a></td></tr
><tr id="gr_svn79_519"

><td id="519"><a href="#519">519</a></td></tr
><tr id="gr_svn79_520"

><td id="520"><a href="#520">520</a></td></tr
><tr id="gr_svn79_521"

><td id="521"><a href="#521">521</a></td></tr
><tr id="gr_svn79_522"

><td id="522"><a href="#522">522</a></td></tr
><tr id="gr_svn79_523"

><td id="523"><a href="#523">523</a></td></tr
><tr id="gr_svn79_524"

><td id="524"><a href="#524">524</a></td></tr
><tr id="gr_svn79_525"

><td id="525"><a href="#525">525</a></td></tr
><tr id="gr_svn79_526"

><td id="526"><a href="#526">526</a></td></tr
><tr id="gr_svn79_527"

><td id="527"><a href="#527">527</a></td></tr
><tr id="gr_svn79_528"

><td id="528"><a href="#528">528</a></td></tr
><tr id="gr_svn79_529"

><td id="529"><a href="#529">529</a></td></tr
><tr id="gr_svn79_530"

><td id="530"><a href="#530">530</a></td></tr
><tr id="gr_svn79_531"

><td id="531"><a href="#531">531</a></td></tr
><tr id="gr_svn79_532"

><td id="532"><a href="#532">532</a></td></tr
><tr id="gr_svn79_533"

><td id="533"><a href="#533">533</a></td></tr
><tr id="gr_svn79_534"

><td id="534"><a href="#534">534</a></td></tr
><tr id="gr_svn79_535"

><td id="535"><a href="#535">535</a></td></tr
><tr id="gr_svn79_536"

><td id="536"><a href="#536">536</a></td></tr
><tr id="gr_svn79_537"

><td id="537"><a href="#537">537</a></td></tr
><tr id="gr_svn79_538"

><td id="538"><a href="#538">538</a></td></tr
><tr id="gr_svn79_539"

><td id="539"><a href="#539">539</a></td></tr
><tr id="gr_svn79_540"

><td id="540"><a href="#540">540</a></td></tr
><tr id="gr_svn79_541"

><td id="541"><a href="#541">541</a></td></tr
><tr id="gr_svn79_542"

><td id="542"><a href="#542">542</a></td></tr
><tr id="gr_svn79_543"

><td id="543"><a href="#543">543</a></td></tr
><tr id="gr_svn79_544"

><td id="544"><a href="#544">544</a></td></tr
><tr id="gr_svn79_545"

><td id="545"><a href="#545">545</a></td></tr
><tr id="gr_svn79_546"

><td id="546"><a href="#546">546</a></td></tr
><tr id="gr_svn79_547"

><td id="547"><a href="#547">547</a></td></tr
><tr id="gr_svn79_548"

><td id="548"><a href="#548">548</a></td></tr
><tr id="gr_svn79_549"

><td id="549"><a href="#549">549</a></td></tr
><tr id="gr_svn79_550"

><td id="550"><a href="#550">550</a></td></tr
><tr id="gr_svn79_551"

><td id="551"><a href="#551">551</a></td></tr
><tr id="gr_svn79_552"

><td id="552"><a href="#552">552</a></td></tr
><tr id="gr_svn79_553"

><td id="553"><a href="#553">553</a></td></tr
><tr id="gr_svn79_554"

><td id="554"><a href="#554">554</a></td></tr
><tr id="gr_svn79_555"

><td id="555"><a href="#555">555</a></td></tr
><tr id="gr_svn79_556"

><td id="556"><a href="#556">556</a></td></tr
><tr id="gr_svn79_557"

><td id="557"><a href="#557">557</a></td></tr
><tr id="gr_svn79_558"

><td id="558"><a href="#558">558</a></td></tr
><tr id="gr_svn79_559"

><td id="559"><a href="#559">559</a></td></tr
><tr id="gr_svn79_560"

><td id="560"><a href="#560">560</a></td></tr
><tr id="gr_svn79_561"

><td id="561"><a href="#561">561</a></td></tr
><tr id="gr_svn79_562"

><td id="562"><a href="#562">562</a></td></tr
><tr id="gr_svn79_563"

><td id="563"><a href="#563">563</a></td></tr
><tr id="gr_svn79_564"

><td id="564"><a href="#564">564</a></td></tr
><tr id="gr_svn79_565"

><td id="565"><a href="#565">565</a></td></tr
><tr id="gr_svn79_566"

><td id="566"><a href="#566">566</a></td></tr
><tr id="gr_svn79_567"

><td id="567"><a href="#567">567</a></td></tr
><tr id="gr_svn79_568"

><td id="568"><a href="#568">568</a></td></tr
><tr id="gr_svn79_569"

><td id="569"><a href="#569">569</a></td></tr
><tr id="gr_svn79_570"

><td id="570"><a href="#570">570</a></td></tr
><tr id="gr_svn79_571"

><td id="571"><a href="#571">571</a></td></tr
><tr id="gr_svn79_572"

><td id="572"><a href="#572">572</a></td></tr
><tr id="gr_svn79_573"

><td id="573"><a href="#573">573</a></td></tr
><tr id="gr_svn79_574"

><td id="574"><a href="#574">574</a></td></tr
><tr id="gr_svn79_575"

><td id="575"><a href="#575">575</a></td></tr
><tr id="gr_svn79_576"

><td id="576"><a href="#576">576</a></td></tr
><tr id="gr_svn79_577"

><td id="577"><a href="#577">577</a></td></tr
><tr id="gr_svn79_578"

><td id="578"><a href="#578">578</a></td></tr
><tr id="gr_svn79_579"

><td id="579"><a href="#579">579</a></td></tr
><tr id="gr_svn79_580"

><td id="580"><a href="#580">580</a></td></tr
><tr id="gr_svn79_581"

><td id="581"><a href="#581">581</a></td></tr
><tr id="gr_svn79_582"

><td id="582"><a href="#582">582</a></td></tr
><tr id="gr_svn79_583"

><td id="583"><a href="#583">583</a></td></tr
><tr id="gr_svn79_584"

><td id="584"><a href="#584">584</a></td></tr
><tr id="gr_svn79_585"

><td id="585"><a href="#585">585</a></td></tr
><tr id="gr_svn79_586"

><td id="586"><a href="#586">586</a></td></tr
><tr id="gr_svn79_587"

><td id="587"><a href="#587">587</a></td></tr
><tr id="gr_svn79_588"

><td id="588"><a href="#588">588</a></td></tr
><tr id="gr_svn79_589"

><td id="589"><a href="#589">589</a></td></tr
><tr id="gr_svn79_590"

><td id="590"><a href="#590">590</a></td></tr
><tr id="gr_svn79_591"

><td id="591"><a href="#591">591</a></td></tr
><tr id="gr_svn79_592"

><td id="592"><a href="#592">592</a></td></tr
><tr id="gr_svn79_593"

><td id="593"><a href="#593">593</a></td></tr
><tr id="gr_svn79_594"

><td id="594"><a href="#594">594</a></td></tr
><tr id="gr_svn79_595"

><td id="595"><a href="#595">595</a></td></tr
><tr id="gr_svn79_596"

><td id="596"><a href="#596">596</a></td></tr
><tr id="gr_svn79_597"

><td id="597"><a href="#597">597</a></td></tr
><tr id="gr_svn79_598"

><td id="598"><a href="#598">598</a></td></tr
><tr id="gr_svn79_599"

><td id="599"><a href="#599">599</a></td></tr
><tr id="gr_svn79_600"

><td id="600"><a href="#600">600</a></td></tr
><tr id="gr_svn79_601"

><td id="601"><a href="#601">601</a></td></tr
><tr id="gr_svn79_602"

><td id="602"><a href="#602">602</a></td></tr
><tr id="gr_svn79_603"

><td id="603"><a href="#603">603</a></td></tr
><tr id="gr_svn79_604"

><td id="604"><a href="#604">604</a></td></tr
><tr id="gr_svn79_605"

><td id="605"><a href="#605">605</a></td></tr
><tr id="gr_svn79_606"

><td id="606"><a href="#606">606</a></td></tr
><tr id="gr_svn79_607"

><td id="607"><a href="#607">607</a></td></tr
><tr id="gr_svn79_608"

><td id="608"><a href="#608">608</a></td></tr
><tr id="gr_svn79_609"

><td id="609"><a href="#609">609</a></td></tr
><tr id="gr_svn79_610"

><td id="610"><a href="#610">610</a></td></tr
><tr id="gr_svn79_611"

><td id="611"><a href="#611">611</a></td></tr
><tr id="gr_svn79_612"

><td id="612"><a href="#612">612</a></td></tr
><tr id="gr_svn79_613"

><td id="613"><a href="#613">613</a></td></tr
><tr id="gr_svn79_614"

><td id="614"><a href="#614">614</a></td></tr
><tr id="gr_svn79_615"

><td id="615"><a href="#615">615</a></td></tr
><tr id="gr_svn79_616"

><td id="616"><a href="#616">616</a></td></tr
><tr id="gr_svn79_617"

><td id="617"><a href="#617">617</a></td></tr
><tr id="gr_svn79_618"

><td id="618"><a href="#618">618</a></td></tr
><tr id="gr_svn79_619"

><td id="619"><a href="#619">619</a></td></tr
><tr id="gr_svn79_620"

><td id="620"><a href="#620">620</a></td></tr
><tr id="gr_svn79_621"

><td id="621"><a href="#621">621</a></td></tr
><tr id="gr_svn79_622"

><td id="622"><a href="#622">622</a></td></tr
><tr id="gr_svn79_623"

><td id="623"><a href="#623">623</a></td></tr
><tr id="gr_svn79_624"

><td id="624"><a href="#624">624</a></td></tr
><tr id="gr_svn79_625"

><td id="625"><a href="#625">625</a></td></tr
><tr id="gr_svn79_626"

><td id="626"><a href="#626">626</a></td></tr
><tr id="gr_svn79_627"

><td id="627"><a href="#627">627</a></td></tr
><tr id="gr_svn79_628"

><td id="628"><a href="#628">628</a></td></tr
><tr id="gr_svn79_629"

><td id="629"><a href="#629">629</a></td></tr
><tr id="gr_svn79_630"

><td id="630"><a href="#630">630</a></td></tr
><tr id="gr_svn79_631"

><td id="631"><a href="#631">631</a></td></tr
><tr id="gr_svn79_632"

><td id="632"><a href="#632">632</a></td></tr
><tr id="gr_svn79_633"

><td id="633"><a href="#633">633</a></td></tr
><tr id="gr_svn79_634"

><td id="634"><a href="#634">634</a></td></tr
><tr id="gr_svn79_635"

><td id="635"><a href="#635">635</a></td></tr
><tr id="gr_svn79_636"

><td id="636"><a href="#636">636</a></td></tr
><tr id="gr_svn79_637"

><td id="637"><a href="#637">637</a></td></tr
><tr id="gr_svn79_638"

><td id="638"><a href="#638">638</a></td></tr
><tr id="gr_svn79_639"

><td id="639"><a href="#639">639</a></td></tr
><tr id="gr_svn79_640"

><td id="640"><a href="#640">640</a></td></tr
><tr id="gr_svn79_641"

><td id="641"><a href="#641">641</a></td></tr
><tr id="gr_svn79_642"

><td id="642"><a href="#642">642</a></td></tr
><tr id="gr_svn79_643"

><td id="643"><a href="#643">643</a></td></tr
><tr id="gr_svn79_644"

><td id="644"><a href="#644">644</a></td></tr
><tr id="gr_svn79_645"

><td id="645"><a href="#645">645</a></td></tr
><tr id="gr_svn79_646"

><td id="646"><a href="#646">646</a></td></tr
><tr id="gr_svn79_647"

><td id="647"><a href="#647">647</a></td></tr
><tr id="gr_svn79_648"

><td id="648"><a href="#648">648</a></td></tr
><tr id="gr_svn79_649"

><td id="649"><a href="#649">649</a></td></tr
><tr id="gr_svn79_650"

><td id="650"><a href="#650">650</a></td></tr
><tr id="gr_svn79_651"

><td id="651"><a href="#651">651</a></td></tr
><tr id="gr_svn79_652"

><td id="652"><a href="#652">652</a></td></tr
><tr id="gr_svn79_653"

><td id="653"><a href="#653">653</a></td></tr
><tr id="gr_svn79_654"

><td id="654"><a href="#654">654</a></td></tr
><tr id="gr_svn79_655"

><td id="655"><a href="#655">655</a></td></tr
><tr id="gr_svn79_656"

><td id="656"><a href="#656">656</a></td></tr
><tr id="gr_svn79_657"

><td id="657"><a href="#657">657</a></td></tr
><tr id="gr_svn79_658"

><td id="658"><a href="#658">658</a></td></tr
><tr id="gr_svn79_659"

><td id="659"><a href="#659">659</a></td></tr
><tr id="gr_svn79_660"

><td id="660"><a href="#660">660</a></td></tr
><tr id="gr_svn79_661"

><td id="661"><a href="#661">661</a></td></tr
><tr id="gr_svn79_662"

><td id="662"><a href="#662">662</a></td></tr
><tr id="gr_svn79_663"

><td id="663"><a href="#663">663</a></td></tr
><tr id="gr_svn79_664"

><td id="664"><a href="#664">664</a></td></tr
><tr id="gr_svn79_665"

><td id="665"><a href="#665">665</a></td></tr
><tr id="gr_svn79_666"

><td id="666"><a href="#666">666</a></td></tr
><tr id="gr_svn79_667"

><td id="667"><a href="#667">667</a></td></tr
><tr id="gr_svn79_668"

><td id="668"><a href="#668">668</a></td></tr
><tr id="gr_svn79_669"

><td id="669"><a href="#669">669</a></td></tr
><tr id="gr_svn79_670"

><td id="670"><a href="#670">670</a></td></tr
><tr id="gr_svn79_671"

><td id="671"><a href="#671">671</a></td></tr
><tr id="gr_svn79_672"

><td id="672"><a href="#672">672</a></td></tr
><tr id="gr_svn79_673"

><td id="673"><a href="#673">673</a></td></tr
><tr id="gr_svn79_674"

><td id="674"><a href="#674">674</a></td></tr
><tr id="gr_svn79_675"

><td id="675"><a href="#675">675</a></td></tr
><tr id="gr_svn79_676"

><td id="676"><a href="#676">676</a></td></tr
><tr id="gr_svn79_677"

><td id="677"><a href="#677">677</a></td></tr
><tr id="gr_svn79_678"

><td id="678"><a href="#678">678</a></td></tr
><tr id="gr_svn79_679"

><td id="679"><a href="#679">679</a></td></tr
><tr id="gr_svn79_680"

><td id="680"><a href="#680">680</a></td></tr
><tr id="gr_svn79_681"

><td id="681"><a href="#681">681</a></td></tr
><tr id="gr_svn79_682"

><td id="682"><a href="#682">682</a></td></tr
><tr id="gr_svn79_683"

><td id="683"><a href="#683">683</a></td></tr
><tr id="gr_svn79_684"

><td id="684"><a href="#684">684</a></td></tr
><tr id="gr_svn79_685"

><td id="685"><a href="#685">685</a></td></tr
><tr id="gr_svn79_686"

><td id="686"><a href="#686">686</a></td></tr
><tr id="gr_svn79_687"

><td id="687"><a href="#687">687</a></td></tr
><tr id="gr_svn79_688"

><td id="688"><a href="#688">688</a></td></tr
><tr id="gr_svn79_689"

><td id="689"><a href="#689">689</a></td></tr
><tr id="gr_svn79_690"

><td id="690"><a href="#690">690</a></td></tr
><tr id="gr_svn79_691"

><td id="691"><a href="#691">691</a></td></tr
><tr id="gr_svn79_692"

><td id="692"><a href="#692">692</a></td></tr
><tr id="gr_svn79_693"

><td id="693"><a href="#693">693</a></td></tr
><tr id="gr_svn79_694"

><td id="694"><a href="#694">694</a></td></tr
><tr id="gr_svn79_695"

><td id="695"><a href="#695">695</a></td></tr
><tr id="gr_svn79_696"

><td id="696"><a href="#696">696</a></td></tr
><tr id="gr_svn79_697"

><td id="697"><a href="#697">697</a></td></tr
><tr id="gr_svn79_698"

><td id="698"><a href="#698">698</a></td></tr
><tr id="gr_svn79_699"

><td id="699"><a href="#699">699</a></td></tr
><tr id="gr_svn79_700"

><td id="700"><a href="#700">700</a></td></tr
><tr id="gr_svn79_701"

><td id="701"><a href="#701">701</a></td></tr
><tr id="gr_svn79_702"

><td id="702"><a href="#702">702</a></td></tr
><tr id="gr_svn79_703"

><td id="703"><a href="#703">703</a></td></tr
><tr id="gr_svn79_704"

><td id="704"><a href="#704">704</a></td></tr
><tr id="gr_svn79_705"

><td id="705"><a href="#705">705</a></td></tr
><tr id="gr_svn79_706"

><td id="706"><a href="#706">706</a></td></tr
><tr id="gr_svn79_707"

><td id="707"><a href="#707">707</a></td></tr
><tr id="gr_svn79_708"

><td id="708"><a href="#708">708</a></td></tr
><tr id="gr_svn79_709"

><td id="709"><a href="#709">709</a></td></tr
><tr id="gr_svn79_710"

><td id="710"><a href="#710">710</a></td></tr
><tr id="gr_svn79_711"

><td id="711"><a href="#711">711</a></td></tr
><tr id="gr_svn79_712"

><td id="712"><a href="#712">712</a></td></tr
><tr id="gr_svn79_713"

><td id="713"><a href="#713">713</a></td></tr
><tr id="gr_svn79_714"

><td id="714"><a href="#714">714</a></td></tr
><tr id="gr_svn79_715"

><td id="715"><a href="#715">715</a></td></tr
><tr id="gr_svn79_716"

><td id="716"><a href="#716">716</a></td></tr
><tr id="gr_svn79_717"

><td id="717"><a href="#717">717</a></td></tr
><tr id="gr_svn79_718"

><td id="718"><a href="#718">718</a></td></tr
><tr id="gr_svn79_719"

><td id="719"><a href="#719">719</a></td></tr
><tr id="gr_svn79_720"

><td id="720"><a href="#720">720</a></td></tr
><tr id="gr_svn79_721"

><td id="721"><a href="#721">721</a></td></tr
><tr id="gr_svn79_722"

><td id="722"><a href="#722">722</a></td></tr
><tr id="gr_svn79_723"

><td id="723"><a href="#723">723</a></td></tr
><tr id="gr_svn79_724"

><td id="724"><a href="#724">724</a></td></tr
><tr id="gr_svn79_725"

><td id="725"><a href="#725">725</a></td></tr
><tr id="gr_svn79_726"

><td id="726"><a href="#726">726</a></td></tr
><tr id="gr_svn79_727"

><td id="727"><a href="#727">727</a></td></tr
><tr id="gr_svn79_728"

><td id="728"><a href="#728">728</a></td></tr
><tr id="gr_svn79_729"

><td id="729"><a href="#729">729</a></td></tr
><tr id="gr_svn79_730"

><td id="730"><a href="#730">730</a></td></tr
><tr id="gr_svn79_731"

><td id="731"><a href="#731">731</a></td></tr
><tr id="gr_svn79_732"

><td id="732"><a href="#732">732</a></td></tr
><tr id="gr_svn79_733"

><td id="733"><a href="#733">733</a></td></tr
><tr id="gr_svn79_734"

><td id="734"><a href="#734">734</a></td></tr
><tr id="gr_svn79_735"

><td id="735"><a href="#735">735</a></td></tr
><tr id="gr_svn79_736"

><td id="736"><a href="#736">736</a></td></tr
><tr id="gr_svn79_737"

><td id="737"><a href="#737">737</a></td></tr
><tr id="gr_svn79_738"

><td id="738"><a href="#738">738</a></td></tr
><tr id="gr_svn79_739"

><td id="739"><a href="#739">739</a></td></tr
><tr id="gr_svn79_740"

><td id="740"><a href="#740">740</a></td></tr
><tr id="gr_svn79_741"

><td id="741"><a href="#741">741</a></td></tr
><tr id="gr_svn79_742"

><td id="742"><a href="#742">742</a></td></tr
><tr id="gr_svn79_743"

><td id="743"><a href="#743">743</a></td></tr
><tr id="gr_svn79_744"

><td id="744"><a href="#744">744</a></td></tr
><tr id="gr_svn79_745"

><td id="745"><a href="#745">745</a></td></tr
><tr id="gr_svn79_746"

><td id="746"><a href="#746">746</a></td></tr
><tr id="gr_svn79_747"

><td id="747"><a href="#747">747</a></td></tr
><tr id="gr_svn79_748"

><td id="748"><a href="#748">748</a></td></tr
><tr id="gr_svn79_749"

><td id="749"><a href="#749">749</a></td></tr
><tr id="gr_svn79_750"

><td id="750"><a href="#750">750</a></td></tr
><tr id="gr_svn79_751"

><td id="751"><a href="#751">751</a></td></tr
><tr id="gr_svn79_752"

><td id="752"><a href="#752">752</a></td></tr
><tr id="gr_svn79_753"

><td id="753"><a href="#753">753</a></td></tr
><tr id="gr_svn79_754"

><td id="754"><a href="#754">754</a></td></tr
><tr id="gr_svn79_755"

><td id="755"><a href="#755">755</a></td></tr
><tr id="gr_svn79_756"

><td id="756"><a href="#756">756</a></td></tr
><tr id="gr_svn79_757"

><td id="757"><a href="#757">757</a></td></tr
><tr id="gr_svn79_758"

><td id="758"><a href="#758">758</a></td></tr
><tr id="gr_svn79_759"

><td id="759"><a href="#759">759</a></td></tr
><tr id="gr_svn79_760"

><td id="760"><a href="#760">760</a></td></tr
><tr id="gr_svn79_761"

><td id="761"><a href="#761">761</a></td></tr
><tr id="gr_svn79_762"

><td id="762"><a href="#762">762</a></td></tr
><tr id="gr_svn79_763"

><td id="763"><a href="#763">763</a></td></tr
><tr id="gr_svn79_764"

><td id="764"><a href="#764">764</a></td></tr
><tr id="gr_svn79_765"

><td id="765"><a href="#765">765</a></td></tr
><tr id="gr_svn79_766"

><td id="766"><a href="#766">766</a></td></tr
><tr id="gr_svn79_767"

><td id="767"><a href="#767">767</a></td></tr
><tr id="gr_svn79_768"

><td id="768"><a href="#768">768</a></td></tr
><tr id="gr_svn79_769"

><td id="769"><a href="#769">769</a></td></tr
><tr id="gr_svn79_770"

><td id="770"><a href="#770">770</a></td></tr
><tr id="gr_svn79_771"

><td id="771"><a href="#771">771</a></td></tr
><tr id="gr_svn79_772"

><td id="772"><a href="#772">772</a></td></tr
><tr id="gr_svn79_773"

><td id="773"><a href="#773">773</a></td></tr
><tr id="gr_svn79_774"

><td id="774"><a href="#774">774</a></td></tr
><tr id="gr_svn79_775"

><td id="775"><a href="#775">775</a></td></tr
><tr id="gr_svn79_776"

><td id="776"><a href="#776">776</a></td></tr
><tr id="gr_svn79_777"

><td id="777"><a href="#777">777</a></td></tr
><tr id="gr_svn79_778"

><td id="778"><a href="#778">778</a></td></tr
><tr id="gr_svn79_779"

><td id="779"><a href="#779">779</a></td></tr
><tr id="gr_svn79_780"

><td id="780"><a href="#780">780</a></td></tr
><tr id="gr_svn79_781"

><td id="781"><a href="#781">781</a></td></tr
><tr id="gr_svn79_782"

><td id="782"><a href="#782">782</a></td></tr
><tr id="gr_svn79_783"

><td id="783"><a href="#783">783</a></td></tr
><tr id="gr_svn79_784"

><td id="784"><a href="#784">784</a></td></tr
><tr id="gr_svn79_785"

><td id="785"><a href="#785">785</a></td></tr
><tr id="gr_svn79_786"

><td id="786"><a href="#786">786</a></td></tr
><tr id="gr_svn79_787"

><td id="787"><a href="#787">787</a></td></tr
><tr id="gr_svn79_788"

><td id="788"><a href="#788">788</a></td></tr
><tr id="gr_svn79_789"

><td id="789"><a href="#789">789</a></td></tr
><tr id="gr_svn79_790"

><td id="790"><a href="#790">790</a></td></tr
><tr id="gr_svn79_791"

><td id="791"><a href="#791">791</a></td></tr
><tr id="gr_svn79_792"

><td id="792"><a href="#792">792</a></td></tr
><tr id="gr_svn79_793"

><td id="793"><a href="#793">793</a></td></tr
><tr id="gr_svn79_794"

><td id="794"><a href="#794">794</a></td></tr
><tr id="gr_svn79_795"

><td id="795"><a href="#795">795</a></td></tr
><tr id="gr_svn79_796"

><td id="796"><a href="#796">796</a></td></tr
><tr id="gr_svn79_797"

><td id="797"><a href="#797">797</a></td></tr
><tr id="gr_svn79_798"

><td id="798"><a href="#798">798</a></td></tr
><tr id="gr_svn79_799"

><td id="799"><a href="#799">799</a></td></tr
><tr id="gr_svn79_800"

><td id="800"><a href="#800">800</a></td></tr
><tr id="gr_svn79_801"

><td id="801"><a href="#801">801</a></td></tr
><tr id="gr_svn79_802"

><td id="802"><a href="#802">802</a></td></tr
><tr id="gr_svn79_803"

><td id="803"><a href="#803">803</a></td></tr
><tr id="gr_svn79_804"

><td id="804"><a href="#804">804</a></td></tr
><tr id="gr_svn79_805"

><td id="805"><a href="#805">805</a></td></tr
><tr id="gr_svn79_806"

><td id="806"><a href="#806">806</a></td></tr
><tr id="gr_svn79_807"

><td id="807"><a href="#807">807</a></td></tr
><tr id="gr_svn79_808"

><td id="808"><a href="#808">808</a></td></tr
><tr id="gr_svn79_809"

><td id="809"><a href="#809">809</a></td></tr
><tr id="gr_svn79_810"

><td id="810"><a href="#810">810</a></td></tr
><tr id="gr_svn79_811"

><td id="811"><a href="#811">811</a></td></tr
><tr id="gr_svn79_812"

><td id="812"><a href="#812">812</a></td></tr
><tr id="gr_svn79_813"

><td id="813"><a href="#813">813</a></td></tr
><tr id="gr_svn79_814"

><td id="814"><a href="#814">814</a></td></tr
><tr id="gr_svn79_815"

><td id="815"><a href="#815">815</a></td></tr
><tr id="gr_svn79_816"

><td id="816"><a href="#816">816</a></td></tr
><tr id="gr_svn79_817"

><td id="817"><a href="#817">817</a></td></tr
><tr id="gr_svn79_818"

><td id="818"><a href="#818">818</a></td></tr
><tr id="gr_svn79_819"

><td id="819"><a href="#819">819</a></td></tr
><tr id="gr_svn79_820"

><td id="820"><a href="#820">820</a></td></tr
><tr id="gr_svn79_821"

><td id="821"><a href="#821">821</a></td></tr
><tr id="gr_svn79_822"

><td id="822"><a href="#822">822</a></td></tr
><tr id="gr_svn79_823"

><td id="823"><a href="#823">823</a></td></tr
><tr id="gr_svn79_824"

><td id="824"><a href="#824">824</a></td></tr
><tr id="gr_svn79_825"

><td id="825"><a href="#825">825</a></td></tr
><tr id="gr_svn79_826"

><td id="826"><a href="#826">826</a></td></tr
><tr id="gr_svn79_827"

><td id="827"><a href="#827">827</a></td></tr
><tr id="gr_svn79_828"

><td id="828"><a href="#828">828</a></td></tr
><tr id="gr_svn79_829"

><td id="829"><a href="#829">829</a></td></tr
><tr id="gr_svn79_830"

><td id="830"><a href="#830">830</a></td></tr
><tr id="gr_svn79_831"

><td id="831"><a href="#831">831</a></td></tr
><tr id="gr_svn79_832"

><td id="832"><a href="#832">832</a></td></tr
><tr id="gr_svn79_833"

><td id="833"><a href="#833">833</a></td></tr
><tr id="gr_svn79_834"

><td id="834"><a href="#834">834</a></td></tr
><tr id="gr_svn79_835"

><td id="835"><a href="#835">835</a></td></tr
><tr id="gr_svn79_836"

><td id="836"><a href="#836">836</a></td></tr
><tr id="gr_svn79_837"

><td id="837"><a href="#837">837</a></td></tr
><tr id="gr_svn79_838"

><td id="838"><a href="#838">838</a></td></tr
><tr id="gr_svn79_839"

><td id="839"><a href="#839">839</a></td></tr
><tr id="gr_svn79_840"

><td id="840"><a href="#840">840</a></td></tr
><tr id="gr_svn79_841"

><td id="841"><a href="#841">841</a></td></tr
><tr id="gr_svn79_842"

><td id="842"><a href="#842">842</a></td></tr
><tr id="gr_svn79_843"

><td id="843"><a href="#843">843</a></td></tr
><tr id="gr_svn79_844"

><td id="844"><a href="#844">844</a></td></tr
><tr id="gr_svn79_845"

><td id="845"><a href="#845">845</a></td></tr
><tr id="gr_svn79_846"

><td id="846"><a href="#846">846</a></td></tr
><tr id="gr_svn79_847"

><td id="847"><a href="#847">847</a></td></tr
><tr id="gr_svn79_848"

><td id="848"><a href="#848">848</a></td></tr
><tr id="gr_svn79_849"

><td id="849"><a href="#849">849</a></td></tr
><tr id="gr_svn79_850"

><td id="850"><a href="#850">850</a></td></tr
><tr id="gr_svn79_851"

><td id="851"><a href="#851">851</a></td></tr
><tr id="gr_svn79_852"

><td id="852"><a href="#852">852</a></td></tr
><tr id="gr_svn79_853"

><td id="853"><a href="#853">853</a></td></tr
><tr id="gr_svn79_854"

><td id="854"><a href="#854">854</a></td></tr
><tr id="gr_svn79_855"

><td id="855"><a href="#855">855</a></td></tr
><tr id="gr_svn79_856"

><td id="856"><a href="#856">856</a></td></tr
><tr id="gr_svn79_857"

><td id="857"><a href="#857">857</a></td></tr
><tr id="gr_svn79_858"

><td id="858"><a href="#858">858</a></td></tr
><tr id="gr_svn79_859"

><td id="859"><a href="#859">859</a></td></tr
><tr id="gr_svn79_860"

><td id="860"><a href="#860">860</a></td></tr
><tr id="gr_svn79_861"

><td id="861"><a href="#861">861</a></td></tr
><tr id="gr_svn79_862"

><td id="862"><a href="#862">862</a></td></tr
><tr id="gr_svn79_863"

><td id="863"><a href="#863">863</a></td></tr
><tr id="gr_svn79_864"

><td id="864"><a href="#864">864</a></td></tr
><tr id="gr_svn79_865"

><td id="865"><a href="#865">865</a></td></tr
><tr id="gr_svn79_866"

><td id="866"><a href="#866">866</a></td></tr
><tr id="gr_svn79_867"

><td id="867"><a href="#867">867</a></td></tr
><tr id="gr_svn79_868"

><td id="868"><a href="#868">868</a></td></tr
><tr id="gr_svn79_869"

><td id="869"><a href="#869">869</a></td></tr
><tr id="gr_svn79_870"

><td id="870"><a href="#870">870</a></td></tr
><tr id="gr_svn79_871"

><td id="871"><a href="#871">871</a></td></tr
><tr id="gr_svn79_872"

><td id="872"><a href="#872">872</a></td></tr
><tr id="gr_svn79_873"

><td id="873"><a href="#873">873</a></td></tr
><tr id="gr_svn79_874"

><td id="874"><a href="#874">874</a></td></tr
><tr id="gr_svn79_875"

><td id="875"><a href="#875">875</a></td></tr
><tr id="gr_svn79_876"

><td id="876"><a href="#876">876</a></td></tr
><tr id="gr_svn79_877"

><td id="877"><a href="#877">877</a></td></tr
><tr id="gr_svn79_878"

><td id="878"><a href="#878">878</a></td></tr
><tr id="gr_svn79_879"

><td id="879"><a href="#879">879</a></td></tr
><tr id="gr_svn79_880"

><td id="880"><a href="#880">880</a></td></tr
><tr id="gr_svn79_881"

><td id="881"><a href="#881">881</a></td></tr
><tr id="gr_svn79_882"

><td id="882"><a href="#882">882</a></td></tr
><tr id="gr_svn79_883"

><td id="883"><a href="#883">883</a></td></tr
><tr id="gr_svn79_884"

><td id="884"><a href="#884">884</a></td></tr
><tr id="gr_svn79_885"

><td id="885"><a href="#885">885</a></td></tr
><tr id="gr_svn79_886"

><td id="886"><a href="#886">886</a></td></tr
><tr id="gr_svn79_887"

><td id="887"><a href="#887">887</a></td></tr
><tr id="gr_svn79_888"

><td id="888"><a href="#888">888</a></td></tr
><tr id="gr_svn79_889"

><td id="889"><a href="#889">889</a></td></tr
><tr id="gr_svn79_890"

><td id="890"><a href="#890">890</a></td></tr
><tr id="gr_svn79_891"

><td id="891"><a href="#891">891</a></td></tr
><tr id="gr_svn79_892"

><td id="892"><a href="#892">892</a></td></tr
><tr id="gr_svn79_893"

><td id="893"><a href="#893">893</a></td></tr
><tr id="gr_svn79_894"

><td id="894"><a href="#894">894</a></td></tr
><tr id="gr_svn79_895"

><td id="895"><a href="#895">895</a></td></tr
><tr id="gr_svn79_896"

><td id="896"><a href="#896">896</a></td></tr
><tr id="gr_svn79_897"

><td id="897"><a href="#897">897</a></td></tr
><tr id="gr_svn79_898"

><td id="898"><a href="#898">898</a></td></tr
><tr id="gr_svn79_899"

><td id="899"><a href="#899">899</a></td></tr
><tr id="gr_svn79_900"

><td id="900"><a href="#900">900</a></td></tr
><tr id="gr_svn79_901"

><td id="901"><a href="#901">901</a></td></tr
><tr id="gr_svn79_902"

><td id="902"><a href="#902">902</a></td></tr
><tr id="gr_svn79_903"

><td id="903"><a href="#903">903</a></td></tr
><tr id="gr_svn79_904"

><td id="904"><a href="#904">904</a></td></tr
><tr id="gr_svn79_905"

><td id="905"><a href="#905">905</a></td></tr
><tr id="gr_svn79_906"

><td id="906"><a href="#906">906</a></td></tr
><tr id="gr_svn79_907"

><td id="907"><a href="#907">907</a></td></tr
><tr id="gr_svn79_908"

><td id="908"><a href="#908">908</a></td></tr
><tr id="gr_svn79_909"

><td id="909"><a href="#909">909</a></td></tr
><tr id="gr_svn79_910"

><td id="910"><a href="#910">910</a></td></tr
><tr id="gr_svn79_911"

><td id="911"><a href="#911">911</a></td></tr
><tr id="gr_svn79_912"

><td id="912"><a href="#912">912</a></td></tr
><tr id="gr_svn79_913"

><td id="913"><a href="#913">913</a></td></tr
><tr id="gr_svn79_914"

><td id="914"><a href="#914">914</a></td></tr
><tr id="gr_svn79_915"

><td id="915"><a href="#915">915</a></td></tr
><tr id="gr_svn79_916"

><td id="916"><a href="#916">916</a></td></tr
><tr id="gr_svn79_917"

><td id="917"><a href="#917">917</a></td></tr
><tr id="gr_svn79_918"

><td id="918"><a href="#918">918</a></td></tr
><tr id="gr_svn79_919"

><td id="919"><a href="#919">919</a></td></tr
><tr id="gr_svn79_920"

><td id="920"><a href="#920">920</a></td></tr
><tr id="gr_svn79_921"

><td id="921"><a href="#921">921</a></td></tr
><tr id="gr_svn79_922"

><td id="922"><a href="#922">922</a></td></tr
><tr id="gr_svn79_923"

><td id="923"><a href="#923">923</a></td></tr
><tr id="gr_svn79_924"

><td id="924"><a href="#924">924</a></td></tr
><tr id="gr_svn79_925"

><td id="925"><a href="#925">925</a></td></tr
><tr id="gr_svn79_926"

><td id="926"><a href="#926">926</a></td></tr
><tr id="gr_svn79_927"

><td id="927"><a href="#927">927</a></td></tr
><tr id="gr_svn79_928"

><td id="928"><a href="#928">928</a></td></tr
><tr id="gr_svn79_929"

><td id="929"><a href="#929">929</a></td></tr
><tr id="gr_svn79_930"

><td id="930"><a href="#930">930</a></td></tr
><tr id="gr_svn79_931"

><td id="931"><a href="#931">931</a></td></tr
><tr id="gr_svn79_932"

><td id="932"><a href="#932">932</a></td></tr
><tr id="gr_svn79_933"

><td id="933"><a href="#933">933</a></td></tr
><tr id="gr_svn79_934"

><td id="934"><a href="#934">934</a></td></tr
><tr id="gr_svn79_935"

><td id="935"><a href="#935">935</a></td></tr
><tr id="gr_svn79_936"

><td id="936"><a href="#936">936</a></td></tr
><tr id="gr_svn79_937"

><td id="937"><a href="#937">937</a></td></tr
><tr id="gr_svn79_938"

><td id="938"><a href="#938">938</a></td></tr
><tr id="gr_svn79_939"

><td id="939"><a href="#939">939</a></td></tr
><tr id="gr_svn79_940"

><td id="940"><a href="#940">940</a></td></tr
><tr id="gr_svn79_941"

><td id="941"><a href="#941">941</a></td></tr
><tr id="gr_svn79_942"

><td id="942"><a href="#942">942</a></td></tr
><tr id="gr_svn79_943"

><td id="943"><a href="#943">943</a></td></tr
><tr id="gr_svn79_944"

><td id="944"><a href="#944">944</a></td></tr
><tr id="gr_svn79_945"

><td id="945"><a href="#945">945</a></td></tr
><tr id="gr_svn79_946"

><td id="946"><a href="#946">946</a></td></tr
><tr id="gr_svn79_947"

><td id="947"><a href="#947">947</a></td></tr
><tr id="gr_svn79_948"

><td id="948"><a href="#948">948</a></td></tr
><tr id="gr_svn79_949"

><td id="949"><a href="#949">949</a></td></tr
><tr id="gr_svn79_950"

><td id="950"><a href="#950">950</a></td></tr
><tr id="gr_svn79_951"

><td id="951"><a href="#951">951</a></td></tr
><tr id="gr_svn79_952"

><td id="952"><a href="#952">952</a></td></tr
><tr id="gr_svn79_953"

><td id="953"><a href="#953">953</a></td></tr
><tr id="gr_svn79_954"

><td id="954"><a href="#954">954</a></td></tr
><tr id="gr_svn79_955"

><td id="955"><a href="#955">955</a></td></tr
><tr id="gr_svn79_956"

><td id="956"><a href="#956">956</a></td></tr
><tr id="gr_svn79_957"

><td id="957"><a href="#957">957</a></td></tr
><tr id="gr_svn79_958"

><td id="958"><a href="#958">958</a></td></tr
><tr id="gr_svn79_959"

><td id="959"><a href="#959">959</a></td></tr
><tr id="gr_svn79_960"

><td id="960"><a href="#960">960</a></td></tr
><tr id="gr_svn79_961"

><td id="961"><a href="#961">961</a></td></tr
><tr id="gr_svn79_962"

><td id="962"><a href="#962">962</a></td></tr
><tr id="gr_svn79_963"

><td id="963"><a href="#963">963</a></td></tr
><tr id="gr_svn79_964"

><td id="964"><a href="#964">964</a></td></tr
><tr id="gr_svn79_965"

><td id="965"><a href="#965">965</a></td></tr
><tr id="gr_svn79_966"

><td id="966"><a href="#966">966</a></td></tr
><tr id="gr_svn79_967"

><td id="967"><a href="#967">967</a></td></tr
><tr id="gr_svn79_968"

><td id="968"><a href="#968">968</a></td></tr
><tr id="gr_svn79_969"

><td id="969"><a href="#969">969</a></td></tr
><tr id="gr_svn79_970"

><td id="970"><a href="#970">970</a></td></tr
><tr id="gr_svn79_971"

><td id="971"><a href="#971">971</a></td></tr
><tr id="gr_svn79_972"

><td id="972"><a href="#972">972</a></td></tr
><tr id="gr_svn79_973"

><td id="973"><a href="#973">973</a></td></tr
><tr id="gr_svn79_974"

><td id="974"><a href="#974">974</a></td></tr
><tr id="gr_svn79_975"

><td id="975"><a href="#975">975</a></td></tr
><tr id="gr_svn79_976"

><td id="976"><a href="#976">976</a></td></tr
><tr id="gr_svn79_977"

><td id="977"><a href="#977">977</a></td></tr
><tr id="gr_svn79_978"

><td id="978"><a href="#978">978</a></td></tr
><tr id="gr_svn79_979"

><td id="979"><a href="#979">979</a></td></tr
><tr id="gr_svn79_980"

><td id="980"><a href="#980">980</a></td></tr
><tr id="gr_svn79_981"

><td id="981"><a href="#981">981</a></td></tr
><tr id="gr_svn79_982"

><td id="982"><a href="#982">982</a></td></tr
><tr id="gr_svn79_983"

><td id="983"><a href="#983">983</a></td></tr
><tr id="gr_svn79_984"

><td id="984"><a href="#984">984</a></td></tr
><tr id="gr_svn79_985"

><td id="985"><a href="#985">985</a></td></tr
><tr id="gr_svn79_986"

><td id="986"><a href="#986">986</a></td></tr
><tr id="gr_svn79_987"

><td id="987"><a href="#987">987</a></td></tr
><tr id="gr_svn79_988"

><td id="988"><a href="#988">988</a></td></tr
><tr id="gr_svn79_989"

><td id="989"><a href="#989">989</a></td></tr
><tr id="gr_svn79_990"

><td id="990"><a href="#990">990</a></td></tr
><tr id="gr_svn79_991"

><td id="991"><a href="#991">991</a></td></tr
><tr id="gr_svn79_992"

><td id="992"><a href="#992">992</a></td></tr
><tr id="gr_svn79_993"

><td id="993"><a href="#993">993</a></td></tr
><tr id="gr_svn79_994"

><td id="994"><a href="#994">994</a></td></tr
><tr id="gr_svn79_995"

><td id="995"><a href="#995">995</a></td></tr
><tr id="gr_svn79_996"

><td id="996"><a href="#996">996</a></td></tr
><tr id="gr_svn79_997"

><td id="997"><a href="#997">997</a></td></tr
><tr id="gr_svn79_998"

><td id="998"><a href="#998">998</a></td></tr
><tr id="gr_svn79_999"

><td id="999"><a href="#999">999</a></td></tr
><tr id="gr_svn79_1000"

><td id="1000"><a href="#1000">1000</a></td></tr
><tr id="gr_svn79_1001"

><td id="1001"><a href="#1001">1001</a></td></tr
><tr id="gr_svn79_1002"

><td id="1002"><a href="#1002">1002</a></td></tr
><tr id="gr_svn79_1003"

><td id="1003"><a href="#1003">1003</a></td></tr
><tr id="gr_svn79_1004"

><td id="1004"><a href="#1004">1004</a></td></tr
><tr id="gr_svn79_1005"

><td id="1005"><a href="#1005">1005</a></td></tr
><tr id="gr_svn79_1006"

><td id="1006"><a href="#1006">1006</a></td></tr
><tr id="gr_svn79_1007"

><td id="1007"><a href="#1007">1007</a></td></tr
><tr id="gr_svn79_1008"

><td id="1008"><a href="#1008">1008</a></td></tr
><tr id="gr_svn79_1009"

><td id="1009"><a href="#1009">1009</a></td></tr
><tr id="gr_svn79_1010"

><td id="1010"><a href="#1010">1010</a></td></tr
><tr id="gr_svn79_1011"

><td id="1011"><a href="#1011">1011</a></td></tr
><tr id="gr_svn79_1012"

><td id="1012"><a href="#1012">1012</a></td></tr
><tr id="gr_svn79_1013"

><td id="1013"><a href="#1013">1013</a></td></tr
><tr id="gr_svn79_1014"

><td id="1014"><a href="#1014">1014</a></td></tr
><tr id="gr_svn79_1015"

><td id="1015"><a href="#1015">1015</a></td></tr
><tr id="gr_svn79_1016"

><td id="1016"><a href="#1016">1016</a></td></tr
><tr id="gr_svn79_1017"

><td id="1017"><a href="#1017">1017</a></td></tr
><tr id="gr_svn79_1018"

><td id="1018"><a href="#1018">1018</a></td></tr
><tr id="gr_svn79_1019"

><td id="1019"><a href="#1019">1019</a></td></tr
><tr id="gr_svn79_1020"

><td id="1020"><a href="#1020">1020</a></td></tr
><tr id="gr_svn79_1021"

><td id="1021"><a href="#1021">1021</a></td></tr
><tr id="gr_svn79_1022"

><td id="1022"><a href="#1022">1022</a></td></tr
><tr id="gr_svn79_1023"

><td id="1023"><a href="#1023">1023</a></td></tr
><tr id="gr_svn79_1024"

><td id="1024"><a href="#1024">1024</a></td></tr
><tr id="gr_svn79_1025"

><td id="1025"><a href="#1025">1025</a></td></tr
><tr id="gr_svn79_1026"

><td id="1026"><a href="#1026">1026</a></td></tr
><tr id="gr_svn79_1027"

><td id="1027"><a href="#1027">1027</a></td></tr
><tr id="gr_svn79_1028"

><td id="1028"><a href="#1028">1028</a></td></tr
><tr id="gr_svn79_1029"

><td id="1029"><a href="#1029">1029</a></td></tr
><tr id="gr_svn79_1030"

><td id="1030"><a href="#1030">1030</a></td></tr
><tr id="gr_svn79_1031"

><td id="1031"><a href="#1031">1031</a></td></tr
><tr id="gr_svn79_1032"

><td id="1032"><a href="#1032">1032</a></td></tr
><tr id="gr_svn79_1033"

><td id="1033"><a href="#1033">1033</a></td></tr
><tr id="gr_svn79_1034"

><td id="1034"><a href="#1034">1034</a></td></tr
><tr id="gr_svn79_1035"

><td id="1035"><a href="#1035">1035</a></td></tr
><tr id="gr_svn79_1036"

><td id="1036"><a href="#1036">1036</a></td></tr
><tr id="gr_svn79_1037"

><td id="1037"><a href="#1037">1037</a></td></tr
><tr id="gr_svn79_1038"

><td id="1038"><a href="#1038">1038</a></td></tr
><tr id="gr_svn79_1039"

><td id="1039"><a href="#1039">1039</a></td></tr
><tr id="gr_svn79_1040"

><td id="1040"><a href="#1040">1040</a></td></tr
><tr id="gr_svn79_1041"

><td id="1041"><a href="#1041">1041</a></td></tr
><tr id="gr_svn79_1042"

><td id="1042"><a href="#1042">1042</a></td></tr
><tr id="gr_svn79_1043"

><td id="1043"><a href="#1043">1043</a></td></tr
><tr id="gr_svn79_1044"

><td id="1044"><a href="#1044">1044</a></td></tr
><tr id="gr_svn79_1045"

><td id="1045"><a href="#1045">1045</a></td></tr
><tr id="gr_svn79_1046"

><td id="1046"><a href="#1046">1046</a></td></tr
><tr id="gr_svn79_1047"

><td id="1047"><a href="#1047">1047</a></td></tr
><tr id="gr_svn79_1048"

><td id="1048"><a href="#1048">1048</a></td></tr
><tr id="gr_svn79_1049"

><td id="1049"><a href="#1049">1049</a></td></tr
><tr id="gr_svn79_1050"

><td id="1050"><a href="#1050">1050</a></td></tr
><tr id="gr_svn79_1051"

><td id="1051"><a href="#1051">1051</a></td></tr
><tr id="gr_svn79_1052"

><td id="1052"><a href="#1052">1052</a></td></tr
><tr id="gr_svn79_1053"

><td id="1053"><a href="#1053">1053</a></td></tr
><tr id="gr_svn79_1054"

><td id="1054"><a href="#1054">1054</a></td></tr
><tr id="gr_svn79_1055"

><td id="1055"><a href="#1055">1055</a></td></tr
><tr id="gr_svn79_1056"

><td id="1056"><a href="#1056">1056</a></td></tr
><tr id="gr_svn79_1057"

><td id="1057"><a href="#1057">1057</a></td></tr
><tr id="gr_svn79_1058"

><td id="1058"><a href="#1058">1058</a></td></tr
><tr id="gr_svn79_1059"

><td id="1059"><a href="#1059">1059</a></td></tr
><tr id="gr_svn79_1060"

><td id="1060"><a href="#1060">1060</a></td></tr
><tr id="gr_svn79_1061"

><td id="1061"><a href="#1061">1061</a></td></tr
><tr id="gr_svn79_1062"

><td id="1062"><a href="#1062">1062</a></td></tr
><tr id="gr_svn79_1063"

><td id="1063"><a href="#1063">1063</a></td></tr
><tr id="gr_svn79_1064"

><td id="1064"><a href="#1064">1064</a></td></tr
><tr id="gr_svn79_1065"

><td id="1065"><a href="#1065">1065</a></td></tr
><tr id="gr_svn79_1066"

><td id="1066"><a href="#1066">1066</a></td></tr
><tr id="gr_svn79_1067"

><td id="1067"><a href="#1067">1067</a></td></tr
><tr id="gr_svn79_1068"

><td id="1068"><a href="#1068">1068</a></td></tr
><tr id="gr_svn79_1069"

><td id="1069"><a href="#1069">1069</a></td></tr
><tr id="gr_svn79_1070"

><td id="1070"><a href="#1070">1070</a></td></tr
><tr id="gr_svn79_1071"

><td id="1071"><a href="#1071">1071</a></td></tr
><tr id="gr_svn79_1072"

><td id="1072"><a href="#1072">1072</a></td></tr
><tr id="gr_svn79_1073"

><td id="1073"><a href="#1073">1073</a></td></tr
><tr id="gr_svn79_1074"

><td id="1074"><a href="#1074">1074</a></td></tr
><tr id="gr_svn79_1075"

><td id="1075"><a href="#1075">1075</a></td></tr
><tr id="gr_svn79_1076"

><td id="1076"><a href="#1076">1076</a></td></tr
><tr id="gr_svn79_1077"

><td id="1077"><a href="#1077">1077</a></td></tr
><tr id="gr_svn79_1078"

><td id="1078"><a href="#1078">1078</a></td></tr
><tr id="gr_svn79_1079"

><td id="1079"><a href="#1079">1079</a></td></tr
><tr id="gr_svn79_1080"

><td id="1080"><a href="#1080">1080</a></td></tr
><tr id="gr_svn79_1081"

><td id="1081"><a href="#1081">1081</a></td></tr
><tr id="gr_svn79_1082"

><td id="1082"><a href="#1082">1082</a></td></tr
><tr id="gr_svn79_1083"

><td id="1083"><a href="#1083">1083</a></td></tr
><tr id="gr_svn79_1084"

><td id="1084"><a href="#1084">1084</a></td></tr
><tr id="gr_svn79_1085"

><td id="1085"><a href="#1085">1085</a></td></tr
><tr id="gr_svn79_1086"

><td id="1086"><a href="#1086">1086</a></td></tr
><tr id="gr_svn79_1087"

><td id="1087"><a href="#1087">1087</a></td></tr
><tr id="gr_svn79_1088"

><td id="1088"><a href="#1088">1088</a></td></tr
><tr id="gr_svn79_1089"

><td id="1089"><a href="#1089">1089</a></td></tr
><tr id="gr_svn79_1090"

><td id="1090"><a href="#1090">1090</a></td></tr
><tr id="gr_svn79_1091"

><td id="1091"><a href="#1091">1091</a></td></tr
><tr id="gr_svn79_1092"

><td id="1092"><a href="#1092">1092</a></td></tr
><tr id="gr_svn79_1093"

><td id="1093"><a href="#1093">1093</a></td></tr
><tr id="gr_svn79_1094"

><td id="1094"><a href="#1094">1094</a></td></tr
><tr id="gr_svn79_1095"

><td id="1095"><a href="#1095">1095</a></td></tr
><tr id="gr_svn79_1096"

><td id="1096"><a href="#1096">1096</a></td></tr
><tr id="gr_svn79_1097"

><td id="1097"><a href="#1097">1097</a></td></tr
><tr id="gr_svn79_1098"

><td id="1098"><a href="#1098">1098</a></td></tr
><tr id="gr_svn79_1099"

><td id="1099"><a href="#1099">1099</a></td></tr
><tr id="gr_svn79_1100"

><td id="1100"><a href="#1100">1100</a></td></tr
><tr id="gr_svn79_1101"

><td id="1101"><a href="#1101">1101</a></td></tr
><tr id="gr_svn79_1102"

><td id="1102"><a href="#1102">1102</a></td></tr
><tr id="gr_svn79_1103"

><td id="1103"><a href="#1103">1103</a></td></tr
><tr id="gr_svn79_1104"

><td id="1104"><a href="#1104">1104</a></td></tr
><tr id="gr_svn79_1105"

><td id="1105"><a href="#1105">1105</a></td></tr
><tr id="gr_svn79_1106"

><td id="1106"><a href="#1106">1106</a></td></tr
><tr id="gr_svn79_1107"

><td id="1107"><a href="#1107">1107</a></td></tr
><tr id="gr_svn79_1108"

><td id="1108"><a href="#1108">1108</a></td></tr
><tr id="gr_svn79_1109"

><td id="1109"><a href="#1109">1109</a></td></tr
><tr id="gr_svn79_1110"

><td id="1110"><a href="#1110">1110</a></td></tr
><tr id="gr_svn79_1111"

><td id="1111"><a href="#1111">1111</a></td></tr
><tr id="gr_svn79_1112"

><td id="1112"><a href="#1112">1112</a></td></tr
><tr id="gr_svn79_1113"

><td id="1113"><a href="#1113">1113</a></td></tr
><tr id="gr_svn79_1114"

><td id="1114"><a href="#1114">1114</a></td></tr
><tr id="gr_svn79_1115"

><td id="1115"><a href="#1115">1115</a></td></tr
><tr id="gr_svn79_1116"

><td id="1116"><a href="#1116">1116</a></td></tr
><tr id="gr_svn79_1117"

><td id="1117"><a href="#1117">1117</a></td></tr
><tr id="gr_svn79_1118"

><td id="1118"><a href="#1118">1118</a></td></tr
><tr id="gr_svn79_1119"

><td id="1119"><a href="#1119">1119</a></td></tr
><tr id="gr_svn79_1120"

><td id="1120"><a href="#1120">1120</a></td></tr
><tr id="gr_svn79_1121"

><td id="1121"><a href="#1121">1121</a></td></tr
><tr id="gr_svn79_1122"

><td id="1122"><a href="#1122">1122</a></td></tr
><tr id="gr_svn79_1123"

><td id="1123"><a href="#1123">1123</a></td></tr
><tr id="gr_svn79_1124"

><td id="1124"><a href="#1124">1124</a></td></tr
><tr id="gr_svn79_1125"

><td id="1125"><a href="#1125">1125</a></td></tr
><tr id="gr_svn79_1126"

><td id="1126"><a href="#1126">1126</a></td></tr
><tr id="gr_svn79_1127"

><td id="1127"><a href="#1127">1127</a></td></tr
><tr id="gr_svn79_1128"

><td id="1128"><a href="#1128">1128</a></td></tr
><tr id="gr_svn79_1129"

><td id="1129"><a href="#1129">1129</a></td></tr
><tr id="gr_svn79_1130"

><td id="1130"><a href="#1130">1130</a></td></tr
><tr id="gr_svn79_1131"

><td id="1131"><a href="#1131">1131</a></td></tr
><tr id="gr_svn79_1132"

><td id="1132"><a href="#1132">1132</a></td></tr
><tr id="gr_svn79_1133"

><td id="1133"><a href="#1133">1133</a></td></tr
><tr id="gr_svn79_1134"

><td id="1134"><a href="#1134">1134</a></td></tr
><tr id="gr_svn79_1135"

><td id="1135"><a href="#1135">1135</a></td></tr
><tr id="gr_svn79_1136"

><td id="1136"><a href="#1136">1136</a></td></tr
><tr id="gr_svn79_1137"

><td id="1137"><a href="#1137">1137</a></td></tr
><tr id="gr_svn79_1138"

><td id="1138"><a href="#1138">1138</a></td></tr
><tr id="gr_svn79_1139"

><td id="1139"><a href="#1139">1139</a></td></tr
><tr id="gr_svn79_1140"

><td id="1140"><a href="#1140">1140</a></td></tr
><tr id="gr_svn79_1141"

><td id="1141"><a href="#1141">1141</a></td></tr
><tr id="gr_svn79_1142"

><td id="1142"><a href="#1142">1142</a></td></tr
><tr id="gr_svn79_1143"

><td id="1143"><a href="#1143">1143</a></td></tr
><tr id="gr_svn79_1144"

><td id="1144"><a href="#1144">1144</a></td></tr
><tr id="gr_svn79_1145"

><td id="1145"><a href="#1145">1145</a></td></tr
><tr id="gr_svn79_1146"

><td id="1146"><a href="#1146">1146</a></td></tr
><tr id="gr_svn79_1147"

><td id="1147"><a href="#1147">1147</a></td></tr
><tr id="gr_svn79_1148"

><td id="1148"><a href="#1148">1148</a></td></tr
><tr id="gr_svn79_1149"

><td id="1149"><a href="#1149">1149</a></td></tr
><tr id="gr_svn79_1150"

><td id="1150"><a href="#1150">1150</a></td></tr
><tr id="gr_svn79_1151"

><td id="1151"><a href="#1151">1151</a></td></tr
><tr id="gr_svn79_1152"

><td id="1152"><a href="#1152">1152</a></td></tr
><tr id="gr_svn79_1153"

><td id="1153"><a href="#1153">1153</a></td></tr
><tr id="gr_svn79_1154"

><td id="1154"><a href="#1154">1154</a></td></tr
><tr id="gr_svn79_1155"

><td id="1155"><a href="#1155">1155</a></td></tr
><tr id="gr_svn79_1156"

><td id="1156"><a href="#1156">1156</a></td></tr
><tr id="gr_svn79_1157"

><td id="1157"><a href="#1157">1157</a></td></tr
><tr id="gr_svn79_1158"

><td id="1158"><a href="#1158">1158</a></td></tr
><tr id="gr_svn79_1159"

><td id="1159"><a href="#1159">1159</a></td></tr
><tr id="gr_svn79_1160"

><td id="1160"><a href="#1160">1160</a></td></tr
><tr id="gr_svn79_1161"

><td id="1161"><a href="#1161">1161</a></td></tr
><tr id="gr_svn79_1162"

><td id="1162"><a href="#1162">1162</a></td></tr
><tr id="gr_svn79_1163"

><td id="1163"><a href="#1163">1163</a></td></tr
><tr id="gr_svn79_1164"

><td id="1164"><a href="#1164">1164</a></td></tr
><tr id="gr_svn79_1165"

><td id="1165"><a href="#1165">1165</a></td></tr
><tr id="gr_svn79_1166"

><td id="1166"><a href="#1166">1166</a></td></tr
><tr id="gr_svn79_1167"

><td id="1167"><a href="#1167">1167</a></td></tr
><tr id="gr_svn79_1168"

><td id="1168"><a href="#1168">1168</a></td></tr
><tr id="gr_svn79_1169"

><td id="1169"><a href="#1169">1169</a></td></tr
><tr id="gr_svn79_1170"

><td id="1170"><a href="#1170">1170</a></td></tr
><tr id="gr_svn79_1171"

><td id="1171"><a href="#1171">1171</a></td></tr
><tr id="gr_svn79_1172"

><td id="1172"><a href="#1172">1172</a></td></tr
><tr id="gr_svn79_1173"

><td id="1173"><a href="#1173">1173</a></td></tr
><tr id="gr_svn79_1174"

><td id="1174"><a href="#1174">1174</a></td></tr
><tr id="gr_svn79_1175"

><td id="1175"><a href="#1175">1175</a></td></tr
><tr id="gr_svn79_1176"

><td id="1176"><a href="#1176">1176</a></td></tr
><tr id="gr_svn79_1177"

><td id="1177"><a href="#1177">1177</a></td></tr
><tr id="gr_svn79_1178"

><td id="1178"><a href="#1178">1178</a></td></tr
><tr id="gr_svn79_1179"

><td id="1179"><a href="#1179">1179</a></td></tr
><tr id="gr_svn79_1180"

><td id="1180"><a href="#1180">1180</a></td></tr
><tr id="gr_svn79_1181"

><td id="1181"><a href="#1181">1181</a></td></tr
><tr id="gr_svn79_1182"

><td id="1182"><a href="#1182">1182</a></td></tr
><tr id="gr_svn79_1183"

><td id="1183"><a href="#1183">1183</a></td></tr
><tr id="gr_svn79_1184"

><td id="1184"><a href="#1184">1184</a></td></tr
><tr id="gr_svn79_1185"

><td id="1185"><a href="#1185">1185</a></td></tr
><tr id="gr_svn79_1186"

><td id="1186"><a href="#1186">1186</a></td></tr
><tr id="gr_svn79_1187"

><td id="1187"><a href="#1187">1187</a></td></tr
><tr id="gr_svn79_1188"

><td id="1188"><a href="#1188">1188</a></td></tr
><tr id="gr_svn79_1189"

><td id="1189"><a href="#1189">1189</a></td></tr
><tr id="gr_svn79_1190"

><td id="1190"><a href="#1190">1190</a></td></tr
><tr id="gr_svn79_1191"

><td id="1191"><a href="#1191">1191</a></td></tr
><tr id="gr_svn79_1192"

><td id="1192"><a href="#1192">1192</a></td></tr
><tr id="gr_svn79_1193"

><td id="1193"><a href="#1193">1193</a></td></tr
><tr id="gr_svn79_1194"

><td id="1194"><a href="#1194">1194</a></td></tr
><tr id="gr_svn79_1195"

><td id="1195"><a href="#1195">1195</a></td></tr
><tr id="gr_svn79_1196"

><td id="1196"><a href="#1196">1196</a></td></tr
><tr id="gr_svn79_1197"

><td id="1197"><a href="#1197">1197</a></td></tr
><tr id="gr_svn79_1198"

><td id="1198"><a href="#1198">1198</a></td></tr
><tr id="gr_svn79_1199"

><td id="1199"><a href="#1199">1199</a></td></tr
><tr id="gr_svn79_1200"

><td id="1200"><a href="#1200">1200</a></td></tr
><tr id="gr_svn79_1201"

><td id="1201"><a href="#1201">1201</a></td></tr
><tr id="gr_svn79_1202"

><td id="1202"><a href="#1202">1202</a></td></tr
><tr id="gr_svn79_1203"

><td id="1203"><a href="#1203">1203</a></td></tr
><tr id="gr_svn79_1204"

><td id="1204"><a href="#1204">1204</a></td></tr
><tr id="gr_svn79_1205"

><td id="1205"><a href="#1205">1205</a></td></tr
><tr id="gr_svn79_1206"

><td id="1206"><a href="#1206">1206</a></td></tr
><tr id="gr_svn79_1207"

><td id="1207"><a href="#1207">1207</a></td></tr
><tr id="gr_svn79_1208"

><td id="1208"><a href="#1208">1208</a></td></tr
><tr id="gr_svn79_1209"

><td id="1209"><a href="#1209">1209</a></td></tr
><tr id="gr_svn79_1210"

><td id="1210"><a href="#1210">1210</a></td></tr
><tr id="gr_svn79_1211"

><td id="1211"><a href="#1211">1211</a></td></tr
><tr id="gr_svn79_1212"

><td id="1212"><a href="#1212">1212</a></td></tr
><tr id="gr_svn79_1213"

><td id="1213"><a href="#1213">1213</a></td></tr
><tr id="gr_svn79_1214"

><td id="1214"><a href="#1214">1214</a></td></tr
><tr id="gr_svn79_1215"

><td id="1215"><a href="#1215">1215</a></td></tr
><tr id="gr_svn79_1216"

><td id="1216"><a href="#1216">1216</a></td></tr
><tr id="gr_svn79_1217"

><td id="1217"><a href="#1217">1217</a></td></tr
><tr id="gr_svn79_1218"

><td id="1218"><a href="#1218">1218</a></td></tr
><tr id="gr_svn79_1219"

><td id="1219"><a href="#1219">1219</a></td></tr
><tr id="gr_svn79_1220"

><td id="1220"><a href="#1220">1220</a></td></tr
><tr id="gr_svn79_1221"

><td id="1221"><a href="#1221">1221</a></td></tr
><tr id="gr_svn79_1222"

><td id="1222"><a href="#1222">1222</a></td></tr
><tr id="gr_svn79_1223"

><td id="1223"><a href="#1223">1223</a></td></tr
><tr id="gr_svn79_1224"

><td id="1224"><a href="#1224">1224</a></td></tr
><tr id="gr_svn79_1225"

><td id="1225"><a href="#1225">1225</a></td></tr
><tr id="gr_svn79_1226"

><td id="1226"><a href="#1226">1226</a></td></tr
><tr id="gr_svn79_1227"

><td id="1227"><a href="#1227">1227</a></td></tr
><tr id="gr_svn79_1228"

><td id="1228"><a href="#1228">1228</a></td></tr
><tr id="gr_svn79_1229"

><td id="1229"><a href="#1229">1229</a></td></tr
><tr id="gr_svn79_1230"

><td id="1230"><a href="#1230">1230</a></td></tr
><tr id="gr_svn79_1231"

><td id="1231"><a href="#1231">1231</a></td></tr
><tr id="gr_svn79_1232"

><td id="1232"><a href="#1232">1232</a></td></tr
><tr id="gr_svn79_1233"

><td id="1233"><a href="#1233">1233</a></td></tr
><tr id="gr_svn79_1234"

><td id="1234"><a href="#1234">1234</a></td></tr
><tr id="gr_svn79_1235"

><td id="1235"><a href="#1235">1235</a></td></tr
><tr id="gr_svn79_1236"

><td id="1236"><a href="#1236">1236</a></td></tr
><tr id="gr_svn79_1237"

><td id="1237"><a href="#1237">1237</a></td></tr
><tr id="gr_svn79_1238"

><td id="1238"><a href="#1238">1238</a></td></tr
><tr id="gr_svn79_1239"

><td id="1239"><a href="#1239">1239</a></td></tr
><tr id="gr_svn79_1240"

><td id="1240"><a href="#1240">1240</a></td></tr
><tr id="gr_svn79_1241"

><td id="1241"><a href="#1241">1241</a></td></tr
><tr id="gr_svn79_1242"

><td id="1242"><a href="#1242">1242</a></td></tr
><tr id="gr_svn79_1243"

><td id="1243"><a href="#1243">1243</a></td></tr
><tr id="gr_svn79_1244"

><td id="1244"><a href="#1244">1244</a></td></tr
><tr id="gr_svn79_1245"

><td id="1245"><a href="#1245">1245</a></td></tr
><tr id="gr_svn79_1246"

><td id="1246"><a href="#1246">1246</a></td></tr
><tr id="gr_svn79_1247"

><td id="1247"><a href="#1247">1247</a></td></tr
><tr id="gr_svn79_1248"

><td id="1248"><a href="#1248">1248</a></td></tr
><tr id="gr_svn79_1249"

><td id="1249"><a href="#1249">1249</a></td></tr
><tr id="gr_svn79_1250"

><td id="1250"><a href="#1250">1250</a></td></tr
><tr id="gr_svn79_1251"

><td id="1251"><a href="#1251">1251</a></td></tr
><tr id="gr_svn79_1252"

><td id="1252"><a href="#1252">1252</a></td></tr
><tr id="gr_svn79_1253"

><td id="1253"><a href="#1253">1253</a></td></tr
><tr id="gr_svn79_1254"

><td id="1254"><a href="#1254">1254</a></td></tr
><tr id="gr_svn79_1255"

><td id="1255"><a href="#1255">1255</a></td></tr
><tr id="gr_svn79_1256"

><td id="1256"><a href="#1256">1256</a></td></tr
><tr id="gr_svn79_1257"

><td id="1257"><a href="#1257">1257</a></td></tr
><tr id="gr_svn79_1258"

><td id="1258"><a href="#1258">1258</a></td></tr
><tr id="gr_svn79_1259"

><td id="1259"><a href="#1259">1259</a></td></tr
><tr id="gr_svn79_1260"

><td id="1260"><a href="#1260">1260</a></td></tr
><tr id="gr_svn79_1261"

><td id="1261"><a href="#1261">1261</a></td></tr
><tr id="gr_svn79_1262"

><td id="1262"><a href="#1262">1262</a></td></tr
><tr id="gr_svn79_1263"

><td id="1263"><a href="#1263">1263</a></td></tr
><tr id="gr_svn79_1264"

><td id="1264"><a href="#1264">1264</a></td></tr
><tr id="gr_svn79_1265"

><td id="1265"><a href="#1265">1265</a></td></tr
><tr id="gr_svn79_1266"

><td id="1266"><a href="#1266">1266</a></td></tr
><tr id="gr_svn79_1267"

><td id="1267"><a href="#1267">1267</a></td></tr
><tr id="gr_svn79_1268"

><td id="1268"><a href="#1268">1268</a></td></tr
><tr id="gr_svn79_1269"

><td id="1269"><a href="#1269">1269</a></td></tr
><tr id="gr_svn79_1270"

><td id="1270"><a href="#1270">1270</a></td></tr
><tr id="gr_svn79_1271"

><td id="1271"><a href="#1271">1271</a></td></tr
><tr id="gr_svn79_1272"

><td id="1272"><a href="#1272">1272</a></td></tr
><tr id="gr_svn79_1273"

><td id="1273"><a href="#1273">1273</a></td></tr
><tr id="gr_svn79_1274"

><td id="1274"><a href="#1274">1274</a></td></tr
><tr id="gr_svn79_1275"

><td id="1275"><a href="#1275">1275</a></td></tr
><tr id="gr_svn79_1276"

><td id="1276"><a href="#1276">1276</a></td></tr
><tr id="gr_svn79_1277"

><td id="1277"><a href="#1277">1277</a></td></tr
><tr id="gr_svn79_1278"

><td id="1278"><a href="#1278">1278</a></td></tr
><tr id="gr_svn79_1279"

><td id="1279"><a href="#1279">1279</a></td></tr
><tr id="gr_svn79_1280"

><td id="1280"><a href="#1280">1280</a></td></tr
><tr id="gr_svn79_1281"

><td id="1281"><a href="#1281">1281</a></td></tr
><tr id="gr_svn79_1282"

><td id="1282"><a href="#1282">1282</a></td></tr
><tr id="gr_svn79_1283"

><td id="1283"><a href="#1283">1283</a></td></tr
><tr id="gr_svn79_1284"

><td id="1284"><a href="#1284">1284</a></td></tr
><tr id="gr_svn79_1285"

><td id="1285"><a href="#1285">1285</a></td></tr
><tr id="gr_svn79_1286"

><td id="1286"><a href="#1286">1286</a></td></tr
><tr id="gr_svn79_1287"

><td id="1287"><a href="#1287">1287</a></td></tr
><tr id="gr_svn79_1288"

><td id="1288"><a href="#1288">1288</a></td></tr
><tr id="gr_svn79_1289"

><td id="1289"><a href="#1289">1289</a></td></tr
><tr id="gr_svn79_1290"

><td id="1290"><a href="#1290">1290</a></td></tr
><tr id="gr_svn79_1291"

><td id="1291"><a href="#1291">1291</a></td></tr
><tr id="gr_svn79_1292"

><td id="1292"><a href="#1292">1292</a></td></tr
><tr id="gr_svn79_1293"

><td id="1293"><a href="#1293">1293</a></td></tr
><tr id="gr_svn79_1294"

><td id="1294"><a href="#1294">1294</a></td></tr
><tr id="gr_svn79_1295"

><td id="1295"><a href="#1295">1295</a></td></tr
><tr id="gr_svn79_1296"

><td id="1296"><a href="#1296">1296</a></td></tr
><tr id="gr_svn79_1297"

><td id="1297"><a href="#1297">1297</a></td></tr
><tr id="gr_svn79_1298"

><td id="1298"><a href="#1298">1298</a></td></tr
><tr id="gr_svn79_1299"

><td id="1299"><a href="#1299">1299</a></td></tr
><tr id="gr_svn79_1300"

><td id="1300"><a href="#1300">1300</a></td></tr
><tr id="gr_svn79_1301"

><td id="1301"><a href="#1301">1301</a></td></tr
><tr id="gr_svn79_1302"

><td id="1302"><a href="#1302">1302</a></td></tr
><tr id="gr_svn79_1303"

><td id="1303"><a href="#1303">1303</a></td></tr
><tr id="gr_svn79_1304"

><td id="1304"><a href="#1304">1304</a></td></tr
><tr id="gr_svn79_1305"

><td id="1305"><a href="#1305">1305</a></td></tr
><tr id="gr_svn79_1306"

><td id="1306"><a href="#1306">1306</a></td></tr
><tr id="gr_svn79_1307"

><td id="1307"><a href="#1307">1307</a></td></tr
><tr id="gr_svn79_1308"

><td id="1308"><a href="#1308">1308</a></td></tr
><tr id="gr_svn79_1309"

><td id="1309"><a href="#1309">1309</a></td></tr
><tr id="gr_svn79_1310"

><td id="1310"><a href="#1310">1310</a></td></tr
><tr id="gr_svn79_1311"

><td id="1311"><a href="#1311">1311</a></td></tr
><tr id="gr_svn79_1312"

><td id="1312"><a href="#1312">1312</a></td></tr
><tr id="gr_svn79_1313"

><td id="1313"><a href="#1313">1313</a></td></tr
><tr id="gr_svn79_1314"

><td id="1314"><a href="#1314">1314</a></td></tr
><tr id="gr_svn79_1315"

><td id="1315"><a href="#1315">1315</a></td></tr
><tr id="gr_svn79_1316"

><td id="1316"><a href="#1316">1316</a></td></tr
><tr id="gr_svn79_1317"

><td id="1317"><a href="#1317">1317</a></td></tr
><tr id="gr_svn79_1318"

><td id="1318"><a href="#1318">1318</a></td></tr
><tr id="gr_svn79_1319"

><td id="1319"><a href="#1319">1319</a></td></tr
><tr id="gr_svn79_1320"

><td id="1320"><a href="#1320">1320</a></td></tr
><tr id="gr_svn79_1321"

><td id="1321"><a href="#1321">1321</a></td></tr
><tr id="gr_svn79_1322"

><td id="1322"><a href="#1322">1322</a></td></tr
><tr id="gr_svn79_1323"

><td id="1323"><a href="#1323">1323</a></td></tr
><tr id="gr_svn79_1324"

><td id="1324"><a href="#1324">1324</a></td></tr
><tr id="gr_svn79_1325"

><td id="1325"><a href="#1325">1325</a></td></tr
><tr id="gr_svn79_1326"

><td id="1326"><a href="#1326">1326</a></td></tr
><tr id="gr_svn79_1327"

><td id="1327"><a href="#1327">1327</a></td></tr
><tr id="gr_svn79_1328"

><td id="1328"><a href="#1328">1328</a></td></tr
><tr id="gr_svn79_1329"

><td id="1329"><a href="#1329">1329</a></td></tr
><tr id="gr_svn79_1330"

><td id="1330"><a href="#1330">1330</a></td></tr
><tr id="gr_svn79_1331"

><td id="1331"><a href="#1331">1331</a></td></tr
><tr id="gr_svn79_1332"

><td id="1332"><a href="#1332">1332</a></td></tr
><tr id="gr_svn79_1333"

><td id="1333"><a href="#1333">1333</a></td></tr
><tr id="gr_svn79_1334"

><td id="1334"><a href="#1334">1334</a></td></tr
><tr id="gr_svn79_1335"

><td id="1335"><a href="#1335">1335</a></td></tr
><tr id="gr_svn79_1336"

><td id="1336"><a href="#1336">1336</a></td></tr
><tr id="gr_svn79_1337"

><td id="1337"><a href="#1337">1337</a></td></tr
><tr id="gr_svn79_1338"

><td id="1338"><a href="#1338">1338</a></td></tr
><tr id="gr_svn79_1339"

><td id="1339"><a href="#1339">1339</a></td></tr
><tr id="gr_svn79_1340"

><td id="1340"><a href="#1340">1340</a></td></tr
><tr id="gr_svn79_1341"

><td id="1341"><a href="#1341">1341</a></td></tr
><tr id="gr_svn79_1342"

><td id="1342"><a href="#1342">1342</a></td></tr
><tr id="gr_svn79_1343"

><td id="1343"><a href="#1343">1343</a></td></tr
><tr id="gr_svn79_1344"

><td id="1344"><a href="#1344">1344</a></td></tr
><tr id="gr_svn79_1345"

><td id="1345"><a href="#1345">1345</a></td></tr
><tr id="gr_svn79_1346"

><td id="1346"><a href="#1346">1346</a></td></tr
><tr id="gr_svn79_1347"

><td id="1347"><a href="#1347">1347</a></td></tr
><tr id="gr_svn79_1348"

><td id="1348"><a href="#1348">1348</a></td></tr
><tr id="gr_svn79_1349"

><td id="1349"><a href="#1349">1349</a></td></tr
><tr id="gr_svn79_1350"

><td id="1350"><a href="#1350">1350</a></td></tr
><tr id="gr_svn79_1351"

><td id="1351"><a href="#1351">1351</a></td></tr
><tr id="gr_svn79_1352"

><td id="1352"><a href="#1352">1352</a></td></tr
><tr id="gr_svn79_1353"

><td id="1353"><a href="#1353">1353</a></td></tr
><tr id="gr_svn79_1354"

><td id="1354"><a href="#1354">1354</a></td></tr
><tr id="gr_svn79_1355"

><td id="1355"><a href="#1355">1355</a></td></tr
><tr id="gr_svn79_1356"

><td id="1356"><a href="#1356">1356</a></td></tr
><tr id="gr_svn79_1357"

><td id="1357"><a href="#1357">1357</a></td></tr
><tr id="gr_svn79_1358"

><td id="1358"><a href="#1358">1358</a></td></tr
><tr id="gr_svn79_1359"

><td id="1359"><a href="#1359">1359</a></td></tr
><tr id="gr_svn79_1360"

><td id="1360"><a href="#1360">1360</a></td></tr
><tr id="gr_svn79_1361"

><td id="1361"><a href="#1361">1361</a></td></tr
><tr id="gr_svn79_1362"

><td id="1362"><a href="#1362">1362</a></td></tr
><tr id="gr_svn79_1363"

><td id="1363"><a href="#1363">1363</a></td></tr
><tr id="gr_svn79_1364"

><td id="1364"><a href="#1364">1364</a></td></tr
><tr id="gr_svn79_1365"

><td id="1365"><a href="#1365">1365</a></td></tr
><tr id="gr_svn79_1366"

><td id="1366"><a href="#1366">1366</a></td></tr
><tr id="gr_svn79_1367"

><td id="1367"><a href="#1367">1367</a></td></tr
><tr id="gr_svn79_1368"

><td id="1368"><a href="#1368">1368</a></td></tr
><tr id="gr_svn79_1369"

><td id="1369"><a href="#1369">1369</a></td></tr
><tr id="gr_svn79_1370"

><td id="1370"><a href="#1370">1370</a></td></tr
><tr id="gr_svn79_1371"

><td id="1371"><a href="#1371">1371</a></td></tr
><tr id="gr_svn79_1372"

><td id="1372"><a href="#1372">1372</a></td></tr
><tr id="gr_svn79_1373"

><td id="1373"><a href="#1373">1373</a></td></tr
><tr id="gr_svn79_1374"

><td id="1374"><a href="#1374">1374</a></td></tr
><tr id="gr_svn79_1375"

><td id="1375"><a href="#1375">1375</a></td></tr
><tr id="gr_svn79_1376"

><td id="1376"><a href="#1376">1376</a></td></tr
><tr id="gr_svn79_1377"

><td id="1377"><a href="#1377">1377</a></td></tr
><tr id="gr_svn79_1378"

><td id="1378"><a href="#1378">1378</a></td></tr
><tr id="gr_svn79_1379"

><td id="1379"><a href="#1379">1379</a></td></tr
><tr id="gr_svn79_1380"

><td id="1380"><a href="#1380">1380</a></td></tr
><tr id="gr_svn79_1381"

><td id="1381"><a href="#1381">1381</a></td></tr
><tr id="gr_svn79_1382"

><td id="1382"><a href="#1382">1382</a></td></tr
><tr id="gr_svn79_1383"

><td id="1383"><a href="#1383">1383</a></td></tr
><tr id="gr_svn79_1384"

><td id="1384"><a href="#1384">1384</a></td></tr
><tr id="gr_svn79_1385"

><td id="1385"><a href="#1385">1385</a></td></tr
><tr id="gr_svn79_1386"

><td id="1386"><a href="#1386">1386</a></td></tr
><tr id="gr_svn79_1387"

><td id="1387"><a href="#1387">1387</a></td></tr
><tr id="gr_svn79_1388"

><td id="1388"><a href="#1388">1388</a></td></tr
><tr id="gr_svn79_1389"

><td id="1389"><a href="#1389">1389</a></td></tr
><tr id="gr_svn79_1390"

><td id="1390"><a href="#1390">1390</a></td></tr
><tr id="gr_svn79_1391"

><td id="1391"><a href="#1391">1391</a></td></tr
><tr id="gr_svn79_1392"

><td id="1392"><a href="#1392">1392</a></td></tr
><tr id="gr_svn79_1393"

><td id="1393"><a href="#1393">1393</a></td></tr
><tr id="gr_svn79_1394"

><td id="1394"><a href="#1394">1394</a></td></tr
><tr id="gr_svn79_1395"

><td id="1395"><a href="#1395">1395</a></td></tr
><tr id="gr_svn79_1396"

><td id="1396"><a href="#1396">1396</a></td></tr
><tr id="gr_svn79_1397"

><td id="1397"><a href="#1397">1397</a></td></tr
><tr id="gr_svn79_1398"

><td id="1398"><a href="#1398">1398</a></td></tr
><tr id="gr_svn79_1399"

><td id="1399"><a href="#1399">1399</a></td></tr
><tr id="gr_svn79_1400"

><td id="1400"><a href="#1400">1400</a></td></tr
><tr id="gr_svn79_1401"

><td id="1401"><a href="#1401">1401</a></td></tr
><tr id="gr_svn79_1402"

><td id="1402"><a href="#1402">1402</a></td></tr
><tr id="gr_svn79_1403"

><td id="1403"><a href="#1403">1403</a></td></tr
><tr id="gr_svn79_1404"

><td id="1404"><a href="#1404">1404</a></td></tr
><tr id="gr_svn79_1405"

><td id="1405"><a href="#1405">1405</a></td></tr
><tr id="gr_svn79_1406"

><td id="1406"><a href="#1406">1406</a></td></tr
><tr id="gr_svn79_1407"

><td id="1407"><a href="#1407">1407</a></td></tr
><tr id="gr_svn79_1408"

><td id="1408"><a href="#1408">1408</a></td></tr
><tr id="gr_svn79_1409"

><td id="1409"><a href="#1409">1409</a></td></tr
><tr id="gr_svn79_1410"

><td id="1410"><a href="#1410">1410</a></td></tr
><tr id="gr_svn79_1411"

><td id="1411"><a href="#1411">1411</a></td></tr
><tr id="gr_svn79_1412"

><td id="1412"><a href="#1412">1412</a></td></tr
><tr id="gr_svn79_1413"

><td id="1413"><a href="#1413">1413</a></td></tr
><tr id="gr_svn79_1414"

><td id="1414"><a href="#1414">1414</a></td></tr
><tr id="gr_svn79_1415"

><td id="1415"><a href="#1415">1415</a></td></tr
><tr id="gr_svn79_1416"

><td id="1416"><a href="#1416">1416</a></td></tr
><tr id="gr_svn79_1417"

><td id="1417"><a href="#1417">1417</a></td></tr
><tr id="gr_svn79_1418"

><td id="1418"><a href="#1418">1418</a></td></tr
><tr id="gr_svn79_1419"

><td id="1419"><a href="#1419">1419</a></td></tr
><tr id="gr_svn79_1420"

><td id="1420"><a href="#1420">1420</a></td></tr
><tr id="gr_svn79_1421"

><td id="1421"><a href="#1421">1421</a></td></tr
><tr id="gr_svn79_1422"

><td id="1422"><a href="#1422">1422</a></td></tr
><tr id="gr_svn79_1423"

><td id="1423"><a href="#1423">1423</a></td></tr
><tr id="gr_svn79_1424"

><td id="1424"><a href="#1424">1424</a></td></tr
><tr id="gr_svn79_1425"

><td id="1425"><a href="#1425">1425</a></td></tr
><tr id="gr_svn79_1426"

><td id="1426"><a href="#1426">1426</a></td></tr
><tr id="gr_svn79_1427"

><td id="1427"><a href="#1427">1427</a></td></tr
><tr id="gr_svn79_1428"

><td id="1428"><a href="#1428">1428</a></td></tr
><tr id="gr_svn79_1429"

><td id="1429"><a href="#1429">1429</a></td></tr
><tr id="gr_svn79_1430"

><td id="1430"><a href="#1430">1430</a></td></tr
><tr id="gr_svn79_1431"

><td id="1431"><a href="#1431">1431</a></td></tr
><tr id="gr_svn79_1432"

><td id="1432"><a href="#1432">1432</a></td></tr
><tr id="gr_svn79_1433"

><td id="1433"><a href="#1433">1433</a></td></tr
><tr id="gr_svn79_1434"

><td id="1434"><a href="#1434">1434</a></td></tr
><tr id="gr_svn79_1435"

><td id="1435"><a href="#1435">1435</a></td></tr
><tr id="gr_svn79_1436"

><td id="1436"><a href="#1436">1436</a></td></tr
><tr id="gr_svn79_1437"

><td id="1437"><a href="#1437">1437</a></td></tr
><tr id="gr_svn79_1438"

><td id="1438"><a href="#1438">1438</a></td></tr
><tr id="gr_svn79_1439"

><td id="1439"><a href="#1439">1439</a></td></tr
><tr id="gr_svn79_1440"

><td id="1440"><a href="#1440">1440</a></td></tr
><tr id="gr_svn79_1441"

><td id="1441"><a href="#1441">1441</a></td></tr
><tr id="gr_svn79_1442"

><td id="1442"><a href="#1442">1442</a></td></tr
><tr id="gr_svn79_1443"

><td id="1443"><a href="#1443">1443</a></td></tr
><tr id="gr_svn79_1444"

><td id="1444"><a href="#1444">1444</a></td></tr
><tr id="gr_svn79_1445"

><td id="1445"><a href="#1445">1445</a></td></tr
><tr id="gr_svn79_1446"

><td id="1446"><a href="#1446">1446</a></td></tr
><tr id="gr_svn79_1447"

><td id="1447"><a href="#1447">1447</a></td></tr
><tr id="gr_svn79_1448"

><td id="1448"><a href="#1448">1448</a></td></tr
><tr id="gr_svn79_1449"

><td id="1449"><a href="#1449">1449</a></td></tr
><tr id="gr_svn79_1450"

><td id="1450"><a href="#1450">1450</a></td></tr
><tr id="gr_svn79_1451"

><td id="1451"><a href="#1451">1451</a></td></tr
><tr id="gr_svn79_1452"

><td id="1452"><a href="#1452">1452</a></td></tr
><tr id="gr_svn79_1453"

><td id="1453"><a href="#1453">1453</a></td></tr
><tr id="gr_svn79_1454"

><td id="1454"><a href="#1454">1454</a></td></tr
><tr id="gr_svn79_1455"

><td id="1455"><a href="#1455">1455</a></td></tr
><tr id="gr_svn79_1456"

><td id="1456"><a href="#1456">1456</a></td></tr
><tr id="gr_svn79_1457"

><td id="1457"><a href="#1457">1457</a></td></tr
><tr id="gr_svn79_1458"

><td id="1458"><a href="#1458">1458</a></td></tr
><tr id="gr_svn79_1459"

><td id="1459"><a href="#1459">1459</a></td></tr
><tr id="gr_svn79_1460"

><td id="1460"><a href="#1460">1460</a></td></tr
><tr id="gr_svn79_1461"

><td id="1461"><a href="#1461">1461</a></td></tr
><tr id="gr_svn79_1462"

><td id="1462"><a href="#1462">1462</a></td></tr
><tr id="gr_svn79_1463"

><td id="1463"><a href="#1463">1463</a></td></tr
><tr id="gr_svn79_1464"

><td id="1464"><a href="#1464">1464</a></td></tr
><tr id="gr_svn79_1465"

><td id="1465"><a href="#1465">1465</a></td></tr
><tr id="gr_svn79_1466"

><td id="1466"><a href="#1466">1466</a></td></tr
><tr id="gr_svn79_1467"

><td id="1467"><a href="#1467">1467</a></td></tr
><tr id="gr_svn79_1468"

><td id="1468"><a href="#1468">1468</a></td></tr
><tr id="gr_svn79_1469"

><td id="1469"><a href="#1469">1469</a></td></tr
><tr id="gr_svn79_1470"

><td id="1470"><a href="#1470">1470</a></td></tr
><tr id="gr_svn79_1471"

><td id="1471"><a href="#1471">1471</a></td></tr
><tr id="gr_svn79_1472"

><td id="1472"><a href="#1472">1472</a></td></tr
><tr id="gr_svn79_1473"

><td id="1473"><a href="#1473">1473</a></td></tr
><tr id="gr_svn79_1474"

><td id="1474"><a href="#1474">1474</a></td></tr
><tr id="gr_svn79_1475"

><td id="1475"><a href="#1475">1475</a></td></tr
><tr id="gr_svn79_1476"

><td id="1476"><a href="#1476">1476</a></td></tr
><tr id="gr_svn79_1477"

><td id="1477"><a href="#1477">1477</a></td></tr
><tr id="gr_svn79_1478"

><td id="1478"><a href="#1478">1478</a></td></tr
><tr id="gr_svn79_1479"

><td id="1479"><a href="#1479">1479</a></td></tr
><tr id="gr_svn79_1480"

><td id="1480"><a href="#1480">1480</a></td></tr
><tr id="gr_svn79_1481"

><td id="1481"><a href="#1481">1481</a></td></tr
><tr id="gr_svn79_1482"

><td id="1482"><a href="#1482">1482</a></td></tr
><tr id="gr_svn79_1483"

><td id="1483"><a href="#1483">1483</a></td></tr
><tr id="gr_svn79_1484"

><td id="1484"><a href="#1484">1484</a></td></tr
><tr id="gr_svn79_1485"

><td id="1485"><a href="#1485">1485</a></td></tr
><tr id="gr_svn79_1486"

><td id="1486"><a href="#1486">1486</a></td></tr
><tr id="gr_svn79_1487"

><td id="1487"><a href="#1487">1487</a></td></tr
><tr id="gr_svn79_1488"

><td id="1488"><a href="#1488">1488</a></td></tr
><tr id="gr_svn79_1489"

><td id="1489"><a href="#1489">1489</a></td></tr
><tr id="gr_svn79_1490"

><td id="1490"><a href="#1490">1490</a></td></tr
><tr id="gr_svn79_1491"

><td id="1491"><a href="#1491">1491</a></td></tr
><tr id="gr_svn79_1492"

><td id="1492"><a href="#1492">1492</a></td></tr
><tr id="gr_svn79_1493"

><td id="1493"><a href="#1493">1493</a></td></tr
><tr id="gr_svn79_1494"

><td id="1494"><a href="#1494">1494</a></td></tr
><tr id="gr_svn79_1495"

><td id="1495"><a href="#1495">1495</a></td></tr
><tr id="gr_svn79_1496"

><td id="1496"><a href="#1496">1496</a></td></tr
><tr id="gr_svn79_1497"

><td id="1497"><a href="#1497">1497</a></td></tr
><tr id="gr_svn79_1498"

><td id="1498"><a href="#1498">1498</a></td></tr
><tr id="gr_svn79_1499"

><td id="1499"><a href="#1499">1499</a></td></tr
><tr id="gr_svn79_1500"

><td id="1500"><a href="#1500">1500</a></td></tr
><tr id="gr_svn79_1501"

><td id="1501"><a href="#1501">1501</a></td></tr
><tr id="gr_svn79_1502"

><td id="1502"><a href="#1502">1502</a></td></tr
><tr id="gr_svn79_1503"

><td id="1503"><a href="#1503">1503</a></td></tr
><tr id="gr_svn79_1504"

><td id="1504"><a href="#1504">1504</a></td></tr
><tr id="gr_svn79_1505"

><td id="1505"><a href="#1505">1505</a></td></tr
><tr id="gr_svn79_1506"

><td id="1506"><a href="#1506">1506</a></td></tr
><tr id="gr_svn79_1507"

><td id="1507"><a href="#1507">1507</a></td></tr
><tr id="gr_svn79_1508"

><td id="1508"><a href="#1508">1508</a></td></tr
><tr id="gr_svn79_1509"

><td id="1509"><a href="#1509">1509</a></td></tr
><tr id="gr_svn79_1510"

><td id="1510"><a href="#1510">1510</a></td></tr
><tr id="gr_svn79_1511"

><td id="1511"><a href="#1511">1511</a></td></tr
><tr id="gr_svn79_1512"

><td id="1512"><a href="#1512">1512</a></td></tr
><tr id="gr_svn79_1513"

><td id="1513"><a href="#1513">1513</a></td></tr
><tr id="gr_svn79_1514"

><td id="1514"><a href="#1514">1514</a></td></tr
><tr id="gr_svn79_1515"

><td id="1515"><a href="#1515">1515</a></td></tr
><tr id="gr_svn79_1516"

><td id="1516"><a href="#1516">1516</a></td></tr
><tr id="gr_svn79_1517"

><td id="1517"><a href="#1517">1517</a></td></tr
><tr id="gr_svn79_1518"

><td id="1518"><a href="#1518">1518</a></td></tr
><tr id="gr_svn79_1519"

><td id="1519"><a href="#1519">1519</a></td></tr
><tr id="gr_svn79_1520"

><td id="1520"><a href="#1520">1520</a></td></tr
><tr id="gr_svn79_1521"

><td id="1521"><a href="#1521">1521</a></td></tr
><tr id="gr_svn79_1522"

><td id="1522"><a href="#1522">1522</a></td></tr
><tr id="gr_svn79_1523"

><td id="1523"><a href="#1523">1523</a></td></tr
><tr id="gr_svn79_1524"

><td id="1524"><a href="#1524">1524</a></td></tr
><tr id="gr_svn79_1525"

><td id="1525"><a href="#1525">1525</a></td></tr
><tr id="gr_svn79_1526"

><td id="1526"><a href="#1526">1526</a></td></tr
><tr id="gr_svn79_1527"

><td id="1527"><a href="#1527">1527</a></td></tr
><tr id="gr_svn79_1528"

><td id="1528"><a href="#1528">1528</a></td></tr
><tr id="gr_svn79_1529"

><td id="1529"><a href="#1529">1529</a></td></tr
><tr id="gr_svn79_1530"

><td id="1530"><a href="#1530">1530</a></td></tr
><tr id="gr_svn79_1531"

><td id="1531"><a href="#1531">1531</a></td></tr
><tr id="gr_svn79_1532"

><td id="1532"><a href="#1532">1532</a></td></tr
><tr id="gr_svn79_1533"

><td id="1533"><a href="#1533">1533</a></td></tr
><tr id="gr_svn79_1534"

><td id="1534"><a href="#1534">1534</a></td></tr
><tr id="gr_svn79_1535"

><td id="1535"><a href="#1535">1535</a></td></tr
><tr id="gr_svn79_1536"

><td id="1536"><a href="#1536">1536</a></td></tr
><tr id="gr_svn79_1537"

><td id="1537"><a href="#1537">1537</a></td></tr
><tr id="gr_svn79_1538"

><td id="1538"><a href="#1538">1538</a></td></tr
><tr id="gr_svn79_1539"

><td id="1539"><a href="#1539">1539</a></td></tr
><tr id="gr_svn79_1540"

><td id="1540"><a href="#1540">1540</a></td></tr
><tr id="gr_svn79_1541"

><td id="1541"><a href="#1541">1541</a></td></tr
><tr id="gr_svn79_1542"

><td id="1542"><a href="#1542">1542</a></td></tr
><tr id="gr_svn79_1543"

><td id="1543"><a href="#1543">1543</a></td></tr
><tr id="gr_svn79_1544"

><td id="1544"><a href="#1544">1544</a></td></tr
><tr id="gr_svn79_1545"

><td id="1545"><a href="#1545">1545</a></td></tr
><tr id="gr_svn79_1546"

><td id="1546"><a href="#1546">1546</a></td></tr
><tr id="gr_svn79_1547"

><td id="1547"><a href="#1547">1547</a></td></tr
><tr id="gr_svn79_1548"

><td id="1548"><a href="#1548">1548</a></td></tr
><tr id="gr_svn79_1549"

><td id="1549"><a href="#1549">1549</a></td></tr
><tr id="gr_svn79_1550"

><td id="1550"><a href="#1550">1550</a></td></tr
><tr id="gr_svn79_1551"

><td id="1551"><a href="#1551">1551</a></td></tr
><tr id="gr_svn79_1552"

><td id="1552"><a href="#1552">1552</a></td></tr
><tr id="gr_svn79_1553"

><td id="1553"><a href="#1553">1553</a></td></tr
><tr id="gr_svn79_1554"

><td id="1554"><a href="#1554">1554</a></td></tr
><tr id="gr_svn79_1555"

><td id="1555"><a href="#1555">1555</a></td></tr
><tr id="gr_svn79_1556"

><td id="1556"><a href="#1556">1556</a></td></tr
><tr id="gr_svn79_1557"

><td id="1557"><a href="#1557">1557</a></td></tr
><tr id="gr_svn79_1558"

><td id="1558"><a href="#1558">1558</a></td></tr
><tr id="gr_svn79_1559"

><td id="1559"><a href="#1559">1559</a></td></tr
><tr id="gr_svn79_1560"

><td id="1560"><a href="#1560">1560</a></td></tr
><tr id="gr_svn79_1561"

><td id="1561"><a href="#1561">1561</a></td></tr
><tr id="gr_svn79_1562"

><td id="1562"><a href="#1562">1562</a></td></tr
><tr id="gr_svn79_1563"

><td id="1563"><a href="#1563">1563</a></td></tr
><tr id="gr_svn79_1564"

><td id="1564"><a href="#1564">1564</a></td></tr
><tr id="gr_svn79_1565"

><td id="1565"><a href="#1565">1565</a></td></tr
><tr id="gr_svn79_1566"

><td id="1566"><a href="#1566">1566</a></td></tr
><tr id="gr_svn79_1567"

><td id="1567"><a href="#1567">1567</a></td></tr
><tr id="gr_svn79_1568"

><td id="1568"><a href="#1568">1568</a></td></tr
><tr id="gr_svn79_1569"

><td id="1569"><a href="#1569">1569</a></td></tr
><tr id="gr_svn79_1570"

><td id="1570"><a href="#1570">1570</a></td></tr
><tr id="gr_svn79_1571"

><td id="1571"><a href="#1571">1571</a></td></tr
><tr id="gr_svn79_1572"

><td id="1572"><a href="#1572">1572</a></td></tr
><tr id="gr_svn79_1573"

><td id="1573"><a href="#1573">1573</a></td></tr
><tr id="gr_svn79_1574"

><td id="1574"><a href="#1574">1574</a></td></tr
><tr id="gr_svn79_1575"

><td id="1575"><a href="#1575">1575</a></td></tr
><tr id="gr_svn79_1576"

><td id="1576"><a href="#1576">1576</a></td></tr
><tr id="gr_svn79_1577"

><td id="1577"><a href="#1577">1577</a></td></tr
><tr id="gr_svn79_1578"

><td id="1578"><a href="#1578">1578</a></td></tr
><tr id="gr_svn79_1579"

><td id="1579"><a href="#1579">1579</a></td></tr
><tr id="gr_svn79_1580"

><td id="1580"><a href="#1580">1580</a></td></tr
><tr id="gr_svn79_1581"

><td id="1581"><a href="#1581">1581</a></td></tr
><tr id="gr_svn79_1582"

><td id="1582"><a href="#1582">1582</a></td></tr
><tr id="gr_svn79_1583"

><td id="1583"><a href="#1583">1583</a></td></tr
><tr id="gr_svn79_1584"

><td id="1584"><a href="#1584">1584</a></td></tr
><tr id="gr_svn79_1585"

><td id="1585"><a href="#1585">1585</a></td></tr
><tr id="gr_svn79_1586"

><td id="1586"><a href="#1586">1586</a></td></tr
><tr id="gr_svn79_1587"

><td id="1587"><a href="#1587">1587</a></td></tr
><tr id="gr_svn79_1588"

><td id="1588"><a href="#1588">1588</a></td></tr
><tr id="gr_svn79_1589"

><td id="1589"><a href="#1589">1589</a></td></tr
><tr id="gr_svn79_1590"

><td id="1590"><a href="#1590">1590</a></td></tr
><tr id="gr_svn79_1591"

><td id="1591"><a href="#1591">1591</a></td></tr
><tr id="gr_svn79_1592"

><td id="1592"><a href="#1592">1592</a></td></tr
><tr id="gr_svn79_1593"

><td id="1593"><a href="#1593">1593</a></td></tr
><tr id="gr_svn79_1594"

><td id="1594"><a href="#1594">1594</a></td></tr
><tr id="gr_svn79_1595"

><td id="1595"><a href="#1595">1595</a></td></tr
><tr id="gr_svn79_1596"

><td id="1596"><a href="#1596">1596</a></td></tr
><tr id="gr_svn79_1597"

><td id="1597"><a href="#1597">1597</a></td></tr
><tr id="gr_svn79_1598"

><td id="1598"><a href="#1598">1598</a></td></tr
><tr id="gr_svn79_1599"

><td id="1599"><a href="#1599">1599</a></td></tr
><tr id="gr_svn79_1600"

><td id="1600"><a href="#1600">1600</a></td></tr
><tr id="gr_svn79_1601"

><td id="1601"><a href="#1601">1601</a></td></tr
><tr id="gr_svn79_1602"

><td id="1602"><a href="#1602">1602</a></td></tr
><tr id="gr_svn79_1603"

><td id="1603"><a href="#1603">1603</a></td></tr
><tr id="gr_svn79_1604"

><td id="1604"><a href="#1604">1604</a></td></tr
><tr id="gr_svn79_1605"

><td id="1605"><a href="#1605">1605</a></td></tr
><tr id="gr_svn79_1606"

><td id="1606"><a href="#1606">1606</a></td></tr
><tr id="gr_svn79_1607"

><td id="1607"><a href="#1607">1607</a></td></tr
><tr id="gr_svn79_1608"

><td id="1608"><a href="#1608">1608</a></td></tr
><tr id="gr_svn79_1609"

><td id="1609"><a href="#1609">1609</a></td></tr
><tr id="gr_svn79_1610"

><td id="1610"><a href="#1610">1610</a></td></tr
><tr id="gr_svn79_1611"

><td id="1611"><a href="#1611">1611</a></td></tr
><tr id="gr_svn79_1612"

><td id="1612"><a href="#1612">1612</a></td></tr
><tr id="gr_svn79_1613"

><td id="1613"><a href="#1613">1613</a></td></tr
><tr id="gr_svn79_1614"

><td id="1614"><a href="#1614">1614</a></td></tr
><tr id="gr_svn79_1615"

><td id="1615"><a href="#1615">1615</a></td></tr
><tr id="gr_svn79_1616"

><td id="1616"><a href="#1616">1616</a></td></tr
><tr id="gr_svn79_1617"

><td id="1617"><a href="#1617">1617</a></td></tr
><tr id="gr_svn79_1618"

><td id="1618"><a href="#1618">1618</a></td></tr
><tr id="gr_svn79_1619"

><td id="1619"><a href="#1619">1619</a></td></tr
><tr id="gr_svn79_1620"

><td id="1620"><a href="#1620">1620</a></td></tr
><tr id="gr_svn79_1621"

><td id="1621"><a href="#1621">1621</a></td></tr
><tr id="gr_svn79_1622"

><td id="1622"><a href="#1622">1622</a></td></tr
><tr id="gr_svn79_1623"

><td id="1623"><a href="#1623">1623</a></td></tr
><tr id="gr_svn79_1624"

><td id="1624"><a href="#1624">1624</a></td></tr
><tr id="gr_svn79_1625"

><td id="1625"><a href="#1625">1625</a></td></tr
><tr id="gr_svn79_1626"

><td id="1626"><a href="#1626">1626</a></td></tr
><tr id="gr_svn79_1627"

><td id="1627"><a href="#1627">1627</a></td></tr
><tr id="gr_svn79_1628"

><td id="1628"><a href="#1628">1628</a></td></tr
><tr id="gr_svn79_1629"

><td id="1629"><a href="#1629">1629</a></td></tr
><tr id="gr_svn79_1630"

><td id="1630"><a href="#1630">1630</a></td></tr
><tr id="gr_svn79_1631"

><td id="1631"><a href="#1631">1631</a></td></tr
><tr id="gr_svn79_1632"

><td id="1632"><a href="#1632">1632</a></td></tr
><tr id="gr_svn79_1633"

><td id="1633"><a href="#1633">1633</a></td></tr
><tr id="gr_svn79_1634"

><td id="1634"><a href="#1634">1634</a></td></tr
><tr id="gr_svn79_1635"

><td id="1635"><a href="#1635">1635</a></td></tr
><tr id="gr_svn79_1636"

><td id="1636"><a href="#1636">1636</a></td></tr
><tr id="gr_svn79_1637"

><td id="1637"><a href="#1637">1637</a></td></tr
><tr id="gr_svn79_1638"

><td id="1638"><a href="#1638">1638</a></td></tr
><tr id="gr_svn79_1639"

><td id="1639"><a href="#1639">1639</a></td></tr
><tr id="gr_svn79_1640"

><td id="1640"><a href="#1640">1640</a></td></tr
><tr id="gr_svn79_1641"

><td id="1641"><a href="#1641">1641</a></td></tr
><tr id="gr_svn79_1642"

><td id="1642"><a href="#1642">1642</a></td></tr
><tr id="gr_svn79_1643"

><td id="1643"><a href="#1643">1643</a></td></tr
><tr id="gr_svn79_1644"

><td id="1644"><a href="#1644">1644</a></td></tr
><tr id="gr_svn79_1645"

><td id="1645"><a href="#1645">1645</a></td></tr
><tr id="gr_svn79_1646"

><td id="1646"><a href="#1646">1646</a></td></tr
><tr id="gr_svn79_1647"

><td id="1647"><a href="#1647">1647</a></td></tr
><tr id="gr_svn79_1648"

><td id="1648"><a href="#1648">1648</a></td></tr
><tr id="gr_svn79_1649"

><td id="1649"><a href="#1649">1649</a></td></tr
><tr id="gr_svn79_1650"

><td id="1650"><a href="#1650">1650</a></td></tr
><tr id="gr_svn79_1651"

><td id="1651"><a href="#1651">1651</a></td></tr
><tr id="gr_svn79_1652"

><td id="1652"><a href="#1652">1652</a></td></tr
><tr id="gr_svn79_1653"

><td id="1653"><a href="#1653">1653</a></td></tr
><tr id="gr_svn79_1654"

><td id="1654"><a href="#1654">1654</a></td></tr
><tr id="gr_svn79_1655"

><td id="1655"><a href="#1655">1655</a></td></tr
><tr id="gr_svn79_1656"

><td id="1656"><a href="#1656">1656</a></td></tr
><tr id="gr_svn79_1657"

><td id="1657"><a href="#1657">1657</a></td></tr
><tr id="gr_svn79_1658"

><td id="1658"><a href="#1658">1658</a></td></tr
><tr id="gr_svn79_1659"

><td id="1659"><a href="#1659">1659</a></td></tr
><tr id="gr_svn79_1660"

><td id="1660"><a href="#1660">1660</a></td></tr
><tr id="gr_svn79_1661"

><td id="1661"><a href="#1661">1661</a></td></tr
><tr id="gr_svn79_1662"

><td id="1662"><a href="#1662">1662</a></td></tr
><tr id="gr_svn79_1663"

><td id="1663"><a href="#1663">1663</a></td></tr
><tr id="gr_svn79_1664"

><td id="1664"><a href="#1664">1664</a></td></tr
><tr id="gr_svn79_1665"

><td id="1665"><a href="#1665">1665</a></td></tr
><tr id="gr_svn79_1666"

><td id="1666"><a href="#1666">1666</a></td></tr
><tr id="gr_svn79_1667"

><td id="1667"><a href="#1667">1667</a></td></tr
><tr id="gr_svn79_1668"

><td id="1668"><a href="#1668">1668</a></td></tr
><tr id="gr_svn79_1669"

><td id="1669"><a href="#1669">1669</a></td></tr
><tr id="gr_svn79_1670"

><td id="1670"><a href="#1670">1670</a></td></tr
><tr id="gr_svn79_1671"

><td id="1671"><a href="#1671">1671</a></td></tr
><tr id="gr_svn79_1672"

><td id="1672"><a href="#1672">1672</a></td></tr
><tr id="gr_svn79_1673"

><td id="1673"><a href="#1673">1673</a></td></tr
><tr id="gr_svn79_1674"

><td id="1674"><a href="#1674">1674</a></td></tr
><tr id="gr_svn79_1675"

><td id="1675"><a href="#1675">1675</a></td></tr
><tr id="gr_svn79_1676"

><td id="1676"><a href="#1676">1676</a></td></tr
><tr id="gr_svn79_1677"

><td id="1677"><a href="#1677">1677</a></td></tr
><tr id="gr_svn79_1678"

><td id="1678"><a href="#1678">1678</a></td></tr
><tr id="gr_svn79_1679"

><td id="1679"><a href="#1679">1679</a></td></tr
><tr id="gr_svn79_1680"

><td id="1680"><a href="#1680">1680</a></td></tr
><tr id="gr_svn79_1681"

><td id="1681"><a href="#1681">1681</a></td></tr
><tr id="gr_svn79_1682"

><td id="1682"><a href="#1682">1682</a></td></tr
><tr id="gr_svn79_1683"

><td id="1683"><a href="#1683">1683</a></td></tr
><tr id="gr_svn79_1684"

><td id="1684"><a href="#1684">1684</a></td></tr
><tr id="gr_svn79_1685"

><td id="1685"><a href="#1685">1685</a></td></tr
><tr id="gr_svn79_1686"

><td id="1686"><a href="#1686">1686</a></td></tr
><tr id="gr_svn79_1687"

><td id="1687"><a href="#1687">1687</a></td></tr
><tr id="gr_svn79_1688"

><td id="1688"><a href="#1688">1688</a></td></tr
><tr id="gr_svn79_1689"

><td id="1689"><a href="#1689">1689</a></td></tr
><tr id="gr_svn79_1690"

><td id="1690"><a href="#1690">1690</a></td></tr
><tr id="gr_svn79_1691"

><td id="1691"><a href="#1691">1691</a></td></tr
><tr id="gr_svn79_1692"

><td id="1692"><a href="#1692">1692</a></td></tr
><tr id="gr_svn79_1693"

><td id="1693"><a href="#1693">1693</a></td></tr
><tr id="gr_svn79_1694"

><td id="1694"><a href="#1694">1694</a></td></tr
><tr id="gr_svn79_1695"

><td id="1695"><a href="#1695">1695</a></td></tr
><tr id="gr_svn79_1696"

><td id="1696"><a href="#1696">1696</a></td></tr
><tr id="gr_svn79_1697"

><td id="1697"><a href="#1697">1697</a></td></tr
><tr id="gr_svn79_1698"

><td id="1698"><a href="#1698">1698</a></td></tr
><tr id="gr_svn79_1699"

><td id="1699"><a href="#1699">1699</a></td></tr
><tr id="gr_svn79_1700"

><td id="1700"><a href="#1700">1700</a></td></tr
><tr id="gr_svn79_1701"

><td id="1701"><a href="#1701">1701</a></td></tr
><tr id="gr_svn79_1702"

><td id="1702"><a href="#1702">1702</a></td></tr
><tr id="gr_svn79_1703"

><td id="1703"><a href="#1703">1703</a></td></tr
><tr id="gr_svn79_1704"

><td id="1704"><a href="#1704">1704</a></td></tr
><tr id="gr_svn79_1705"

><td id="1705"><a href="#1705">1705</a></td></tr
><tr id="gr_svn79_1706"

><td id="1706"><a href="#1706">1706</a></td></tr
><tr id="gr_svn79_1707"

><td id="1707"><a href="#1707">1707</a></td></tr
><tr id="gr_svn79_1708"

><td id="1708"><a href="#1708">1708</a></td></tr
><tr id="gr_svn79_1709"

><td id="1709"><a href="#1709">1709</a></td></tr
><tr id="gr_svn79_1710"

><td id="1710"><a href="#1710">1710</a></td></tr
><tr id="gr_svn79_1711"

><td id="1711"><a href="#1711">1711</a></td></tr
><tr id="gr_svn79_1712"

><td id="1712"><a href="#1712">1712</a></td></tr
><tr id="gr_svn79_1713"

><td id="1713"><a href="#1713">1713</a></td></tr
><tr id="gr_svn79_1714"

><td id="1714"><a href="#1714">1714</a></td></tr
><tr id="gr_svn79_1715"

><td id="1715"><a href="#1715">1715</a></td></tr
><tr id="gr_svn79_1716"

><td id="1716"><a href="#1716">1716</a></td></tr
><tr id="gr_svn79_1717"

><td id="1717"><a href="#1717">1717</a></td></tr
><tr id="gr_svn79_1718"

><td id="1718"><a href="#1718">1718</a></td></tr
><tr id="gr_svn79_1719"

><td id="1719"><a href="#1719">1719</a></td></tr
><tr id="gr_svn79_1720"

><td id="1720"><a href="#1720">1720</a></td></tr
><tr id="gr_svn79_1721"

><td id="1721"><a href="#1721">1721</a></td></tr
><tr id="gr_svn79_1722"

><td id="1722"><a href="#1722">1722</a></td></tr
><tr id="gr_svn79_1723"

><td id="1723"><a href="#1723">1723</a></td></tr
><tr id="gr_svn79_1724"

><td id="1724"><a href="#1724">1724</a></td></tr
><tr id="gr_svn79_1725"

><td id="1725"><a href="#1725">1725</a></td></tr
><tr id="gr_svn79_1726"

><td id="1726"><a href="#1726">1726</a></td></tr
><tr id="gr_svn79_1727"

><td id="1727"><a href="#1727">1727</a></td></tr
><tr id="gr_svn79_1728"

><td id="1728"><a href="#1728">1728</a></td></tr
><tr id="gr_svn79_1729"

><td id="1729"><a href="#1729">1729</a></td></tr
><tr id="gr_svn79_1730"

><td id="1730"><a href="#1730">1730</a></td></tr
><tr id="gr_svn79_1731"

><td id="1731"><a href="#1731">1731</a></td></tr
><tr id="gr_svn79_1732"

><td id="1732"><a href="#1732">1732</a></td></tr
><tr id="gr_svn79_1733"

><td id="1733"><a href="#1733">1733</a></td></tr
><tr id="gr_svn79_1734"

><td id="1734"><a href="#1734">1734</a></td></tr
><tr id="gr_svn79_1735"

><td id="1735"><a href="#1735">1735</a></td></tr
><tr id="gr_svn79_1736"

><td id="1736"><a href="#1736">1736</a></td></tr
><tr id="gr_svn79_1737"

><td id="1737"><a href="#1737">1737</a></td></tr
><tr id="gr_svn79_1738"

><td id="1738"><a href="#1738">1738</a></td></tr
><tr id="gr_svn79_1739"

><td id="1739"><a href="#1739">1739</a></td></tr
><tr id="gr_svn79_1740"

><td id="1740"><a href="#1740">1740</a></td></tr
><tr id="gr_svn79_1741"

><td id="1741"><a href="#1741">1741</a></td></tr
><tr id="gr_svn79_1742"

><td id="1742"><a href="#1742">1742</a></td></tr
><tr id="gr_svn79_1743"

><td id="1743"><a href="#1743">1743</a></td></tr
><tr id="gr_svn79_1744"

><td id="1744"><a href="#1744">1744</a></td></tr
><tr id="gr_svn79_1745"

><td id="1745"><a href="#1745">1745</a></td></tr
><tr id="gr_svn79_1746"

><td id="1746"><a href="#1746">1746</a></td></tr
><tr id="gr_svn79_1747"

><td id="1747"><a href="#1747">1747</a></td></tr
><tr id="gr_svn79_1748"

><td id="1748"><a href="#1748">1748</a></td></tr
><tr id="gr_svn79_1749"

><td id="1749"><a href="#1749">1749</a></td></tr
><tr id="gr_svn79_1750"

><td id="1750"><a href="#1750">1750</a></td></tr
><tr id="gr_svn79_1751"

><td id="1751"><a href="#1751">1751</a></td></tr
><tr id="gr_svn79_1752"

><td id="1752"><a href="#1752">1752</a></td></tr
><tr id="gr_svn79_1753"

><td id="1753"><a href="#1753">1753</a></td></tr
><tr id="gr_svn79_1754"

><td id="1754"><a href="#1754">1754</a></td></tr
><tr id="gr_svn79_1755"

><td id="1755"><a href="#1755">1755</a></td></tr
><tr id="gr_svn79_1756"

><td id="1756"><a href="#1756">1756</a></td></tr
><tr id="gr_svn79_1757"

><td id="1757"><a href="#1757">1757</a></td></tr
><tr id="gr_svn79_1758"

><td id="1758"><a href="#1758">1758</a></td></tr
><tr id="gr_svn79_1759"

><td id="1759"><a href="#1759">1759</a></td></tr
><tr id="gr_svn79_1760"

><td id="1760"><a href="#1760">1760</a></td></tr
><tr id="gr_svn79_1761"

><td id="1761"><a href="#1761">1761</a></td></tr
><tr id="gr_svn79_1762"

><td id="1762"><a href="#1762">1762</a></td></tr
><tr id="gr_svn79_1763"

><td id="1763"><a href="#1763">1763</a></td></tr
><tr id="gr_svn79_1764"

><td id="1764"><a href="#1764">1764</a></td></tr
><tr id="gr_svn79_1765"

><td id="1765"><a href="#1765">1765</a></td></tr
><tr id="gr_svn79_1766"

><td id="1766"><a href="#1766">1766</a></td></tr
><tr id="gr_svn79_1767"

><td id="1767"><a href="#1767">1767</a></td></tr
><tr id="gr_svn79_1768"

><td id="1768"><a href="#1768">1768</a></td></tr
><tr id="gr_svn79_1769"

><td id="1769"><a href="#1769">1769</a></td></tr
><tr id="gr_svn79_1770"

><td id="1770"><a href="#1770">1770</a></td></tr
><tr id="gr_svn79_1771"

><td id="1771"><a href="#1771">1771</a></td></tr
><tr id="gr_svn79_1772"

><td id="1772"><a href="#1772">1772</a></td></tr
><tr id="gr_svn79_1773"

><td id="1773"><a href="#1773">1773</a></td></tr
><tr id="gr_svn79_1774"

><td id="1774"><a href="#1774">1774</a></td></tr
><tr id="gr_svn79_1775"

><td id="1775"><a href="#1775">1775</a></td></tr
><tr id="gr_svn79_1776"

><td id="1776"><a href="#1776">1776</a></td></tr
><tr id="gr_svn79_1777"

><td id="1777"><a href="#1777">1777</a></td></tr
><tr id="gr_svn79_1778"

><td id="1778"><a href="#1778">1778</a></td></tr
><tr id="gr_svn79_1779"

><td id="1779"><a href="#1779">1779</a></td></tr
><tr id="gr_svn79_1780"

><td id="1780"><a href="#1780">1780</a></td></tr
><tr id="gr_svn79_1781"

><td id="1781"><a href="#1781">1781</a></td></tr
><tr id="gr_svn79_1782"

><td id="1782"><a href="#1782">1782</a></td></tr
><tr id="gr_svn79_1783"

><td id="1783"><a href="#1783">1783</a></td></tr
><tr id="gr_svn79_1784"

><td id="1784"><a href="#1784">1784</a></td></tr
><tr id="gr_svn79_1785"

><td id="1785"><a href="#1785">1785</a></td></tr
><tr id="gr_svn79_1786"

><td id="1786"><a href="#1786">1786</a></td></tr
><tr id="gr_svn79_1787"

><td id="1787"><a href="#1787">1787</a></td></tr
><tr id="gr_svn79_1788"

><td id="1788"><a href="#1788">1788</a></td></tr
><tr id="gr_svn79_1789"

><td id="1789"><a href="#1789">1789</a></td></tr
><tr id="gr_svn79_1790"

><td id="1790"><a href="#1790">1790</a></td></tr
><tr id="gr_svn79_1791"

><td id="1791"><a href="#1791">1791</a></td></tr
><tr id="gr_svn79_1792"

><td id="1792"><a href="#1792">1792</a></td></tr
><tr id="gr_svn79_1793"

><td id="1793"><a href="#1793">1793</a></td></tr
><tr id="gr_svn79_1794"

><td id="1794"><a href="#1794">1794</a></td></tr
><tr id="gr_svn79_1795"

><td id="1795"><a href="#1795">1795</a></td></tr
><tr id="gr_svn79_1796"

><td id="1796"><a href="#1796">1796</a></td></tr
><tr id="gr_svn79_1797"

><td id="1797"><a href="#1797">1797</a></td></tr
><tr id="gr_svn79_1798"

><td id="1798"><a href="#1798">1798</a></td></tr
><tr id="gr_svn79_1799"

><td id="1799"><a href="#1799">1799</a></td></tr
><tr id="gr_svn79_1800"

><td id="1800"><a href="#1800">1800</a></td></tr
><tr id="gr_svn79_1801"

><td id="1801"><a href="#1801">1801</a></td></tr
><tr id="gr_svn79_1802"

><td id="1802"><a href="#1802">1802</a></td></tr
><tr id="gr_svn79_1803"

><td id="1803"><a href="#1803">1803</a></td></tr
><tr id="gr_svn79_1804"

><td id="1804"><a href="#1804">1804</a></td></tr
><tr id="gr_svn79_1805"

><td id="1805"><a href="#1805">1805</a></td></tr
><tr id="gr_svn79_1806"

><td id="1806"><a href="#1806">1806</a></td></tr
><tr id="gr_svn79_1807"

><td id="1807"><a href="#1807">1807</a></td></tr
><tr id="gr_svn79_1808"

><td id="1808"><a href="#1808">1808</a></td></tr
><tr id="gr_svn79_1809"

><td id="1809"><a href="#1809">1809</a></td></tr
><tr id="gr_svn79_1810"

><td id="1810"><a href="#1810">1810</a></td></tr
><tr id="gr_svn79_1811"

><td id="1811"><a href="#1811">1811</a></td></tr
><tr id="gr_svn79_1812"

><td id="1812"><a href="#1812">1812</a></td></tr
><tr id="gr_svn79_1813"

><td id="1813"><a href="#1813">1813</a></td></tr
><tr id="gr_svn79_1814"

><td id="1814"><a href="#1814">1814</a></td></tr
><tr id="gr_svn79_1815"

><td id="1815"><a href="#1815">1815</a></td></tr
><tr id="gr_svn79_1816"

><td id="1816"><a href="#1816">1816</a></td></tr
><tr id="gr_svn79_1817"

><td id="1817"><a href="#1817">1817</a></td></tr
><tr id="gr_svn79_1818"

><td id="1818"><a href="#1818">1818</a></td></tr
><tr id="gr_svn79_1819"

><td id="1819"><a href="#1819">1819</a></td></tr
><tr id="gr_svn79_1820"

><td id="1820"><a href="#1820">1820</a></td></tr
><tr id="gr_svn79_1821"

><td id="1821"><a href="#1821">1821</a></td></tr
><tr id="gr_svn79_1822"

><td id="1822"><a href="#1822">1822</a></td></tr
><tr id="gr_svn79_1823"

><td id="1823"><a href="#1823">1823</a></td></tr
><tr id="gr_svn79_1824"

><td id="1824"><a href="#1824">1824</a></td></tr
><tr id="gr_svn79_1825"

><td id="1825"><a href="#1825">1825</a></td></tr
><tr id="gr_svn79_1826"

><td id="1826"><a href="#1826">1826</a></td></tr
><tr id="gr_svn79_1827"

><td id="1827"><a href="#1827">1827</a></td></tr
><tr id="gr_svn79_1828"

><td id="1828"><a href="#1828">1828</a></td></tr
><tr id="gr_svn79_1829"

><td id="1829"><a href="#1829">1829</a></td></tr
><tr id="gr_svn79_1830"

><td id="1830"><a href="#1830">1830</a></td></tr
><tr id="gr_svn79_1831"

><td id="1831"><a href="#1831">1831</a></td></tr
><tr id="gr_svn79_1832"

><td id="1832"><a href="#1832">1832</a></td></tr
><tr id="gr_svn79_1833"

><td id="1833"><a href="#1833">1833</a></td></tr
><tr id="gr_svn79_1834"

><td id="1834"><a href="#1834">1834</a></td></tr
><tr id="gr_svn79_1835"

><td id="1835"><a href="#1835">1835</a></td></tr
><tr id="gr_svn79_1836"

><td id="1836"><a href="#1836">1836</a></td></tr
><tr id="gr_svn79_1837"

><td id="1837"><a href="#1837">1837</a></td></tr
><tr id="gr_svn79_1838"

><td id="1838"><a href="#1838">1838</a></td></tr
><tr id="gr_svn79_1839"

><td id="1839"><a href="#1839">1839</a></td></tr
><tr id="gr_svn79_1840"

><td id="1840"><a href="#1840">1840</a></td></tr
><tr id="gr_svn79_1841"

><td id="1841"><a href="#1841">1841</a></td></tr
><tr id="gr_svn79_1842"

><td id="1842"><a href="#1842">1842</a></td></tr
><tr id="gr_svn79_1843"

><td id="1843"><a href="#1843">1843</a></td></tr
><tr id="gr_svn79_1844"

><td id="1844"><a href="#1844">1844</a></td></tr
><tr id="gr_svn79_1845"

><td id="1845"><a href="#1845">1845</a></td></tr
><tr id="gr_svn79_1846"

><td id="1846"><a href="#1846">1846</a></td></tr
><tr id="gr_svn79_1847"

><td id="1847"><a href="#1847">1847</a></td></tr
><tr id="gr_svn79_1848"

><td id="1848"><a href="#1848">1848</a></td></tr
><tr id="gr_svn79_1849"

><td id="1849"><a href="#1849">1849</a></td></tr
><tr id="gr_svn79_1850"

><td id="1850"><a href="#1850">1850</a></td></tr
><tr id="gr_svn79_1851"

><td id="1851"><a href="#1851">1851</a></td></tr
><tr id="gr_svn79_1852"

><td id="1852"><a href="#1852">1852</a></td></tr
><tr id="gr_svn79_1853"

><td id="1853"><a href="#1853">1853</a></td></tr
><tr id="gr_svn79_1854"

><td id="1854"><a href="#1854">1854</a></td></tr
><tr id="gr_svn79_1855"

><td id="1855"><a href="#1855">1855</a></td></tr
><tr id="gr_svn79_1856"

><td id="1856"><a href="#1856">1856</a></td></tr
><tr id="gr_svn79_1857"

><td id="1857"><a href="#1857">1857</a></td></tr
><tr id="gr_svn79_1858"

><td id="1858"><a href="#1858">1858</a></td></tr
><tr id="gr_svn79_1859"

><td id="1859"><a href="#1859">1859</a></td></tr
><tr id="gr_svn79_1860"

><td id="1860"><a href="#1860">1860</a></td></tr
><tr id="gr_svn79_1861"

><td id="1861"><a href="#1861">1861</a></td></tr
><tr id="gr_svn79_1862"

><td id="1862"><a href="#1862">1862</a></td></tr
><tr id="gr_svn79_1863"

><td id="1863"><a href="#1863">1863</a></td></tr
><tr id="gr_svn79_1864"

><td id="1864"><a href="#1864">1864</a></td></tr
><tr id="gr_svn79_1865"

><td id="1865"><a href="#1865">1865</a></td></tr
><tr id="gr_svn79_1866"

><td id="1866"><a href="#1866">1866</a></td></tr
><tr id="gr_svn79_1867"

><td id="1867"><a href="#1867">1867</a></td></tr
><tr id="gr_svn79_1868"

><td id="1868"><a href="#1868">1868</a></td></tr
><tr id="gr_svn79_1869"

><td id="1869"><a href="#1869">1869</a></td></tr
><tr id="gr_svn79_1870"

><td id="1870"><a href="#1870">1870</a></td></tr
><tr id="gr_svn79_1871"

><td id="1871"><a href="#1871">1871</a></td></tr
><tr id="gr_svn79_1872"

><td id="1872"><a href="#1872">1872</a></td></tr
><tr id="gr_svn79_1873"

><td id="1873"><a href="#1873">1873</a></td></tr
><tr id="gr_svn79_1874"

><td id="1874"><a href="#1874">1874</a></td></tr
><tr id="gr_svn79_1875"

><td id="1875"><a href="#1875">1875</a></td></tr
><tr id="gr_svn79_1876"

><td id="1876"><a href="#1876">1876</a></td></tr
><tr id="gr_svn79_1877"

><td id="1877"><a href="#1877">1877</a></td></tr
><tr id="gr_svn79_1878"

><td id="1878"><a href="#1878">1878</a></td></tr
><tr id="gr_svn79_1879"

><td id="1879"><a href="#1879">1879</a></td></tr
><tr id="gr_svn79_1880"

><td id="1880"><a href="#1880">1880</a></td></tr
><tr id="gr_svn79_1881"

><td id="1881"><a href="#1881">1881</a></td></tr
><tr id="gr_svn79_1882"

><td id="1882"><a href="#1882">1882</a></td></tr
><tr id="gr_svn79_1883"

><td id="1883"><a href="#1883">1883</a></td></tr
><tr id="gr_svn79_1884"

><td id="1884"><a href="#1884">1884</a></td></tr
><tr id="gr_svn79_1885"

><td id="1885"><a href="#1885">1885</a></td></tr
><tr id="gr_svn79_1886"

><td id="1886"><a href="#1886">1886</a></td></tr
><tr id="gr_svn79_1887"

><td id="1887"><a href="#1887">1887</a></td></tr
><tr id="gr_svn79_1888"

><td id="1888"><a href="#1888">1888</a></td></tr
><tr id="gr_svn79_1889"

><td id="1889"><a href="#1889">1889</a></td></tr
><tr id="gr_svn79_1890"

><td id="1890"><a href="#1890">1890</a></td></tr
><tr id="gr_svn79_1891"

><td id="1891"><a href="#1891">1891</a></td></tr
><tr id="gr_svn79_1892"

><td id="1892"><a href="#1892">1892</a></td></tr
><tr id="gr_svn79_1893"

><td id="1893"><a href="#1893">1893</a></td></tr
><tr id="gr_svn79_1894"

><td id="1894"><a href="#1894">1894</a></td></tr
><tr id="gr_svn79_1895"

><td id="1895"><a href="#1895">1895</a></td></tr
><tr id="gr_svn79_1896"

><td id="1896"><a href="#1896">1896</a></td></tr
><tr id="gr_svn79_1897"

><td id="1897"><a href="#1897">1897</a></td></tr
><tr id="gr_svn79_1898"

><td id="1898"><a href="#1898">1898</a></td></tr
><tr id="gr_svn79_1899"

><td id="1899"><a href="#1899">1899</a></td></tr
><tr id="gr_svn79_1900"

><td id="1900"><a href="#1900">1900</a></td></tr
><tr id="gr_svn79_1901"

><td id="1901"><a href="#1901">1901</a></td></tr
><tr id="gr_svn79_1902"

><td id="1902"><a href="#1902">1902</a></td></tr
><tr id="gr_svn79_1903"

><td id="1903"><a href="#1903">1903</a></td></tr
><tr id="gr_svn79_1904"

><td id="1904"><a href="#1904">1904</a></td></tr
><tr id="gr_svn79_1905"

><td id="1905"><a href="#1905">1905</a></td></tr
><tr id="gr_svn79_1906"

><td id="1906"><a href="#1906">1906</a></td></tr
><tr id="gr_svn79_1907"

><td id="1907"><a href="#1907">1907</a></td></tr
><tr id="gr_svn79_1908"

><td id="1908"><a href="#1908">1908</a></td></tr
><tr id="gr_svn79_1909"

><td id="1909"><a href="#1909">1909</a></td></tr
><tr id="gr_svn79_1910"

><td id="1910"><a href="#1910">1910</a></td></tr
><tr id="gr_svn79_1911"

><td id="1911"><a href="#1911">1911</a></td></tr
><tr id="gr_svn79_1912"

><td id="1912"><a href="#1912">1912</a></td></tr
><tr id="gr_svn79_1913"

><td id="1913"><a href="#1913">1913</a></td></tr
><tr id="gr_svn79_1914"

><td id="1914"><a href="#1914">1914</a></td></tr
><tr id="gr_svn79_1915"

><td id="1915"><a href="#1915">1915</a></td></tr
><tr id="gr_svn79_1916"

><td id="1916"><a href="#1916">1916</a></td></tr
><tr id="gr_svn79_1917"

><td id="1917"><a href="#1917">1917</a></td></tr
><tr id="gr_svn79_1918"

><td id="1918"><a href="#1918">1918</a></td></tr
><tr id="gr_svn79_1919"

><td id="1919"><a href="#1919">1919</a></td></tr
><tr id="gr_svn79_1920"

><td id="1920"><a href="#1920">1920</a></td></tr
><tr id="gr_svn79_1921"

><td id="1921"><a href="#1921">1921</a></td></tr
><tr id="gr_svn79_1922"

><td id="1922"><a href="#1922">1922</a></td></tr
><tr id="gr_svn79_1923"

><td id="1923"><a href="#1923">1923</a></td></tr
><tr id="gr_svn79_1924"

><td id="1924"><a href="#1924">1924</a></td></tr
><tr id="gr_svn79_1925"

><td id="1925"><a href="#1925">1925</a></td></tr
><tr id="gr_svn79_1926"

><td id="1926"><a href="#1926">1926</a></td></tr
><tr id="gr_svn79_1927"

><td id="1927"><a href="#1927">1927</a></td></tr
><tr id="gr_svn79_1928"

><td id="1928"><a href="#1928">1928</a></td></tr
><tr id="gr_svn79_1929"

><td id="1929"><a href="#1929">1929</a></td></tr
><tr id="gr_svn79_1930"

><td id="1930"><a href="#1930">1930</a></td></tr
><tr id="gr_svn79_1931"

><td id="1931"><a href="#1931">1931</a></td></tr
><tr id="gr_svn79_1932"

><td id="1932"><a href="#1932">1932</a></td></tr
><tr id="gr_svn79_1933"

><td id="1933"><a href="#1933">1933</a></td></tr
><tr id="gr_svn79_1934"

><td id="1934"><a href="#1934">1934</a></td></tr
><tr id="gr_svn79_1935"

><td id="1935"><a href="#1935">1935</a></td></tr
><tr id="gr_svn79_1936"

><td id="1936"><a href="#1936">1936</a></td></tr
><tr id="gr_svn79_1937"

><td id="1937"><a href="#1937">1937</a></td></tr
><tr id="gr_svn79_1938"

><td id="1938"><a href="#1938">1938</a></td></tr
><tr id="gr_svn79_1939"

><td id="1939"><a href="#1939">1939</a></td></tr
><tr id="gr_svn79_1940"

><td id="1940"><a href="#1940">1940</a></td></tr
><tr id="gr_svn79_1941"

><td id="1941"><a href="#1941">1941</a></td></tr
><tr id="gr_svn79_1942"

><td id="1942"><a href="#1942">1942</a></td></tr
><tr id="gr_svn79_1943"

><td id="1943"><a href="#1943">1943</a></td></tr
><tr id="gr_svn79_1944"

><td id="1944"><a href="#1944">1944</a></td></tr
><tr id="gr_svn79_1945"

><td id="1945"><a href="#1945">1945</a></td></tr
><tr id="gr_svn79_1946"

><td id="1946"><a href="#1946">1946</a></td></tr
><tr id="gr_svn79_1947"

><td id="1947"><a href="#1947">1947</a></td></tr
><tr id="gr_svn79_1948"

><td id="1948"><a href="#1948">1948</a></td></tr
><tr id="gr_svn79_1949"

><td id="1949"><a href="#1949">1949</a></td></tr
><tr id="gr_svn79_1950"

><td id="1950"><a href="#1950">1950</a></td></tr
><tr id="gr_svn79_1951"

><td id="1951"><a href="#1951">1951</a></td></tr
><tr id="gr_svn79_1952"

><td id="1952"><a href="#1952">1952</a></td></tr
><tr id="gr_svn79_1953"

><td id="1953"><a href="#1953">1953</a></td></tr
><tr id="gr_svn79_1954"

><td id="1954"><a href="#1954">1954</a></td></tr
><tr id="gr_svn79_1955"

><td id="1955"><a href="#1955">1955</a></td></tr
><tr id="gr_svn79_1956"

><td id="1956"><a href="#1956">1956</a></td></tr
><tr id="gr_svn79_1957"

><td id="1957"><a href="#1957">1957</a></td></tr
><tr id="gr_svn79_1958"

><td id="1958"><a href="#1958">1958</a></td></tr
><tr id="gr_svn79_1959"

><td id="1959"><a href="#1959">1959</a></td></tr
><tr id="gr_svn79_1960"

><td id="1960"><a href="#1960">1960</a></td></tr
><tr id="gr_svn79_1961"

><td id="1961"><a href="#1961">1961</a></td></tr
><tr id="gr_svn79_1962"

><td id="1962"><a href="#1962">1962</a></td></tr
><tr id="gr_svn79_1963"

><td id="1963"><a href="#1963">1963</a></td></tr
><tr id="gr_svn79_1964"

><td id="1964"><a href="#1964">1964</a></td></tr
><tr id="gr_svn79_1965"

><td id="1965"><a href="#1965">1965</a></td></tr
><tr id="gr_svn79_1966"

><td id="1966"><a href="#1966">1966</a></td></tr
><tr id="gr_svn79_1967"

><td id="1967"><a href="#1967">1967</a></td></tr
><tr id="gr_svn79_1968"

><td id="1968"><a href="#1968">1968</a></td></tr
><tr id="gr_svn79_1969"

><td id="1969"><a href="#1969">1969</a></td></tr
><tr id="gr_svn79_1970"

><td id="1970"><a href="#1970">1970</a></td></tr
><tr id="gr_svn79_1971"

><td id="1971"><a href="#1971">1971</a></td></tr
><tr id="gr_svn79_1972"

><td id="1972"><a href="#1972">1972</a></td></tr
><tr id="gr_svn79_1973"

><td id="1973"><a href="#1973">1973</a></td></tr
><tr id="gr_svn79_1974"

><td id="1974"><a href="#1974">1974</a></td></tr
><tr id="gr_svn79_1975"

><td id="1975"><a href="#1975">1975</a></td></tr
><tr id="gr_svn79_1976"

><td id="1976"><a href="#1976">1976</a></td></tr
><tr id="gr_svn79_1977"

><td id="1977"><a href="#1977">1977</a></td></tr
><tr id="gr_svn79_1978"

><td id="1978"><a href="#1978">1978</a></td></tr
><tr id="gr_svn79_1979"

><td id="1979"><a href="#1979">1979</a></td></tr
><tr id="gr_svn79_1980"

><td id="1980"><a href="#1980">1980</a></td></tr
><tr id="gr_svn79_1981"

><td id="1981"><a href="#1981">1981</a></td></tr
><tr id="gr_svn79_1982"

><td id="1982"><a href="#1982">1982</a></td></tr
><tr id="gr_svn79_1983"

><td id="1983"><a href="#1983">1983</a></td></tr
><tr id="gr_svn79_1984"

><td id="1984"><a href="#1984">1984</a></td></tr
><tr id="gr_svn79_1985"

><td id="1985"><a href="#1985">1985</a></td></tr
><tr id="gr_svn79_1986"

><td id="1986"><a href="#1986">1986</a></td></tr
><tr id="gr_svn79_1987"

><td id="1987"><a href="#1987">1987</a></td></tr
><tr id="gr_svn79_1988"

><td id="1988"><a href="#1988">1988</a></td></tr
><tr id="gr_svn79_1989"

><td id="1989"><a href="#1989">1989</a></td></tr
><tr id="gr_svn79_1990"

><td id="1990"><a href="#1990">1990</a></td></tr
><tr id="gr_svn79_1991"

><td id="1991"><a href="#1991">1991</a></td></tr
><tr id="gr_svn79_1992"

><td id="1992"><a href="#1992">1992</a></td></tr
><tr id="gr_svn79_1993"

><td id="1993"><a href="#1993">1993</a></td></tr
><tr id="gr_svn79_1994"

><td id="1994"><a href="#1994">1994</a></td></tr
><tr id="gr_svn79_1995"

><td id="1995"><a href="#1995">1995</a></td></tr
><tr id="gr_svn79_1996"

><td id="1996"><a href="#1996">1996</a></td></tr
><tr id="gr_svn79_1997"

><td id="1997"><a href="#1997">1997</a></td></tr
><tr id="gr_svn79_1998"

><td id="1998"><a href="#1998">1998</a></td></tr
><tr id="gr_svn79_1999"

><td id="1999"><a href="#1999">1999</a></td></tr
><tr id="gr_svn79_2000"

><td id="2000"><a href="#2000">2000</a></td></tr
><tr id="gr_svn79_2001"

><td id="2001"><a href="#2001">2001</a></td></tr
><tr id="gr_svn79_2002"

><td id="2002"><a href="#2002">2002</a></td></tr
><tr id="gr_svn79_2003"

><td id="2003"><a href="#2003">2003</a></td></tr
><tr id="gr_svn79_2004"

><td id="2004"><a href="#2004">2004</a></td></tr
><tr id="gr_svn79_2005"

><td id="2005"><a href="#2005">2005</a></td></tr
><tr id="gr_svn79_2006"

><td id="2006"><a href="#2006">2006</a></td></tr
><tr id="gr_svn79_2007"

><td id="2007"><a href="#2007">2007</a></td></tr
><tr id="gr_svn79_2008"

><td id="2008"><a href="#2008">2008</a></td></tr
><tr id="gr_svn79_2009"

><td id="2009"><a href="#2009">2009</a></td></tr
><tr id="gr_svn79_2010"

><td id="2010"><a href="#2010">2010</a></td></tr
><tr id="gr_svn79_2011"

><td id="2011"><a href="#2011">2011</a></td></tr
><tr id="gr_svn79_2012"

><td id="2012"><a href="#2012">2012</a></td></tr
><tr id="gr_svn79_2013"

><td id="2013"><a href="#2013">2013</a></td></tr
><tr id="gr_svn79_2014"

><td id="2014"><a href="#2014">2014</a></td></tr
><tr id="gr_svn79_2015"

><td id="2015"><a href="#2015">2015</a></td></tr
><tr id="gr_svn79_2016"

><td id="2016"><a href="#2016">2016</a></td></tr
><tr id="gr_svn79_2017"

><td id="2017"><a href="#2017">2017</a></td></tr
><tr id="gr_svn79_2018"

><td id="2018"><a href="#2018">2018</a></td></tr
><tr id="gr_svn79_2019"

><td id="2019"><a href="#2019">2019</a></td></tr
><tr id="gr_svn79_2020"

><td id="2020"><a href="#2020">2020</a></td></tr
><tr id="gr_svn79_2021"

><td id="2021"><a href="#2021">2021</a></td></tr
><tr id="gr_svn79_2022"

><td id="2022"><a href="#2022">2022</a></td></tr
><tr id="gr_svn79_2023"

><td id="2023"><a href="#2023">2023</a></td></tr
><tr id="gr_svn79_2024"

><td id="2024"><a href="#2024">2024</a></td></tr
><tr id="gr_svn79_2025"

><td id="2025"><a href="#2025">2025</a></td></tr
><tr id="gr_svn79_2026"

><td id="2026"><a href="#2026">2026</a></td></tr
><tr id="gr_svn79_2027"

><td id="2027"><a href="#2027">2027</a></td></tr
><tr id="gr_svn79_2028"

><td id="2028"><a href="#2028">2028</a></td></tr
><tr id="gr_svn79_2029"

><td id="2029"><a href="#2029">2029</a></td></tr
><tr id="gr_svn79_2030"

><td id="2030"><a href="#2030">2030</a></td></tr
><tr id="gr_svn79_2031"

><td id="2031"><a href="#2031">2031</a></td></tr
><tr id="gr_svn79_2032"

><td id="2032"><a href="#2032">2032</a></td></tr
><tr id="gr_svn79_2033"

><td id="2033"><a href="#2033">2033</a></td></tr
><tr id="gr_svn79_2034"

><td id="2034"><a href="#2034">2034</a></td></tr
><tr id="gr_svn79_2035"

><td id="2035"><a href="#2035">2035</a></td></tr
><tr id="gr_svn79_2036"

><td id="2036"><a href="#2036">2036</a></td></tr
><tr id="gr_svn79_2037"

><td id="2037"><a href="#2037">2037</a></td></tr
><tr id="gr_svn79_2038"

><td id="2038"><a href="#2038">2038</a></td></tr
><tr id="gr_svn79_2039"

><td id="2039"><a href="#2039">2039</a></td></tr
><tr id="gr_svn79_2040"

><td id="2040"><a href="#2040">2040</a></td></tr
><tr id="gr_svn79_2041"

><td id="2041"><a href="#2041">2041</a></td></tr
><tr id="gr_svn79_2042"

><td id="2042"><a href="#2042">2042</a></td></tr
><tr id="gr_svn79_2043"

><td id="2043"><a href="#2043">2043</a></td></tr
><tr id="gr_svn79_2044"

><td id="2044"><a href="#2044">2044</a></td></tr
><tr id="gr_svn79_2045"

><td id="2045"><a href="#2045">2045</a></td></tr
><tr id="gr_svn79_2046"

><td id="2046"><a href="#2046">2046</a></td></tr
><tr id="gr_svn79_2047"

><td id="2047"><a href="#2047">2047</a></td></tr
><tr id="gr_svn79_2048"

><td id="2048"><a href="#2048">2048</a></td></tr
><tr id="gr_svn79_2049"

><td id="2049"><a href="#2049">2049</a></td></tr
><tr id="gr_svn79_2050"

><td id="2050"><a href="#2050">2050</a></td></tr
><tr id="gr_svn79_2051"

><td id="2051"><a href="#2051">2051</a></td></tr
><tr id="gr_svn79_2052"

><td id="2052"><a href="#2052">2052</a></td></tr
><tr id="gr_svn79_2053"

><td id="2053"><a href="#2053">2053</a></td></tr
><tr id="gr_svn79_2054"

><td id="2054"><a href="#2054">2054</a></td></tr
><tr id="gr_svn79_2055"

><td id="2055"><a href="#2055">2055</a></td></tr
><tr id="gr_svn79_2056"

><td id="2056"><a href="#2056">2056</a></td></tr
><tr id="gr_svn79_2057"

><td id="2057"><a href="#2057">2057</a></td></tr
><tr id="gr_svn79_2058"

><td id="2058"><a href="#2058">2058</a></td></tr
><tr id="gr_svn79_2059"

><td id="2059"><a href="#2059">2059</a></td></tr
><tr id="gr_svn79_2060"

><td id="2060"><a href="#2060">2060</a></td></tr
><tr id="gr_svn79_2061"

><td id="2061"><a href="#2061">2061</a></td></tr
><tr id="gr_svn79_2062"

><td id="2062"><a href="#2062">2062</a></td></tr
><tr id="gr_svn79_2063"

><td id="2063"><a href="#2063">2063</a></td></tr
><tr id="gr_svn79_2064"

><td id="2064"><a href="#2064">2064</a></td></tr
><tr id="gr_svn79_2065"

><td id="2065"><a href="#2065">2065</a></td></tr
><tr id="gr_svn79_2066"

><td id="2066"><a href="#2066">2066</a></td></tr
><tr id="gr_svn79_2067"

><td id="2067"><a href="#2067">2067</a></td></tr
><tr id="gr_svn79_2068"

><td id="2068"><a href="#2068">2068</a></td></tr
><tr id="gr_svn79_2069"

><td id="2069"><a href="#2069">2069</a></td></tr
><tr id="gr_svn79_2070"

><td id="2070"><a href="#2070">2070</a></td></tr
><tr id="gr_svn79_2071"

><td id="2071"><a href="#2071">2071</a></td></tr
><tr id="gr_svn79_2072"

><td id="2072"><a href="#2072">2072</a></td></tr
><tr id="gr_svn79_2073"

><td id="2073"><a href="#2073">2073</a></td></tr
><tr id="gr_svn79_2074"

><td id="2074"><a href="#2074">2074</a></td></tr
><tr id="gr_svn79_2075"

><td id="2075"><a href="#2075">2075</a></td></tr
><tr id="gr_svn79_2076"

><td id="2076"><a href="#2076">2076</a></td></tr
><tr id="gr_svn79_2077"

><td id="2077"><a href="#2077">2077</a></td></tr
><tr id="gr_svn79_2078"

><td id="2078"><a href="#2078">2078</a></td></tr
><tr id="gr_svn79_2079"

><td id="2079"><a href="#2079">2079</a></td></tr
><tr id="gr_svn79_2080"

><td id="2080"><a href="#2080">2080</a></td></tr
><tr id="gr_svn79_2081"

><td id="2081"><a href="#2081">2081</a></td></tr
><tr id="gr_svn79_2082"

><td id="2082"><a href="#2082">2082</a></td></tr
><tr id="gr_svn79_2083"

><td id="2083"><a href="#2083">2083</a></td></tr
><tr id="gr_svn79_2084"

><td id="2084"><a href="#2084">2084</a></td></tr
><tr id="gr_svn79_2085"

><td id="2085"><a href="#2085">2085</a></td></tr
><tr id="gr_svn79_2086"

><td id="2086"><a href="#2086">2086</a></td></tr
><tr id="gr_svn79_2087"

><td id="2087"><a href="#2087">2087</a></td></tr
><tr id="gr_svn79_2088"

><td id="2088"><a href="#2088">2088</a></td></tr
><tr id="gr_svn79_2089"

><td id="2089"><a href="#2089">2089</a></td></tr
><tr id="gr_svn79_2090"

><td id="2090"><a href="#2090">2090</a></td></tr
><tr id="gr_svn79_2091"

><td id="2091"><a href="#2091">2091</a></td></tr
><tr id="gr_svn79_2092"

><td id="2092"><a href="#2092">2092</a></td></tr
><tr id="gr_svn79_2093"

><td id="2093"><a href="#2093">2093</a></td></tr
><tr id="gr_svn79_2094"

><td id="2094"><a href="#2094">2094</a></td></tr
><tr id="gr_svn79_2095"

><td id="2095"><a href="#2095">2095</a></td></tr
><tr id="gr_svn79_2096"

><td id="2096"><a href="#2096">2096</a></td></tr
><tr id="gr_svn79_2097"

><td id="2097"><a href="#2097">2097</a></td></tr
><tr id="gr_svn79_2098"

><td id="2098"><a href="#2098">2098</a></td></tr
><tr id="gr_svn79_2099"

><td id="2099"><a href="#2099">2099</a></td></tr
><tr id="gr_svn79_2100"

><td id="2100"><a href="#2100">2100</a></td></tr
><tr id="gr_svn79_2101"

><td id="2101"><a href="#2101">2101</a></td></tr
><tr id="gr_svn79_2102"

><td id="2102"><a href="#2102">2102</a></td></tr
><tr id="gr_svn79_2103"

><td id="2103"><a href="#2103">2103</a></td></tr
><tr id="gr_svn79_2104"

><td id="2104"><a href="#2104">2104</a></td></tr
><tr id="gr_svn79_2105"

><td id="2105"><a href="#2105">2105</a></td></tr
><tr id="gr_svn79_2106"

><td id="2106"><a href="#2106">2106</a></td></tr
><tr id="gr_svn79_2107"

><td id="2107"><a href="#2107">2107</a></td></tr
><tr id="gr_svn79_2108"

><td id="2108"><a href="#2108">2108</a></td></tr
><tr id="gr_svn79_2109"

><td id="2109"><a href="#2109">2109</a></td></tr
><tr id="gr_svn79_2110"

><td id="2110"><a href="#2110">2110</a></td></tr
><tr id="gr_svn79_2111"

><td id="2111"><a href="#2111">2111</a></td></tr
><tr id="gr_svn79_2112"

><td id="2112"><a href="#2112">2112</a></td></tr
><tr id="gr_svn79_2113"

><td id="2113"><a href="#2113">2113</a></td></tr
><tr id="gr_svn79_2114"

><td id="2114"><a href="#2114">2114</a></td></tr
><tr id="gr_svn79_2115"

><td id="2115"><a href="#2115">2115</a></td></tr
><tr id="gr_svn79_2116"

><td id="2116"><a href="#2116">2116</a></td></tr
><tr id="gr_svn79_2117"

><td id="2117"><a href="#2117">2117</a></td></tr
><tr id="gr_svn79_2118"

><td id="2118"><a href="#2118">2118</a></td></tr
><tr id="gr_svn79_2119"

><td id="2119"><a href="#2119">2119</a></td></tr
><tr id="gr_svn79_2120"

><td id="2120"><a href="#2120">2120</a></td></tr
><tr id="gr_svn79_2121"

><td id="2121"><a href="#2121">2121</a></td></tr
><tr id="gr_svn79_2122"

><td id="2122"><a href="#2122">2122</a></td></tr
><tr id="gr_svn79_2123"

><td id="2123"><a href="#2123">2123</a></td></tr
><tr id="gr_svn79_2124"

><td id="2124"><a href="#2124">2124</a></td></tr
><tr id="gr_svn79_2125"

><td id="2125"><a href="#2125">2125</a></td></tr
><tr id="gr_svn79_2126"

><td id="2126"><a href="#2126">2126</a></td></tr
><tr id="gr_svn79_2127"

><td id="2127"><a href="#2127">2127</a></td></tr
><tr id="gr_svn79_2128"

><td id="2128"><a href="#2128">2128</a></td></tr
><tr id="gr_svn79_2129"

><td id="2129"><a href="#2129">2129</a></td></tr
><tr id="gr_svn79_2130"

><td id="2130"><a href="#2130">2130</a></td></tr
><tr id="gr_svn79_2131"

><td id="2131"><a href="#2131">2131</a></td></tr
><tr id="gr_svn79_2132"

><td id="2132"><a href="#2132">2132</a></td></tr
><tr id="gr_svn79_2133"

><td id="2133"><a href="#2133">2133</a></td></tr
><tr id="gr_svn79_2134"

><td id="2134"><a href="#2134">2134</a></td></tr
><tr id="gr_svn79_2135"

><td id="2135"><a href="#2135">2135</a></td></tr
><tr id="gr_svn79_2136"

><td id="2136"><a href="#2136">2136</a></td></tr
><tr id="gr_svn79_2137"

><td id="2137"><a href="#2137">2137</a></td></tr
><tr id="gr_svn79_2138"

><td id="2138"><a href="#2138">2138</a></td></tr
><tr id="gr_svn79_2139"

><td id="2139"><a href="#2139">2139</a></td></tr
><tr id="gr_svn79_2140"

><td id="2140"><a href="#2140">2140</a></td></tr
><tr id="gr_svn79_2141"

><td id="2141"><a href="#2141">2141</a></td></tr
><tr id="gr_svn79_2142"

><td id="2142"><a href="#2142">2142</a></td></tr
><tr id="gr_svn79_2143"

><td id="2143"><a href="#2143">2143</a></td></tr
><tr id="gr_svn79_2144"

><td id="2144"><a href="#2144">2144</a></td></tr
><tr id="gr_svn79_2145"

><td id="2145"><a href="#2145">2145</a></td></tr
><tr id="gr_svn79_2146"

><td id="2146"><a href="#2146">2146</a></td></tr
><tr id="gr_svn79_2147"

><td id="2147"><a href="#2147">2147</a></td></tr
><tr id="gr_svn79_2148"

><td id="2148"><a href="#2148">2148</a></td></tr
><tr id="gr_svn79_2149"

><td id="2149"><a href="#2149">2149</a></td></tr
><tr id="gr_svn79_2150"

><td id="2150"><a href="#2150">2150</a></td></tr
><tr id="gr_svn79_2151"

><td id="2151"><a href="#2151">2151</a></td></tr
><tr id="gr_svn79_2152"

><td id="2152"><a href="#2152">2152</a></td></tr
><tr id="gr_svn79_2153"

><td id="2153"><a href="#2153">2153</a></td></tr
><tr id="gr_svn79_2154"

><td id="2154"><a href="#2154">2154</a></td></tr
><tr id="gr_svn79_2155"

><td id="2155"><a href="#2155">2155</a></td></tr
><tr id="gr_svn79_2156"

><td id="2156"><a href="#2156">2156</a></td></tr
><tr id="gr_svn79_2157"

><td id="2157"><a href="#2157">2157</a></td></tr
><tr id="gr_svn79_2158"

><td id="2158"><a href="#2158">2158</a></td></tr
><tr id="gr_svn79_2159"

><td id="2159"><a href="#2159">2159</a></td></tr
><tr id="gr_svn79_2160"

><td id="2160"><a href="#2160">2160</a></td></tr
><tr id="gr_svn79_2161"

><td id="2161"><a href="#2161">2161</a></td></tr
><tr id="gr_svn79_2162"

><td id="2162"><a href="#2162">2162</a></td></tr
><tr id="gr_svn79_2163"

><td id="2163"><a href="#2163">2163</a></td></tr
><tr id="gr_svn79_2164"

><td id="2164"><a href="#2164">2164</a></td></tr
><tr id="gr_svn79_2165"

><td id="2165"><a href="#2165">2165</a></td></tr
><tr id="gr_svn79_2166"

><td id="2166"><a href="#2166">2166</a></td></tr
><tr id="gr_svn79_2167"

><td id="2167"><a href="#2167">2167</a></td></tr
><tr id="gr_svn79_2168"

><td id="2168"><a href="#2168">2168</a></td></tr
><tr id="gr_svn79_2169"

><td id="2169"><a href="#2169">2169</a></td></tr
><tr id="gr_svn79_2170"

><td id="2170"><a href="#2170">2170</a></td></tr
><tr id="gr_svn79_2171"

><td id="2171"><a href="#2171">2171</a></td></tr
><tr id="gr_svn79_2172"

><td id="2172"><a href="#2172">2172</a></td></tr
><tr id="gr_svn79_2173"

><td id="2173"><a href="#2173">2173</a></td></tr
><tr id="gr_svn79_2174"

><td id="2174"><a href="#2174">2174</a></td></tr
><tr id="gr_svn79_2175"

><td id="2175"><a href="#2175">2175</a></td></tr
><tr id="gr_svn79_2176"

><td id="2176"><a href="#2176">2176</a></td></tr
><tr id="gr_svn79_2177"

><td id="2177"><a href="#2177">2177</a></td></tr
><tr id="gr_svn79_2178"

><td id="2178"><a href="#2178">2178</a></td></tr
><tr id="gr_svn79_2179"

><td id="2179"><a href="#2179">2179</a></td></tr
><tr id="gr_svn79_2180"

><td id="2180"><a href="#2180">2180</a></td></tr
><tr id="gr_svn79_2181"

><td id="2181"><a href="#2181">2181</a></td></tr
><tr id="gr_svn79_2182"

><td id="2182"><a href="#2182">2182</a></td></tr
><tr id="gr_svn79_2183"

><td id="2183"><a href="#2183">2183</a></td></tr
><tr id="gr_svn79_2184"

><td id="2184"><a href="#2184">2184</a></td></tr
><tr id="gr_svn79_2185"

><td id="2185"><a href="#2185">2185</a></td></tr
><tr id="gr_svn79_2186"

><td id="2186"><a href="#2186">2186</a></td></tr
><tr id="gr_svn79_2187"

><td id="2187"><a href="#2187">2187</a></td></tr
><tr id="gr_svn79_2188"

><td id="2188"><a href="#2188">2188</a></td></tr
><tr id="gr_svn79_2189"

><td id="2189"><a href="#2189">2189</a></td></tr
><tr id="gr_svn79_2190"

><td id="2190"><a href="#2190">2190</a></td></tr
><tr id="gr_svn79_2191"

><td id="2191"><a href="#2191">2191</a></td></tr
><tr id="gr_svn79_2192"

><td id="2192"><a href="#2192">2192</a></td></tr
><tr id="gr_svn79_2193"

><td id="2193"><a href="#2193">2193</a></td></tr
><tr id="gr_svn79_2194"

><td id="2194"><a href="#2194">2194</a></td></tr
><tr id="gr_svn79_2195"

><td id="2195"><a href="#2195">2195</a></td></tr
><tr id="gr_svn79_2196"

><td id="2196"><a href="#2196">2196</a></td></tr
><tr id="gr_svn79_2197"

><td id="2197"><a href="#2197">2197</a></td></tr
><tr id="gr_svn79_2198"

><td id="2198"><a href="#2198">2198</a></td></tr
><tr id="gr_svn79_2199"

><td id="2199"><a href="#2199">2199</a></td></tr
><tr id="gr_svn79_2200"

><td id="2200"><a href="#2200">2200</a></td></tr
><tr id="gr_svn79_2201"

><td id="2201"><a href="#2201">2201</a></td></tr
><tr id="gr_svn79_2202"

><td id="2202"><a href="#2202">2202</a></td></tr
><tr id="gr_svn79_2203"

><td id="2203"><a href="#2203">2203</a></td></tr
><tr id="gr_svn79_2204"

><td id="2204"><a href="#2204">2204</a></td></tr
><tr id="gr_svn79_2205"

><td id="2205"><a href="#2205">2205</a></td></tr
><tr id="gr_svn79_2206"

><td id="2206"><a href="#2206">2206</a></td></tr
><tr id="gr_svn79_2207"

><td id="2207"><a href="#2207">2207</a></td></tr
><tr id="gr_svn79_2208"

><td id="2208"><a href="#2208">2208</a></td></tr
><tr id="gr_svn79_2209"

><td id="2209"><a href="#2209">2209</a></td></tr
><tr id="gr_svn79_2210"

><td id="2210"><a href="#2210">2210</a></td></tr
><tr id="gr_svn79_2211"

><td id="2211"><a href="#2211">2211</a></td></tr
><tr id="gr_svn79_2212"

><td id="2212"><a href="#2212">2212</a></td></tr
><tr id="gr_svn79_2213"

><td id="2213"><a href="#2213">2213</a></td></tr
><tr id="gr_svn79_2214"

><td id="2214"><a href="#2214">2214</a></td></tr
><tr id="gr_svn79_2215"

><td id="2215"><a href="#2215">2215</a></td></tr
><tr id="gr_svn79_2216"

><td id="2216"><a href="#2216">2216</a></td></tr
><tr id="gr_svn79_2217"

><td id="2217"><a href="#2217">2217</a></td></tr
><tr id="gr_svn79_2218"

><td id="2218"><a href="#2218">2218</a></td></tr
><tr id="gr_svn79_2219"

><td id="2219"><a href="#2219">2219</a></td></tr
><tr id="gr_svn79_2220"

><td id="2220"><a href="#2220">2220</a></td></tr
><tr id="gr_svn79_2221"

><td id="2221"><a href="#2221">2221</a></td></tr
><tr id="gr_svn79_2222"

><td id="2222"><a href="#2222">2222</a></td></tr
><tr id="gr_svn79_2223"

><td id="2223"><a href="#2223">2223</a></td></tr
><tr id="gr_svn79_2224"

><td id="2224"><a href="#2224">2224</a></td></tr
><tr id="gr_svn79_2225"

><td id="2225"><a href="#2225">2225</a></td></tr
><tr id="gr_svn79_2226"

><td id="2226"><a href="#2226">2226</a></td></tr
><tr id="gr_svn79_2227"

><td id="2227"><a href="#2227">2227</a></td></tr
><tr id="gr_svn79_2228"

><td id="2228"><a href="#2228">2228</a></td></tr
><tr id="gr_svn79_2229"

><td id="2229"><a href="#2229">2229</a></td></tr
><tr id="gr_svn79_2230"

><td id="2230"><a href="#2230">2230</a></td></tr
><tr id="gr_svn79_2231"

><td id="2231"><a href="#2231">2231</a></td></tr
><tr id="gr_svn79_2232"

><td id="2232"><a href="#2232">2232</a></td></tr
><tr id="gr_svn79_2233"

><td id="2233"><a href="#2233">2233</a></td></tr
><tr id="gr_svn79_2234"

><td id="2234"><a href="#2234">2234</a></td></tr
><tr id="gr_svn79_2235"

><td id="2235"><a href="#2235">2235</a></td></tr
><tr id="gr_svn79_2236"

><td id="2236"><a href="#2236">2236</a></td></tr
><tr id="gr_svn79_2237"

><td id="2237"><a href="#2237">2237</a></td></tr
><tr id="gr_svn79_2238"

><td id="2238"><a href="#2238">2238</a></td></tr
><tr id="gr_svn79_2239"

><td id="2239"><a href="#2239">2239</a></td></tr
><tr id="gr_svn79_2240"

><td id="2240"><a href="#2240">2240</a></td></tr
><tr id="gr_svn79_2241"

><td id="2241"><a href="#2241">2241</a></td></tr
><tr id="gr_svn79_2242"

><td id="2242"><a href="#2242">2242</a></td></tr
><tr id="gr_svn79_2243"

><td id="2243"><a href="#2243">2243</a></td></tr
><tr id="gr_svn79_2244"

><td id="2244"><a href="#2244">2244</a></td></tr
><tr id="gr_svn79_2245"

><td id="2245"><a href="#2245">2245</a></td></tr
><tr id="gr_svn79_2246"

><td id="2246"><a href="#2246">2246</a></td></tr
><tr id="gr_svn79_2247"

><td id="2247"><a href="#2247">2247</a></td></tr
><tr id="gr_svn79_2248"

><td id="2248"><a href="#2248">2248</a></td></tr
><tr id="gr_svn79_2249"

><td id="2249"><a href="#2249">2249</a></td></tr
><tr id="gr_svn79_2250"

><td id="2250"><a href="#2250">2250</a></td></tr
><tr id="gr_svn79_2251"

><td id="2251"><a href="#2251">2251</a></td></tr
><tr id="gr_svn79_2252"

><td id="2252"><a href="#2252">2252</a></td></tr
><tr id="gr_svn79_2253"

><td id="2253"><a href="#2253">2253</a></td></tr
><tr id="gr_svn79_2254"

><td id="2254"><a href="#2254">2254</a></td></tr
><tr id="gr_svn79_2255"

><td id="2255"><a href="#2255">2255</a></td></tr
><tr id="gr_svn79_2256"

><td id="2256"><a href="#2256">2256</a></td></tr
><tr id="gr_svn79_2257"

><td id="2257"><a href="#2257">2257</a></td></tr
><tr id="gr_svn79_2258"

><td id="2258"><a href="#2258">2258</a></td></tr
><tr id="gr_svn79_2259"

><td id="2259"><a href="#2259">2259</a></td></tr
><tr id="gr_svn79_2260"

><td id="2260"><a href="#2260">2260</a></td></tr
><tr id="gr_svn79_2261"

><td id="2261"><a href="#2261">2261</a></td></tr
><tr id="gr_svn79_2262"

><td id="2262"><a href="#2262">2262</a></td></tr
><tr id="gr_svn79_2263"

><td id="2263"><a href="#2263">2263</a></td></tr
><tr id="gr_svn79_2264"

><td id="2264"><a href="#2264">2264</a></td></tr
><tr id="gr_svn79_2265"

><td id="2265"><a href="#2265">2265</a></td></tr
><tr id="gr_svn79_2266"

><td id="2266"><a href="#2266">2266</a></td></tr
><tr id="gr_svn79_2267"

><td id="2267"><a href="#2267">2267</a></td></tr
><tr id="gr_svn79_2268"

><td id="2268"><a href="#2268">2268</a></td></tr
><tr id="gr_svn79_2269"

><td id="2269"><a href="#2269">2269</a></td></tr
><tr id="gr_svn79_2270"

><td id="2270"><a href="#2270">2270</a></td></tr
><tr id="gr_svn79_2271"

><td id="2271"><a href="#2271">2271</a></td></tr
><tr id="gr_svn79_2272"

><td id="2272"><a href="#2272">2272</a></td></tr
><tr id="gr_svn79_2273"

><td id="2273"><a href="#2273">2273</a></td></tr
><tr id="gr_svn79_2274"

><td id="2274"><a href="#2274">2274</a></td></tr
><tr id="gr_svn79_2275"

><td id="2275"><a href="#2275">2275</a></td></tr
><tr id="gr_svn79_2276"

><td id="2276"><a href="#2276">2276</a></td></tr
><tr id="gr_svn79_2277"

><td id="2277"><a href="#2277">2277</a></td></tr
><tr id="gr_svn79_2278"

><td id="2278"><a href="#2278">2278</a></td></tr
><tr id="gr_svn79_2279"

><td id="2279"><a href="#2279">2279</a></td></tr
><tr id="gr_svn79_2280"

><td id="2280"><a href="#2280">2280</a></td></tr
><tr id="gr_svn79_2281"

><td id="2281"><a href="#2281">2281</a></td></tr
><tr id="gr_svn79_2282"

><td id="2282"><a href="#2282">2282</a></td></tr
><tr id="gr_svn79_2283"

><td id="2283"><a href="#2283">2283</a></td></tr
><tr id="gr_svn79_2284"

><td id="2284"><a href="#2284">2284</a></td></tr
><tr id="gr_svn79_2285"

><td id="2285"><a href="#2285">2285</a></td></tr
><tr id="gr_svn79_2286"

><td id="2286"><a href="#2286">2286</a></td></tr
><tr id="gr_svn79_2287"

><td id="2287"><a href="#2287">2287</a></td></tr
><tr id="gr_svn79_2288"

><td id="2288"><a href="#2288">2288</a></td></tr
><tr id="gr_svn79_2289"

><td id="2289"><a href="#2289">2289</a></td></tr
><tr id="gr_svn79_2290"

><td id="2290"><a href="#2290">2290</a></td></tr
><tr id="gr_svn79_2291"

><td id="2291"><a href="#2291">2291</a></td></tr
><tr id="gr_svn79_2292"

><td id="2292"><a href="#2292">2292</a></td></tr
><tr id="gr_svn79_2293"

><td id="2293"><a href="#2293">2293</a></td></tr
><tr id="gr_svn79_2294"

><td id="2294"><a href="#2294">2294</a></td></tr
><tr id="gr_svn79_2295"

><td id="2295"><a href="#2295">2295</a></td></tr
><tr id="gr_svn79_2296"

><td id="2296"><a href="#2296">2296</a></td></tr
><tr id="gr_svn79_2297"

><td id="2297"><a href="#2297">2297</a></td></tr
><tr id="gr_svn79_2298"

><td id="2298"><a href="#2298">2298</a></td></tr
><tr id="gr_svn79_2299"

><td id="2299"><a href="#2299">2299</a></td></tr
><tr id="gr_svn79_2300"

><td id="2300"><a href="#2300">2300</a></td></tr
><tr id="gr_svn79_2301"

><td id="2301"><a href="#2301">2301</a></td></tr
><tr id="gr_svn79_2302"

><td id="2302"><a href="#2302">2302</a></td></tr
><tr id="gr_svn79_2303"

><td id="2303"><a href="#2303">2303</a></td></tr
><tr id="gr_svn79_2304"

><td id="2304"><a href="#2304">2304</a></td></tr
><tr id="gr_svn79_2305"

><td id="2305"><a href="#2305">2305</a></td></tr
><tr id="gr_svn79_2306"

><td id="2306"><a href="#2306">2306</a></td></tr
><tr id="gr_svn79_2307"

><td id="2307"><a href="#2307">2307</a></td></tr
><tr id="gr_svn79_2308"

><td id="2308"><a href="#2308">2308</a></td></tr
><tr id="gr_svn79_2309"

><td id="2309"><a href="#2309">2309</a></td></tr
><tr id="gr_svn79_2310"

><td id="2310"><a href="#2310">2310</a></td></tr
><tr id="gr_svn79_2311"

><td id="2311"><a href="#2311">2311</a></td></tr
><tr id="gr_svn79_2312"

><td id="2312"><a href="#2312">2312</a></td></tr
><tr id="gr_svn79_2313"

><td id="2313"><a href="#2313">2313</a></td></tr
><tr id="gr_svn79_2314"

><td id="2314"><a href="#2314">2314</a></td></tr
><tr id="gr_svn79_2315"

><td id="2315"><a href="#2315">2315</a></td></tr
><tr id="gr_svn79_2316"

><td id="2316"><a href="#2316">2316</a></td></tr
><tr id="gr_svn79_2317"

><td id="2317"><a href="#2317">2317</a></td></tr
><tr id="gr_svn79_2318"

><td id="2318"><a href="#2318">2318</a></td></tr
><tr id="gr_svn79_2319"

><td id="2319"><a href="#2319">2319</a></td></tr
><tr id="gr_svn79_2320"

><td id="2320"><a href="#2320">2320</a></td></tr
><tr id="gr_svn79_2321"

><td id="2321"><a href="#2321">2321</a></td></tr
><tr id="gr_svn79_2322"

><td id="2322"><a href="#2322">2322</a></td></tr
><tr id="gr_svn79_2323"

><td id="2323"><a href="#2323">2323</a></td></tr
><tr id="gr_svn79_2324"

><td id="2324"><a href="#2324">2324</a></td></tr
><tr id="gr_svn79_2325"

><td id="2325"><a href="#2325">2325</a></td></tr
><tr id="gr_svn79_2326"

><td id="2326"><a href="#2326">2326</a></td></tr
><tr id="gr_svn79_2327"

><td id="2327"><a href="#2327">2327</a></td></tr
><tr id="gr_svn79_2328"

><td id="2328"><a href="#2328">2328</a></td></tr
><tr id="gr_svn79_2329"

><td id="2329"><a href="#2329">2329</a></td></tr
><tr id="gr_svn79_2330"

><td id="2330"><a href="#2330">2330</a></td></tr
><tr id="gr_svn79_2331"

><td id="2331"><a href="#2331">2331</a></td></tr
><tr id="gr_svn79_2332"

><td id="2332"><a href="#2332">2332</a></td></tr
><tr id="gr_svn79_2333"

><td id="2333"><a href="#2333">2333</a></td></tr
><tr id="gr_svn79_2334"

><td id="2334"><a href="#2334">2334</a></td></tr
><tr id="gr_svn79_2335"

><td id="2335"><a href="#2335">2335</a></td></tr
><tr id="gr_svn79_2336"

><td id="2336"><a href="#2336">2336</a></td></tr
><tr id="gr_svn79_2337"

><td id="2337"><a href="#2337">2337</a></td></tr
><tr id="gr_svn79_2338"

><td id="2338"><a href="#2338">2338</a></td></tr
><tr id="gr_svn79_2339"

><td id="2339"><a href="#2339">2339</a></td></tr
><tr id="gr_svn79_2340"

><td id="2340"><a href="#2340">2340</a></td></tr
><tr id="gr_svn79_2341"

><td id="2341"><a href="#2341">2341</a></td></tr
><tr id="gr_svn79_2342"

><td id="2342"><a href="#2342">2342</a></td></tr
><tr id="gr_svn79_2343"

><td id="2343"><a href="#2343">2343</a></td></tr
><tr id="gr_svn79_2344"

><td id="2344"><a href="#2344">2344</a></td></tr
><tr id="gr_svn79_2345"

><td id="2345"><a href="#2345">2345</a></td></tr
><tr id="gr_svn79_2346"

><td id="2346"><a href="#2346">2346</a></td></tr
><tr id="gr_svn79_2347"

><td id="2347"><a href="#2347">2347</a></td></tr
><tr id="gr_svn79_2348"

><td id="2348"><a href="#2348">2348</a></td></tr
><tr id="gr_svn79_2349"

><td id="2349"><a href="#2349">2349</a></td></tr
><tr id="gr_svn79_2350"

><td id="2350"><a href="#2350">2350</a></td></tr
><tr id="gr_svn79_2351"

><td id="2351"><a href="#2351">2351</a></td></tr
><tr id="gr_svn79_2352"

><td id="2352"><a href="#2352">2352</a></td></tr
><tr id="gr_svn79_2353"

><td id="2353"><a href="#2353">2353</a></td></tr
><tr id="gr_svn79_2354"

><td id="2354"><a href="#2354">2354</a></td></tr
><tr id="gr_svn79_2355"

><td id="2355"><a href="#2355">2355</a></td></tr
><tr id="gr_svn79_2356"

><td id="2356"><a href="#2356">2356</a></td></tr
><tr id="gr_svn79_2357"

><td id="2357"><a href="#2357">2357</a></td></tr
><tr id="gr_svn79_2358"

><td id="2358"><a href="#2358">2358</a></td></tr
><tr id="gr_svn79_2359"

><td id="2359"><a href="#2359">2359</a></td></tr
><tr id="gr_svn79_2360"

><td id="2360"><a href="#2360">2360</a></td></tr
><tr id="gr_svn79_2361"

><td id="2361"><a href="#2361">2361</a></td></tr
><tr id="gr_svn79_2362"

><td id="2362"><a href="#2362">2362</a></td></tr
><tr id="gr_svn79_2363"

><td id="2363"><a href="#2363">2363</a></td></tr
><tr id="gr_svn79_2364"

><td id="2364"><a href="#2364">2364</a></td></tr
><tr id="gr_svn79_2365"

><td id="2365"><a href="#2365">2365</a></td></tr
><tr id="gr_svn79_2366"

><td id="2366"><a href="#2366">2366</a></td></tr
><tr id="gr_svn79_2367"

><td id="2367"><a href="#2367">2367</a></td></tr
><tr id="gr_svn79_2368"

><td id="2368"><a href="#2368">2368</a></td></tr
><tr id="gr_svn79_2369"

><td id="2369"><a href="#2369">2369</a></td></tr
><tr id="gr_svn79_2370"

><td id="2370"><a href="#2370">2370</a></td></tr
><tr id="gr_svn79_2371"

><td id="2371"><a href="#2371">2371</a></td></tr
><tr id="gr_svn79_2372"

><td id="2372"><a href="#2372">2372</a></td></tr
><tr id="gr_svn79_2373"

><td id="2373"><a href="#2373">2373</a></td></tr
><tr id="gr_svn79_2374"

><td id="2374"><a href="#2374">2374</a></td></tr
><tr id="gr_svn79_2375"

><td id="2375"><a href="#2375">2375</a></td></tr
><tr id="gr_svn79_2376"

><td id="2376"><a href="#2376">2376</a></td></tr
><tr id="gr_svn79_2377"

><td id="2377"><a href="#2377">2377</a></td></tr
><tr id="gr_svn79_2378"

><td id="2378"><a href="#2378">2378</a></td></tr
><tr id="gr_svn79_2379"

><td id="2379"><a href="#2379">2379</a></td></tr
><tr id="gr_svn79_2380"

><td id="2380"><a href="#2380">2380</a></td></tr
><tr id="gr_svn79_2381"

><td id="2381"><a href="#2381">2381</a></td></tr
><tr id="gr_svn79_2382"

><td id="2382"><a href="#2382">2382</a></td></tr
><tr id="gr_svn79_2383"

><td id="2383"><a href="#2383">2383</a></td></tr
><tr id="gr_svn79_2384"

><td id="2384"><a href="#2384">2384</a></td></tr
><tr id="gr_svn79_2385"

><td id="2385"><a href="#2385">2385</a></td></tr
><tr id="gr_svn79_2386"

><td id="2386"><a href="#2386">2386</a></td></tr
><tr id="gr_svn79_2387"

><td id="2387"><a href="#2387">2387</a></td></tr
><tr id="gr_svn79_2388"

><td id="2388"><a href="#2388">2388</a></td></tr
><tr id="gr_svn79_2389"

><td id="2389"><a href="#2389">2389</a></td></tr
><tr id="gr_svn79_2390"

><td id="2390"><a href="#2390">2390</a></td></tr
><tr id="gr_svn79_2391"

><td id="2391"><a href="#2391">2391</a></td></tr
><tr id="gr_svn79_2392"

><td id="2392"><a href="#2392">2392</a></td></tr
><tr id="gr_svn79_2393"

><td id="2393"><a href="#2393">2393</a></td></tr
><tr id="gr_svn79_2394"

><td id="2394"><a href="#2394">2394</a></td></tr
><tr id="gr_svn79_2395"

><td id="2395"><a href="#2395">2395</a></td></tr
><tr id="gr_svn79_2396"

><td id="2396"><a href="#2396">2396</a></td></tr
><tr id="gr_svn79_2397"

><td id="2397"><a href="#2397">2397</a></td></tr
><tr id="gr_svn79_2398"

><td id="2398"><a href="#2398">2398</a></td></tr
><tr id="gr_svn79_2399"

><td id="2399"><a href="#2399">2399</a></td></tr
><tr id="gr_svn79_2400"

><td id="2400"><a href="#2400">2400</a></td></tr
><tr id="gr_svn79_2401"

><td id="2401"><a href="#2401">2401</a></td></tr
><tr id="gr_svn79_2402"

><td id="2402"><a href="#2402">2402</a></td></tr
><tr id="gr_svn79_2403"

><td id="2403"><a href="#2403">2403</a></td></tr
><tr id="gr_svn79_2404"

><td id="2404"><a href="#2404">2404</a></td></tr
><tr id="gr_svn79_2405"

><td id="2405"><a href="#2405">2405</a></td></tr
><tr id="gr_svn79_2406"

><td id="2406"><a href="#2406">2406</a></td></tr
><tr id="gr_svn79_2407"

><td id="2407"><a href="#2407">2407</a></td></tr
><tr id="gr_svn79_2408"

><td id="2408"><a href="#2408">2408</a></td></tr
><tr id="gr_svn79_2409"

><td id="2409"><a href="#2409">2409</a></td></tr
><tr id="gr_svn79_2410"

><td id="2410"><a href="#2410">2410</a></td></tr
><tr id="gr_svn79_2411"

><td id="2411"><a href="#2411">2411</a></td></tr
><tr id="gr_svn79_2412"

><td id="2412"><a href="#2412">2412</a></td></tr
><tr id="gr_svn79_2413"

><td id="2413"><a href="#2413">2413</a></td></tr
><tr id="gr_svn79_2414"

><td id="2414"><a href="#2414">2414</a></td></tr
><tr id="gr_svn79_2415"

><td id="2415"><a href="#2415">2415</a></td></tr
><tr id="gr_svn79_2416"

><td id="2416"><a href="#2416">2416</a></td></tr
><tr id="gr_svn79_2417"

><td id="2417"><a href="#2417">2417</a></td></tr
><tr id="gr_svn79_2418"

><td id="2418"><a href="#2418">2418</a></td></tr
><tr id="gr_svn79_2419"

><td id="2419"><a href="#2419">2419</a></td></tr
><tr id="gr_svn79_2420"

><td id="2420"><a href="#2420">2420</a></td></tr
><tr id="gr_svn79_2421"

><td id="2421"><a href="#2421">2421</a></td></tr
><tr id="gr_svn79_2422"

><td id="2422"><a href="#2422">2422</a></td></tr
><tr id="gr_svn79_2423"

><td id="2423"><a href="#2423">2423</a></td></tr
><tr id="gr_svn79_2424"

><td id="2424"><a href="#2424">2424</a></td></tr
><tr id="gr_svn79_2425"

><td id="2425"><a href="#2425">2425</a></td></tr
><tr id="gr_svn79_2426"

><td id="2426"><a href="#2426">2426</a></td></tr
><tr id="gr_svn79_2427"

><td id="2427"><a href="#2427">2427</a></td></tr
><tr id="gr_svn79_2428"

><td id="2428"><a href="#2428">2428</a></td></tr
><tr id="gr_svn79_2429"

><td id="2429"><a href="#2429">2429</a></td></tr
><tr id="gr_svn79_2430"

><td id="2430"><a href="#2430">2430</a></td></tr
><tr id="gr_svn79_2431"

><td id="2431"><a href="#2431">2431</a></td></tr
><tr id="gr_svn79_2432"

><td id="2432"><a href="#2432">2432</a></td></tr
><tr id="gr_svn79_2433"

><td id="2433"><a href="#2433">2433</a></td></tr
><tr id="gr_svn79_2434"

><td id="2434"><a href="#2434">2434</a></td></tr
><tr id="gr_svn79_2435"

><td id="2435"><a href="#2435">2435</a></td></tr
><tr id="gr_svn79_2436"

><td id="2436"><a href="#2436">2436</a></td></tr
><tr id="gr_svn79_2437"

><td id="2437"><a href="#2437">2437</a></td></tr
><tr id="gr_svn79_2438"

><td id="2438"><a href="#2438">2438</a></td></tr
><tr id="gr_svn79_2439"

><td id="2439"><a href="#2439">2439</a></td></tr
><tr id="gr_svn79_2440"

><td id="2440"><a href="#2440">2440</a></td></tr
><tr id="gr_svn79_2441"

><td id="2441"><a href="#2441">2441</a></td></tr
><tr id="gr_svn79_2442"

><td id="2442"><a href="#2442">2442</a></td></tr
><tr id="gr_svn79_2443"

><td id="2443"><a href="#2443">2443</a></td></tr
><tr id="gr_svn79_2444"

><td id="2444"><a href="#2444">2444</a></td></tr
><tr id="gr_svn79_2445"

><td id="2445"><a href="#2445">2445</a></td></tr
><tr id="gr_svn79_2446"

><td id="2446"><a href="#2446">2446</a></td></tr
><tr id="gr_svn79_2447"

><td id="2447"><a href="#2447">2447</a></td></tr
><tr id="gr_svn79_2448"

><td id="2448"><a href="#2448">2448</a></td></tr
><tr id="gr_svn79_2449"

><td id="2449"><a href="#2449">2449</a></td></tr
><tr id="gr_svn79_2450"

><td id="2450"><a href="#2450">2450</a></td></tr
><tr id="gr_svn79_2451"

><td id="2451"><a href="#2451">2451</a></td></tr
><tr id="gr_svn79_2452"

><td id="2452"><a href="#2452">2452</a></td></tr
><tr id="gr_svn79_2453"

><td id="2453"><a href="#2453">2453</a></td></tr
><tr id="gr_svn79_2454"

><td id="2454"><a href="#2454">2454</a></td></tr
><tr id="gr_svn79_2455"

><td id="2455"><a href="#2455">2455</a></td></tr
><tr id="gr_svn79_2456"

><td id="2456"><a href="#2456">2456</a></td></tr
><tr id="gr_svn79_2457"

><td id="2457"><a href="#2457">2457</a></td></tr
><tr id="gr_svn79_2458"

><td id="2458"><a href="#2458">2458</a></td></tr
><tr id="gr_svn79_2459"

><td id="2459"><a href="#2459">2459</a></td></tr
><tr id="gr_svn79_2460"

><td id="2460"><a href="#2460">2460</a></td></tr
><tr id="gr_svn79_2461"

><td id="2461"><a href="#2461">2461</a></td></tr
><tr id="gr_svn79_2462"

><td id="2462"><a href="#2462">2462</a></td></tr
><tr id="gr_svn79_2463"

><td id="2463"><a href="#2463">2463</a></td></tr
><tr id="gr_svn79_2464"

><td id="2464"><a href="#2464">2464</a></td></tr
><tr id="gr_svn79_2465"

><td id="2465"><a href="#2465">2465</a></td></tr
><tr id="gr_svn79_2466"

><td id="2466"><a href="#2466">2466</a></td></tr
><tr id="gr_svn79_2467"

><td id="2467"><a href="#2467">2467</a></td></tr
><tr id="gr_svn79_2468"

><td id="2468"><a href="#2468">2468</a></td></tr
><tr id="gr_svn79_2469"

><td id="2469"><a href="#2469">2469</a></td></tr
><tr id="gr_svn79_2470"

><td id="2470"><a href="#2470">2470</a></td></tr
><tr id="gr_svn79_2471"

><td id="2471"><a href="#2471">2471</a></td></tr
><tr id="gr_svn79_2472"

><td id="2472"><a href="#2472">2472</a></td></tr
><tr id="gr_svn79_2473"

><td id="2473"><a href="#2473">2473</a></td></tr
><tr id="gr_svn79_2474"

><td id="2474"><a href="#2474">2474</a></td></tr
><tr id="gr_svn79_2475"

><td id="2475"><a href="#2475">2475</a></td></tr
><tr id="gr_svn79_2476"

><td id="2476"><a href="#2476">2476</a></td></tr
><tr id="gr_svn79_2477"

><td id="2477"><a href="#2477">2477</a></td></tr
><tr id="gr_svn79_2478"

><td id="2478"><a href="#2478">2478</a></td></tr
><tr id="gr_svn79_2479"

><td id="2479"><a href="#2479">2479</a></td></tr
><tr id="gr_svn79_2480"

><td id="2480"><a href="#2480">2480</a></td></tr
><tr id="gr_svn79_2481"

><td id="2481"><a href="#2481">2481</a></td></tr
><tr id="gr_svn79_2482"

><td id="2482"><a href="#2482">2482</a></td></tr
><tr id="gr_svn79_2483"

><td id="2483"><a href="#2483">2483</a></td></tr
><tr id="gr_svn79_2484"

><td id="2484"><a href="#2484">2484</a></td></tr
><tr id="gr_svn79_2485"

><td id="2485"><a href="#2485">2485</a></td></tr
><tr id="gr_svn79_2486"

><td id="2486"><a href="#2486">2486</a></td></tr
><tr id="gr_svn79_2487"

><td id="2487"><a href="#2487">2487</a></td></tr
><tr id="gr_svn79_2488"

><td id="2488"><a href="#2488">2488</a></td></tr
><tr id="gr_svn79_2489"

><td id="2489"><a href="#2489">2489</a></td></tr
><tr id="gr_svn79_2490"

><td id="2490"><a href="#2490">2490</a></td></tr
><tr id="gr_svn79_2491"

><td id="2491"><a href="#2491">2491</a></td></tr
><tr id="gr_svn79_2492"

><td id="2492"><a href="#2492">2492</a></td></tr
><tr id="gr_svn79_2493"

><td id="2493"><a href="#2493">2493</a></td></tr
><tr id="gr_svn79_2494"

><td id="2494"><a href="#2494">2494</a></td></tr
><tr id="gr_svn79_2495"

><td id="2495"><a href="#2495">2495</a></td></tr
><tr id="gr_svn79_2496"

><td id="2496"><a href="#2496">2496</a></td></tr
><tr id="gr_svn79_2497"

><td id="2497"><a href="#2497">2497</a></td></tr
><tr id="gr_svn79_2498"

><td id="2498"><a href="#2498">2498</a></td></tr
><tr id="gr_svn79_2499"

><td id="2499"><a href="#2499">2499</a></td></tr
><tr id="gr_svn79_2500"

><td id="2500"><a href="#2500">2500</a></td></tr
><tr id="gr_svn79_2501"

><td id="2501"><a href="#2501">2501</a></td></tr
><tr id="gr_svn79_2502"

><td id="2502"><a href="#2502">2502</a></td></tr
><tr id="gr_svn79_2503"

><td id="2503"><a href="#2503">2503</a></td></tr
><tr id="gr_svn79_2504"

><td id="2504"><a href="#2504">2504</a></td></tr
><tr id="gr_svn79_2505"

><td id="2505"><a href="#2505">2505</a></td></tr
><tr id="gr_svn79_2506"

><td id="2506"><a href="#2506">2506</a></td></tr
><tr id="gr_svn79_2507"

><td id="2507"><a href="#2507">2507</a></td></tr
><tr id="gr_svn79_2508"

><td id="2508"><a href="#2508">2508</a></td></tr
><tr id="gr_svn79_2509"

><td id="2509"><a href="#2509">2509</a></td></tr
><tr id="gr_svn79_2510"

><td id="2510"><a href="#2510">2510</a></td></tr
><tr id="gr_svn79_2511"

><td id="2511"><a href="#2511">2511</a></td></tr
><tr id="gr_svn79_2512"

><td id="2512"><a href="#2512">2512</a></td></tr
><tr id="gr_svn79_2513"

><td id="2513"><a href="#2513">2513</a></td></tr
><tr id="gr_svn79_2514"

><td id="2514"><a href="#2514">2514</a></td></tr
><tr id="gr_svn79_2515"

><td id="2515"><a href="#2515">2515</a></td></tr
><tr id="gr_svn79_2516"

><td id="2516"><a href="#2516">2516</a></td></tr
><tr id="gr_svn79_2517"

><td id="2517"><a href="#2517">2517</a></td></tr
><tr id="gr_svn79_2518"

><td id="2518"><a href="#2518">2518</a></td></tr
><tr id="gr_svn79_2519"

><td id="2519"><a href="#2519">2519</a></td></tr
><tr id="gr_svn79_2520"

><td id="2520"><a href="#2520">2520</a></td></tr
><tr id="gr_svn79_2521"

><td id="2521"><a href="#2521">2521</a></td></tr
><tr id="gr_svn79_2522"

><td id="2522"><a href="#2522">2522</a></td></tr
><tr id="gr_svn79_2523"

><td id="2523"><a href="#2523">2523</a></td></tr
><tr id="gr_svn79_2524"

><td id="2524"><a href="#2524">2524</a></td></tr
><tr id="gr_svn79_2525"

><td id="2525"><a href="#2525">2525</a></td></tr
><tr id="gr_svn79_2526"

><td id="2526"><a href="#2526">2526</a></td></tr
><tr id="gr_svn79_2527"

><td id="2527"><a href="#2527">2527</a></td></tr
><tr id="gr_svn79_2528"

><td id="2528"><a href="#2528">2528</a></td></tr
><tr id="gr_svn79_2529"

><td id="2529"><a href="#2529">2529</a></td></tr
><tr id="gr_svn79_2530"

><td id="2530"><a href="#2530">2530</a></td></tr
><tr id="gr_svn79_2531"

><td id="2531"><a href="#2531">2531</a></td></tr
><tr id="gr_svn79_2532"

><td id="2532"><a href="#2532">2532</a></td></tr
><tr id="gr_svn79_2533"

><td id="2533"><a href="#2533">2533</a></td></tr
><tr id="gr_svn79_2534"

><td id="2534"><a href="#2534">2534</a></td></tr
><tr id="gr_svn79_2535"

><td id="2535"><a href="#2535">2535</a></td></tr
><tr id="gr_svn79_2536"

><td id="2536"><a href="#2536">2536</a></td></tr
><tr id="gr_svn79_2537"

><td id="2537"><a href="#2537">2537</a></td></tr
><tr id="gr_svn79_2538"

><td id="2538"><a href="#2538">2538</a></td></tr
><tr id="gr_svn79_2539"

><td id="2539"><a href="#2539">2539</a></td></tr
><tr id="gr_svn79_2540"

><td id="2540"><a href="#2540">2540</a></td></tr
><tr id="gr_svn79_2541"

><td id="2541"><a href="#2541">2541</a></td></tr
><tr id="gr_svn79_2542"

><td id="2542"><a href="#2542">2542</a></td></tr
><tr id="gr_svn79_2543"

><td id="2543"><a href="#2543">2543</a></td></tr
><tr id="gr_svn79_2544"

><td id="2544"><a href="#2544">2544</a></td></tr
><tr id="gr_svn79_2545"

><td id="2545"><a href="#2545">2545</a></td></tr
><tr id="gr_svn79_2546"

><td id="2546"><a href="#2546">2546</a></td></tr
><tr id="gr_svn79_2547"

><td id="2547"><a href="#2547">2547</a></td></tr
><tr id="gr_svn79_2548"

><td id="2548"><a href="#2548">2548</a></td></tr
><tr id="gr_svn79_2549"

><td id="2549"><a href="#2549">2549</a></td></tr
><tr id="gr_svn79_2550"

><td id="2550"><a href="#2550">2550</a></td></tr
><tr id="gr_svn79_2551"

><td id="2551"><a href="#2551">2551</a></td></tr
><tr id="gr_svn79_2552"

><td id="2552"><a href="#2552">2552</a></td></tr
><tr id="gr_svn79_2553"

><td id="2553"><a href="#2553">2553</a></td></tr
><tr id="gr_svn79_2554"

><td id="2554"><a href="#2554">2554</a></td></tr
><tr id="gr_svn79_2555"

><td id="2555"><a href="#2555">2555</a></td></tr
><tr id="gr_svn79_2556"

><td id="2556"><a href="#2556">2556</a></td></tr
><tr id="gr_svn79_2557"

><td id="2557"><a href="#2557">2557</a></td></tr
><tr id="gr_svn79_2558"

><td id="2558"><a href="#2558">2558</a></td></tr
><tr id="gr_svn79_2559"

><td id="2559"><a href="#2559">2559</a></td></tr
><tr id="gr_svn79_2560"

><td id="2560"><a href="#2560">2560</a></td></tr
><tr id="gr_svn79_2561"

><td id="2561"><a href="#2561">2561</a></td></tr
><tr id="gr_svn79_2562"

><td id="2562"><a href="#2562">2562</a></td></tr
><tr id="gr_svn79_2563"

><td id="2563"><a href="#2563">2563</a></td></tr
><tr id="gr_svn79_2564"

><td id="2564"><a href="#2564">2564</a></td></tr
><tr id="gr_svn79_2565"

><td id="2565"><a href="#2565">2565</a></td></tr
><tr id="gr_svn79_2566"

><td id="2566"><a href="#2566">2566</a></td></tr
><tr id="gr_svn79_2567"

><td id="2567"><a href="#2567">2567</a></td></tr
><tr id="gr_svn79_2568"

><td id="2568"><a href="#2568">2568</a></td></tr
><tr id="gr_svn79_2569"

><td id="2569"><a href="#2569">2569</a></td></tr
><tr id="gr_svn79_2570"

><td id="2570"><a href="#2570">2570</a></td></tr
><tr id="gr_svn79_2571"

><td id="2571"><a href="#2571">2571</a></td></tr
><tr id="gr_svn79_2572"

><td id="2572"><a href="#2572">2572</a></td></tr
><tr id="gr_svn79_2573"

><td id="2573"><a href="#2573">2573</a></td></tr
><tr id="gr_svn79_2574"

><td id="2574"><a href="#2574">2574</a></td></tr
><tr id="gr_svn79_2575"

><td id="2575"><a href="#2575">2575</a></td></tr
><tr id="gr_svn79_2576"

><td id="2576"><a href="#2576">2576</a></td></tr
><tr id="gr_svn79_2577"

><td id="2577"><a href="#2577">2577</a></td></tr
><tr id="gr_svn79_2578"

><td id="2578"><a href="#2578">2578</a></td></tr
><tr id="gr_svn79_2579"

><td id="2579"><a href="#2579">2579</a></td></tr
><tr id="gr_svn79_2580"

><td id="2580"><a href="#2580">2580</a></td></tr
><tr id="gr_svn79_2581"

><td id="2581"><a href="#2581">2581</a></td></tr
><tr id="gr_svn79_2582"

><td id="2582"><a href="#2582">2582</a></td></tr
><tr id="gr_svn79_2583"

><td id="2583"><a href="#2583">2583</a></td></tr
><tr id="gr_svn79_2584"

><td id="2584"><a href="#2584">2584</a></td></tr
><tr id="gr_svn79_2585"

><td id="2585"><a href="#2585">2585</a></td></tr
><tr id="gr_svn79_2586"

><td id="2586"><a href="#2586">2586</a></td></tr
><tr id="gr_svn79_2587"

><td id="2587"><a href="#2587">2587</a></td></tr
><tr id="gr_svn79_2588"

><td id="2588"><a href="#2588">2588</a></td></tr
><tr id="gr_svn79_2589"

><td id="2589"><a href="#2589">2589</a></td></tr
><tr id="gr_svn79_2590"

><td id="2590"><a href="#2590">2590</a></td></tr
><tr id="gr_svn79_2591"

><td id="2591"><a href="#2591">2591</a></td></tr
><tr id="gr_svn79_2592"

><td id="2592"><a href="#2592">2592</a></td></tr
><tr id="gr_svn79_2593"

><td id="2593"><a href="#2593">2593</a></td></tr
><tr id="gr_svn79_2594"

><td id="2594"><a href="#2594">2594</a></td></tr
><tr id="gr_svn79_2595"

><td id="2595"><a href="#2595">2595</a></td></tr
><tr id="gr_svn79_2596"

><td id="2596"><a href="#2596">2596</a></td></tr
><tr id="gr_svn79_2597"

><td id="2597"><a href="#2597">2597</a></td></tr
><tr id="gr_svn79_2598"

><td id="2598"><a href="#2598">2598</a></td></tr
><tr id="gr_svn79_2599"

><td id="2599"><a href="#2599">2599</a></td></tr
><tr id="gr_svn79_2600"

><td id="2600"><a href="#2600">2600</a></td></tr
><tr id="gr_svn79_2601"

><td id="2601"><a href="#2601">2601</a></td></tr
><tr id="gr_svn79_2602"

><td id="2602"><a href="#2602">2602</a></td></tr
><tr id="gr_svn79_2603"

><td id="2603"><a href="#2603">2603</a></td></tr
><tr id="gr_svn79_2604"

><td id="2604"><a href="#2604">2604</a></td></tr
><tr id="gr_svn79_2605"

><td id="2605"><a href="#2605">2605</a></td></tr
><tr id="gr_svn79_2606"

><td id="2606"><a href="#2606">2606</a></td></tr
><tr id="gr_svn79_2607"

><td id="2607"><a href="#2607">2607</a></td></tr
><tr id="gr_svn79_2608"

><td id="2608"><a href="#2608">2608</a></td></tr
><tr id="gr_svn79_2609"

><td id="2609"><a href="#2609">2609</a></td></tr
><tr id="gr_svn79_2610"

><td id="2610"><a href="#2610">2610</a></td></tr
><tr id="gr_svn79_2611"

><td id="2611"><a href="#2611">2611</a></td></tr
><tr id="gr_svn79_2612"

><td id="2612"><a href="#2612">2612</a></td></tr
><tr id="gr_svn79_2613"

><td id="2613"><a href="#2613">2613</a></td></tr
><tr id="gr_svn79_2614"

><td id="2614"><a href="#2614">2614</a></td></tr
><tr id="gr_svn79_2615"

><td id="2615"><a href="#2615">2615</a></td></tr
><tr id="gr_svn79_2616"

><td id="2616"><a href="#2616">2616</a></td></tr
><tr id="gr_svn79_2617"

><td id="2617"><a href="#2617">2617</a></td></tr
><tr id="gr_svn79_2618"

><td id="2618"><a href="#2618">2618</a></td></tr
><tr id="gr_svn79_2619"

><td id="2619"><a href="#2619">2619</a></td></tr
><tr id="gr_svn79_2620"

><td id="2620"><a href="#2620">2620</a></td></tr
><tr id="gr_svn79_2621"

><td id="2621"><a href="#2621">2621</a></td></tr
><tr id="gr_svn79_2622"

><td id="2622"><a href="#2622">2622</a></td></tr
><tr id="gr_svn79_2623"

><td id="2623"><a href="#2623">2623</a></td></tr
><tr id="gr_svn79_2624"

><td id="2624"><a href="#2624">2624</a></td></tr
><tr id="gr_svn79_2625"

><td id="2625"><a href="#2625">2625</a></td></tr
><tr id="gr_svn79_2626"

><td id="2626"><a href="#2626">2626</a></td></tr
><tr id="gr_svn79_2627"

><td id="2627"><a href="#2627">2627</a></td></tr
><tr id="gr_svn79_2628"

><td id="2628"><a href="#2628">2628</a></td></tr
><tr id="gr_svn79_2629"

><td id="2629"><a href="#2629">2629</a></td></tr
><tr id="gr_svn79_2630"

><td id="2630"><a href="#2630">2630</a></td></tr
><tr id="gr_svn79_2631"

><td id="2631"><a href="#2631">2631</a></td></tr
><tr id="gr_svn79_2632"

><td id="2632"><a href="#2632">2632</a></td></tr
><tr id="gr_svn79_2633"

><td id="2633"><a href="#2633">2633</a></td></tr
><tr id="gr_svn79_2634"

><td id="2634"><a href="#2634">2634</a></td></tr
><tr id="gr_svn79_2635"

><td id="2635"><a href="#2635">2635</a></td></tr
><tr id="gr_svn79_2636"

><td id="2636"><a href="#2636">2636</a></td></tr
><tr id="gr_svn79_2637"

><td id="2637"><a href="#2637">2637</a></td></tr
><tr id="gr_svn79_2638"

><td id="2638"><a href="#2638">2638</a></td></tr
><tr id="gr_svn79_2639"

><td id="2639"><a href="#2639">2639</a></td></tr
><tr id="gr_svn79_2640"

><td id="2640"><a href="#2640">2640</a></td></tr
><tr id="gr_svn79_2641"

><td id="2641"><a href="#2641">2641</a></td></tr
><tr id="gr_svn79_2642"

><td id="2642"><a href="#2642">2642</a></td></tr
><tr id="gr_svn79_2643"

><td id="2643"><a href="#2643">2643</a></td></tr
><tr id="gr_svn79_2644"

><td id="2644"><a href="#2644">2644</a></td></tr
><tr id="gr_svn79_2645"

><td id="2645"><a href="#2645">2645</a></td></tr
><tr id="gr_svn79_2646"

><td id="2646"><a href="#2646">2646</a></td></tr
><tr id="gr_svn79_2647"

><td id="2647"><a href="#2647">2647</a></td></tr
><tr id="gr_svn79_2648"

><td id="2648"><a href="#2648">2648</a></td></tr
><tr id="gr_svn79_2649"

><td id="2649"><a href="#2649">2649</a></td></tr
><tr id="gr_svn79_2650"

><td id="2650"><a href="#2650">2650</a></td></tr
><tr id="gr_svn79_2651"

><td id="2651"><a href="#2651">2651</a></td></tr
><tr id="gr_svn79_2652"

><td id="2652"><a href="#2652">2652</a></td></tr
><tr id="gr_svn79_2653"

><td id="2653"><a href="#2653">2653</a></td></tr
><tr id="gr_svn79_2654"

><td id="2654"><a href="#2654">2654</a></td></tr
><tr id="gr_svn79_2655"

><td id="2655"><a href="#2655">2655</a></td></tr
><tr id="gr_svn79_2656"

><td id="2656"><a href="#2656">2656</a></td></tr
><tr id="gr_svn79_2657"

><td id="2657"><a href="#2657">2657</a></td></tr
><tr id="gr_svn79_2658"

><td id="2658"><a href="#2658">2658</a></td></tr
><tr id="gr_svn79_2659"

><td id="2659"><a href="#2659">2659</a></td></tr
><tr id="gr_svn79_2660"

><td id="2660"><a href="#2660">2660</a></td></tr
><tr id="gr_svn79_2661"

><td id="2661"><a href="#2661">2661</a></td></tr
><tr id="gr_svn79_2662"

><td id="2662"><a href="#2662">2662</a></td></tr
><tr id="gr_svn79_2663"

><td id="2663"><a href="#2663">2663</a></td></tr
><tr id="gr_svn79_2664"

><td id="2664"><a href="#2664">2664</a></td></tr
><tr id="gr_svn79_2665"

><td id="2665"><a href="#2665">2665</a></td></tr
><tr id="gr_svn79_2666"

><td id="2666"><a href="#2666">2666</a></td></tr
><tr id="gr_svn79_2667"

><td id="2667"><a href="#2667">2667</a></td></tr
><tr id="gr_svn79_2668"

><td id="2668"><a href="#2668">2668</a></td></tr
><tr id="gr_svn79_2669"

><td id="2669"><a href="#2669">2669</a></td></tr
><tr id="gr_svn79_2670"

><td id="2670"><a href="#2670">2670</a></td></tr
><tr id="gr_svn79_2671"

><td id="2671"><a href="#2671">2671</a></td></tr
><tr id="gr_svn79_2672"

><td id="2672"><a href="#2672">2672</a></td></tr
><tr id="gr_svn79_2673"

><td id="2673"><a href="#2673">2673</a></td></tr
><tr id="gr_svn79_2674"

><td id="2674"><a href="#2674">2674</a></td></tr
><tr id="gr_svn79_2675"

><td id="2675"><a href="#2675">2675</a></td></tr
><tr id="gr_svn79_2676"

><td id="2676"><a href="#2676">2676</a></td></tr
><tr id="gr_svn79_2677"

><td id="2677"><a href="#2677">2677</a></td></tr
><tr id="gr_svn79_2678"

><td id="2678"><a href="#2678">2678</a></td></tr
><tr id="gr_svn79_2679"

><td id="2679"><a href="#2679">2679</a></td></tr
><tr id="gr_svn79_2680"

><td id="2680"><a href="#2680">2680</a></td></tr
><tr id="gr_svn79_2681"

><td id="2681"><a href="#2681">2681</a></td></tr
><tr id="gr_svn79_2682"

><td id="2682"><a href="#2682">2682</a></td></tr
><tr id="gr_svn79_2683"

><td id="2683"><a href="#2683">2683</a></td></tr
><tr id="gr_svn79_2684"

><td id="2684"><a href="#2684">2684</a></td></tr
><tr id="gr_svn79_2685"

><td id="2685"><a href="#2685">2685</a></td></tr
><tr id="gr_svn79_2686"

><td id="2686"><a href="#2686">2686</a></td></tr
><tr id="gr_svn79_2687"

><td id="2687"><a href="#2687">2687</a></td></tr
><tr id="gr_svn79_2688"

><td id="2688"><a href="#2688">2688</a></td></tr
><tr id="gr_svn79_2689"

><td id="2689"><a href="#2689">2689</a></td></tr
><tr id="gr_svn79_2690"

><td id="2690"><a href="#2690">2690</a></td></tr
><tr id="gr_svn79_2691"

><td id="2691"><a href="#2691">2691</a></td></tr
><tr id="gr_svn79_2692"

><td id="2692"><a href="#2692">2692</a></td></tr
><tr id="gr_svn79_2693"

><td id="2693"><a href="#2693">2693</a></td></tr
><tr id="gr_svn79_2694"

><td id="2694"><a href="#2694">2694</a></td></tr
><tr id="gr_svn79_2695"

><td id="2695"><a href="#2695">2695</a></td></tr
><tr id="gr_svn79_2696"

><td id="2696"><a href="#2696">2696</a></td></tr
><tr id="gr_svn79_2697"

><td id="2697"><a href="#2697">2697</a></td></tr
><tr id="gr_svn79_2698"

><td id="2698"><a href="#2698">2698</a></td></tr
><tr id="gr_svn79_2699"

><td id="2699"><a href="#2699">2699</a></td></tr
><tr id="gr_svn79_2700"

><td id="2700"><a href="#2700">2700</a></td></tr
><tr id="gr_svn79_2701"

><td id="2701"><a href="#2701">2701</a></td></tr
><tr id="gr_svn79_2702"

><td id="2702"><a href="#2702">2702</a></td></tr
><tr id="gr_svn79_2703"

><td id="2703"><a href="#2703">2703</a></td></tr
><tr id="gr_svn79_2704"

><td id="2704"><a href="#2704">2704</a></td></tr
><tr id="gr_svn79_2705"

><td id="2705"><a href="#2705">2705</a></td></tr
><tr id="gr_svn79_2706"

><td id="2706"><a href="#2706">2706</a></td></tr
><tr id="gr_svn79_2707"

><td id="2707"><a href="#2707">2707</a></td></tr
><tr id="gr_svn79_2708"

><td id="2708"><a href="#2708">2708</a></td></tr
><tr id="gr_svn79_2709"

><td id="2709"><a href="#2709">2709</a></td></tr
><tr id="gr_svn79_2710"

><td id="2710"><a href="#2710">2710</a></td></tr
><tr id="gr_svn79_2711"

><td id="2711"><a href="#2711">2711</a></td></tr
><tr id="gr_svn79_2712"

><td id="2712"><a href="#2712">2712</a></td></tr
><tr id="gr_svn79_2713"

><td id="2713"><a href="#2713">2713</a></td></tr
><tr id="gr_svn79_2714"

><td id="2714"><a href="#2714">2714</a></td></tr
><tr id="gr_svn79_2715"

><td id="2715"><a href="#2715">2715</a></td></tr
><tr id="gr_svn79_2716"

><td id="2716"><a href="#2716">2716</a></td></tr
><tr id="gr_svn79_2717"

><td id="2717"><a href="#2717">2717</a></td></tr
><tr id="gr_svn79_2718"

><td id="2718"><a href="#2718">2718</a></td></tr
><tr id="gr_svn79_2719"

><td id="2719"><a href="#2719">2719</a></td></tr
><tr id="gr_svn79_2720"

><td id="2720"><a href="#2720">2720</a></td></tr
><tr id="gr_svn79_2721"

><td id="2721"><a href="#2721">2721</a></td></tr
><tr id="gr_svn79_2722"

><td id="2722"><a href="#2722">2722</a></td></tr
><tr id="gr_svn79_2723"

><td id="2723"><a href="#2723">2723</a></td></tr
><tr id="gr_svn79_2724"

><td id="2724"><a href="#2724">2724</a></td></tr
><tr id="gr_svn79_2725"

><td id="2725"><a href="#2725">2725</a></td></tr
><tr id="gr_svn79_2726"

><td id="2726"><a href="#2726">2726</a></td></tr
><tr id="gr_svn79_2727"

><td id="2727"><a href="#2727">2727</a></td></tr
><tr id="gr_svn79_2728"

><td id="2728"><a href="#2728">2728</a></td></tr
><tr id="gr_svn79_2729"

><td id="2729"><a href="#2729">2729</a></td></tr
><tr id="gr_svn79_2730"

><td id="2730"><a href="#2730">2730</a></td></tr
><tr id="gr_svn79_2731"

><td id="2731"><a href="#2731">2731</a></td></tr
><tr id="gr_svn79_2732"

><td id="2732"><a href="#2732">2732</a></td></tr
><tr id="gr_svn79_2733"

><td id="2733"><a href="#2733">2733</a></td></tr
><tr id="gr_svn79_2734"

><td id="2734"><a href="#2734">2734</a></td></tr
><tr id="gr_svn79_2735"

><td id="2735"><a href="#2735">2735</a></td></tr
><tr id="gr_svn79_2736"

><td id="2736"><a href="#2736">2736</a></td></tr
><tr id="gr_svn79_2737"

><td id="2737"><a href="#2737">2737</a></td></tr
><tr id="gr_svn79_2738"

><td id="2738"><a href="#2738">2738</a></td></tr
><tr id="gr_svn79_2739"

><td id="2739"><a href="#2739">2739</a></td></tr
><tr id="gr_svn79_2740"

><td id="2740"><a href="#2740">2740</a></td></tr
><tr id="gr_svn79_2741"

><td id="2741"><a href="#2741">2741</a></td></tr
><tr id="gr_svn79_2742"

><td id="2742"><a href="#2742">2742</a></td></tr
><tr id="gr_svn79_2743"

><td id="2743"><a href="#2743">2743</a></td></tr
><tr id="gr_svn79_2744"

><td id="2744"><a href="#2744">2744</a></td></tr
><tr id="gr_svn79_2745"

><td id="2745"><a href="#2745">2745</a></td></tr
><tr id="gr_svn79_2746"

><td id="2746"><a href="#2746">2746</a></td></tr
><tr id="gr_svn79_2747"

><td id="2747"><a href="#2747">2747</a></td></tr
><tr id="gr_svn79_2748"

><td id="2748"><a href="#2748">2748</a></td></tr
><tr id="gr_svn79_2749"

><td id="2749"><a href="#2749">2749</a></td></tr
><tr id="gr_svn79_2750"

><td id="2750"><a href="#2750">2750</a></td></tr
><tr id="gr_svn79_2751"

><td id="2751"><a href="#2751">2751</a></td></tr
><tr id="gr_svn79_2752"

><td id="2752"><a href="#2752">2752</a></td></tr
><tr id="gr_svn79_2753"

><td id="2753"><a href="#2753">2753</a></td></tr
><tr id="gr_svn79_2754"

><td id="2754"><a href="#2754">2754</a></td></tr
><tr id="gr_svn79_2755"

><td id="2755"><a href="#2755">2755</a></td></tr
><tr id="gr_svn79_2756"

><td id="2756"><a href="#2756">2756</a></td></tr
><tr id="gr_svn79_2757"

><td id="2757"><a href="#2757">2757</a></td></tr
><tr id="gr_svn79_2758"

><td id="2758"><a href="#2758">2758</a></td></tr
><tr id="gr_svn79_2759"

><td id="2759"><a href="#2759">2759</a></td></tr
><tr id="gr_svn79_2760"

><td id="2760"><a href="#2760">2760</a></td></tr
><tr id="gr_svn79_2761"

><td id="2761"><a href="#2761">2761</a></td></tr
><tr id="gr_svn79_2762"

><td id="2762"><a href="#2762">2762</a></td></tr
><tr id="gr_svn79_2763"

><td id="2763"><a href="#2763">2763</a></td></tr
><tr id="gr_svn79_2764"

><td id="2764"><a href="#2764">2764</a></td></tr
><tr id="gr_svn79_2765"

><td id="2765"><a href="#2765">2765</a></td></tr
><tr id="gr_svn79_2766"

><td id="2766"><a href="#2766">2766</a></td></tr
><tr id="gr_svn79_2767"

><td id="2767"><a href="#2767">2767</a></td></tr
><tr id="gr_svn79_2768"

><td id="2768"><a href="#2768">2768</a></td></tr
><tr id="gr_svn79_2769"

><td id="2769"><a href="#2769">2769</a></td></tr
><tr id="gr_svn79_2770"

><td id="2770"><a href="#2770">2770</a></td></tr
><tr id="gr_svn79_2771"

><td id="2771"><a href="#2771">2771</a></td></tr
><tr id="gr_svn79_2772"

><td id="2772"><a href="#2772">2772</a></td></tr
><tr id="gr_svn79_2773"

><td id="2773"><a href="#2773">2773</a></td></tr
><tr id="gr_svn79_2774"

><td id="2774"><a href="#2774">2774</a></td></tr
><tr id="gr_svn79_2775"

><td id="2775"><a href="#2775">2775</a></td></tr
><tr id="gr_svn79_2776"

><td id="2776"><a href="#2776">2776</a></td></tr
><tr id="gr_svn79_2777"

><td id="2777"><a href="#2777">2777</a></td></tr
><tr id="gr_svn79_2778"

><td id="2778"><a href="#2778">2778</a></td></tr
><tr id="gr_svn79_2779"

><td id="2779"><a href="#2779">2779</a></td></tr
><tr id="gr_svn79_2780"

><td id="2780"><a href="#2780">2780</a></td></tr
><tr id="gr_svn79_2781"

><td id="2781"><a href="#2781">2781</a></td></tr
><tr id="gr_svn79_2782"

><td id="2782"><a href="#2782">2782</a></td></tr
><tr id="gr_svn79_2783"

><td id="2783"><a href="#2783">2783</a></td></tr
><tr id="gr_svn79_2784"

><td id="2784"><a href="#2784">2784</a></td></tr
><tr id="gr_svn79_2785"

><td id="2785"><a href="#2785">2785</a></td></tr
><tr id="gr_svn79_2786"

><td id="2786"><a href="#2786">2786</a></td></tr
><tr id="gr_svn79_2787"

><td id="2787"><a href="#2787">2787</a></td></tr
><tr id="gr_svn79_2788"

><td id="2788"><a href="#2788">2788</a></td></tr
><tr id="gr_svn79_2789"

><td id="2789"><a href="#2789">2789</a></td></tr
><tr id="gr_svn79_2790"

><td id="2790"><a href="#2790">2790</a></td></tr
><tr id="gr_svn79_2791"

><td id="2791"><a href="#2791">2791</a></td></tr
><tr id="gr_svn79_2792"

><td id="2792"><a href="#2792">2792</a></td></tr
><tr id="gr_svn79_2793"

><td id="2793"><a href="#2793">2793</a></td></tr
><tr id="gr_svn79_2794"

><td id="2794"><a href="#2794">2794</a></td></tr
><tr id="gr_svn79_2795"

><td id="2795"><a href="#2795">2795</a></td></tr
><tr id="gr_svn79_2796"

><td id="2796"><a href="#2796">2796</a></td></tr
><tr id="gr_svn79_2797"

><td id="2797"><a href="#2797">2797</a></td></tr
><tr id="gr_svn79_2798"

><td id="2798"><a href="#2798">2798</a></td></tr
><tr id="gr_svn79_2799"

><td id="2799"><a href="#2799">2799</a></td></tr
><tr id="gr_svn79_2800"

><td id="2800"><a href="#2800">2800</a></td></tr
><tr id="gr_svn79_2801"

><td id="2801"><a href="#2801">2801</a></td></tr
><tr id="gr_svn79_2802"

><td id="2802"><a href="#2802">2802</a></td></tr
><tr id="gr_svn79_2803"

><td id="2803"><a href="#2803">2803</a></td></tr
><tr id="gr_svn79_2804"

><td id="2804"><a href="#2804">2804</a></td></tr
><tr id="gr_svn79_2805"

><td id="2805"><a href="#2805">2805</a></td></tr
><tr id="gr_svn79_2806"

><td id="2806"><a href="#2806">2806</a></td></tr
><tr id="gr_svn79_2807"

><td id="2807"><a href="#2807">2807</a></td></tr
><tr id="gr_svn79_2808"

><td id="2808"><a href="#2808">2808</a></td></tr
><tr id="gr_svn79_2809"

><td id="2809"><a href="#2809">2809</a></td></tr
><tr id="gr_svn79_2810"

><td id="2810"><a href="#2810">2810</a></td></tr
><tr id="gr_svn79_2811"

><td id="2811"><a href="#2811">2811</a></td></tr
><tr id="gr_svn79_2812"

><td id="2812"><a href="#2812">2812</a></td></tr
><tr id="gr_svn79_2813"

><td id="2813"><a href="#2813">2813</a></td></tr
><tr id="gr_svn79_2814"

><td id="2814"><a href="#2814">2814</a></td></tr
><tr id="gr_svn79_2815"

><td id="2815"><a href="#2815">2815</a></td></tr
><tr id="gr_svn79_2816"

><td id="2816"><a href="#2816">2816</a></td></tr
><tr id="gr_svn79_2817"

><td id="2817"><a href="#2817">2817</a></td></tr
><tr id="gr_svn79_2818"

><td id="2818"><a href="#2818">2818</a></td></tr
><tr id="gr_svn79_2819"

><td id="2819"><a href="#2819">2819</a></td></tr
><tr id="gr_svn79_2820"

><td id="2820"><a href="#2820">2820</a></td></tr
><tr id="gr_svn79_2821"

><td id="2821"><a href="#2821">2821</a></td></tr
><tr id="gr_svn79_2822"

><td id="2822"><a href="#2822">2822</a></td></tr
><tr id="gr_svn79_2823"

><td id="2823"><a href="#2823">2823</a></td></tr
><tr id="gr_svn79_2824"

><td id="2824"><a href="#2824">2824</a></td></tr
><tr id="gr_svn79_2825"

><td id="2825"><a href="#2825">2825</a></td></tr
><tr id="gr_svn79_2826"

><td id="2826"><a href="#2826">2826</a></td></tr
><tr id="gr_svn79_2827"

><td id="2827"><a href="#2827">2827</a></td></tr
><tr id="gr_svn79_2828"

><td id="2828"><a href="#2828">2828</a></td></tr
><tr id="gr_svn79_2829"

><td id="2829"><a href="#2829">2829</a></td></tr
><tr id="gr_svn79_2830"

><td id="2830"><a href="#2830">2830</a></td></tr
><tr id="gr_svn79_2831"

><td id="2831"><a href="#2831">2831</a></td></tr
><tr id="gr_svn79_2832"

><td id="2832"><a href="#2832">2832</a></td></tr
><tr id="gr_svn79_2833"

><td id="2833"><a href="#2833">2833</a></td></tr
><tr id="gr_svn79_2834"

><td id="2834"><a href="#2834">2834</a></td></tr
><tr id="gr_svn79_2835"

><td id="2835"><a href="#2835">2835</a></td></tr
><tr id="gr_svn79_2836"

><td id="2836"><a href="#2836">2836</a></td></tr
><tr id="gr_svn79_2837"

><td id="2837"><a href="#2837">2837</a></td></tr
><tr id="gr_svn79_2838"

><td id="2838"><a href="#2838">2838</a></td></tr
><tr id="gr_svn79_2839"

><td id="2839"><a href="#2839">2839</a></td></tr
><tr id="gr_svn79_2840"

><td id="2840"><a href="#2840">2840</a></td></tr
><tr id="gr_svn79_2841"

><td id="2841"><a href="#2841">2841</a></td></tr
><tr id="gr_svn79_2842"

><td id="2842"><a href="#2842">2842</a></td></tr
><tr id="gr_svn79_2843"

><td id="2843"><a href="#2843">2843</a></td></tr
><tr id="gr_svn79_2844"

><td id="2844"><a href="#2844">2844</a></td></tr
><tr id="gr_svn79_2845"

><td id="2845"><a href="#2845">2845</a></td></tr
><tr id="gr_svn79_2846"

><td id="2846"><a href="#2846">2846</a></td></tr
><tr id="gr_svn79_2847"

><td id="2847"><a href="#2847">2847</a></td></tr
><tr id="gr_svn79_2848"

><td id="2848"><a href="#2848">2848</a></td></tr
><tr id="gr_svn79_2849"

><td id="2849"><a href="#2849">2849</a></td></tr
><tr id="gr_svn79_2850"

><td id="2850"><a href="#2850">2850</a></td></tr
><tr id="gr_svn79_2851"

><td id="2851"><a href="#2851">2851</a></td></tr
><tr id="gr_svn79_2852"

><td id="2852"><a href="#2852">2852</a></td></tr
><tr id="gr_svn79_2853"

><td id="2853"><a href="#2853">2853</a></td></tr
><tr id="gr_svn79_2854"

><td id="2854"><a href="#2854">2854</a></td></tr
><tr id="gr_svn79_2855"

><td id="2855"><a href="#2855">2855</a></td></tr
><tr id="gr_svn79_2856"

><td id="2856"><a href="#2856">2856</a></td></tr
><tr id="gr_svn79_2857"

><td id="2857"><a href="#2857">2857</a></td></tr
><tr id="gr_svn79_2858"

><td id="2858"><a href="#2858">2858</a></td></tr
><tr id="gr_svn79_2859"

><td id="2859"><a href="#2859">2859</a></td></tr
><tr id="gr_svn79_2860"

><td id="2860"><a href="#2860">2860</a></td></tr
><tr id="gr_svn79_2861"

><td id="2861"><a href="#2861">2861</a></td></tr
><tr id="gr_svn79_2862"

><td id="2862"><a href="#2862">2862</a></td></tr
><tr id="gr_svn79_2863"

><td id="2863"><a href="#2863">2863</a></td></tr
><tr id="gr_svn79_2864"

><td id="2864"><a href="#2864">2864</a></td></tr
><tr id="gr_svn79_2865"

><td id="2865"><a href="#2865">2865</a></td></tr
><tr id="gr_svn79_2866"

><td id="2866"><a href="#2866">2866</a></td></tr
><tr id="gr_svn79_2867"

><td id="2867"><a href="#2867">2867</a></td></tr
><tr id="gr_svn79_2868"

><td id="2868"><a href="#2868">2868</a></td></tr
><tr id="gr_svn79_2869"

><td id="2869"><a href="#2869">2869</a></td></tr
><tr id="gr_svn79_2870"

><td id="2870"><a href="#2870">2870</a></td></tr
><tr id="gr_svn79_2871"

><td id="2871"><a href="#2871">2871</a></td></tr
><tr id="gr_svn79_2872"

><td id="2872"><a href="#2872">2872</a></td></tr
><tr id="gr_svn79_2873"

><td id="2873"><a href="#2873">2873</a></td></tr
><tr id="gr_svn79_2874"

><td id="2874"><a href="#2874">2874</a></td></tr
><tr id="gr_svn79_2875"

><td id="2875"><a href="#2875">2875</a></td></tr
><tr id="gr_svn79_2876"

><td id="2876"><a href="#2876">2876</a></td></tr
><tr id="gr_svn79_2877"

><td id="2877"><a href="#2877">2877</a></td></tr
><tr id="gr_svn79_2878"

><td id="2878"><a href="#2878">2878</a></td></tr
><tr id="gr_svn79_2879"

><td id="2879"><a href="#2879">2879</a></td></tr
><tr id="gr_svn79_2880"

><td id="2880"><a href="#2880">2880</a></td></tr
><tr id="gr_svn79_2881"

><td id="2881"><a href="#2881">2881</a></td></tr
><tr id="gr_svn79_2882"

><td id="2882"><a href="#2882">2882</a></td></tr
><tr id="gr_svn79_2883"

><td id="2883"><a href="#2883">2883</a></td></tr
><tr id="gr_svn79_2884"

><td id="2884"><a href="#2884">2884</a></td></tr
><tr id="gr_svn79_2885"

><td id="2885"><a href="#2885">2885</a></td></tr
><tr id="gr_svn79_2886"

><td id="2886"><a href="#2886">2886</a></td></tr
><tr id="gr_svn79_2887"

><td id="2887"><a href="#2887">2887</a></td></tr
><tr id="gr_svn79_2888"

><td id="2888"><a href="#2888">2888</a></td></tr
><tr id="gr_svn79_2889"

><td id="2889"><a href="#2889">2889</a></td></tr
><tr id="gr_svn79_2890"

><td id="2890"><a href="#2890">2890</a></td></tr
><tr id="gr_svn79_2891"

><td id="2891"><a href="#2891">2891</a></td></tr
><tr id="gr_svn79_2892"

><td id="2892"><a href="#2892">2892</a></td></tr
><tr id="gr_svn79_2893"

><td id="2893"><a href="#2893">2893</a></td></tr
><tr id="gr_svn79_2894"

><td id="2894"><a href="#2894">2894</a></td></tr
><tr id="gr_svn79_2895"

><td id="2895"><a href="#2895">2895</a></td></tr
><tr id="gr_svn79_2896"

><td id="2896"><a href="#2896">2896</a></td></tr
><tr id="gr_svn79_2897"

><td id="2897"><a href="#2897">2897</a></td></tr
><tr id="gr_svn79_2898"

><td id="2898"><a href="#2898">2898</a></td></tr
><tr id="gr_svn79_2899"

><td id="2899"><a href="#2899">2899</a></td></tr
><tr id="gr_svn79_2900"

><td id="2900"><a href="#2900">2900</a></td></tr
><tr id="gr_svn79_2901"

><td id="2901"><a href="#2901">2901</a></td></tr
><tr id="gr_svn79_2902"

><td id="2902"><a href="#2902">2902</a></td></tr
><tr id="gr_svn79_2903"

><td id="2903"><a href="#2903">2903</a></td></tr
><tr id="gr_svn79_2904"

><td id="2904"><a href="#2904">2904</a></td></tr
><tr id="gr_svn79_2905"

><td id="2905"><a href="#2905">2905</a></td></tr
><tr id="gr_svn79_2906"

><td id="2906"><a href="#2906">2906</a></td></tr
><tr id="gr_svn79_2907"

><td id="2907"><a href="#2907">2907</a></td></tr
><tr id="gr_svn79_2908"

><td id="2908"><a href="#2908">2908</a></td></tr
><tr id="gr_svn79_2909"

><td id="2909"><a href="#2909">2909</a></td></tr
><tr id="gr_svn79_2910"

><td id="2910"><a href="#2910">2910</a></td></tr
><tr id="gr_svn79_2911"

><td id="2911"><a href="#2911">2911</a></td></tr
><tr id="gr_svn79_2912"

><td id="2912"><a href="#2912">2912</a></td></tr
><tr id="gr_svn79_2913"

><td id="2913"><a href="#2913">2913</a></td></tr
><tr id="gr_svn79_2914"

><td id="2914"><a href="#2914">2914</a></td></tr
><tr id="gr_svn79_2915"

><td id="2915"><a href="#2915">2915</a></td></tr
><tr id="gr_svn79_2916"

><td id="2916"><a href="#2916">2916</a></td></tr
><tr id="gr_svn79_2917"

><td id="2917"><a href="#2917">2917</a></td></tr
><tr id="gr_svn79_2918"

><td id="2918"><a href="#2918">2918</a></td></tr
><tr id="gr_svn79_2919"

><td id="2919"><a href="#2919">2919</a></td></tr
><tr id="gr_svn79_2920"

><td id="2920"><a href="#2920">2920</a></td></tr
><tr id="gr_svn79_2921"

><td id="2921"><a href="#2921">2921</a></td></tr
><tr id="gr_svn79_2922"

><td id="2922"><a href="#2922">2922</a></td></tr
><tr id="gr_svn79_2923"

><td id="2923"><a href="#2923">2923</a></td></tr
><tr id="gr_svn79_2924"

><td id="2924"><a href="#2924">2924</a></td></tr
><tr id="gr_svn79_2925"

><td id="2925"><a href="#2925">2925</a></td></tr
><tr id="gr_svn79_2926"

><td id="2926"><a href="#2926">2926</a></td></tr
><tr id="gr_svn79_2927"

><td id="2927"><a href="#2927">2927</a></td></tr
><tr id="gr_svn79_2928"

><td id="2928"><a href="#2928">2928</a></td></tr
><tr id="gr_svn79_2929"

><td id="2929"><a href="#2929">2929</a></td></tr
><tr id="gr_svn79_2930"

><td id="2930"><a href="#2930">2930</a></td></tr
><tr id="gr_svn79_2931"

><td id="2931"><a href="#2931">2931</a></td></tr
><tr id="gr_svn79_2932"

><td id="2932"><a href="#2932">2932</a></td></tr
><tr id="gr_svn79_2933"

><td id="2933"><a href="#2933">2933</a></td></tr
><tr id="gr_svn79_2934"

><td id="2934"><a href="#2934">2934</a></td></tr
><tr id="gr_svn79_2935"

><td id="2935"><a href="#2935">2935</a></td></tr
><tr id="gr_svn79_2936"

><td id="2936"><a href="#2936">2936</a></td></tr
><tr id="gr_svn79_2937"

><td id="2937"><a href="#2937">2937</a></td></tr
><tr id="gr_svn79_2938"

><td id="2938"><a href="#2938">2938</a></td></tr
><tr id="gr_svn79_2939"

><td id="2939"><a href="#2939">2939</a></td></tr
><tr id="gr_svn79_2940"

><td id="2940"><a href="#2940">2940</a></td></tr
><tr id="gr_svn79_2941"

><td id="2941"><a href="#2941">2941</a></td></tr
><tr id="gr_svn79_2942"

><td id="2942"><a href="#2942">2942</a></td></tr
><tr id="gr_svn79_2943"

><td id="2943"><a href="#2943">2943</a></td></tr
><tr id="gr_svn79_2944"

><td id="2944"><a href="#2944">2944</a></td></tr
><tr id="gr_svn79_2945"

><td id="2945"><a href="#2945">2945</a></td></tr
><tr id="gr_svn79_2946"

><td id="2946"><a href="#2946">2946</a></td></tr
><tr id="gr_svn79_2947"

><td id="2947"><a href="#2947">2947</a></td></tr
><tr id="gr_svn79_2948"

><td id="2948"><a href="#2948">2948</a></td></tr
><tr id="gr_svn79_2949"

><td id="2949"><a href="#2949">2949</a></td></tr
><tr id="gr_svn79_2950"

><td id="2950"><a href="#2950">2950</a></td></tr
><tr id="gr_svn79_2951"

><td id="2951"><a href="#2951">2951</a></td></tr
><tr id="gr_svn79_2952"

><td id="2952"><a href="#2952">2952</a></td></tr
><tr id="gr_svn79_2953"

><td id="2953"><a href="#2953">2953</a></td></tr
><tr id="gr_svn79_2954"

><td id="2954"><a href="#2954">2954</a></td></tr
><tr id="gr_svn79_2955"

><td id="2955"><a href="#2955">2955</a></td></tr
><tr id="gr_svn79_2956"

><td id="2956"><a href="#2956">2956</a></td></tr
><tr id="gr_svn79_2957"

><td id="2957"><a href="#2957">2957</a></td></tr
><tr id="gr_svn79_2958"

><td id="2958"><a href="#2958">2958</a></td></tr
><tr id="gr_svn79_2959"

><td id="2959"><a href="#2959">2959</a></td></tr
><tr id="gr_svn79_2960"

><td id="2960"><a href="#2960">2960</a></td></tr
><tr id="gr_svn79_2961"

><td id="2961"><a href="#2961">2961</a></td></tr
><tr id="gr_svn79_2962"

><td id="2962"><a href="#2962">2962</a></td></tr
><tr id="gr_svn79_2963"

><td id="2963"><a href="#2963">2963</a></td></tr
><tr id="gr_svn79_2964"

><td id="2964"><a href="#2964">2964</a></td></tr
><tr id="gr_svn79_2965"

><td id="2965"><a href="#2965">2965</a></td></tr
><tr id="gr_svn79_2966"

><td id="2966"><a href="#2966">2966</a></td></tr
><tr id="gr_svn79_2967"

><td id="2967"><a href="#2967">2967</a></td></tr
><tr id="gr_svn79_2968"

><td id="2968"><a href="#2968">2968</a></td></tr
><tr id="gr_svn79_2969"

><td id="2969"><a href="#2969">2969</a></td></tr
><tr id="gr_svn79_2970"

><td id="2970"><a href="#2970">2970</a></td></tr
><tr id="gr_svn79_2971"

><td id="2971"><a href="#2971">2971</a></td></tr
><tr id="gr_svn79_2972"

><td id="2972"><a href="#2972">2972</a></td></tr
><tr id="gr_svn79_2973"

><td id="2973"><a href="#2973">2973</a></td></tr
><tr id="gr_svn79_2974"

><td id="2974"><a href="#2974">2974</a></td></tr
><tr id="gr_svn79_2975"

><td id="2975"><a href="#2975">2975</a></td></tr
><tr id="gr_svn79_2976"

><td id="2976"><a href="#2976">2976</a></td></tr
><tr id="gr_svn79_2977"

><td id="2977"><a href="#2977">2977</a></td></tr
><tr id="gr_svn79_2978"

><td id="2978"><a href="#2978">2978</a></td></tr
><tr id="gr_svn79_2979"

><td id="2979"><a href="#2979">2979</a></td></tr
><tr id="gr_svn79_2980"

><td id="2980"><a href="#2980">2980</a></td></tr
><tr id="gr_svn79_2981"

><td id="2981"><a href="#2981">2981</a></td></tr
><tr id="gr_svn79_2982"

><td id="2982"><a href="#2982">2982</a></td></tr
><tr id="gr_svn79_2983"

><td id="2983"><a href="#2983">2983</a></td></tr
><tr id="gr_svn79_2984"

><td id="2984"><a href="#2984">2984</a></td></tr
><tr id="gr_svn79_2985"

><td id="2985"><a href="#2985">2985</a></td></tr
><tr id="gr_svn79_2986"

><td id="2986"><a href="#2986">2986</a></td></tr
><tr id="gr_svn79_2987"

><td id="2987"><a href="#2987">2987</a></td></tr
><tr id="gr_svn79_2988"

><td id="2988"><a href="#2988">2988</a></td></tr
><tr id="gr_svn79_2989"

><td id="2989"><a href="#2989">2989</a></td></tr
><tr id="gr_svn79_2990"

><td id="2990"><a href="#2990">2990</a></td></tr
><tr id="gr_svn79_2991"

><td id="2991"><a href="#2991">2991</a></td></tr
><tr id="gr_svn79_2992"

><td id="2992"><a href="#2992">2992</a></td></tr
><tr id="gr_svn79_2993"

><td id="2993"><a href="#2993">2993</a></td></tr
><tr id="gr_svn79_2994"

><td id="2994"><a href="#2994">2994</a></td></tr
><tr id="gr_svn79_2995"

><td id="2995"><a href="#2995">2995</a></td></tr
><tr id="gr_svn79_2996"

><td id="2996"><a href="#2996">2996</a></td></tr
><tr id="gr_svn79_2997"

><td id="2997"><a href="#2997">2997</a></td></tr
><tr id="gr_svn79_2998"

><td id="2998"><a href="#2998">2998</a></td></tr
><tr id="gr_svn79_2999"

><td id="2999"><a href="#2999">2999</a></td></tr
><tr id="gr_svn79_3000"

><td id="3000"><a href="#3000">3000</a></td></tr
><tr id="gr_svn79_3001"

><td id="3001"><a href="#3001">3001</a></td></tr
><tr id="gr_svn79_3002"

><td id="3002"><a href="#3002">3002</a></td></tr
><tr id="gr_svn79_3003"

><td id="3003"><a href="#3003">3003</a></td></tr
><tr id="gr_svn79_3004"

><td id="3004"><a href="#3004">3004</a></td></tr
><tr id="gr_svn79_3005"

><td id="3005"><a href="#3005">3005</a></td></tr
><tr id="gr_svn79_3006"

><td id="3006"><a href="#3006">3006</a></td></tr
><tr id="gr_svn79_3007"

><td id="3007"><a href="#3007">3007</a></td></tr
><tr id="gr_svn79_3008"

><td id="3008"><a href="#3008">3008</a></td></tr
><tr id="gr_svn79_3009"

><td id="3009"><a href="#3009">3009</a></td></tr
><tr id="gr_svn79_3010"

><td id="3010"><a href="#3010">3010</a></td></tr
><tr id="gr_svn79_3011"

><td id="3011"><a href="#3011">3011</a></td></tr
><tr id="gr_svn79_3012"

><td id="3012"><a href="#3012">3012</a></td></tr
><tr id="gr_svn79_3013"

><td id="3013"><a href="#3013">3013</a></td></tr
><tr id="gr_svn79_3014"

><td id="3014"><a href="#3014">3014</a></td></tr
><tr id="gr_svn79_3015"

><td id="3015"><a href="#3015">3015</a></td></tr
><tr id="gr_svn79_3016"

><td id="3016"><a href="#3016">3016</a></td></tr
><tr id="gr_svn79_3017"

><td id="3017"><a href="#3017">3017</a></td></tr
><tr id="gr_svn79_3018"

><td id="3018"><a href="#3018">3018</a></td></tr
><tr id="gr_svn79_3019"

><td id="3019"><a href="#3019">3019</a></td></tr
><tr id="gr_svn79_3020"

><td id="3020"><a href="#3020">3020</a></td></tr
><tr id="gr_svn79_3021"

><td id="3021"><a href="#3021">3021</a></td></tr
><tr id="gr_svn79_3022"

><td id="3022"><a href="#3022">3022</a></td></tr
><tr id="gr_svn79_3023"

><td id="3023"><a href="#3023">3023</a></td></tr
><tr id="gr_svn79_3024"

><td id="3024"><a href="#3024">3024</a></td></tr
><tr id="gr_svn79_3025"

><td id="3025"><a href="#3025">3025</a></td></tr
><tr id="gr_svn79_3026"

><td id="3026"><a href="#3026">3026</a></td></tr
><tr id="gr_svn79_3027"

><td id="3027"><a href="#3027">3027</a></td></tr
><tr id="gr_svn79_3028"

><td id="3028"><a href="#3028">3028</a></td></tr
><tr id="gr_svn79_3029"

><td id="3029"><a href="#3029">3029</a></td></tr
><tr id="gr_svn79_3030"

><td id="3030"><a href="#3030">3030</a></td></tr
><tr id="gr_svn79_3031"

><td id="3031"><a href="#3031">3031</a></td></tr
><tr id="gr_svn79_3032"

><td id="3032"><a href="#3032">3032</a></td></tr
><tr id="gr_svn79_3033"

><td id="3033"><a href="#3033">3033</a></td></tr
><tr id="gr_svn79_3034"

><td id="3034"><a href="#3034">3034</a></td></tr
><tr id="gr_svn79_3035"

><td id="3035"><a href="#3035">3035</a></td></tr
><tr id="gr_svn79_3036"

><td id="3036"><a href="#3036">3036</a></td></tr
><tr id="gr_svn79_3037"

><td id="3037"><a href="#3037">3037</a></td></tr
><tr id="gr_svn79_3038"

><td id="3038"><a href="#3038">3038</a></td></tr
><tr id="gr_svn79_3039"

><td id="3039"><a href="#3039">3039</a></td></tr
><tr id="gr_svn79_3040"

><td id="3040"><a href="#3040">3040</a></td></tr
><tr id="gr_svn79_3041"

><td id="3041"><a href="#3041">3041</a></td></tr
><tr id="gr_svn79_3042"

><td id="3042"><a href="#3042">3042</a></td></tr
><tr id="gr_svn79_3043"

><td id="3043"><a href="#3043">3043</a></td></tr
><tr id="gr_svn79_3044"

><td id="3044"><a href="#3044">3044</a></td></tr
><tr id="gr_svn79_3045"

><td id="3045"><a href="#3045">3045</a></td></tr
><tr id="gr_svn79_3046"

><td id="3046"><a href="#3046">3046</a></td></tr
><tr id="gr_svn79_3047"

><td id="3047"><a href="#3047">3047</a></td></tr
><tr id="gr_svn79_3048"

><td id="3048"><a href="#3048">3048</a></td></tr
><tr id="gr_svn79_3049"

><td id="3049"><a href="#3049">3049</a></td></tr
><tr id="gr_svn79_3050"

><td id="3050"><a href="#3050">3050</a></td></tr
><tr id="gr_svn79_3051"

><td id="3051"><a href="#3051">3051</a></td></tr
><tr id="gr_svn79_3052"

><td id="3052"><a href="#3052">3052</a></td></tr
><tr id="gr_svn79_3053"

><td id="3053"><a href="#3053">3053</a></td></tr
><tr id="gr_svn79_3054"

><td id="3054"><a href="#3054">3054</a></td></tr
><tr id="gr_svn79_3055"

><td id="3055"><a href="#3055">3055</a></td></tr
><tr id="gr_svn79_3056"

><td id="3056"><a href="#3056">3056</a></td></tr
><tr id="gr_svn79_3057"

><td id="3057"><a href="#3057">3057</a></td></tr
><tr id="gr_svn79_3058"

><td id="3058"><a href="#3058">3058</a></td></tr
><tr id="gr_svn79_3059"

><td id="3059"><a href="#3059">3059</a></td></tr
><tr id="gr_svn79_3060"

><td id="3060"><a href="#3060">3060</a></td></tr
><tr id="gr_svn79_3061"

><td id="3061"><a href="#3061">3061</a></td></tr
><tr id="gr_svn79_3062"

><td id="3062"><a href="#3062">3062</a></td></tr
><tr id="gr_svn79_3063"

><td id="3063"><a href="#3063">3063</a></td></tr
><tr id="gr_svn79_3064"

><td id="3064"><a href="#3064">3064</a></td></tr
><tr id="gr_svn79_3065"

><td id="3065"><a href="#3065">3065</a></td></tr
><tr id="gr_svn79_3066"

><td id="3066"><a href="#3066">3066</a></td></tr
><tr id="gr_svn79_3067"

><td id="3067"><a href="#3067">3067</a></td></tr
><tr id="gr_svn79_3068"

><td id="3068"><a href="#3068">3068</a></td></tr
><tr id="gr_svn79_3069"

><td id="3069"><a href="#3069">3069</a></td></tr
><tr id="gr_svn79_3070"

><td id="3070"><a href="#3070">3070</a></td></tr
><tr id="gr_svn79_3071"

><td id="3071"><a href="#3071">3071</a></td></tr
><tr id="gr_svn79_3072"

><td id="3072"><a href="#3072">3072</a></td></tr
><tr id="gr_svn79_3073"

><td id="3073"><a href="#3073">3073</a></td></tr
><tr id="gr_svn79_3074"

><td id="3074"><a href="#3074">3074</a></td></tr
><tr id="gr_svn79_3075"

><td id="3075"><a href="#3075">3075</a></td></tr
><tr id="gr_svn79_3076"

><td id="3076"><a href="#3076">3076</a></td></tr
><tr id="gr_svn79_3077"

><td id="3077"><a href="#3077">3077</a></td></tr
><tr id="gr_svn79_3078"

><td id="3078"><a href="#3078">3078</a></td></tr
><tr id="gr_svn79_3079"

><td id="3079"><a href="#3079">3079</a></td></tr
><tr id="gr_svn79_3080"

><td id="3080"><a href="#3080">3080</a></td></tr
><tr id="gr_svn79_3081"

><td id="3081"><a href="#3081">3081</a></td></tr
><tr id="gr_svn79_3082"

><td id="3082"><a href="#3082">3082</a></td></tr
><tr id="gr_svn79_3083"

><td id="3083"><a href="#3083">3083</a></td></tr
><tr id="gr_svn79_3084"

><td id="3084"><a href="#3084">3084</a></td></tr
><tr id="gr_svn79_3085"

><td id="3085"><a href="#3085">3085</a></td></tr
><tr id="gr_svn79_3086"

><td id="3086"><a href="#3086">3086</a></td></tr
><tr id="gr_svn79_3087"

><td id="3087"><a href="#3087">3087</a></td></tr
><tr id="gr_svn79_3088"

><td id="3088"><a href="#3088">3088</a></td></tr
><tr id="gr_svn79_3089"

><td id="3089"><a href="#3089">3089</a></td></tr
><tr id="gr_svn79_3090"

><td id="3090"><a href="#3090">3090</a></td></tr
><tr id="gr_svn79_3091"

><td id="3091"><a href="#3091">3091</a></td></tr
><tr id="gr_svn79_3092"

><td id="3092"><a href="#3092">3092</a></td></tr
><tr id="gr_svn79_3093"

><td id="3093"><a href="#3093">3093</a></td></tr
><tr id="gr_svn79_3094"

><td id="3094"><a href="#3094">3094</a></td></tr
><tr id="gr_svn79_3095"

><td id="3095"><a href="#3095">3095</a></td></tr
><tr id="gr_svn79_3096"

><td id="3096"><a href="#3096">3096</a></td></tr
><tr id="gr_svn79_3097"

><td id="3097"><a href="#3097">3097</a></td></tr
><tr id="gr_svn79_3098"

><td id="3098"><a href="#3098">3098</a></td></tr
><tr id="gr_svn79_3099"

><td id="3099"><a href="#3099">3099</a></td></tr
><tr id="gr_svn79_3100"

><td id="3100"><a href="#3100">3100</a></td></tr
><tr id="gr_svn79_3101"

><td id="3101"><a href="#3101">3101</a></td></tr
><tr id="gr_svn79_3102"

><td id="3102"><a href="#3102">3102</a></td></tr
><tr id="gr_svn79_3103"

><td id="3103"><a href="#3103">3103</a></td></tr
><tr id="gr_svn79_3104"

><td id="3104"><a href="#3104">3104</a></td></tr
><tr id="gr_svn79_3105"

><td id="3105"><a href="#3105">3105</a></td></tr
><tr id="gr_svn79_3106"

><td id="3106"><a href="#3106">3106</a></td></tr
><tr id="gr_svn79_3107"

><td id="3107"><a href="#3107">3107</a></td></tr
><tr id="gr_svn79_3108"

><td id="3108"><a href="#3108">3108</a></td></tr
><tr id="gr_svn79_3109"

><td id="3109"><a href="#3109">3109</a></td></tr
><tr id="gr_svn79_3110"

><td id="3110"><a href="#3110">3110</a></td></tr
><tr id="gr_svn79_3111"

><td id="3111"><a href="#3111">3111</a></td></tr
><tr id="gr_svn79_3112"

><td id="3112"><a href="#3112">3112</a></td></tr
><tr id="gr_svn79_3113"

><td id="3113"><a href="#3113">3113</a></td></tr
><tr id="gr_svn79_3114"

><td id="3114"><a href="#3114">3114</a></td></tr
><tr id="gr_svn79_3115"

><td id="3115"><a href="#3115">3115</a></td></tr
><tr id="gr_svn79_3116"

><td id="3116"><a href="#3116">3116</a></td></tr
><tr id="gr_svn79_3117"

><td id="3117"><a href="#3117">3117</a></td></tr
><tr id="gr_svn79_3118"

><td id="3118"><a href="#3118">3118</a></td></tr
><tr id="gr_svn79_3119"

><td id="3119"><a href="#3119">3119</a></td></tr
><tr id="gr_svn79_3120"

><td id="3120"><a href="#3120">3120</a></td></tr
><tr id="gr_svn79_3121"

><td id="3121"><a href="#3121">3121</a></td></tr
><tr id="gr_svn79_3122"

><td id="3122"><a href="#3122">3122</a></td></tr
><tr id="gr_svn79_3123"

><td id="3123"><a href="#3123">3123</a></td></tr
><tr id="gr_svn79_3124"

><td id="3124"><a href="#3124">3124</a></td></tr
><tr id="gr_svn79_3125"

><td id="3125"><a href="#3125">3125</a></td></tr
><tr id="gr_svn79_3126"

><td id="3126"><a href="#3126">3126</a></td></tr
><tr id="gr_svn79_3127"

><td id="3127"><a href="#3127">3127</a></td></tr
><tr id="gr_svn79_3128"

><td id="3128"><a href="#3128">3128</a></td></tr
><tr id="gr_svn79_3129"

><td id="3129"><a href="#3129">3129</a></td></tr
><tr id="gr_svn79_3130"

><td id="3130"><a href="#3130">3130</a></td></tr
><tr id="gr_svn79_3131"

><td id="3131"><a href="#3131">3131</a></td></tr
><tr id="gr_svn79_3132"

><td id="3132"><a href="#3132">3132</a></td></tr
><tr id="gr_svn79_3133"

><td id="3133"><a href="#3133">3133</a></td></tr
><tr id="gr_svn79_3134"

><td id="3134"><a href="#3134">3134</a></td></tr
><tr id="gr_svn79_3135"

><td id="3135"><a href="#3135">3135</a></td></tr
><tr id="gr_svn79_3136"

><td id="3136"><a href="#3136">3136</a></td></tr
><tr id="gr_svn79_3137"

><td id="3137"><a href="#3137">3137</a></td></tr
><tr id="gr_svn79_3138"

><td id="3138"><a href="#3138">3138</a></td></tr
><tr id="gr_svn79_3139"

><td id="3139"><a href="#3139">3139</a></td></tr
><tr id="gr_svn79_3140"

><td id="3140"><a href="#3140">3140</a></td></tr
><tr id="gr_svn79_3141"

><td id="3141"><a href="#3141">3141</a></td></tr
><tr id="gr_svn79_3142"

><td id="3142"><a href="#3142">3142</a></td></tr
><tr id="gr_svn79_3143"

><td id="3143"><a href="#3143">3143</a></td></tr
><tr id="gr_svn79_3144"

><td id="3144"><a href="#3144">3144</a></td></tr
><tr id="gr_svn79_3145"

><td id="3145"><a href="#3145">3145</a></td></tr
><tr id="gr_svn79_3146"

><td id="3146"><a href="#3146">3146</a></td></tr
><tr id="gr_svn79_3147"

><td id="3147"><a href="#3147">3147</a></td></tr
><tr id="gr_svn79_3148"

><td id="3148"><a href="#3148">3148</a></td></tr
><tr id="gr_svn79_3149"

><td id="3149"><a href="#3149">3149</a></td></tr
><tr id="gr_svn79_3150"

><td id="3150"><a href="#3150">3150</a></td></tr
><tr id="gr_svn79_3151"

><td id="3151"><a href="#3151">3151</a></td></tr
><tr id="gr_svn79_3152"

><td id="3152"><a href="#3152">3152</a></td></tr
><tr id="gr_svn79_3153"

><td id="3153"><a href="#3153">3153</a></td></tr
><tr id="gr_svn79_3154"

><td id="3154"><a href="#3154">3154</a></td></tr
><tr id="gr_svn79_3155"

><td id="3155"><a href="#3155">3155</a></td></tr
><tr id="gr_svn79_3156"

><td id="3156"><a href="#3156">3156</a></td></tr
><tr id="gr_svn79_3157"

><td id="3157"><a href="#3157">3157</a></td></tr
><tr id="gr_svn79_3158"

><td id="3158"><a href="#3158">3158</a></td></tr
><tr id="gr_svn79_3159"

><td id="3159"><a href="#3159">3159</a></td></tr
><tr id="gr_svn79_3160"

><td id="3160"><a href="#3160">3160</a></td></tr
><tr id="gr_svn79_3161"

><td id="3161"><a href="#3161">3161</a></td></tr
><tr id="gr_svn79_3162"

><td id="3162"><a href="#3162">3162</a></td></tr
><tr id="gr_svn79_3163"

><td id="3163"><a href="#3163">3163</a></td></tr
><tr id="gr_svn79_3164"

><td id="3164"><a href="#3164">3164</a></td></tr
><tr id="gr_svn79_3165"

><td id="3165"><a href="#3165">3165</a></td></tr
><tr id="gr_svn79_3166"

><td id="3166"><a href="#3166">3166</a></td></tr
><tr id="gr_svn79_3167"

><td id="3167"><a href="#3167">3167</a></td></tr
><tr id="gr_svn79_3168"

><td id="3168"><a href="#3168">3168</a></td></tr
><tr id="gr_svn79_3169"

><td id="3169"><a href="#3169">3169</a></td></tr
><tr id="gr_svn79_3170"

><td id="3170"><a href="#3170">3170</a></td></tr
><tr id="gr_svn79_3171"

><td id="3171"><a href="#3171">3171</a></td></tr
><tr id="gr_svn79_3172"

><td id="3172"><a href="#3172">3172</a></td></tr
><tr id="gr_svn79_3173"

><td id="3173"><a href="#3173">3173</a></td></tr
><tr id="gr_svn79_3174"

><td id="3174"><a href="#3174">3174</a></td></tr
><tr id="gr_svn79_3175"

><td id="3175"><a href="#3175">3175</a></td></tr
><tr id="gr_svn79_3176"

><td id="3176"><a href="#3176">3176</a></td></tr
><tr id="gr_svn79_3177"

><td id="3177"><a href="#3177">3177</a></td></tr
><tr id="gr_svn79_3178"

><td id="3178"><a href="#3178">3178</a></td></tr
><tr id="gr_svn79_3179"

><td id="3179"><a href="#3179">3179</a></td></tr
><tr id="gr_svn79_3180"

><td id="3180"><a href="#3180">3180</a></td></tr
><tr id="gr_svn79_3181"

><td id="3181"><a href="#3181">3181</a></td></tr
><tr id="gr_svn79_3182"

><td id="3182"><a href="#3182">3182</a></td></tr
><tr id="gr_svn79_3183"

><td id="3183"><a href="#3183">3183</a></td></tr
><tr id="gr_svn79_3184"

><td id="3184"><a href="#3184">3184</a></td></tr
><tr id="gr_svn79_3185"

><td id="3185"><a href="#3185">3185</a></td></tr
><tr id="gr_svn79_3186"

><td id="3186"><a href="#3186">3186</a></td></tr
><tr id="gr_svn79_3187"

><td id="3187"><a href="#3187">3187</a></td></tr
><tr id="gr_svn79_3188"

><td id="3188"><a href="#3188">3188</a></td></tr
><tr id="gr_svn79_3189"

><td id="3189"><a href="#3189">3189</a></td></tr
><tr id="gr_svn79_3190"

><td id="3190"><a href="#3190">3190</a></td></tr
><tr id="gr_svn79_3191"

><td id="3191"><a href="#3191">3191</a></td></tr
><tr id="gr_svn79_3192"

><td id="3192"><a href="#3192">3192</a></td></tr
><tr id="gr_svn79_3193"

><td id="3193"><a href="#3193">3193</a></td></tr
><tr id="gr_svn79_3194"

><td id="3194"><a href="#3194">3194</a></td></tr
><tr id="gr_svn79_3195"

><td id="3195"><a href="#3195">3195</a></td></tr
><tr id="gr_svn79_3196"

><td id="3196"><a href="#3196">3196</a></td></tr
><tr id="gr_svn79_3197"

><td id="3197"><a href="#3197">3197</a></td></tr
><tr id="gr_svn79_3198"

><td id="3198"><a href="#3198">3198</a></td></tr
><tr id="gr_svn79_3199"

><td id="3199"><a href="#3199">3199</a></td></tr
><tr id="gr_svn79_3200"

><td id="3200"><a href="#3200">3200</a></td></tr
><tr id="gr_svn79_3201"

><td id="3201"><a href="#3201">3201</a></td></tr
><tr id="gr_svn79_3202"

><td id="3202"><a href="#3202">3202</a></td></tr
><tr id="gr_svn79_3203"

><td id="3203"><a href="#3203">3203</a></td></tr
><tr id="gr_svn79_3204"

><td id="3204"><a href="#3204">3204</a></td></tr
><tr id="gr_svn79_3205"

><td id="3205"><a href="#3205">3205</a></td></tr
><tr id="gr_svn79_3206"

><td id="3206"><a href="#3206">3206</a></td></tr
><tr id="gr_svn79_3207"

><td id="3207"><a href="#3207">3207</a></td></tr
><tr id="gr_svn79_3208"

><td id="3208"><a href="#3208">3208</a></td></tr
><tr id="gr_svn79_3209"

><td id="3209"><a href="#3209">3209</a></td></tr
><tr id="gr_svn79_3210"

><td id="3210"><a href="#3210">3210</a></td></tr
><tr id="gr_svn79_3211"

><td id="3211"><a href="#3211">3211</a></td></tr
><tr id="gr_svn79_3212"

><td id="3212"><a href="#3212">3212</a></td></tr
><tr id="gr_svn79_3213"

><td id="3213"><a href="#3213">3213</a></td></tr
><tr id="gr_svn79_3214"

><td id="3214"><a href="#3214">3214</a></td></tr
><tr id="gr_svn79_3215"

><td id="3215"><a href="#3215">3215</a></td></tr
><tr id="gr_svn79_3216"

><td id="3216"><a href="#3216">3216</a></td></tr
><tr id="gr_svn79_3217"

><td id="3217"><a href="#3217">3217</a></td></tr
><tr id="gr_svn79_3218"

><td id="3218"><a href="#3218">3218</a></td></tr
><tr id="gr_svn79_3219"

><td id="3219"><a href="#3219">3219</a></td></tr
><tr id="gr_svn79_3220"

><td id="3220"><a href="#3220">3220</a></td></tr
><tr id="gr_svn79_3221"

><td id="3221"><a href="#3221">3221</a></td></tr
><tr id="gr_svn79_3222"

><td id="3222"><a href="#3222">3222</a></td></tr
><tr id="gr_svn79_3223"

><td id="3223"><a href="#3223">3223</a></td></tr
><tr id="gr_svn79_3224"

><td id="3224"><a href="#3224">3224</a></td></tr
><tr id="gr_svn79_3225"

><td id="3225"><a href="#3225">3225</a></td></tr
><tr id="gr_svn79_3226"

><td id="3226"><a href="#3226">3226</a></td></tr
><tr id="gr_svn79_3227"

><td id="3227"><a href="#3227">3227</a></td></tr
><tr id="gr_svn79_3228"

><td id="3228"><a href="#3228">3228</a></td></tr
><tr id="gr_svn79_3229"

><td id="3229"><a href="#3229">3229</a></td></tr
><tr id="gr_svn79_3230"

><td id="3230"><a href="#3230">3230</a></td></tr
><tr id="gr_svn79_3231"

><td id="3231"><a href="#3231">3231</a></td></tr
><tr id="gr_svn79_3232"

><td id="3232"><a href="#3232">3232</a></td></tr
><tr id="gr_svn79_3233"

><td id="3233"><a href="#3233">3233</a></td></tr
><tr id="gr_svn79_3234"

><td id="3234"><a href="#3234">3234</a></td></tr
><tr id="gr_svn79_3235"

><td id="3235"><a href="#3235">3235</a></td></tr
><tr id="gr_svn79_3236"

><td id="3236"><a href="#3236">3236</a></td></tr
><tr id="gr_svn79_3237"

><td id="3237"><a href="#3237">3237</a></td></tr
><tr id="gr_svn79_3238"

><td id="3238"><a href="#3238">3238</a></td></tr
><tr id="gr_svn79_3239"

><td id="3239"><a href="#3239">3239</a></td></tr
><tr id="gr_svn79_3240"

><td id="3240"><a href="#3240">3240</a></td></tr
><tr id="gr_svn79_3241"

><td id="3241"><a href="#3241">3241</a></td></tr
><tr id="gr_svn79_3242"

><td id="3242"><a href="#3242">3242</a></td></tr
><tr id="gr_svn79_3243"

><td id="3243"><a href="#3243">3243</a></td></tr
><tr id="gr_svn79_3244"

><td id="3244"><a href="#3244">3244</a></td></tr
><tr id="gr_svn79_3245"

><td id="3245"><a href="#3245">3245</a></td></tr
><tr id="gr_svn79_3246"

><td id="3246"><a href="#3246">3246</a></td></tr
><tr id="gr_svn79_3247"

><td id="3247"><a href="#3247">3247</a></td></tr
><tr id="gr_svn79_3248"

><td id="3248"><a href="#3248">3248</a></td></tr
><tr id="gr_svn79_3249"

><td id="3249"><a href="#3249">3249</a></td></tr
><tr id="gr_svn79_3250"

><td id="3250"><a href="#3250">3250</a></td></tr
><tr id="gr_svn79_3251"

><td id="3251"><a href="#3251">3251</a></td></tr
><tr id="gr_svn79_3252"

><td id="3252"><a href="#3252">3252</a></td></tr
><tr id="gr_svn79_3253"

><td id="3253"><a href="#3253">3253</a></td></tr
><tr id="gr_svn79_3254"

><td id="3254"><a href="#3254">3254</a></td></tr
><tr id="gr_svn79_3255"

><td id="3255"><a href="#3255">3255</a></td></tr
><tr id="gr_svn79_3256"

><td id="3256"><a href="#3256">3256</a></td></tr
><tr id="gr_svn79_3257"

><td id="3257"><a href="#3257">3257</a></td></tr
><tr id="gr_svn79_3258"

><td id="3258"><a href="#3258">3258</a></td></tr
><tr id="gr_svn79_3259"

><td id="3259"><a href="#3259">3259</a></td></tr
><tr id="gr_svn79_3260"

><td id="3260"><a href="#3260">3260</a></td></tr
><tr id="gr_svn79_3261"

><td id="3261"><a href="#3261">3261</a></td></tr
><tr id="gr_svn79_3262"

><td id="3262"><a href="#3262">3262</a></td></tr
><tr id="gr_svn79_3263"

><td id="3263"><a href="#3263">3263</a></td></tr
><tr id="gr_svn79_3264"

><td id="3264"><a href="#3264">3264</a></td></tr
><tr id="gr_svn79_3265"

><td id="3265"><a href="#3265">3265</a></td></tr
><tr id="gr_svn79_3266"

><td id="3266"><a href="#3266">3266</a></td></tr
><tr id="gr_svn79_3267"

><td id="3267"><a href="#3267">3267</a></td></tr
><tr id="gr_svn79_3268"

><td id="3268"><a href="#3268">3268</a></td></tr
><tr id="gr_svn79_3269"

><td id="3269"><a href="#3269">3269</a></td></tr
><tr id="gr_svn79_3270"

><td id="3270"><a href="#3270">3270</a></td></tr
><tr id="gr_svn79_3271"

><td id="3271"><a href="#3271">3271</a></td></tr
><tr id="gr_svn79_3272"

><td id="3272"><a href="#3272">3272</a></td></tr
><tr id="gr_svn79_3273"

><td id="3273"><a href="#3273">3273</a></td></tr
><tr id="gr_svn79_3274"

><td id="3274"><a href="#3274">3274</a></td></tr
><tr id="gr_svn79_3275"

><td id="3275"><a href="#3275">3275</a></td></tr
><tr id="gr_svn79_3276"

><td id="3276"><a href="#3276">3276</a></td></tr
><tr id="gr_svn79_3277"

><td id="3277"><a href="#3277">3277</a></td></tr
><tr id="gr_svn79_3278"

><td id="3278"><a href="#3278">3278</a></td></tr
><tr id="gr_svn79_3279"

><td id="3279"><a href="#3279">3279</a></td></tr
><tr id="gr_svn79_3280"

><td id="3280"><a href="#3280">3280</a></td></tr
><tr id="gr_svn79_3281"

><td id="3281"><a href="#3281">3281</a></td></tr
><tr id="gr_svn79_3282"

><td id="3282"><a href="#3282">3282</a></td></tr
><tr id="gr_svn79_3283"

><td id="3283"><a href="#3283">3283</a></td></tr
><tr id="gr_svn79_3284"

><td id="3284"><a href="#3284">3284</a></td></tr
><tr id="gr_svn79_3285"

><td id="3285"><a href="#3285">3285</a></td></tr
><tr id="gr_svn79_3286"

><td id="3286"><a href="#3286">3286</a></td></tr
><tr id="gr_svn79_3287"

><td id="3287"><a href="#3287">3287</a></td></tr
><tr id="gr_svn79_3288"

><td id="3288"><a href="#3288">3288</a></td></tr
><tr id="gr_svn79_3289"

><td id="3289"><a href="#3289">3289</a></td></tr
><tr id="gr_svn79_3290"

><td id="3290"><a href="#3290">3290</a></td></tr
><tr id="gr_svn79_3291"

><td id="3291"><a href="#3291">3291</a></td></tr
><tr id="gr_svn79_3292"

><td id="3292"><a href="#3292">3292</a></td></tr
><tr id="gr_svn79_3293"

><td id="3293"><a href="#3293">3293</a></td></tr
><tr id="gr_svn79_3294"

><td id="3294"><a href="#3294">3294</a></td></tr
><tr id="gr_svn79_3295"

><td id="3295"><a href="#3295">3295</a></td></tr
><tr id="gr_svn79_3296"

><td id="3296"><a href="#3296">3296</a></td></tr
><tr id="gr_svn79_3297"

><td id="3297"><a href="#3297">3297</a></td></tr
><tr id="gr_svn79_3298"

><td id="3298"><a href="#3298">3298</a></td></tr
><tr id="gr_svn79_3299"

><td id="3299"><a href="#3299">3299</a></td></tr
><tr id="gr_svn79_3300"

><td id="3300"><a href="#3300">3300</a></td></tr
><tr id="gr_svn79_3301"

><td id="3301"><a href="#3301">3301</a></td></tr
><tr id="gr_svn79_3302"

><td id="3302"><a href="#3302">3302</a></td></tr
><tr id="gr_svn79_3303"

><td id="3303"><a href="#3303">3303</a></td></tr
><tr id="gr_svn79_3304"

><td id="3304"><a href="#3304">3304</a></td></tr
><tr id="gr_svn79_3305"

><td id="3305"><a href="#3305">3305</a></td></tr
><tr id="gr_svn79_3306"

><td id="3306"><a href="#3306">3306</a></td></tr
><tr id="gr_svn79_3307"

><td id="3307"><a href="#3307">3307</a></td></tr
><tr id="gr_svn79_3308"

><td id="3308"><a href="#3308">3308</a></td></tr
><tr id="gr_svn79_3309"

><td id="3309"><a href="#3309">3309</a></td></tr
><tr id="gr_svn79_3310"

><td id="3310"><a href="#3310">3310</a></td></tr
><tr id="gr_svn79_3311"

><td id="3311"><a href="#3311">3311</a></td></tr
><tr id="gr_svn79_3312"

><td id="3312"><a href="#3312">3312</a></td></tr
><tr id="gr_svn79_3313"

><td id="3313"><a href="#3313">3313</a></td></tr
><tr id="gr_svn79_3314"

><td id="3314"><a href="#3314">3314</a></td></tr
><tr id="gr_svn79_3315"

><td id="3315"><a href="#3315">3315</a></td></tr
><tr id="gr_svn79_3316"

><td id="3316"><a href="#3316">3316</a></td></tr
><tr id="gr_svn79_3317"

><td id="3317"><a href="#3317">3317</a></td></tr
><tr id="gr_svn79_3318"

><td id="3318"><a href="#3318">3318</a></td></tr
><tr id="gr_svn79_3319"

><td id="3319"><a href="#3319">3319</a></td></tr
><tr id="gr_svn79_3320"

><td id="3320"><a href="#3320">3320</a></td></tr
><tr id="gr_svn79_3321"

><td id="3321"><a href="#3321">3321</a></td></tr
><tr id="gr_svn79_3322"

><td id="3322"><a href="#3322">3322</a></td></tr
><tr id="gr_svn79_3323"

><td id="3323"><a href="#3323">3323</a></td></tr
><tr id="gr_svn79_3324"

><td id="3324"><a href="#3324">3324</a></td></tr
><tr id="gr_svn79_3325"

><td id="3325"><a href="#3325">3325</a></td></tr
><tr id="gr_svn79_3326"

><td id="3326"><a href="#3326">3326</a></td></tr
><tr id="gr_svn79_3327"

><td id="3327"><a href="#3327">3327</a></td></tr
><tr id="gr_svn79_3328"

><td id="3328"><a href="#3328">3328</a></td></tr
><tr id="gr_svn79_3329"

><td id="3329"><a href="#3329">3329</a></td></tr
><tr id="gr_svn79_3330"

><td id="3330"><a href="#3330">3330</a></td></tr
><tr id="gr_svn79_3331"

><td id="3331"><a href="#3331">3331</a></td></tr
><tr id="gr_svn79_3332"

><td id="3332"><a href="#3332">3332</a></td></tr
><tr id="gr_svn79_3333"

><td id="3333"><a href="#3333">3333</a></td></tr
><tr id="gr_svn79_3334"

><td id="3334"><a href="#3334">3334</a></td></tr
><tr id="gr_svn79_3335"

><td id="3335"><a href="#3335">3335</a></td></tr
><tr id="gr_svn79_3336"

><td id="3336"><a href="#3336">3336</a></td></tr
><tr id="gr_svn79_3337"

><td id="3337"><a href="#3337">3337</a></td></tr
><tr id="gr_svn79_3338"

><td id="3338"><a href="#3338">3338</a></td></tr
><tr id="gr_svn79_3339"

><td id="3339"><a href="#3339">3339</a></td></tr
><tr id="gr_svn79_3340"

><td id="3340"><a href="#3340">3340</a></td></tr
><tr id="gr_svn79_3341"

><td id="3341"><a href="#3341">3341</a></td></tr
><tr id="gr_svn79_3342"

><td id="3342"><a href="#3342">3342</a></td></tr
><tr id="gr_svn79_3343"

><td id="3343"><a href="#3343">3343</a></td></tr
><tr id="gr_svn79_3344"

><td id="3344"><a href="#3344">3344</a></td></tr
><tr id="gr_svn79_3345"

><td id="3345"><a href="#3345">3345</a></td></tr
><tr id="gr_svn79_3346"

><td id="3346"><a href="#3346">3346</a></td></tr
><tr id="gr_svn79_3347"

><td id="3347"><a href="#3347">3347</a></td></tr
><tr id="gr_svn79_3348"

><td id="3348"><a href="#3348">3348</a></td></tr
><tr id="gr_svn79_3349"

><td id="3349"><a href="#3349">3349</a></td></tr
><tr id="gr_svn79_3350"

><td id="3350"><a href="#3350">3350</a></td></tr
><tr id="gr_svn79_3351"

><td id="3351"><a href="#3351">3351</a></td></tr
><tr id="gr_svn79_3352"

><td id="3352"><a href="#3352">3352</a></td></tr
><tr id="gr_svn79_3353"

><td id="3353"><a href="#3353">3353</a></td></tr
><tr id="gr_svn79_3354"

><td id="3354"><a href="#3354">3354</a></td></tr
><tr id="gr_svn79_3355"

><td id="3355"><a href="#3355">3355</a></td></tr
><tr id="gr_svn79_3356"

><td id="3356"><a href="#3356">3356</a></td></tr
><tr id="gr_svn79_3357"

><td id="3357"><a href="#3357">3357</a></td></tr
><tr id="gr_svn79_3358"

><td id="3358"><a href="#3358">3358</a></td></tr
><tr id="gr_svn79_3359"

><td id="3359"><a href="#3359">3359</a></td></tr
><tr id="gr_svn79_3360"

><td id="3360"><a href="#3360">3360</a></td></tr
><tr id="gr_svn79_3361"

><td id="3361"><a href="#3361">3361</a></td></tr
><tr id="gr_svn79_3362"

><td id="3362"><a href="#3362">3362</a></td></tr
><tr id="gr_svn79_3363"

><td id="3363"><a href="#3363">3363</a></td></tr
><tr id="gr_svn79_3364"

><td id="3364"><a href="#3364">3364</a></td></tr
><tr id="gr_svn79_3365"

><td id="3365"><a href="#3365">3365</a></td></tr
><tr id="gr_svn79_3366"

><td id="3366"><a href="#3366">3366</a></td></tr
><tr id="gr_svn79_3367"

><td id="3367"><a href="#3367">3367</a></td></tr
><tr id="gr_svn79_3368"

><td id="3368"><a href="#3368">3368</a></td></tr
><tr id="gr_svn79_3369"

><td id="3369"><a href="#3369">3369</a></td></tr
><tr id="gr_svn79_3370"

><td id="3370"><a href="#3370">3370</a></td></tr
><tr id="gr_svn79_3371"

><td id="3371"><a href="#3371">3371</a></td></tr
><tr id="gr_svn79_3372"

><td id="3372"><a href="#3372">3372</a></td></tr
><tr id="gr_svn79_3373"

><td id="3373"><a href="#3373">3373</a></td></tr
><tr id="gr_svn79_3374"

><td id="3374"><a href="#3374">3374</a></td></tr
><tr id="gr_svn79_3375"

><td id="3375"><a href="#3375">3375</a></td></tr
><tr id="gr_svn79_3376"

><td id="3376"><a href="#3376">3376</a></td></tr
><tr id="gr_svn79_3377"

><td id="3377"><a href="#3377">3377</a></td></tr
><tr id="gr_svn79_3378"

><td id="3378"><a href="#3378">3378</a></td></tr
><tr id="gr_svn79_3379"

><td id="3379"><a href="#3379">3379</a></td></tr
><tr id="gr_svn79_3380"

><td id="3380"><a href="#3380">3380</a></td></tr
><tr id="gr_svn79_3381"

><td id="3381"><a href="#3381">3381</a></td></tr
><tr id="gr_svn79_3382"

><td id="3382"><a href="#3382">3382</a></td></tr
><tr id="gr_svn79_3383"

><td id="3383"><a href="#3383">3383</a></td></tr
><tr id="gr_svn79_3384"

><td id="3384"><a href="#3384">3384</a></td></tr
><tr id="gr_svn79_3385"

><td id="3385"><a href="#3385">3385</a></td></tr
><tr id="gr_svn79_3386"

><td id="3386"><a href="#3386">3386</a></td></tr
><tr id="gr_svn79_3387"

><td id="3387"><a href="#3387">3387</a></td></tr
><tr id="gr_svn79_3388"

><td id="3388"><a href="#3388">3388</a></td></tr
><tr id="gr_svn79_3389"

><td id="3389"><a href="#3389">3389</a></td></tr
><tr id="gr_svn79_3390"

><td id="3390"><a href="#3390">3390</a></td></tr
><tr id="gr_svn79_3391"

><td id="3391"><a href="#3391">3391</a></td></tr
><tr id="gr_svn79_3392"

><td id="3392"><a href="#3392">3392</a></td></tr
><tr id="gr_svn79_3393"

><td id="3393"><a href="#3393">3393</a></td></tr
><tr id="gr_svn79_3394"

><td id="3394"><a href="#3394">3394</a></td></tr
><tr id="gr_svn79_3395"

><td id="3395"><a href="#3395">3395</a></td></tr
><tr id="gr_svn79_3396"

><td id="3396"><a href="#3396">3396</a></td></tr
><tr id="gr_svn79_3397"

><td id="3397"><a href="#3397">3397</a></td></tr
><tr id="gr_svn79_3398"

><td id="3398"><a href="#3398">3398</a></td></tr
><tr id="gr_svn79_3399"

><td id="3399"><a href="#3399">3399</a></td></tr
><tr id="gr_svn79_3400"

><td id="3400"><a href="#3400">3400</a></td></tr
><tr id="gr_svn79_3401"

><td id="3401"><a href="#3401">3401</a></td></tr
><tr id="gr_svn79_3402"

><td id="3402"><a href="#3402">3402</a></td></tr
><tr id="gr_svn79_3403"

><td id="3403"><a href="#3403">3403</a></td></tr
><tr id="gr_svn79_3404"

><td id="3404"><a href="#3404">3404</a></td></tr
><tr id="gr_svn79_3405"

><td id="3405"><a href="#3405">3405</a></td></tr
><tr id="gr_svn79_3406"

><td id="3406"><a href="#3406">3406</a></td></tr
><tr id="gr_svn79_3407"

><td id="3407"><a href="#3407">3407</a></td></tr
><tr id="gr_svn79_3408"

><td id="3408"><a href="#3408">3408</a></td></tr
><tr id="gr_svn79_3409"

><td id="3409"><a href="#3409">3409</a></td></tr
><tr id="gr_svn79_3410"

><td id="3410"><a href="#3410">3410</a></td></tr
><tr id="gr_svn79_3411"

><td id="3411"><a href="#3411">3411</a></td></tr
><tr id="gr_svn79_3412"

><td id="3412"><a href="#3412">3412</a></td></tr
><tr id="gr_svn79_3413"

><td id="3413"><a href="#3413">3413</a></td></tr
><tr id="gr_svn79_3414"

><td id="3414"><a href="#3414">3414</a></td></tr
><tr id="gr_svn79_3415"

><td id="3415"><a href="#3415">3415</a></td></tr
><tr id="gr_svn79_3416"

><td id="3416"><a href="#3416">3416</a></td></tr
><tr id="gr_svn79_3417"

><td id="3417"><a href="#3417">3417</a></td></tr
><tr id="gr_svn79_3418"

><td id="3418"><a href="#3418">3418</a></td></tr
><tr id="gr_svn79_3419"

><td id="3419"><a href="#3419">3419</a></td></tr
><tr id="gr_svn79_3420"

><td id="3420"><a href="#3420">3420</a></td></tr
><tr id="gr_svn79_3421"

><td id="3421"><a href="#3421">3421</a></td></tr
><tr id="gr_svn79_3422"

><td id="3422"><a href="#3422">3422</a></td></tr
><tr id="gr_svn79_3423"

><td id="3423"><a href="#3423">3423</a></td></tr
><tr id="gr_svn79_3424"

><td id="3424"><a href="#3424">3424</a></td></tr
><tr id="gr_svn79_3425"

><td id="3425"><a href="#3425">3425</a></td></tr
><tr id="gr_svn79_3426"

><td id="3426"><a href="#3426">3426</a></td></tr
><tr id="gr_svn79_3427"

><td id="3427"><a href="#3427">3427</a></td></tr
><tr id="gr_svn79_3428"

><td id="3428"><a href="#3428">3428</a></td></tr
><tr id="gr_svn79_3429"

><td id="3429"><a href="#3429">3429</a></td></tr
><tr id="gr_svn79_3430"

><td id="3430"><a href="#3430">3430</a></td></tr
><tr id="gr_svn79_3431"

><td id="3431"><a href="#3431">3431</a></td></tr
><tr id="gr_svn79_3432"

><td id="3432"><a href="#3432">3432</a></td></tr
><tr id="gr_svn79_3433"

><td id="3433"><a href="#3433">3433</a></td></tr
><tr id="gr_svn79_3434"

><td id="3434"><a href="#3434">3434</a></td></tr
><tr id="gr_svn79_3435"

><td id="3435"><a href="#3435">3435</a></td></tr
><tr id="gr_svn79_3436"

><td id="3436"><a href="#3436">3436</a></td></tr
><tr id="gr_svn79_3437"

><td id="3437"><a href="#3437">3437</a></td></tr
><tr id="gr_svn79_3438"

><td id="3438"><a href="#3438">3438</a></td></tr
><tr id="gr_svn79_3439"

><td id="3439"><a href="#3439">3439</a></td></tr
><tr id="gr_svn79_3440"

><td id="3440"><a href="#3440">3440</a></td></tr
><tr id="gr_svn79_3441"

><td id="3441"><a href="#3441">3441</a></td></tr
><tr id="gr_svn79_3442"

><td id="3442"><a href="#3442">3442</a></td></tr
><tr id="gr_svn79_3443"

><td id="3443"><a href="#3443">3443</a></td></tr
><tr id="gr_svn79_3444"

><td id="3444"><a href="#3444">3444</a></td></tr
><tr id="gr_svn79_3445"

><td id="3445"><a href="#3445">3445</a></td></tr
><tr id="gr_svn79_3446"

><td id="3446"><a href="#3446">3446</a></td></tr
><tr id="gr_svn79_3447"

><td id="3447"><a href="#3447">3447</a></td></tr
><tr id="gr_svn79_3448"

><td id="3448"><a href="#3448">3448</a></td></tr
><tr id="gr_svn79_3449"

><td id="3449"><a href="#3449">3449</a></td></tr
><tr id="gr_svn79_3450"

><td id="3450"><a href="#3450">3450</a></td></tr
><tr id="gr_svn79_3451"

><td id="3451"><a href="#3451">3451</a></td></tr
><tr id="gr_svn79_3452"

><td id="3452"><a href="#3452">3452</a></td></tr
><tr id="gr_svn79_3453"

><td id="3453"><a href="#3453">3453</a></td></tr
><tr id="gr_svn79_3454"

><td id="3454"><a href="#3454">3454</a></td></tr
><tr id="gr_svn79_3455"

><td id="3455"><a href="#3455">3455</a></td></tr
><tr id="gr_svn79_3456"

><td id="3456"><a href="#3456">3456</a></td></tr
><tr id="gr_svn79_3457"

><td id="3457"><a href="#3457">3457</a></td></tr
><tr id="gr_svn79_3458"

><td id="3458"><a href="#3458">3458</a></td></tr
><tr id="gr_svn79_3459"

><td id="3459"><a href="#3459">3459</a></td></tr
><tr id="gr_svn79_3460"

><td id="3460"><a href="#3460">3460</a></td></tr
><tr id="gr_svn79_3461"

><td id="3461"><a href="#3461">3461</a></td></tr
><tr id="gr_svn79_3462"

><td id="3462"><a href="#3462">3462</a></td></tr
><tr id="gr_svn79_3463"

><td id="3463"><a href="#3463">3463</a></td></tr
><tr id="gr_svn79_3464"

><td id="3464"><a href="#3464">3464</a></td></tr
><tr id="gr_svn79_3465"

><td id="3465"><a href="#3465">3465</a></td></tr
><tr id="gr_svn79_3466"

><td id="3466"><a href="#3466">3466</a></td></tr
><tr id="gr_svn79_3467"

><td id="3467"><a href="#3467">3467</a></td></tr
><tr id="gr_svn79_3468"

><td id="3468"><a href="#3468">3468</a></td></tr
><tr id="gr_svn79_3469"

><td id="3469"><a href="#3469">3469</a></td></tr
><tr id="gr_svn79_3470"

><td id="3470"><a href="#3470">3470</a></td></tr
><tr id="gr_svn79_3471"

><td id="3471"><a href="#3471">3471</a></td></tr
><tr id="gr_svn79_3472"

><td id="3472"><a href="#3472">3472</a></td></tr
><tr id="gr_svn79_3473"

><td id="3473"><a href="#3473">3473</a></td></tr
><tr id="gr_svn79_3474"

><td id="3474"><a href="#3474">3474</a></td></tr
><tr id="gr_svn79_3475"

><td id="3475"><a href="#3475">3475</a></td></tr
><tr id="gr_svn79_3476"

><td id="3476"><a href="#3476">3476</a></td></tr
><tr id="gr_svn79_3477"

><td id="3477"><a href="#3477">3477</a></td></tr
><tr id="gr_svn79_3478"

><td id="3478"><a href="#3478">3478</a></td></tr
><tr id="gr_svn79_3479"

><td id="3479"><a href="#3479">3479</a></td></tr
><tr id="gr_svn79_3480"

><td id="3480"><a href="#3480">3480</a></td></tr
><tr id="gr_svn79_3481"

><td id="3481"><a href="#3481">3481</a></td></tr
><tr id="gr_svn79_3482"

><td id="3482"><a href="#3482">3482</a></td></tr
><tr id="gr_svn79_3483"

><td id="3483"><a href="#3483">3483</a></td></tr
><tr id="gr_svn79_3484"

><td id="3484"><a href="#3484">3484</a></td></tr
><tr id="gr_svn79_3485"

><td id="3485"><a href="#3485">3485</a></td></tr
><tr id="gr_svn79_3486"

><td id="3486"><a href="#3486">3486</a></td></tr
><tr id="gr_svn79_3487"

><td id="3487"><a href="#3487">3487</a></td></tr
><tr id="gr_svn79_3488"

><td id="3488"><a href="#3488">3488</a></td></tr
><tr id="gr_svn79_3489"

><td id="3489"><a href="#3489">3489</a></td></tr
><tr id="gr_svn79_3490"

><td id="3490"><a href="#3490">3490</a></td></tr
><tr id="gr_svn79_3491"

><td id="3491"><a href="#3491">3491</a></td></tr
><tr id="gr_svn79_3492"

><td id="3492"><a href="#3492">3492</a></td></tr
><tr id="gr_svn79_3493"

><td id="3493"><a href="#3493">3493</a></td></tr
><tr id="gr_svn79_3494"

><td id="3494"><a href="#3494">3494</a></td></tr
><tr id="gr_svn79_3495"

><td id="3495"><a href="#3495">3495</a></td></tr
><tr id="gr_svn79_3496"

><td id="3496"><a href="#3496">3496</a></td></tr
><tr id="gr_svn79_3497"

><td id="3497"><a href="#3497">3497</a></td></tr
><tr id="gr_svn79_3498"

><td id="3498"><a href="#3498">3498</a></td></tr
><tr id="gr_svn79_3499"

><td id="3499"><a href="#3499">3499</a></td></tr
><tr id="gr_svn79_3500"

><td id="3500"><a href="#3500">3500</a></td></tr
><tr id="gr_svn79_3501"

><td id="3501"><a href="#3501">3501</a></td></tr
><tr id="gr_svn79_3502"

><td id="3502"><a href="#3502">3502</a></td></tr
><tr id="gr_svn79_3503"

><td id="3503"><a href="#3503">3503</a></td></tr
><tr id="gr_svn79_3504"

><td id="3504"><a href="#3504">3504</a></td></tr
><tr id="gr_svn79_3505"

><td id="3505"><a href="#3505">3505</a></td></tr
><tr id="gr_svn79_3506"

><td id="3506"><a href="#3506">3506</a></td></tr
><tr id="gr_svn79_3507"

><td id="3507"><a href="#3507">3507</a></td></tr
><tr id="gr_svn79_3508"

><td id="3508"><a href="#3508">3508</a></td></tr
><tr id="gr_svn79_3509"

><td id="3509"><a href="#3509">3509</a></td></tr
><tr id="gr_svn79_3510"

><td id="3510"><a href="#3510">3510</a></td></tr
><tr id="gr_svn79_3511"

><td id="3511"><a href="#3511">3511</a></td></tr
><tr id="gr_svn79_3512"

><td id="3512"><a href="#3512">3512</a></td></tr
><tr id="gr_svn79_3513"

><td id="3513"><a href="#3513">3513</a></td></tr
><tr id="gr_svn79_3514"

><td id="3514"><a href="#3514">3514</a></td></tr
><tr id="gr_svn79_3515"

><td id="3515"><a href="#3515">3515</a></td></tr
><tr id="gr_svn79_3516"

><td id="3516"><a href="#3516">3516</a></td></tr
><tr id="gr_svn79_3517"

><td id="3517"><a href="#3517">3517</a></td></tr
><tr id="gr_svn79_3518"

><td id="3518"><a href="#3518">3518</a></td></tr
><tr id="gr_svn79_3519"

><td id="3519"><a href="#3519">3519</a></td></tr
><tr id="gr_svn79_3520"

><td id="3520"><a href="#3520">3520</a></td></tr
><tr id="gr_svn79_3521"

><td id="3521"><a href="#3521">3521</a></td></tr
><tr id="gr_svn79_3522"

><td id="3522"><a href="#3522">3522</a></td></tr
><tr id="gr_svn79_3523"

><td id="3523"><a href="#3523">3523</a></td></tr
><tr id="gr_svn79_3524"

><td id="3524"><a href="#3524">3524</a></td></tr
><tr id="gr_svn79_3525"

><td id="3525"><a href="#3525">3525</a></td></tr
><tr id="gr_svn79_3526"

><td id="3526"><a href="#3526">3526</a></td></tr
><tr id="gr_svn79_3527"

><td id="3527"><a href="#3527">3527</a></td></tr
><tr id="gr_svn79_3528"

><td id="3528"><a href="#3528">3528</a></td></tr
><tr id="gr_svn79_3529"

><td id="3529"><a href="#3529">3529</a></td></tr
><tr id="gr_svn79_3530"

><td id="3530"><a href="#3530">3530</a></td></tr
><tr id="gr_svn79_3531"

><td id="3531"><a href="#3531">3531</a></td></tr
><tr id="gr_svn79_3532"

><td id="3532"><a href="#3532">3532</a></td></tr
><tr id="gr_svn79_3533"

><td id="3533"><a href="#3533">3533</a></td></tr
><tr id="gr_svn79_3534"

><td id="3534"><a href="#3534">3534</a></td></tr
><tr id="gr_svn79_3535"

><td id="3535"><a href="#3535">3535</a></td></tr
><tr id="gr_svn79_3536"

><td id="3536"><a href="#3536">3536</a></td></tr
><tr id="gr_svn79_3537"

><td id="3537"><a href="#3537">3537</a></td></tr
><tr id="gr_svn79_3538"

><td id="3538"><a href="#3538">3538</a></td></tr
><tr id="gr_svn79_3539"

><td id="3539"><a href="#3539">3539</a></td></tr
><tr id="gr_svn79_3540"

><td id="3540"><a href="#3540">3540</a></td></tr
><tr id="gr_svn79_3541"

><td id="3541"><a href="#3541">3541</a></td></tr
><tr id="gr_svn79_3542"

><td id="3542"><a href="#3542">3542</a></td></tr
><tr id="gr_svn79_3543"

><td id="3543"><a href="#3543">3543</a></td></tr
><tr id="gr_svn79_3544"

><td id="3544"><a href="#3544">3544</a></td></tr
><tr id="gr_svn79_3545"

><td id="3545"><a href="#3545">3545</a></td></tr
><tr id="gr_svn79_3546"

><td id="3546"><a href="#3546">3546</a></td></tr
><tr id="gr_svn79_3547"

><td id="3547"><a href="#3547">3547</a></td></tr
><tr id="gr_svn79_3548"

><td id="3548"><a href="#3548">3548</a></td></tr
><tr id="gr_svn79_3549"

><td id="3549"><a href="#3549">3549</a></td></tr
><tr id="gr_svn79_3550"

><td id="3550"><a href="#3550">3550</a></td></tr
><tr id="gr_svn79_3551"

><td id="3551"><a href="#3551">3551</a></td></tr
><tr id="gr_svn79_3552"

><td id="3552"><a href="#3552">3552</a></td></tr
><tr id="gr_svn79_3553"

><td id="3553"><a href="#3553">3553</a></td></tr
><tr id="gr_svn79_3554"

><td id="3554"><a href="#3554">3554</a></td></tr
><tr id="gr_svn79_3555"

><td id="3555"><a href="#3555">3555</a></td></tr
><tr id="gr_svn79_3556"

><td id="3556"><a href="#3556">3556</a></td></tr
><tr id="gr_svn79_3557"

><td id="3557"><a href="#3557">3557</a></td></tr
><tr id="gr_svn79_3558"

><td id="3558"><a href="#3558">3558</a></td></tr
><tr id="gr_svn79_3559"

><td id="3559"><a href="#3559">3559</a></td></tr
><tr id="gr_svn79_3560"

><td id="3560"><a href="#3560">3560</a></td></tr
><tr id="gr_svn79_3561"

><td id="3561"><a href="#3561">3561</a></td></tr
><tr id="gr_svn79_3562"

><td id="3562"><a href="#3562">3562</a></td></tr
><tr id="gr_svn79_3563"

><td id="3563"><a href="#3563">3563</a></td></tr
><tr id="gr_svn79_3564"

><td id="3564"><a href="#3564">3564</a></td></tr
><tr id="gr_svn79_3565"

><td id="3565"><a href="#3565">3565</a></td></tr
><tr id="gr_svn79_3566"

><td id="3566"><a href="#3566">3566</a></td></tr
><tr id="gr_svn79_3567"

><td id="3567"><a href="#3567">3567</a></td></tr
><tr id="gr_svn79_3568"

><td id="3568"><a href="#3568">3568</a></td></tr
><tr id="gr_svn79_3569"

><td id="3569"><a href="#3569">3569</a></td></tr
><tr id="gr_svn79_3570"

><td id="3570"><a href="#3570">3570</a></td></tr
><tr id="gr_svn79_3571"

><td id="3571"><a href="#3571">3571</a></td></tr
><tr id="gr_svn79_3572"

><td id="3572"><a href="#3572">3572</a></td></tr
><tr id="gr_svn79_3573"

><td id="3573"><a href="#3573">3573</a></td></tr
><tr id="gr_svn79_3574"

><td id="3574"><a href="#3574">3574</a></td></tr
><tr id="gr_svn79_3575"

><td id="3575"><a href="#3575">3575</a></td></tr
><tr id="gr_svn79_3576"

><td id="3576"><a href="#3576">3576</a></td></tr
><tr id="gr_svn79_3577"

><td id="3577"><a href="#3577">3577</a></td></tr
><tr id="gr_svn79_3578"

><td id="3578"><a href="#3578">3578</a></td></tr
><tr id="gr_svn79_3579"

><td id="3579"><a href="#3579">3579</a></td></tr
><tr id="gr_svn79_3580"

><td id="3580"><a href="#3580">3580</a></td></tr
><tr id="gr_svn79_3581"

><td id="3581"><a href="#3581">3581</a></td></tr
><tr id="gr_svn79_3582"

><td id="3582"><a href="#3582">3582</a></td></tr
><tr id="gr_svn79_3583"

><td id="3583"><a href="#3583">3583</a></td></tr
><tr id="gr_svn79_3584"

><td id="3584"><a href="#3584">3584</a></td></tr
><tr id="gr_svn79_3585"

><td id="3585"><a href="#3585">3585</a></td></tr
><tr id="gr_svn79_3586"

><td id="3586"><a href="#3586">3586</a></td></tr
><tr id="gr_svn79_3587"

><td id="3587"><a href="#3587">3587</a></td></tr
><tr id="gr_svn79_3588"

><td id="3588"><a href="#3588">3588</a></td></tr
><tr id="gr_svn79_3589"

><td id="3589"><a href="#3589">3589</a></td></tr
><tr id="gr_svn79_3590"

><td id="3590"><a href="#3590">3590</a></td></tr
><tr id="gr_svn79_3591"

><td id="3591"><a href="#3591">3591</a></td></tr
><tr id="gr_svn79_3592"

><td id="3592"><a href="#3592">3592</a></td></tr
><tr id="gr_svn79_3593"

><td id="3593"><a href="#3593">3593</a></td></tr
><tr id="gr_svn79_3594"

><td id="3594"><a href="#3594">3594</a></td></tr
><tr id="gr_svn79_3595"

><td id="3595"><a href="#3595">3595</a></td></tr
><tr id="gr_svn79_3596"

><td id="3596"><a href="#3596">3596</a></td></tr
><tr id="gr_svn79_3597"

><td id="3597"><a href="#3597">3597</a></td></tr
><tr id="gr_svn79_3598"

><td id="3598"><a href="#3598">3598</a></td></tr
><tr id="gr_svn79_3599"

><td id="3599"><a href="#3599">3599</a></td></tr
><tr id="gr_svn79_3600"

><td id="3600"><a href="#3600">3600</a></td></tr
><tr id="gr_svn79_3601"

><td id="3601"><a href="#3601">3601</a></td></tr
><tr id="gr_svn79_3602"

><td id="3602"><a href="#3602">3602</a></td></tr
><tr id="gr_svn79_3603"

><td id="3603"><a href="#3603">3603</a></td></tr
><tr id="gr_svn79_3604"

><td id="3604"><a href="#3604">3604</a></td></tr
><tr id="gr_svn79_3605"

><td id="3605"><a href="#3605">3605</a></td></tr
><tr id="gr_svn79_3606"

><td id="3606"><a href="#3606">3606</a></td></tr
><tr id="gr_svn79_3607"

><td id="3607"><a href="#3607">3607</a></td></tr
><tr id="gr_svn79_3608"

><td id="3608"><a href="#3608">3608</a></td></tr
><tr id="gr_svn79_3609"

><td id="3609"><a href="#3609">3609</a></td></tr
><tr id="gr_svn79_3610"

><td id="3610"><a href="#3610">3610</a></td></tr
><tr id="gr_svn79_3611"

><td id="3611"><a href="#3611">3611</a></td></tr
><tr id="gr_svn79_3612"

><td id="3612"><a href="#3612">3612</a></td></tr
><tr id="gr_svn79_3613"

><td id="3613"><a href="#3613">3613</a></td></tr
><tr id="gr_svn79_3614"

><td id="3614"><a href="#3614">3614</a></td></tr
><tr id="gr_svn79_3615"

><td id="3615"><a href="#3615">3615</a></td></tr
><tr id="gr_svn79_3616"

><td id="3616"><a href="#3616">3616</a></td></tr
><tr id="gr_svn79_3617"

><td id="3617"><a href="#3617">3617</a></td></tr
><tr id="gr_svn79_3618"

><td id="3618"><a href="#3618">3618</a></td></tr
><tr id="gr_svn79_3619"

><td id="3619"><a href="#3619">3619</a></td></tr
><tr id="gr_svn79_3620"

><td id="3620"><a href="#3620">3620</a></td></tr
><tr id="gr_svn79_3621"

><td id="3621"><a href="#3621">3621</a></td></tr
><tr id="gr_svn79_3622"

><td id="3622"><a href="#3622">3622</a></td></tr
><tr id="gr_svn79_3623"

><td id="3623"><a href="#3623">3623</a></td></tr
><tr id="gr_svn79_3624"

><td id="3624"><a href="#3624">3624</a></td></tr
><tr id="gr_svn79_3625"

><td id="3625"><a href="#3625">3625</a></td></tr
><tr id="gr_svn79_3626"

><td id="3626"><a href="#3626">3626</a></td></tr
><tr id="gr_svn79_3627"

><td id="3627"><a href="#3627">3627</a></td></tr
><tr id="gr_svn79_3628"

><td id="3628"><a href="#3628">3628</a></td></tr
><tr id="gr_svn79_3629"

><td id="3629"><a href="#3629">3629</a></td></tr
><tr id="gr_svn79_3630"

><td id="3630"><a href="#3630">3630</a></td></tr
><tr id="gr_svn79_3631"

><td id="3631"><a href="#3631">3631</a></td></tr
><tr id="gr_svn79_3632"

><td id="3632"><a href="#3632">3632</a></td></tr
><tr id="gr_svn79_3633"

><td id="3633"><a href="#3633">3633</a></td></tr
><tr id="gr_svn79_3634"

><td id="3634"><a href="#3634">3634</a></td></tr
><tr id="gr_svn79_3635"

><td id="3635"><a href="#3635">3635</a></td></tr
><tr id="gr_svn79_3636"

><td id="3636"><a href="#3636">3636</a></td></tr
><tr id="gr_svn79_3637"

><td id="3637"><a href="#3637">3637</a></td></tr
><tr id="gr_svn79_3638"

><td id="3638"><a href="#3638">3638</a></td></tr
><tr id="gr_svn79_3639"

><td id="3639"><a href="#3639">3639</a></td></tr
><tr id="gr_svn79_3640"

><td id="3640"><a href="#3640">3640</a></td></tr
><tr id="gr_svn79_3641"

><td id="3641"><a href="#3641">3641</a></td></tr
><tr id="gr_svn79_3642"

><td id="3642"><a href="#3642">3642</a></td></tr
><tr id="gr_svn79_3643"

><td id="3643"><a href="#3643">3643</a></td></tr
><tr id="gr_svn79_3644"

><td id="3644"><a href="#3644">3644</a></td></tr
><tr id="gr_svn79_3645"

><td id="3645"><a href="#3645">3645</a></td></tr
><tr id="gr_svn79_3646"

><td id="3646"><a href="#3646">3646</a></td></tr
><tr id="gr_svn79_3647"

><td id="3647"><a href="#3647">3647</a></td></tr
><tr id="gr_svn79_3648"

><td id="3648"><a href="#3648">3648</a></td></tr
><tr id="gr_svn79_3649"

><td id="3649"><a href="#3649">3649</a></td></tr
><tr id="gr_svn79_3650"

><td id="3650"><a href="#3650">3650</a></td></tr
><tr id="gr_svn79_3651"

><td id="3651"><a href="#3651">3651</a></td></tr
><tr id="gr_svn79_3652"

><td id="3652"><a href="#3652">3652</a></td></tr
><tr id="gr_svn79_3653"

><td id="3653"><a href="#3653">3653</a></td></tr
><tr id="gr_svn79_3654"

><td id="3654"><a href="#3654">3654</a></td></tr
><tr id="gr_svn79_3655"

><td id="3655"><a href="#3655">3655</a></td></tr
><tr id="gr_svn79_3656"

><td id="3656"><a href="#3656">3656</a></td></tr
><tr id="gr_svn79_3657"

><td id="3657"><a href="#3657">3657</a></td></tr
><tr id="gr_svn79_3658"

><td id="3658"><a href="#3658">3658</a></td></tr
><tr id="gr_svn79_3659"

><td id="3659"><a href="#3659">3659</a></td></tr
><tr id="gr_svn79_3660"

><td id="3660"><a href="#3660">3660</a></td></tr
><tr id="gr_svn79_3661"

><td id="3661"><a href="#3661">3661</a></td></tr
><tr id="gr_svn79_3662"

><td id="3662"><a href="#3662">3662</a></td></tr
><tr id="gr_svn79_3663"

><td id="3663"><a href="#3663">3663</a></td></tr
><tr id="gr_svn79_3664"

><td id="3664"><a href="#3664">3664</a></td></tr
><tr id="gr_svn79_3665"

><td id="3665"><a href="#3665">3665</a></td></tr
><tr id="gr_svn79_3666"

><td id="3666"><a href="#3666">3666</a></td></tr
><tr id="gr_svn79_3667"

><td id="3667"><a href="#3667">3667</a></td></tr
><tr id="gr_svn79_3668"

><td id="3668"><a href="#3668">3668</a></td></tr
><tr id="gr_svn79_3669"

><td id="3669"><a href="#3669">3669</a></td></tr
><tr id="gr_svn79_3670"

><td id="3670"><a href="#3670">3670</a></td></tr
><tr id="gr_svn79_3671"

><td id="3671"><a href="#3671">3671</a></td></tr
><tr id="gr_svn79_3672"

><td id="3672"><a href="#3672">3672</a></td></tr
><tr id="gr_svn79_3673"

><td id="3673"><a href="#3673">3673</a></td></tr
><tr id="gr_svn79_3674"

><td id="3674"><a href="#3674">3674</a></td></tr
><tr id="gr_svn79_3675"

><td id="3675"><a href="#3675">3675</a></td></tr
><tr id="gr_svn79_3676"

><td id="3676"><a href="#3676">3676</a></td></tr
><tr id="gr_svn79_3677"

><td id="3677"><a href="#3677">3677</a></td></tr
><tr id="gr_svn79_3678"

><td id="3678"><a href="#3678">3678</a></td></tr
><tr id="gr_svn79_3679"

><td id="3679"><a href="#3679">3679</a></td></tr
><tr id="gr_svn79_3680"

><td id="3680"><a href="#3680">3680</a></td></tr
><tr id="gr_svn79_3681"

><td id="3681"><a href="#3681">3681</a></td></tr
><tr id="gr_svn79_3682"

><td id="3682"><a href="#3682">3682</a></td></tr
><tr id="gr_svn79_3683"

><td id="3683"><a href="#3683">3683</a></td></tr
><tr id="gr_svn79_3684"

><td id="3684"><a href="#3684">3684</a></td></tr
><tr id="gr_svn79_3685"

><td id="3685"><a href="#3685">3685</a></td></tr
><tr id="gr_svn79_3686"

><td id="3686"><a href="#3686">3686</a></td></tr
><tr id="gr_svn79_3687"

><td id="3687"><a href="#3687">3687</a></td></tr
><tr id="gr_svn79_3688"

><td id="3688"><a href="#3688">3688</a></td></tr
><tr id="gr_svn79_3689"

><td id="3689"><a href="#3689">3689</a></td></tr
><tr id="gr_svn79_3690"

><td id="3690"><a href="#3690">3690</a></td></tr
><tr id="gr_svn79_3691"

><td id="3691"><a href="#3691">3691</a></td></tr
><tr id="gr_svn79_3692"

><td id="3692"><a href="#3692">3692</a></td></tr
><tr id="gr_svn79_3693"

><td id="3693"><a href="#3693">3693</a></td></tr
><tr id="gr_svn79_3694"

><td id="3694"><a href="#3694">3694</a></td></tr
><tr id="gr_svn79_3695"

><td id="3695"><a href="#3695">3695</a></td></tr
><tr id="gr_svn79_3696"

><td id="3696"><a href="#3696">3696</a></td></tr
><tr id="gr_svn79_3697"

><td id="3697"><a href="#3697">3697</a></td></tr
><tr id="gr_svn79_3698"

><td id="3698"><a href="#3698">3698</a></td></tr
><tr id="gr_svn79_3699"

><td id="3699"><a href="#3699">3699</a></td></tr
><tr id="gr_svn79_3700"

><td id="3700"><a href="#3700">3700</a></td></tr
><tr id="gr_svn79_3701"

><td id="3701"><a href="#3701">3701</a></td></tr
><tr id="gr_svn79_3702"

><td id="3702"><a href="#3702">3702</a></td></tr
><tr id="gr_svn79_3703"

><td id="3703"><a href="#3703">3703</a></td></tr
><tr id="gr_svn79_3704"

><td id="3704"><a href="#3704">3704</a></td></tr
><tr id="gr_svn79_3705"

><td id="3705"><a href="#3705">3705</a></td></tr
><tr id="gr_svn79_3706"

><td id="3706"><a href="#3706">3706</a></td></tr
><tr id="gr_svn79_3707"

><td id="3707"><a href="#3707">3707</a></td></tr
><tr id="gr_svn79_3708"

><td id="3708"><a href="#3708">3708</a></td></tr
><tr id="gr_svn79_3709"

><td id="3709"><a href="#3709">3709</a></td></tr
><tr id="gr_svn79_3710"

><td id="3710"><a href="#3710">3710</a></td></tr
><tr id="gr_svn79_3711"

><td id="3711"><a href="#3711">3711</a></td></tr
><tr id="gr_svn79_3712"

><td id="3712"><a href="#3712">3712</a></td></tr
><tr id="gr_svn79_3713"

><td id="3713"><a href="#3713">3713</a></td></tr
><tr id="gr_svn79_3714"

><td id="3714"><a href="#3714">3714</a></td></tr
><tr id="gr_svn79_3715"

><td id="3715"><a href="#3715">3715</a></td></tr
><tr id="gr_svn79_3716"

><td id="3716"><a href="#3716">3716</a></td></tr
><tr id="gr_svn79_3717"

><td id="3717"><a href="#3717">3717</a></td></tr
><tr id="gr_svn79_3718"

><td id="3718"><a href="#3718">3718</a></td></tr
><tr id="gr_svn79_3719"

><td id="3719"><a href="#3719">3719</a></td></tr
><tr id="gr_svn79_3720"

><td id="3720"><a href="#3720">3720</a></td></tr
><tr id="gr_svn79_3721"

><td id="3721"><a href="#3721">3721</a></td></tr
><tr id="gr_svn79_3722"

><td id="3722"><a href="#3722">3722</a></td></tr
><tr id="gr_svn79_3723"

><td id="3723"><a href="#3723">3723</a></td></tr
><tr id="gr_svn79_3724"

><td id="3724"><a href="#3724">3724</a></td></tr
><tr id="gr_svn79_3725"

><td id="3725"><a href="#3725">3725</a></td></tr
><tr id="gr_svn79_3726"

><td id="3726"><a href="#3726">3726</a></td></tr
><tr id="gr_svn79_3727"

><td id="3727"><a href="#3727">3727</a></td></tr
><tr id="gr_svn79_3728"

><td id="3728"><a href="#3728">3728</a></td></tr
><tr id="gr_svn79_3729"

><td id="3729"><a href="#3729">3729</a></td></tr
><tr id="gr_svn79_3730"

><td id="3730"><a href="#3730">3730</a></td></tr
><tr id="gr_svn79_3731"

><td id="3731"><a href="#3731">3731</a></td></tr
><tr id="gr_svn79_3732"

><td id="3732"><a href="#3732">3732</a></td></tr
><tr id="gr_svn79_3733"

><td id="3733"><a href="#3733">3733</a></td></tr
><tr id="gr_svn79_3734"

><td id="3734"><a href="#3734">3734</a></td></tr
><tr id="gr_svn79_3735"

><td id="3735"><a href="#3735">3735</a></td></tr
><tr id="gr_svn79_3736"

><td id="3736"><a href="#3736">3736</a></td></tr
><tr id="gr_svn79_3737"

><td id="3737"><a href="#3737">3737</a></td></tr
><tr id="gr_svn79_3738"

><td id="3738"><a href="#3738">3738</a></td></tr
><tr id="gr_svn79_3739"

><td id="3739"><a href="#3739">3739</a></td></tr
><tr id="gr_svn79_3740"

><td id="3740"><a href="#3740">3740</a></td></tr
><tr id="gr_svn79_3741"

><td id="3741"><a href="#3741">3741</a></td></tr
><tr id="gr_svn79_3742"

><td id="3742"><a href="#3742">3742</a></td></tr
><tr id="gr_svn79_3743"

><td id="3743"><a href="#3743">3743</a></td></tr
><tr id="gr_svn79_3744"

><td id="3744"><a href="#3744">3744</a></td></tr
><tr id="gr_svn79_3745"

><td id="3745"><a href="#3745">3745</a></td></tr
><tr id="gr_svn79_3746"

><td id="3746"><a href="#3746">3746</a></td></tr
><tr id="gr_svn79_3747"

><td id="3747"><a href="#3747">3747</a></td></tr
><tr id="gr_svn79_3748"

><td id="3748"><a href="#3748">3748</a></td></tr
><tr id="gr_svn79_3749"

><td id="3749"><a href="#3749">3749</a></td></tr
><tr id="gr_svn79_3750"

><td id="3750"><a href="#3750">3750</a></td></tr
><tr id="gr_svn79_3751"

><td id="3751"><a href="#3751">3751</a></td></tr
><tr id="gr_svn79_3752"

><td id="3752"><a href="#3752">3752</a></td></tr
><tr id="gr_svn79_3753"

><td id="3753"><a href="#3753">3753</a></td></tr
><tr id="gr_svn79_3754"

><td id="3754"><a href="#3754">3754</a></td></tr
><tr id="gr_svn79_3755"

><td id="3755"><a href="#3755">3755</a></td></tr
><tr id="gr_svn79_3756"

><td id="3756"><a href="#3756">3756</a></td></tr
><tr id="gr_svn79_3757"

><td id="3757"><a href="#3757">3757</a></td></tr
><tr id="gr_svn79_3758"

><td id="3758"><a href="#3758">3758</a></td></tr
><tr id="gr_svn79_3759"

><td id="3759"><a href="#3759">3759</a></td></tr
><tr id="gr_svn79_3760"

><td id="3760"><a href="#3760">3760</a></td></tr
><tr id="gr_svn79_3761"

><td id="3761"><a href="#3761">3761</a></td></tr
><tr id="gr_svn79_3762"

><td id="3762"><a href="#3762">3762</a></td></tr
><tr id="gr_svn79_3763"

><td id="3763"><a href="#3763">3763</a></td></tr
><tr id="gr_svn79_3764"

><td id="3764"><a href="#3764">3764</a></td></tr
><tr id="gr_svn79_3765"

><td id="3765"><a href="#3765">3765</a></td></tr
><tr id="gr_svn79_3766"

><td id="3766"><a href="#3766">3766</a></td></tr
><tr id="gr_svn79_3767"

><td id="3767"><a href="#3767">3767</a></td></tr
><tr id="gr_svn79_3768"

><td id="3768"><a href="#3768">3768</a></td></tr
><tr id="gr_svn79_3769"

><td id="3769"><a href="#3769">3769</a></td></tr
><tr id="gr_svn79_3770"

><td id="3770"><a href="#3770">3770</a></td></tr
><tr id="gr_svn79_3771"

><td id="3771"><a href="#3771">3771</a></td></tr
><tr id="gr_svn79_3772"

><td id="3772"><a href="#3772">3772</a></td></tr
><tr id="gr_svn79_3773"

><td id="3773"><a href="#3773">3773</a></td></tr
><tr id="gr_svn79_3774"

><td id="3774"><a href="#3774">3774</a></td></tr
><tr id="gr_svn79_3775"

><td id="3775"><a href="#3775">3775</a></td></tr
><tr id="gr_svn79_3776"

><td id="3776"><a href="#3776">3776</a></td></tr
><tr id="gr_svn79_3777"

><td id="3777"><a href="#3777">3777</a></td></tr
><tr id="gr_svn79_3778"

><td id="3778"><a href="#3778">3778</a></td></tr
><tr id="gr_svn79_3779"

><td id="3779"><a href="#3779">3779</a></td></tr
><tr id="gr_svn79_3780"

><td id="3780"><a href="#3780">3780</a></td></tr
><tr id="gr_svn79_3781"

><td id="3781"><a href="#3781">3781</a></td></tr
><tr id="gr_svn79_3782"

><td id="3782"><a href="#3782">3782</a></td></tr
><tr id="gr_svn79_3783"

><td id="3783"><a href="#3783">3783</a></td></tr
><tr id="gr_svn79_3784"

><td id="3784"><a href="#3784">3784</a></td></tr
><tr id="gr_svn79_3785"

><td id="3785"><a href="#3785">3785</a></td></tr
><tr id="gr_svn79_3786"

><td id="3786"><a href="#3786">3786</a></td></tr
><tr id="gr_svn79_3787"

><td id="3787"><a href="#3787">3787</a></td></tr
><tr id="gr_svn79_3788"

><td id="3788"><a href="#3788">3788</a></td></tr
><tr id="gr_svn79_3789"

><td id="3789"><a href="#3789">3789</a></td></tr
><tr id="gr_svn79_3790"

><td id="3790"><a href="#3790">3790</a></td></tr
><tr id="gr_svn79_3791"

><td id="3791"><a href="#3791">3791</a></td></tr
><tr id="gr_svn79_3792"

><td id="3792"><a href="#3792">3792</a></td></tr
><tr id="gr_svn79_3793"

><td id="3793"><a href="#3793">3793</a></td></tr
><tr id="gr_svn79_3794"

><td id="3794"><a href="#3794">3794</a></td></tr
><tr id="gr_svn79_3795"

><td id="3795"><a href="#3795">3795</a></td></tr
><tr id="gr_svn79_3796"

><td id="3796"><a href="#3796">3796</a></td></tr
><tr id="gr_svn79_3797"

><td id="3797"><a href="#3797">3797</a></td></tr
><tr id="gr_svn79_3798"

><td id="3798"><a href="#3798">3798</a></td></tr
><tr id="gr_svn79_3799"

><td id="3799"><a href="#3799">3799</a></td></tr
><tr id="gr_svn79_3800"

><td id="3800"><a href="#3800">3800</a></td></tr
><tr id="gr_svn79_3801"

><td id="3801"><a href="#3801">3801</a></td></tr
></table></pre>
<pre><table width="100%"><tr class="nocursor"><td></td></tr></table></pre>
</td>
<td id="lines">
<pre><table width="100%"><tr class="cursor_stop cursor_hidden"><td></td></tr></table></pre>
<pre ><table id="src_table_0"><tr
id=sl_svn79_1

><td class="source">//<br></td></tr
><tr
id=sl_svn79_2

><td class="source">// Copyright (C) 2002 bbSteeringDesire <br></td></tr
><tr
id=sl_svn79_3

><td class="source">// <br></td></tr
><tr
id=sl_svn79_4

><td class="source">// File: bbSteeringDesireNode.cpp<br></td></tr
><tr
id=sl_svn79_5

><td class="source">//<br></td></tr
><tr
id=sl_svn79_6

><td class="source">// Dependency Graph Node: bbSteeringDesire<br></td></tr
><tr
id=sl_svn79_7

><td class="source">//<br></td></tr
><tr
id=sl_svn79_8

><td class="source">// Author: Maya SDK Wizard<br></td></tr
><tr
id=sl_svn79_9

><td class="source">//<br></td></tr
><tr
id=sl_svn79_10

><td class="source"><br></td></tr
><tr
id=sl_svn79_11

><td class="source">#include &lt;math.h&gt;<br></td></tr
><tr
id=sl_svn79_12

><td class="source"><br></td></tr
><tr
id=sl_svn79_13

><td class="source">#include &quot;bbSteeringDesireNode.h&quot;<br></td></tr
><tr
id=sl_svn79_14

><td class="source"><br></td></tr
><tr
id=sl_svn79_15

><td class="source">#include &lt;maya/MTime.h&gt;<br></td></tr
><tr
id=sl_svn79_16

><td class="source">#include &lt;maya/MVectorArray.h&gt;<br></td></tr
><tr
id=sl_svn79_17

><td class="source">#include &lt;maya/MIntArray.h&gt;<br></td></tr
><tr
id=sl_svn79_18

><td class="source">#include &lt;maya/MAngle.h&gt;<br></td></tr
><tr
id=sl_svn79_19

><td class="source">#include &lt;maya/MMatrix.h&gt;<br></td></tr
><tr
id=sl_svn79_20

><td class="source">#include &lt;maya/MTransformationMatrix.h&gt;<br></td></tr
><tr
id=sl_svn79_21

><td class="source">#include &lt;maya/MEulerRotation.h&gt;<br></td></tr
><tr
id=sl_svn79_22

><td class="source">#include &lt;maya/MQuaternion.h&gt;<br></td></tr
><tr
id=sl_svn79_23

><td class="source"><br></td></tr
><tr
id=sl_svn79_24

><td class="source">#include &lt;maya/MFnDependencyNode.h&gt;<br></td></tr
><tr
id=sl_svn79_25

><td class="source">#include &lt;maya/MFnTypedAttribute.h&gt;<br></td></tr
><tr
id=sl_svn79_26

><td class="source">#include &lt;maya/MFnNumericAttribute.h&gt;<br></td></tr
><tr
id=sl_svn79_27

><td class="source">#include &lt;maya/MFnCompoundAttribute.h&gt;<br></td></tr
><tr
id=sl_svn79_28

><td class="source">#include &lt;maya/MFnUnitAttribute.h&gt;<br></td></tr
><tr
id=sl_svn79_29

><td class="source">#include &lt;maya/MFnVectorArrayData.h&gt;<br></td></tr
><tr
id=sl_svn79_30

><td class="source">#include &lt;maya/MFnDoubleArrayData.h&gt;<br></td></tr
><tr
id=sl_svn79_31

><td class="source">#include &lt;maya/MFnNurbsCurve.h&gt;<br></td></tr
><tr
id=sl_svn79_32

><td class="source">#include &lt;maya/MFnNurbsSurface.h&gt;<br></td></tr
><tr
id=sl_svn79_33

><td class="source">#include &lt;maya/MFnMesh.h&gt;<br></td></tr
><tr
id=sl_svn79_34

><td class="source">#include &lt;maya/MFnEnumAttribute.h&gt;<br></td></tr
><tr
id=sl_svn79_35

><td class="source">#include &lt;maya/MGlobal.h&gt;<br></td></tr
><tr
id=sl_svn79_36

><td class="source"><br></td></tr
><tr
id=sl_svn79_37

><td class="source">#include &lt;MTools.h&gt;<br></td></tr
><tr
id=sl_svn79_38

><td class="source"><br></td></tr
><tr
id=sl_svn79_39

><td class="source">MTypeId     bbSteeringDesire::id( 0x3a001 );<br></td></tr
><tr
id=sl_svn79_40

><td class="source"><br></td></tr
><tr
id=sl_svn79_41

><td class="source">// definitions<br></td></tr
><tr
id=sl_svn79_42

><td class="source"><br></td></tr
><tr
id=sl_svn79_43

><td class="source">// steering desires<br></td></tr
><tr
id=sl_svn79_44

><td class="source"><br></td></tr
><tr
id=sl_svn79_45

><td class="source"><br></td></tr
><tr
id=sl_svn79_46

><td class="source">#define SDS_BUG								0<br></td></tr
><tr
id=sl_svn79_47

><td class="source">#define SDS_BUG_DIRECTIONHEADING			1<br></td></tr
><tr
id=sl_svn79_48

><td class="source">#define SDS_BUG_WANDER						2<br></td></tr
><tr
id=sl_svn79_49

><td class="source"><br></td></tr
><tr
id=sl_svn79_50

><td class="source">#define SDS_TARGET							10<br></td></tr
><tr
id=sl_svn79_51

><td class="source">#define SDS_TARGET_SEEK						11<br></td></tr
><tr
id=sl_svn79_52

><td class="source">#define SDS_TARGET_MOTHSEEK					12<br></td></tr
><tr
id=sl_svn79_53

><td class="source">#define SDS_TARGET_ARRIVAL					13<br></td></tr
><tr
id=sl_svn79_54

><td class="source">#define SDS_TARGET_PURSUIT					14<br></td></tr
><tr
id=sl_svn79_55

><td class="source">#define SDS_TARGET_SHADOW					15<br></td></tr
><tr
id=sl_svn79_56

><td class="source">#define SDS_TARGET_FOLLOW					16<br></td></tr
><tr
id=sl_svn79_57

><td class="source">#define SDS_TARGET_OBSTACLEAVOIDANCE		17<br></td></tr
><tr
id=sl_svn79_58

><td class="source"><br></td></tr
><tr
id=sl_svn79_59

><td class="source">#define SDS_NEIGHBOR						30<br></td></tr
><tr
id=sl_svn79_60

><td class="source">#define SDS_NEIGHBOR_ALIGNMENT				31<br></td></tr
><tr
id=sl_svn79_61

><td class="source">#define SDS_NEIGHBOR_COHESION				32<br></td></tr
><tr
id=sl_svn79_62

><td class="source">#define SDS_NEIGHBOR_SEPARATION				33<br></td></tr
><tr
id=sl_svn79_63

><td class="source">#define SDS_NEIGHBOR_COLLISIONAVOIDANCE		34<br></td></tr
><tr
id=sl_svn79_64

><td class="source">#define SDS_NEIGHBOR_KEEPDISTANCE			35<br></td></tr
><tr
id=sl_svn79_65

><td class="source">#define SDS_NEIGHBOR_OPORTUNISM				36<br></td></tr
><tr
id=sl_svn79_66

><td class="source"><br></td></tr
><tr
id=sl_svn79_67

><td class="source">// target selection helper<br></td></tr
><tr
id=sl_svn79_68

><td class="source"><br></td></tr
><tr
id=sl_svn79_69

><td class="source">#define TS_POINT		1<br></td></tr
><tr
id=sl_svn79_70

><td class="source">#define TS_CURVE		2<br></td></tr
><tr
id=sl_svn79_71

><td class="source">#define TS_SURFACE		3<br></td></tr
><tr
id=sl_svn79_72

><td class="source">#define TS_MESH			4<br></td></tr
><tr
id=sl_svn79_73

><td class="source">#define TS_BUG			5<br></td></tr
><tr
id=sl_svn79_74

><td class="source"><br></td></tr
><tr
id=sl_svn79_75

><td class="source"><br></td></tr
><tr
id=sl_svn79_76

><td class="source"><br></td></tr
><tr
id=sl_svn79_77

><td class="source">// sub targets<br></td></tr
><tr
id=sl_svn79_78

><td class="source"><br></td></tr
><tr
id=sl_svn79_79

><td class="source">#define ST_UNIFORM		0<br></td></tr
><tr
id=sl_svn79_80

><td class="source">#define ST_KNOTS		1<br></td></tr
><tr
id=sl_svn79_81

><td class="source"><br></td></tr
><tr
id=sl_svn79_82

><td class="source">// target input selections<br></td></tr
><tr
id=sl_svn79_83

><td class="source"><br></td></tr
><tr
id=sl_svn79_84

><td class="source">#define IS_INDEX		0<br></td></tr
><tr
id=sl_svn79_85

><td class="source">#define IS_ALL			1<br></td></tr
><tr
id=sl_svn79_86

><td class="source">#define IS_AVERAGE		2<br></td></tr
><tr
id=sl_svn79_87

><td class="source"><br></td></tr
><tr
id=sl_svn79_88

><td class="source">// wander choose speed<br></td></tr
><tr
id=sl_svn79_89

><td class="source"><br></td></tr
><tr
id=sl_svn79_90

><td class="source">#define CS_DESIREDSPEED 0<br></td></tr
><tr
id=sl_svn79_91

><td class="source">#define CS_SPEEDRANGE   1<br></td></tr
><tr
id=sl_svn79_92

><td class="source"><br></td></tr
><tr
id=sl_svn79_93

><td class="source"><br></td></tr
><tr
id=sl_svn79_94

><td class="source">// steering forces attributes<br></td></tr
><tr
id=sl_svn79_95

><td class="source"><br></td></tr
><tr
id=sl_svn79_96

><td class="source"><br></td></tr
><tr
id=sl_svn79_97

><td class="source">// <br></td></tr
><tr
id=sl_svn79_98

><td class="source"><br></td></tr
><tr
id=sl_svn79_99

><td class="source">// attributes<br></td></tr
><tr
id=sl_svn79_100

><td class="source"><br></td></tr
><tr
id=sl_svn79_101

><td class="source">#define declareAttrVector(_attr)\<br></td></tr
><tr
id=sl_svn79_102

><td class="source">	MObject	className##::##_attr;\<br></td></tr
><tr
id=sl_svn79_103

><td class="source">	MObject	className##::##_attr##X;\<br></td></tr
><tr
id=sl_svn79_104

><td class="source">	MObject	className##::##_attr##Y;\<br></td></tr
><tr
id=sl_svn79_105

><td class="source">	MObject	className##::##_attr##Z;\<br></td></tr
><tr
id=sl_svn79_106

><td class="source">		<br></td></tr
><tr
id=sl_svn79_107

><td class="source">#define declareAttr(_attr)\<br></td></tr
><tr
id=sl_svn79_108

><td class="source">	MObject	className##::##_attr;\<br></td></tr
><tr
id=sl_svn79_109

><td class="source"><br></td></tr
><tr
id=sl_svn79_110

><td class="source">declareAttr( steeringDesire);<br></td></tr
><tr
id=sl_svn79_111

><td class="source"><br></td></tr
><tr
id=sl_svn79_112

><td class="source">// view parameters<br></td></tr
><tr
id=sl_svn79_113

><td class="source">declareAttr( sensorRange);<br></td></tr
><tr
id=sl_svn79_114

><td class="source">declareAttr( sensorAngle);<br></td></tr
><tr
id=sl_svn79_115

><td class="source">declareAttr( useSensorRange);<br></td></tr
><tr
id=sl_svn79_116

><td class="source">declareAttr( useSensorAngle);<br></td></tr
><tr
id=sl_svn79_117

><td class="source"><br></td></tr
><tr
id=sl_svn79_118

><td class="source">// common attributes<br></td></tr
><tr
id=sl_svn79_119

><td class="source">//declareAttr( scaleDesiredForce);<br></td></tr
><tr
id=sl_svn79_120

><td class="source">declareAttr( desiredSpeed);<br></td></tr
><tr
id=sl_svn79_121

><td class="source">declareAttr( maximumForce);<br></td></tr
><tr
id=sl_svn79_122

><td class="source">declareAttr( inverseDesiredSteeringForce);<br></td></tr
><tr
id=sl_svn79_123

><td class="source">declareAttr( bugRadius);<br></td></tr
><tr
id=sl_svn79_124

><td class="source">declareAttr( lastVector);	<br></td></tr
><tr
id=sl_svn79_125

><td class="source"><br></td></tr
><tr
id=sl_svn79_126

><td class="source">// target attr<br></td></tr
><tr
id=sl_svn79_127

><td class="source">declareAttr( targetType);<br></td></tr
><tr
id=sl_svn79_128

><td class="source">declareAttr( stoppingRange);<br></td></tr
><tr
id=sl_svn79_129

><td class="source">declareAttr( inputCurve);<br></td></tr
><tr
id=sl_svn79_130

><td class="source">declareAttr( inputSurface);<br></td></tr
><tr
id=sl_svn79_131

><td class="source">declareAttr( inputMesh);<br></td></tr
><tr
id=sl_svn79_132

><td class="source">declareAttr( targetRadius);<br></td></tr
><tr
id=sl_svn79_133

><td class="source">declareAttr( inputSelection)<br></td></tr
><tr
id=sl_svn79_134

><td class="source">declareAttr( inputIndex);<br></td></tr
><tr
id=sl_svn79_135

><td class="source">declareAttr( subTargets);<br></td></tr
><tr
id=sl_svn79_136

><td class="source">declareAttr( inputPoint);<br></td></tr
><tr
id=sl_svn79_137

><td class="source">declareAttrVector( lastTarget);<br></td></tr
><tr
id=sl_svn79_138

><td class="source">declareAttr( tolerance);<br></td></tr
><tr
id=sl_svn79_139

><td class="source">declareAttr( probeLength);<br></td></tr
><tr
id=sl_svn79_140

><td class="source">declareAttr( shadowRange);<br></td></tr
><tr
id=sl_svn79_141

><td class="source"><br></td></tr
><tr
id=sl_svn79_142

><td class="source">// bug parameter <br></td></tr
><tr
id=sl_svn79_143

><td class="source"><br></td></tr
><tr
id=sl_svn79_144

><td class="source">declareAttrVector( direction);<br></td></tr
><tr
id=sl_svn79_145

><td class="source">declareAttrVector(wanderMinimumRandomVector);<br></td></tr
><tr
id=sl_svn79_146

><td class="source">declareAttrVector(wanderMaximumRandomVector);<br></td></tr
><tr
id=sl_svn79_147

><td class="source">declareAttrVector(wanderSphereOffset);<br></td></tr
><tr
id=sl_svn79_148

><td class="source">declareAttr(wanderSphereRadius);<br></td></tr
><tr
id=sl_svn79_149

><td class="source">declareAttr(wanderMinimumSpeed);<br></td></tr
><tr
id=sl_svn79_150

><td class="source">declareAttr(wanderMaximumSpeed);<br></td></tr
><tr
id=sl_svn79_151

><td class="source">declareAttr(chooseSpeed);<br></td></tr
><tr
id=sl_svn79_152

><td class="source"><br></td></tr
><tr
id=sl_svn79_153

><td class="source">declareAttr(currentTime);<br></td></tr
><tr
id=sl_svn79_154

><td class="source">declareAttr(initSeedFrame);<br></td></tr
><tr
id=sl_svn79_155

><td class="source">declareAttr(seed);<br></td></tr
><tr
id=sl_svn79_156

><td class="source">declareAttr(useRandom);<br></td></tr
><tr
id=sl_svn79_157

><td class="source"><br></td></tr
><tr
id=sl_svn79_158

><td class="source">// neighbor Attr<br></td></tr
><tr
id=sl_svn79_159

><td class="source">declareAttr(bugDistance);<br></td></tr
><tr
id=sl_svn79_160

><td class="source"><br></td></tr
><tr
id=sl_svn79_161

><td class="source"><br></td></tr
><tr
id=sl_svn79_162

><td class="source"><br></td></tr
><tr
id=sl_svn79_163

><td class="source">/**************************************************************************************/<br></td></tr
><tr
id=sl_svn79_164

><td class="source"><br></td></tr
><tr
id=sl_svn79_165

><td class="source">MStatus bbSteeringDesire::compute( const MPlug&amp; plug, MDataBlock&amp; block )<br></td></tr
><tr
id=sl_svn79_166

><td class="source">{<br></td></tr
><tr
id=sl_svn79_167

><td class="source">	MStatus status;<br></td></tr
><tr
id=sl_svn79_168

><td class="source"> <br></td></tr
><tr
id=sl_svn79_169

><td class="source">	if( !(plug == mOutputForce) )<br></td></tr
><tr
id=sl_svn79_170

><td class="source">        return( MS::kUnknownParameter );<br></td></tr
><tr
id=sl_svn79_171

><td class="source"><br></td></tr
><tr
id=sl_svn79_172

><td class="source">	// get the logical index of the element this plug refers to.<br></td></tr
><tr
id=sl_svn79_173

><td class="source">	//<br></td></tr
><tr
id=sl_svn79_174

><td class="source">	int multiIndex = plug.logicalIndex( &amp;status );<br></td></tr
><tr
id=sl_svn79_175

><td class="source">	McheckErr(status, &quot;ERROR in plug.logicalIndex.\n&quot;);<br></td></tr
><tr
id=sl_svn79_176

><td class="source"><br></td></tr
><tr
id=sl_svn79_177

><td class="source">	// Get input data handle, use outputArrayValue since we do not<br></td></tr
><tr
id=sl_svn79_178

><td class="source">	// want to evaluate both inputs, only the one related to the<br></td></tr
><tr
id=sl_svn79_179

><td class="source">	// requested multiIndex. Evaluating both inputs at once would cause<br></td></tr
><tr
id=sl_svn79_180

><td class="source">	// a dependency graph loop.<br></td></tr
><tr
id=sl_svn79_181

><td class="source">	//<br></td></tr
><tr
id=sl_svn79_182

><td class="source">	MArrayDataHandle hInputArray = block.outputArrayValue( mInputData, &amp;status );<br></td></tr
><tr
id=sl_svn79_183

><td class="source">	McheckErr(status,&quot;ERROR in hInputArray = block.outputArrayValue().\n&quot;);<br></td></tr
><tr
id=sl_svn79_184

><td class="source"><br></td></tr
><tr
id=sl_svn79_185

><td class="source">	status = hInputArray.jumpToElement( multiIndex );<br></td></tr
><tr
id=sl_svn79_186

><td class="source">	McheckErr(status, &quot;ERROR: hInputArray.jumpToElement failed.\n&quot;);<br></td></tr
><tr
id=sl_svn79_187

><td class="source"><br></td></tr
><tr
id=sl_svn79_188

><td class="source">	// get children of aInputData.<br></td></tr
><tr
id=sl_svn79_189

><td class="source">	//<br></td></tr
><tr
id=sl_svn79_190

><td class="source">	MDataHandle hCompond = hInputArray.inputValue( &amp;status );<br></td></tr
><tr
id=sl_svn79_191

><td class="source">	McheckErr(status, &quot;ERROR in hCompond=hInputArray.inputValue\n&quot;);<br></td></tr
><tr
id=sl_svn79_192

><td class="source"><br></td></tr
><tr
id=sl_svn79_193

><td class="source">	MDataHandle hPosition = hCompond.child( mInputPositions );<br></td></tr
><tr
id=sl_svn79_194

><td class="source">	MObject dPosition = hPosition.data();<br></td></tr
><tr
id=sl_svn79_195

><td class="source">	MFnVectorArrayData fnPosition( dPosition );<br></td></tr
><tr
id=sl_svn79_196

><td class="source">	MVectorArray points = fnPosition.array( &amp;status );<br></td></tr
><tr
id=sl_svn79_197

><td class="source">	McheckErr(status, &quot;ERROR in fnPosition.array(), not find points.\n&quot;);<br></td></tr
><tr
id=sl_svn79_198

><td class="source"><br></td></tr
><tr
id=sl_svn79_199

><td class="source">	MDataHandle hVelocity = hCompond.child( mInputVelocities );<br></td></tr
><tr
id=sl_svn79_200

><td class="source">	MObject dVelocity = hVelocity.data();<br></td></tr
><tr
id=sl_svn79_201

><td class="source">	MFnVectorArrayData fnVelocity( dVelocity );<br></td></tr
><tr
id=sl_svn79_202

><td class="source">	MVectorArray velocities = fnVelocity.array( &amp;status );<br></td></tr
><tr
id=sl_svn79_203

><td class="source">	McheckErr(status, &quot;ERROR in fnVelocity.array(), not find velocities.\n&quot;);<br></td></tr
><tr
id=sl_svn79_204

><td class="source"><br></td></tr
><tr
id=sl_svn79_205

><td class="source">	MDataHandle hMass = hCompond.child( mInputMass );<br></td></tr
><tr
id=sl_svn79_206

><td class="source">	MObject dMass = hMass.data();<br></td></tr
><tr
id=sl_svn79_207

><td class="source">	MFnDoubleArrayData fnMass( dMass );<br></td></tr
><tr
id=sl_svn79_208

><td class="source">	MDoubleArray masses = fnMass.array( &amp;status );<br></td></tr
><tr
id=sl_svn79_209

><td class="source">	McheckErr(status, &quot;ERROR in fnMass.array(), not find masses.\n&quot;);<br></td></tr
><tr
id=sl_svn79_210

><td class="source"><br></td></tr
><tr
id=sl_svn79_211

><td class="source">	MDataHandle hDeltaTime = hCompond.child( mDeltaTime);<br></td></tr
><tr
id=sl_svn79_212

><td class="source">	MTime deltaTime = hDeltaTime.asTime();<br></td></tr
><tr
id=sl_svn79_213

><td class="source"><br></td></tr
><tr
id=sl_svn79_214

><td class="source">	// Compute the output force.<br></td></tr
><tr
id=sl_svn79_215

><td class="source">	//<br></td></tr
><tr
id=sl_svn79_216

><td class="source"><br></td></tr
><tr
id=sl_svn79_217

><td class="source">	MVectorArray forceArray;<br></td></tr
><tr
id=sl_svn79_218

><td class="source">	MVectorArray targetArray;<br></td></tr
><tr
id=sl_svn79_219

><td class="source"><br></td></tr
><tr
id=sl_svn79_220

><td class="source">	short steeringDesireV = steeringDesireValue(block);<br></td></tr
><tr
id=sl_svn79_221

><td class="source">	short targetTypeV = targetTypeValue(block);<br></td></tr
><tr
id=sl_svn79_222

><td class="source">	<br></td></tr
><tr
id=sl_svn79_223

><td class="source">	int pointsSize = points.length();<br></td></tr
><tr
id=sl_svn79_224

><td class="source"><br></td></tr
><tr
id=sl_svn79_225

><td class="source">	// if seperator selected, select next sd<br></td></tr
><tr
id=sl_svn79_226

><td class="source"><br></td></tr
><tr
id=sl_svn79_227

><td class="source">	switch ( steeringDesireV ) {<br></td></tr
><tr
id=sl_svn79_228

><td class="source"><br></td></tr
><tr
id=sl_svn79_229

><td class="source">			// bug steering desires<br></td></tr
><tr
id=sl_svn79_230

><td class="source"><br></td></tr
><tr
id=sl_svn79_231

><td class="source">			case SDS_BUG_DIRECTIONHEADING:<br></td></tr
><tr
id=sl_svn79_232

><td class="source">					sdBugHeadDirection(block, points, velocities,  forceArray );<br></td></tr
><tr
id=sl_svn79_233

><td class="source">				break;<br></td></tr
><tr
id=sl_svn79_234

><td class="source"><br></td></tr
><tr
id=sl_svn79_235

><td class="source">			case SDS_BUG_WANDER:<br></td></tr
><tr
id=sl_svn79_236

><td class="source">					sdBugWander(block, points, velocities,  forceArray );<br></td></tr
><tr
id=sl_svn79_237

><td class="source">				break;<br></td></tr
><tr
id=sl_svn79_238

><td class="source"><br></td></tr
><tr
id=sl_svn79_239

><td class="source">			// target steering desires<br></td></tr
><tr
id=sl_svn79_240

><td class="source"><br></td></tr
><tr
id=sl_svn79_241

><td class="source">			case SDS_TARGET_SEEK	:<br></td></tr
><tr
id=sl_svn79_242

><td class="source">				{<br></td></tr
><tr
id=sl_svn79_243

><td class="source">					switch(targetTypeV)<br></td></tr
><tr
id=sl_svn79_244

><td class="source">					{<br></td></tr
><tr
id=sl_svn79_245

><td class="source">						case TS_POINT: getTargetsFromPoint(block,targetArray); break;<br></td></tr
><tr
id=sl_svn79_246

><td class="source">						case TS_CURVE: getTargetsFromCurve(block,pointsSize,targetArray); break;<br></td></tr
><tr
id=sl_svn79_247

><td class="source">						case TS_SURFACE: getTargetsFromSurface(block,pointsSize,targetArray); break;<br></td></tr
><tr
id=sl_svn79_248

><td class="source">						case TS_MESH: getTargetsFromMesh(block,pointsSize,targetArray); break;<br></td></tr
><tr
id=sl_svn79_249

><td class="source">					}<br></td></tr
><tr
id=sl_svn79_250

><td class="source">					sdSeekTargets(block,points,velocities,targetArray,forceArray);	<br></td></tr
><tr
id=sl_svn79_251

><td class="source">				}<br></td></tr
><tr
id=sl_svn79_252

><td class="source">				break;<br></td></tr
><tr
id=sl_svn79_253

><td class="source"><br></td></tr
><tr
id=sl_svn79_254

><td class="source">			case SDS_TARGET_MOTHSEEK:<br></td></tr
><tr
id=sl_svn79_255

><td class="source">				{<br></td></tr
><tr
id=sl_svn79_256

><td class="source">					switch(targetTypeV)<br></td></tr
><tr
id=sl_svn79_257

><td class="source">					{<br></td></tr
><tr
id=sl_svn79_258

><td class="source">						case TS_POINT: getTargetsFromPoint(block,targetArray); break;<br></td></tr
><tr
id=sl_svn79_259

><td class="source">						case TS_CURVE: getTargetsFromCurve(block,pointsSize,targetArray); break;<br></td></tr
><tr
id=sl_svn79_260

><td class="source">						case TS_SURFACE: getTargetsFromSurface(block,pointsSize,targetArray); break;<br></td></tr
><tr
id=sl_svn79_261

><td class="source">						case TS_MESH: getTargetsFromMesh(block,pointsSize,targetArray); break;<br></td></tr
><tr
id=sl_svn79_262

><td class="source">					}<br></td></tr
><tr
id=sl_svn79_263

><td class="source">					sdMothSeekTargets(block,points,velocities,targetArray,forceArray);			<br></td></tr
><tr
id=sl_svn79_264

><td class="source">				}<br></td></tr
><tr
id=sl_svn79_265

><td class="source">				break;<br></td></tr
><tr
id=sl_svn79_266

><td class="source"><br></td></tr
><tr
id=sl_svn79_267

><td class="source">			case SDS_TARGET_ARRIVAL:<br></td></tr
><tr
id=sl_svn79_268

><td class="source">				{<br></td></tr
><tr
id=sl_svn79_269

><td class="source">					switch(targetTypeV)<br></td></tr
><tr
id=sl_svn79_270

><td class="source">					{<br></td></tr
><tr
id=sl_svn79_271

><td class="source">						case TS_POINT: getTargetsFromPoint(block,targetArray); break;<br></td></tr
><tr
id=sl_svn79_272

><td class="source">						case TS_CURVE: getTargetsFromCurve(block,pointsSize,targetArray); break;<br></td></tr
><tr
id=sl_svn79_273

><td class="source">						case TS_SURFACE: getTargetsFromSurface(block,pointsSize,targetArray); break;<br></td></tr
><tr
id=sl_svn79_274

><td class="source">						case TS_MESH: getTargetsFromMesh(block,pointsSize,targetArray); break;	<br></td></tr
><tr
id=sl_svn79_275

><td class="source">					}<br></td></tr
><tr
id=sl_svn79_276

><td class="source">					sdArrivalTargets(block,points,velocities,targetArray,forceArray);<br></td></tr
><tr
id=sl_svn79_277

><td class="source">				}<br></td></tr
><tr
id=sl_svn79_278

><td class="source">				break;<br></td></tr
><tr
id=sl_svn79_279

><td class="source"><br></td></tr
><tr
id=sl_svn79_280

><td class="source">			case SDS_TARGET_PURSUIT:<br></td></tr
><tr
id=sl_svn79_281

><td class="source">				{<br></td></tr
><tr
id=sl_svn79_282

><td class="source">					switch(targetTypeV)<br></td></tr
><tr
id=sl_svn79_283

><td class="source">					{<br></td></tr
><tr
id=sl_svn79_284

><td class="source">						case TS_POINT: getTargetsFromPoint(block,targetArray); break;<br></td></tr
><tr
id=sl_svn79_285

><td class="source">						case TS_CURVE: getTargetsFromCurve(block,pointsSize,targetArray); break;<br></td></tr
><tr
id=sl_svn79_286

><td class="source">						case TS_SURFACE: getTargetsFromSurface(block,pointsSize,targetArray); break;<br></td></tr
><tr
id=sl_svn79_287

><td class="source">						case TS_MESH: getTargetsFromMesh(block,pointsSize,targetArray); break;	<br></td></tr
><tr
id=sl_svn79_288

><td class="source">					}<br></td></tr
><tr
id=sl_svn79_289

><td class="source">					sdPursuitTargets(block,points,velocities,targetArray,forceArray);<br></td></tr
><tr
id=sl_svn79_290

><td class="source">				}<br></td></tr
><tr
id=sl_svn79_291

><td class="source">				break;<br></td></tr
><tr
id=sl_svn79_292

><td class="source"><br></td></tr
><tr
id=sl_svn79_293

><td class="source">			case SDS_TARGET_SHADOW:<br></td></tr
><tr
id=sl_svn79_294

><td class="source">				{<br></td></tr
><tr
id=sl_svn79_295

><td class="source">					switch(targetTypeV)<br></td></tr
><tr
id=sl_svn79_296

><td class="source">					{<br></td></tr
><tr
id=sl_svn79_297

><td class="source">						case TS_POINT: getTargetsFromPoint(block,targetArray); break;<br></td></tr
><tr
id=sl_svn79_298

><td class="source">						case TS_CURVE: getTargetsFromCurve(block,pointsSize,targetArray); break;<br></td></tr
><tr
id=sl_svn79_299

><td class="source">						case TS_SURFACE: getTargetsFromSurface(block,pointsSize,targetArray); break;<br></td></tr
><tr
id=sl_svn79_300

><td class="source">						case TS_MESH: getTargetsFromMesh(block,pointsSize,targetArray); break;	<br></td></tr
><tr
id=sl_svn79_301

><td class="source">					}<br></td></tr
><tr
id=sl_svn79_302

><td class="source">					sdShadowTargets(block,points,velocities,targetArray,deltaTime,forceArray);			<br></td></tr
><tr
id=sl_svn79_303

><td class="source">				}<br></td></tr
><tr
id=sl_svn79_304

><td class="source">				break;<br></td></tr
><tr
id=sl_svn79_305

><td class="source"><br></td></tr
><tr
id=sl_svn79_306

><td class="source">			case SDS_TARGET_FOLLOW:<br></td></tr
><tr
id=sl_svn79_307

><td class="source">				{<br></td></tr
><tr
id=sl_svn79_308

><td class="source">					switch(targetTypeV)<br></td></tr
><tr
id=sl_svn79_309

><td class="source">					{<br></td></tr
><tr
id=sl_svn79_310

><td class="source">						case TS_POINT:  break;<br></td></tr
><tr
id=sl_svn79_311

><td class="source">						case TS_CURVE: 	sdCurveFollowing(block, points, velocities,  forceArray); break;<br></td></tr
><tr
id=sl_svn79_312

><td class="source">						case TS_SURFACE: sdSurfaceFollowing(block, points, velocities,  forceArray); break;<br></td></tr
><tr
id=sl_svn79_313

><td class="source">						case TS_MESH: 	sdMeshFollowing(block, points, velocities,  forceArray );	break;	<br></td></tr
><tr
id=sl_svn79_314

><td class="source">					}		<br></td></tr
><tr
id=sl_svn79_315

><td class="source">				}<br></td></tr
><tr
id=sl_svn79_316

><td class="source">				break;<br></td></tr
><tr
id=sl_svn79_317

><td class="source"><br></td></tr
><tr
id=sl_svn79_318

><td class="source">			case SDS_TARGET_OBSTACLEAVOIDANCE:<br></td></tr
><tr
id=sl_svn79_319

><td class="source">				{<br></td></tr
><tr
id=sl_svn79_320

><td class="source">					switch(targetTypeV)<br></td></tr
><tr
id=sl_svn79_321

><td class="source">					{<br></td></tr
><tr
id=sl_svn79_322

><td class="source">						case TS_POINT: break;<br></td></tr
><tr
id=sl_svn79_323

><td class="source">						case TS_CURVE: break;<br></td></tr
><tr
id=sl_svn79_324

><td class="source">						case TS_SURFACE: sdSurfaceObstacleAvoidance(block, points, velocities,  forceArray ); break;<br></td></tr
><tr
id=sl_svn79_325

><td class="source">						case TS_MESH: 	sdMeshObstacleAvoidance(block, points, velocities,  forceArray );break;	<br></td></tr
><tr
id=sl_svn79_326

><td class="source">					}<br></td></tr
><tr
id=sl_svn79_327

><td class="source">				}<br></td></tr
><tr
id=sl_svn79_328

><td class="source">				break;<br></td></tr
><tr
id=sl_svn79_329

><td class="source"><br></td></tr
><tr
id=sl_svn79_330

><td class="source">			// neighbor steering desires<br></td></tr
><tr
id=sl_svn79_331

><td class="source"><br></td></tr
><tr
id=sl_svn79_332

><td class="source">			case SDS_NEIGHBOR_ALIGNMENT: <br></td></tr
><tr
id=sl_svn79_333

><td class="source">					sdNeighborAlignment(block, points, velocities,  forceArray );<br></td></tr
><tr
id=sl_svn79_334

><td class="source">				break;<br></td></tr
><tr
id=sl_svn79_335

><td class="source"><br></td></tr
><tr
id=sl_svn79_336

><td class="source">			case SDS_NEIGHBOR_COHESION: <br></td></tr
><tr
id=sl_svn79_337

><td class="source">					sdNeighborCohesion(block, points, velocities,  forceArray );<br></td></tr
><tr
id=sl_svn79_338

><td class="source">				break;<br></td></tr
><tr
id=sl_svn79_339

><td class="source"><br></td></tr
><tr
id=sl_svn79_340

><td class="source">			case SDS_NEIGHBOR_SEPARATION: <br></td></tr
><tr
id=sl_svn79_341

><td class="source">					sdNeighborSeparation(block, points, velocities,  forceArray );<br></td></tr
><tr
id=sl_svn79_342

><td class="source">				break;<br></td></tr
><tr
id=sl_svn79_343

><td class="source"><br></td></tr
><tr
id=sl_svn79_344

><td class="source">			case SDS_NEIGHBOR_COLLISIONAVOIDANCE: <br></td></tr
><tr
id=sl_svn79_345

><td class="source">					sdNeighborUnalignedCollisionAvoidance(block, points, velocities,  forceArray );<br></td></tr
><tr
id=sl_svn79_346

><td class="source">				break;<br></td></tr
><tr
id=sl_svn79_347

><td class="source"><br></td></tr
><tr
id=sl_svn79_348

><td class="source">			case SDS_NEIGHBOR_KEEPDISTANCE: <br></td></tr
><tr
id=sl_svn79_349

><td class="source">					sdNeighborKeepDistance(block, points, velocities,  forceArray );<br></td></tr
><tr
id=sl_svn79_350

><td class="source">				break;<br></td></tr
><tr
id=sl_svn79_351

><td class="source"><br></td></tr
><tr
id=sl_svn79_352

><td class="source">			case SDS_NEIGHBOR_OPORTUNISM: <br></td></tr
><tr
id=sl_svn79_353

><td class="source">					sdNeighborOportunism(block, points, velocities,  forceArray );<br></td></tr
><tr
id=sl_svn79_354

><td class="source">				break;<br></td></tr
><tr
id=sl_svn79_355

><td class="source"><br></td></tr
><tr
id=sl_svn79_356

><td class="source">			default:<br></td></tr
><tr
id=sl_svn79_357

><td class="source">				break;<br></td></tr
><tr
id=sl_svn79_358

><td class="source">			}<br></td></tr
><tr
id=sl_svn79_359

><td class="source">	<br></td></tr
><tr
id=sl_svn79_360

><td class="source"><br></td></tr
><tr
id=sl_svn79_361

><td class="source">	// get output data handle<br></td></tr
><tr
id=sl_svn79_362

><td class="source">	//<br></td></tr
><tr
id=sl_svn79_363

><td class="source">	MArrayDataHandle hOutArray = block.outputArrayValue( mOutputForce, &amp;status);<br></td></tr
><tr
id=sl_svn79_364

><td class="source">	McheckErr(status, &quot;ERROR in hOutArray = block.outputArrayValue.\n&quot;);<br></td></tr
><tr
id=sl_svn79_365

><td class="source">	<br></td></tr
><tr
id=sl_svn79_366

><td class="source">	MArrayDataBuilder bOutArray = hOutArray.builder( &amp;status );<br></td></tr
><tr
id=sl_svn79_367

><td class="source">	McheckErr(status, &quot;ERROR in bOutArray = hOutArray.builder.\n&quot;);<br></td></tr
><tr
id=sl_svn79_368

><td class="source"><br></td></tr
><tr
id=sl_svn79_369

><td class="source">	// get output force array from block.<br></td></tr
><tr
id=sl_svn79_370

><td class="source">	//<br></td></tr
><tr
id=sl_svn79_371

><td class="source">	MDataHandle hOut = bOutArray.addElement(multiIndex, &amp;status);<br></td></tr
><tr
id=sl_svn79_372

><td class="source">	McheckErr(status, &quot;ERROR in hOut = bOutArray.addElement.\n&quot;);<br></td></tr
><tr
id=sl_svn79_373

><td class="source"><br></td></tr
><tr
id=sl_svn79_374

><td class="source">	MFnVectorArrayData fnOutputForce;<br></td></tr
><tr
id=sl_svn79_375

><td class="source">	MObject dOutputForce = fnOutputForce.create( forceArray, &amp;status );<br></td></tr
><tr
id=sl_svn79_376

><td class="source">	<br></td></tr
><tr
id=sl_svn79_377

><td class="source">	McheckErr(status, &quot;ERROR in dOutputForce = fnOutputForce.create\n&quot;);<br></td></tr
><tr
id=sl_svn79_378

><td class="source"><br></td></tr
><tr
id=sl_svn79_379

><td class="source">	// update data block with new output force data.<br></td></tr
><tr
id=sl_svn79_380

><td class="source">	//<br></td></tr
><tr
id=sl_svn79_381

><td class="source">	hOut.set( dOutputForce );<br></td></tr
><tr
id=sl_svn79_382

><td class="source">	block.setClean( plug );<br></td></tr
><tr
id=sl_svn79_383

><td class="source">	<br></td></tr
><tr
id=sl_svn79_384

><td class="source">	return MS::kSuccess;<br></td></tr
><tr
id=sl_svn79_385

><td class="source">}<br></td></tr
><tr
id=sl_svn79_386

><td class="source"><br></td></tr
><tr
id=sl_svn79_387

><td class="source">/**************************************************************************************/<br></td></tr
><tr
id=sl_svn79_388

><td class="source"><br></td></tr
><tr
id=sl_svn79_389

><td class="source">void* bbSteeringDesire::creator()<br></td></tr
><tr
id=sl_svn79_390

><td class="source">{<br></td></tr
><tr
id=sl_svn79_391

><td class="source">	return new bbSteeringDesire();<br></td></tr
><tr
id=sl_svn79_392

><td class="source">}<br></td></tr
><tr
id=sl_svn79_393

><td class="source"><br></td></tr
><tr
id=sl_svn79_394

><td class="source">/**************************************************************************************/<br></td></tr
><tr
id=sl_svn79_395

><td class="source"><br></td></tr
><tr
id=sl_svn79_396

><td class="source">MStatus bbSteeringDesire::initialize()<br></td></tr
><tr
id=sl_svn79_397

><td class="source">{<br></td></tr
><tr
id=sl_svn79_398

><td class="source">	#define nodeCreateAttrDouble(_name, _shortname, _value) \<br></td></tr
><tr
id=sl_svn79_399

><td class="source">			_name = nAttr.create( #_name, #_shortname, MFnNumericData::kDouble, _value); \<br></td></tr
><tr
id=sl_svn79_400

><td class="source">	<br></td></tr
><tr
id=sl_svn79_401

><td class="source">	<br></td></tr
><tr
id=sl_svn79_402

><td class="source">	#define nodeCreateAttrVector(_name, _shortname, _value1,_value2,_value3)\<br></td></tr
><tr
id=sl_svn79_403

><td class="source">			_name##X = nAttr.create( #_name &quot;X&quot;, #_shortname &quot;x&quot;, MFnNumericData::kDouble, _value1);\<br></td></tr
><tr
id=sl_svn79_404

><td class="source"> 			_name##Y = nAttr.create( #_name &quot;Y&quot;, #_shortname &quot;y&quot;, MFnNumericData::kDouble, _value2);\<br></td></tr
><tr
id=sl_svn79_405

><td class="source"> 			_name##Z = nAttr.create( #_name &quot;Z&quot;, #_shortname &quot;z&quot;, MFnNumericData::kDouble, _value3);\<br></td></tr
><tr
id=sl_svn79_406

><td class="source"> 			_name = nAttr.create( #_name, #_shortname, _name##X, _name##Y, _name##Z );\<br></td></tr
><tr
id=sl_svn79_407

><td class="source">				nAttr.setDefault(  _value1, _value2, _value3 );\<br></td></tr
><tr
id=sl_svn79_408

><td class="source"><br></td></tr
><tr
id=sl_svn79_409

><td class="source">	MFnNumericAttribute nAttr;<br></td></tr
><tr
id=sl_svn79_410

><td class="source">	MFnEnumAttribute    eAttr;<br></td></tr
><tr
id=sl_svn79_411

><td class="source">	MFnUnitAttribute	uAttr;<br></td></tr
><tr
id=sl_svn79_412

><td class="source">	MFnTypedAttribute	tAttr;<br></td></tr
><tr
id=sl_svn79_413

><td class="source"><br></td></tr
><tr
id=sl_svn79_414

><td class="source">	MStatus				stat;<br></td></tr
><tr
id=sl_svn79_415

><td class="source">	MString				attrOpt;<br></td></tr
><tr
id=sl_svn79_416

><td class="source"><br></td></tr
><tr
id=sl_svn79_417

><td class="source">	MGlobal:: displayInfo(&quot;bbSteeringDesire... loaded&quot;);<br></td></tr
><tr
id=sl_svn79_418

><td class="source"><br></td></tr
><tr
id=sl_svn79_419

><td class="source">	// target attributes<br></td></tr
><tr
id=sl_svn79_420

><td class="source">	<br></td></tr
><tr
id=sl_svn79_421

><td class="source">		inputSurface = tAttr.create( &quot;inputSurface&quot;, &quot;is&quot;,MFnData::kNurbsSurface,&amp;stat );<br></td></tr
><tr
id=sl_svn79_422

><td class="source">		tAttr.setArray(true);<br></td></tr
><tr
id=sl_svn79_423

><td class="source">		tAttr.setDisconnectBehavior(MFnAttribute::kDelete);<br></td></tr
><tr
id=sl_svn79_424

><td class="source">		tAttr.setStorable(false);<br></td></tr
><tr
id=sl_svn79_425

><td class="source"><br></td></tr
><tr
id=sl_svn79_426

><td class="source">		inputCurve = tAttr.create( &quot;inputCurve&quot;, &quot;ic&quot;,MFnData::kNurbsCurve,	&amp;stat );<br></td></tr
><tr
id=sl_svn79_427

><td class="source">		tAttr.setArray(true);<br></td></tr
><tr
id=sl_svn79_428

><td class="source">		tAttr.setDisconnectBehavior(MFnAttribute::kDelete);<br></td></tr
><tr
id=sl_svn79_429

><td class="source">		tAttr.setStorable(false);<br></td></tr
><tr
id=sl_svn79_430

><td class="source"><br></td></tr
><tr
id=sl_svn79_431

><td class="source">		inputPoint = nAttr.create(&quot;inputPoint&quot;,&quot;ip&quot;,MFnNumericData::k3Double );<br></td></tr
><tr
id=sl_svn79_432

><td class="source">		nAttr.setArray(true);<br></td></tr
><tr
id=sl_svn79_433

><td class="source">		tAttr.setDisconnectBehavior(MFnAttribute::kDelete);<br></td></tr
><tr
id=sl_svn79_434

><td class="source">		nAttr.setStorable(false);<br></td></tr
><tr
id=sl_svn79_435

><td class="source"><br></td></tr
><tr
id=sl_svn79_436

><td class="source">		inputMesh = tAttr.create(&quot;inputMesh&quot;,&quot;ime&quot;,MFnData::kMesh,	&amp;stat);<br></td></tr
><tr
id=sl_svn79_437

><td class="source">		tAttr.setArray(true);<br></td></tr
><tr
id=sl_svn79_438

><td class="source">		tAttr.setDisconnectBehavior(MFnAttribute::kDelete);<br></td></tr
><tr
id=sl_svn79_439

><td class="source">		tAttr.setStorable(false);<br></td></tr
><tr
id=sl_svn79_440

><td class="source"><br></td></tr
><tr
id=sl_svn79_441

><td class="source">		nodeCreateAttrVector(lastTarget,lt,0.0,0.0,0.0);<br></td></tr
><tr
id=sl_svn79_442

><td class="source">		nAttr.setStorable(true);<br></td></tr
><tr
id=sl_svn79_443

><td class="source"><br></td></tr
><tr
id=sl_svn79_444

><td class="source">		nodeCreateAttrDouble(targetRadius,pra,1.0);<br></td></tr
><tr
id=sl_svn79_445

><td class="source">		nAttr.setMin(0.0);<br></td></tr
><tr
id=sl_svn79_446

><td class="source">		nAttr.setSoftMax(100.0);<br></td></tr
><tr
id=sl_svn79_447

><td class="source">		nAttr.setStorable(true);<br></td></tr
><tr
id=sl_svn79_448

><td class="source"><br></td></tr
><tr
id=sl_svn79_449

><td class="source">		nodeCreateAttrDouble(tolerance,eps,0.01);<br></td></tr
><tr
id=sl_svn79_450

><td class="source">		nAttr.setMin(0.001);<br></td></tr
><tr
id=sl_svn79_451

><td class="source">		nAttr.setMax(0.2);<br></td></tr
><tr
id=sl_svn79_452

><td class="source">		nAttr.setStorable(true);<br></td></tr
><tr
id=sl_svn79_453

><td class="source"><br></td></tr
><tr
id=sl_svn79_454

><td class="source">		nodeCreateAttrDouble(stoppingRange,str,4.0);<br></td></tr
><tr
id=sl_svn79_455

><td class="source">		nAttr.setMin(0.0001);<br></td></tr
><tr
id=sl_svn79_456

><td class="source">		nAttr.setSoftMax(50.0);<br></td></tr
><tr
id=sl_svn79_457

><td class="source">		nAttr.setStorable(true);<br></td></tr
><tr
id=sl_svn79_458

><td class="source"><br></td></tr
><tr
id=sl_svn79_459

><td class="source">		nodeCreateAttrDouble(probeLength,prl, 2.0);<br></td></tr
><tr
id=sl_svn79_460

><td class="source">		nAttr.setMin(0.0001);<br></td></tr
><tr
id=sl_svn79_461

><td class="source">		nAttr.setSoftMax(50.0);<br></td></tr
><tr
id=sl_svn79_462

><td class="source">		nAttr.setStorable(true);<br></td></tr
><tr
id=sl_svn79_463

><td class="source"><br></td></tr
><tr
id=sl_svn79_464

><td class="source">		nodeCreateAttrDouble(shadowRange,shr, 2.0);<br></td></tr
><tr
id=sl_svn79_465

><td class="source">		nAttr.setMin(0.0001);<br></td></tr
><tr
id=sl_svn79_466

><td class="source">		nAttr.setSoftMax(50.0);<br></td></tr
><tr
id=sl_svn79_467

><td class="source">		nAttr.setStorable(true);<br></td></tr
><tr
id=sl_svn79_468

><td class="source"><br></td></tr
><tr
id=sl_svn79_469

><td class="source"><br></td></tr
><tr
id=sl_svn79_470

><td class="source">		inputSelection = eAttr.create(&quot;inputSelection&quot;, &quot;tis&quot;, IS_INDEX);<br></td></tr
><tr
id=sl_svn79_471

><td class="source">		eAttr.addField(&quot;Index&quot;,IS_INDEX);<br></td></tr
><tr
id=sl_svn79_472

><td class="source">		eAttr.addField(&quot;All connected&quot;,IS_ALL);<br></td></tr
><tr
id=sl_svn79_473

><td class="source">	//	eAttr.addField(&quot;Average&quot;,IS_AVERAGE);<br></td></tr
><tr
id=sl_svn79_474

><td class="source">		eAttr.setStorable(true);<br></td></tr
><tr
id=sl_svn79_475

><td class="source"><br></td></tr
><tr
id=sl_svn79_476

><td class="source">		subTargets = eAttr.create(&quot;subTargets&quot;, &quot;sta&quot;, ST_UNIFORM);<br></td></tr
><tr
id=sl_svn79_477

><td class="source">			eAttr.addField(&quot;Uniform&quot;, ST_UNIFORM);<br></td></tr
><tr
id=sl_svn79_478

><td class="source">			eAttr.addField(&quot;Knots / Vertices&quot;,ST_KNOTS);<br></td></tr
><tr
id=sl_svn79_479

><td class="source">		eAttr.setStorable(true);<br></td></tr
><tr
id=sl_svn79_480

><td class="source"><br></td></tr
><tr
id=sl_svn79_481

><td class="source">		inputIndex = nAttr.create(&quot;inputIndex&quot;,&quot;tii&quot;,MFnNumericData::kShort,0);<br></td></tr
><tr
id=sl_svn79_482

><td class="source">		nAttr.setMin(0);<br></td></tr
><tr
id=sl_svn79_483

><td class="source">		nAttr.setSoftMax(50);<br></td></tr
><tr
id=sl_svn79_484

><td class="source">		nAttr.setStorable(true);<br></td></tr
><tr
id=sl_svn79_485

><td class="source"><br></td></tr
><tr
id=sl_svn79_486

><td class="source">	//	neighbo attr<br></td></tr
><tr
id=sl_svn79_487

><td class="source">		nodeCreateAttrDouble(bugDistance,bdi, 1.0);<br></td></tr
><tr
id=sl_svn79_488

><td class="source">		nAttr.setMin(0.0001);<br></td></tr
><tr
id=sl_svn79_489

><td class="source">		nAttr.setSoftMax(50.0);<br></td></tr
><tr
id=sl_svn79_490

><td class="source">		nAttr.setStorable(true);<br></td></tr
><tr
id=sl_svn79_491

><td class="source"><br></td></tr
><tr
id=sl_svn79_492

><td class="source">	// bug attributes<br></td></tr
><tr
id=sl_svn79_493

><td class="source"><br></td></tr
><tr
id=sl_svn79_494

><td class="source">		directionX = nAttr.create( &quot;headingDirectionX&quot;, &quot;hdx&quot;, MFnNumericData::kDouble, 0.0);<br></td></tr
><tr
id=sl_svn79_495

><td class="source"> 		directionY = nAttr.create( &quot;headingDirectionY&quot;, &quot;hdy&quot;, MFnNumericData::kDouble, 0.0);<br></td></tr
><tr
id=sl_svn79_496

><td class="source"> 		directionZ = nAttr.create( &quot;headingDirectionZ&quot;, &quot;hdz&quot;, MFnNumericData::kDouble, 0.0);<br></td></tr
><tr
id=sl_svn79_497

><td class="source"> 		direction = nAttr.create( &quot;headingDirection&quot;, &quot;hd&quot;, directionX, directionY, directionZ );<br></td></tr
><tr
id=sl_svn79_498

><td class="source">		nAttr.setDefault(  0.0,0.0,0.0 );\<br></td></tr
><tr
id=sl_svn79_499

><td class="source">		nAttr.setStorable(true);<br></td></tr
><tr
id=sl_svn79_500

><td class="source"><br></td></tr
><tr
id=sl_svn79_501

><td class="source">		nodeCreateAttrVector(wanderMinimumRandomVector,wmi,0.0,0.0,0.0);<br></td></tr
><tr
id=sl_svn79_502

><td class="source">		nAttr.setStorable(true);<br></td></tr
><tr
id=sl_svn79_503

><td class="source"><br></td></tr
><tr
id=sl_svn79_504

><td class="source">		nodeCreateAttrVector(wanderMaximumRandomVector,wma,0.3,0.3,0.3);<br></td></tr
><tr
id=sl_svn79_505

><td class="source">		nAttr.setStorable(true);<br></td></tr
><tr
id=sl_svn79_506

><td class="source">		<br></td></tr
><tr
id=sl_svn79_507

><td class="source">		nodeCreateAttrVector(wanderSphereOffset,wso,3.0,0.0,0.0);<br></td></tr
><tr
id=sl_svn79_508

><td class="source">		nAttr.setStorable(true);<br></td></tr
><tr
id=sl_svn79_509

><td class="source"><br></td></tr
><tr
id=sl_svn79_510

><td class="source">		nodeCreateAttrDouble(wanderSphereRadius,wsr,2.0);<br></td></tr
><tr
id=sl_svn79_511

><td class="source">		nAttr.setMin(0.0001);<br></td></tr
><tr
id=sl_svn79_512

><td class="source">		nAttr.setSoftMax(50.0);<br></td></tr
><tr
id=sl_svn79_513

><td class="source">		nAttr.setStorable(true);<br></td></tr
><tr
id=sl_svn79_514

><td class="source"><br></td></tr
><tr
id=sl_svn79_515

><td class="source">		chooseSpeed = eAttr.create(&quot;chooseSpeed&quot;, &quot;chs&quot;, CS_DESIREDSPEED);<br></td></tr
><tr
id=sl_svn79_516

><td class="source">			eAttr.addField(&quot;Desired Speed&quot;, CS_DESIREDSPEED);<br></td></tr
><tr
id=sl_svn79_517

><td class="source">			eAttr.addField(&quot;Speed Range&quot;,CS_SPEEDRANGE);<br></td></tr
><tr
id=sl_svn79_518

><td class="source">		eAttr.setStorable(true);<br></td></tr
><tr
id=sl_svn79_519

><td class="source"><br></td></tr
><tr
id=sl_svn79_520

><td class="source">		nodeCreateAttrDouble(wanderMinimumSpeed,mis,0.0);<br></td></tr
><tr
id=sl_svn79_521

><td class="source">		nAttr.setSoftMin(-100.0);<br></td></tr
><tr
id=sl_svn79_522

><td class="source">		nAttr.setSoftMax(+100.0);<br></td></tr
><tr
id=sl_svn79_523

><td class="source">		nAttr.setStorable(true);<br></td></tr
><tr
id=sl_svn79_524

><td class="source"><br></td></tr
><tr
id=sl_svn79_525

><td class="source">		nodeCreateAttrDouble(wanderMaximumSpeed,mas,4.0);<br></td></tr
><tr
id=sl_svn79_526

><td class="source">		nAttr.setSoftMin(-100.0);<br></td></tr
><tr
id=sl_svn79_527

><td class="source">		nAttr.setSoftMax(+100.0);<br></td></tr
><tr
id=sl_svn79_528

><td class="source">		nAttr.setStorable(true);<br></td></tr
><tr
id=sl_svn79_529

><td class="source"><br></td></tr
><tr
id=sl_svn79_530

><td class="source"><br></td></tr
><tr
id=sl_svn79_531

><td class="source">		useRandom = nAttr.create(&quot;useRandom&quot;,&quot;ura&quot;,MFnNumericData::kBoolean,true);<br></td></tr
><tr
id=sl_svn79_532

><td class="source">		nAttr.setStorable(true);<br></td></tr
><tr
id=sl_svn79_533

><td class="source"><br></td></tr
><tr
id=sl_svn79_534

><td class="source">		seed = nAttr.create(&quot;seed&quot;,&quot;see&quot;,MFnNumericData::kShort,1);<br></td></tr
><tr
id=sl_svn79_535

><td class="source">		nAttr.setMin(0);<br></td></tr
><tr
id=sl_svn79_536

><td class="source">		nAttr.setMax(100);<br></td></tr
><tr
id=sl_svn79_537

><td class="source">		nAttr.setStorable(true);<br></td></tr
><tr
id=sl_svn79_538

><td class="source"><br></td></tr
><tr
id=sl_svn79_539

><td class="source">		initSeedFrame = uAttr.create(&quot;initSeedFrame&quot;, &quot;ist&quot;, MFnUnitAttribute::kTime);<br></td></tr
><tr
id=sl_svn79_540

><td class="source">		uAttr.setDefault(2);<br></td></tr
><tr
id=sl_svn79_541

><td class="source">		uAttr.setStorable(true);<br></td></tr
><tr
id=sl_svn79_542

><td class="source">	<br></td></tr
><tr
id=sl_svn79_543

><td class="source">		currentTime = uAttr.create(&quot;currentTime&quot;, &quot;cti&quot;, MFnUnitAttribute::kTime);<br></td></tr
><tr
id=sl_svn79_544

><td class="source"><br></td></tr
><tr
id=sl_svn79_545

><td class="source"><br></td></tr
><tr
id=sl_svn79_546

><td class="source"><br></td></tr
><tr
id=sl_svn79_547

><td class="source">	<br></td></tr
><tr
id=sl_svn79_548

><td class="source">	// field of view attributes<br></td></tr
><tr
id=sl_svn79_549

><td class="source">		sensorAngle = uAttr.create(&quot;sensorAngle&quot;, &quot;sa&quot;, MFnUnitAttribute::kAngle);<br></td></tr
><tr
id=sl_svn79_550

><td class="source">		uAttr.setMin(0.01745329);<br></td></tr
><tr
id=sl_svn79_551

><td class="source">		uAttr.setMax(6.265732);<br></td></tr
><tr
id=sl_svn79_552

><td class="source">		uAttr.setDefault(1.74532925);<br></td></tr
><tr
id=sl_svn79_553

><td class="source">		uAttr.setStorable(true);<br></td></tr
><tr
id=sl_svn79_554

><td class="source"><br></td></tr
><tr
id=sl_svn79_555

><td class="source">		nodeCreateAttrDouble(sensorRange,sr,3.0)<br></td></tr
><tr
id=sl_svn79_556

><td class="source">		nAttr.setMin(0.001);<br></td></tr
><tr
id=sl_svn79_557

><td class="source">		nAttr.setSoftMax(100.0);<br></td></tr
><tr
id=sl_svn79_558

><td class="source">		nAttr.setStorable(true);<br></td></tr
><tr
id=sl_svn79_559

><td class="source"><br></td></tr
><tr
id=sl_svn79_560

><td class="source">		useSensorRange = nAttr.create(&quot;useSensorRange&quot;,&quot;usr&quot;,MFnNumericData::kBoolean,false);<br></td></tr
><tr
id=sl_svn79_561

><td class="source">		nAttr.setStorable(true);<br></td></tr
><tr
id=sl_svn79_562

><td class="source"><br></td></tr
><tr
id=sl_svn79_563

><td class="source">		useSensorAngle = nAttr.create(&quot;useSensorAngle&quot;,&quot;usa&quot;,MFnNumericData::kBoolean,false);<br></td></tr
><tr
id=sl_svn79_564

><td class="source">		nAttr.setStorable(true);<br></td></tr
><tr
id=sl_svn79_565

><td class="source"><br></td></tr
><tr
id=sl_svn79_566

><td class="source"><br></td></tr
><tr
id=sl_svn79_567

><td class="source">		<br></td></tr
><tr
id=sl_svn79_568

><td class="source">	// common attributes<br></td></tr
><tr
id=sl_svn79_569

><td class="source">		nodeCreateAttrDouble(desiredSpeed,des,4.0);<br></td></tr
><tr
id=sl_svn79_570

><td class="source">		nAttr.setMin(0.001);<br></td></tr
><tr
id=sl_svn79_571

><td class="source">		nAttr.setSoftMax(100.0);<br></td></tr
><tr
id=sl_svn79_572

><td class="source">		nAttr.setStorable(true);<br></td></tr
><tr
id=sl_svn79_573

><td class="source"><br></td></tr
><tr
id=sl_svn79_574

><td class="source">		nodeCreateAttrDouble(maximumForce,maf,3.0);<br></td></tr
><tr
id=sl_svn79_575

><td class="source">		nAttr.setMin(0.001);<br></td></tr
><tr
id=sl_svn79_576

><td class="source">		nAttr.setSoftMax(100.0);<br></td></tr
><tr
id=sl_svn79_577

><td class="source">		nAttr.setStorable(true);<br></td></tr
><tr
id=sl_svn79_578

><td class="source"><br></td></tr
><tr
id=sl_svn79_579

><td class="source">		nodeCreateAttrDouble(bugRadius,bur,0.1);<br></td></tr
><tr
id=sl_svn79_580

><td class="source">		nAttr.setMin(0.0001);<br></td></tr
><tr
id=sl_svn79_581

><td class="source">		nAttr.setSoftMax(50.0);<br></td></tr
><tr
id=sl_svn79_582

><td class="source">		nAttr.setStorable(true);<br></td></tr
><tr
id=sl_svn79_583

><td class="source"><br></td></tr
><tr
id=sl_svn79_584

><td class="source">		inverseDesiredSteeringForce = nAttr.create(&quot;inverseDesiredSteeringForce&quot;,&quot;isf&quot;,MFnNumericData::kBoolean,false);<br></td></tr
><tr
id=sl_svn79_585

><td class="source">		nAttr.setStorable(true);<br></td></tr
><tr
id=sl_svn79_586

><td class="source"><br></td></tr
><tr
id=sl_svn79_587

><td class="source">		lastVector = tAttr.create( &quot;lastVector&quot;, &quot;lv&quot;, MFnVectorArrayData::kVectorArray , &amp;stat );<br></td></tr
><tr
id=sl_svn79_588

><td class="source">		tAttr.setStorable(true);<br></td></tr
><tr
id=sl_svn79_589

><td class="source"><br></td></tr
><tr
id=sl_svn79_590

><td class="source">		// steering desire<br></td></tr
><tr
id=sl_svn79_591

><td class="source"><br></td></tr
><tr
id=sl_svn79_592

><td class="source">		steeringDesire = eAttr.create(&quot;steeringDesire&quot;, &quot;sd&quot;, SDS_BUG_DIRECTIONHEADING);<br></td></tr
><tr
id=sl_svn79_593

><td class="source">			// eAttr.addField(&quot;-- BUG -------------&quot;,SDS_BUG);					        <br></td></tr
><tr
id=sl_svn79_594

><td class="source">			eAttr.addField(&quot;Bug - Head Direction&quot;,SDS_BUG_DIRECTIONHEADING);	            <br></td></tr
><tr
id=sl_svn79_595

><td class="source">			eAttr.addField(&quot;Bug - Wander&quot;,SDS_BUG_WANDER);					            <br></td></tr
><tr
id=sl_svn79_596

><td class="source">                                                                        <br></td></tr
><tr
id=sl_svn79_597

><td class="source">			eAttr.addField(&quot;---------------------&quot;,SDS_TARGET);				        <br></td></tr
><tr
id=sl_svn79_598

><td class="source">			eAttr.addField(&quot;Target - Seek&quot;,SDS_TARGET_SEEK);						            <br></td></tr
><tr
id=sl_svn79_599

><td class="source">			eAttr.addField(&quot;Target - Moth Seek&quot;,SDS_TARGET_MOTHSEEK);			            <br></td></tr
><tr
id=sl_svn79_600

><td class="source">			eAttr.addField(&quot;Target - Arrival&quot;,SDS_TARGET_ARRIVAL);				            <br></td></tr
><tr
id=sl_svn79_601

><td class="source">			eAttr.addField(&quot;Target - Pursuit&quot;,SDS_TARGET_PURSUIT	);				            <br></td></tr
><tr
id=sl_svn79_602

><td class="source">			eAttr.addField(&quot;Target - Shadow&quot;,SDS_TARGET_SHADOW);					            <br></td></tr
><tr
id=sl_svn79_603

><td class="source">			eAttr.addField(&quot;Target - Follow&quot;,SDS_TARGET_FOLLOW);					            <br></td></tr
><tr
id=sl_svn79_604

><td class="source">			eAttr.addField(&quot;Target - Obstacle Avoidance&quot;,SDS_TARGET_OBSTACLEAVOIDANCE);	    <br></td></tr
><tr
id=sl_svn79_605

><td class="source">                                                                        <br></td></tr
><tr
id=sl_svn79_606

><td class="source">			eAttr.addField(&quot;---------------------&quot;,SDS_NEIGHBOR);					<br></td></tr
><tr
id=sl_svn79_607

><td class="source">			eAttr.addField(&quot;Neighbor - Alignment&quot;,SDS_NEIGHBOR_ALIGNMENT);			            <br></td></tr
><tr
id=sl_svn79_608

><td class="source">			eAttr.addField(&quot;Neighbor - Cohesion&quot;,SDS_NEIGHBOR_COHESION	);			            <br></td></tr
><tr
id=sl_svn79_609

><td class="source">			eAttr.addField(&quot;Neighbor - Separation&quot;,SDS_NEIGHBOR_SEPARATION	);		            <br></td></tr
><tr
id=sl_svn79_610

><td class="source">	//		eAttr.addField(&quot;Neighbor - Collision Avoidance&quot;,SDS_NEIGHBOR_COLLISIONAVOIDANCE);	<br></td></tr
><tr
id=sl_svn79_611

><td class="source">			eAttr.addField(&quot;Neighbor - Keep Distance&quot;,SDS_NEIGHBOR_KEEPDISTANCE);		        <br></td></tr
><tr
id=sl_svn79_612

><td class="source">	//		eAttr.addField(&quot;Neighbor - Oportunism&quot;,SDS_NEIGHBOR_OPORTUNISM	);			        <br></td></tr
><tr
id=sl_svn79_613

><td class="source">		eAttr.setStorable(true);<br></td></tr
><tr
id=sl_svn79_614

><td class="source">	<br></td></tr
><tr
id=sl_svn79_615

><td class="source">		// target selection<br></td></tr
><tr
id=sl_svn79_616

><td class="source"><br></td></tr
><tr
id=sl_svn79_617

><td class="source">		targetType = eAttr.create(&quot;targetType&quot;,&quot;tt&quot;, TS_POINT);<br></td></tr
><tr
id=sl_svn79_618

><td class="source">			eAttr.addField(&quot;Point&quot;,TS_POINT);<br></td></tr
><tr
id=sl_svn79_619

><td class="source">			eAttr.addField(&quot;Curve&quot;,TS_CURVE);<br></td></tr
><tr
id=sl_svn79_620

><td class="source">			eAttr.addField(&quot;Surface&quot;,TS_SURFACE);<br></td></tr
><tr
id=sl_svn79_621

><td class="source">			eAttr.addField(&quot;Mesh&quot;,TS_MESH);	<br></td></tr
><tr
id=sl_svn79_622

><td class="source">		//	eAttr.addField(&quot;Bug&quot;,TS_BUG);<br></td></tr
><tr
id=sl_svn79_623

><td class="source">		eAttr.setStorable(true);<br></td></tr
><tr
id=sl_svn79_624

><td class="source"><br></td></tr
><tr
id=sl_svn79_625

><td class="source">	// Add the attributes we have created to the node<br></td></tr
><tr
id=sl_svn79_626

><td class="source"><br></td></tr
><tr
id=sl_svn79_627

><td class="source">	#define nodeAddAttribute(_attr) 	\<br></td></tr
><tr
id=sl_svn79_628

><td class="source">			stat = addAttribute( _attr );	\<br></td></tr
><tr
id=sl_svn79_629

><td class="source">			if (!stat) { stat.perror(&quot;addAttribute&quot;); return stat;} \<br></td></tr
><tr
id=sl_svn79_630

><td class="source"><br></td></tr
><tr
id=sl_svn79_631

><td class="source">	// common<br></td></tr
><tr
id=sl_svn79_632

><td class="source">	nodeAddAttribute( steeringDesire);<br></td></tr
><tr
id=sl_svn79_633

><td class="source">	nodeAddAttribute( maximumForce);<br></td></tr
><tr
id=sl_svn79_634

><td class="source">	nodeAddAttribute( inverseDesiredSteeringForce);<br></td></tr
><tr
id=sl_svn79_635

><td class="source">	nodeAddAttribute( bugRadius);<br></td></tr
><tr
id=sl_svn79_636

><td class="source">	nodeAddAttribute( desiredSpeed);<br></td></tr
><tr
id=sl_svn79_637

><td class="source">	nodeAddAttribute( lastVector);<br></td></tr
><tr
id=sl_svn79_638

><td class="source"><br></td></tr
><tr
id=sl_svn79_639

><td class="source">	// view<br></td></tr
><tr
id=sl_svn79_640

><td class="source">	nodeAddAttribute( useSensorRange);<br></td></tr
><tr
id=sl_svn79_641

><td class="source">	nodeAddAttribute( sensorRange);<br></td></tr
><tr
id=sl_svn79_642

><td class="source">	nodeAddAttribute( useSensorAngle);<br></td></tr
><tr
id=sl_svn79_643

><td class="source">	nodeAddAttribute( sensorAngle);<br></td></tr
><tr
id=sl_svn79_644

><td class="source"><br></td></tr
><tr
id=sl_svn79_645

><td class="source">	// bug<br></td></tr
><tr
id=sl_svn79_646

><td class="source">	nodeAddAttribute( direction);<br></td></tr
><tr
id=sl_svn79_647

><td class="source">	nodeAddAttribute( wanderSphereRadius);<br></td></tr
><tr
id=sl_svn79_648

><td class="source">	nodeAddAttribute( wanderSphereOffset);<br></td></tr
><tr
id=sl_svn79_649

><td class="source">	nodeAddAttribute( wanderMinimumRandomVector);<br></td></tr
><tr
id=sl_svn79_650

><td class="source">	nodeAddAttribute( wanderMaximumRandomVector);<br></td></tr
><tr
id=sl_svn79_651

><td class="source">	nodeAddAttribute( chooseSpeed);<br></td></tr
><tr
id=sl_svn79_652

><td class="source">	nodeAddAttribute( wanderMinimumSpeed);<br></td></tr
><tr
id=sl_svn79_653

><td class="source">	nodeAddAttribute( wanderMaximumSpeed);<br></td></tr
><tr
id=sl_svn79_654

><td class="source">	nodeAddAttribute( seed);<br></td></tr
><tr
id=sl_svn79_655

><td class="source">	nodeAddAttribute( initSeedFrame);<br></td></tr
><tr
id=sl_svn79_656

><td class="source">	nodeAddAttribute( currentTime);<br></td></tr
><tr
id=sl_svn79_657

><td class="source">	nodeAddAttribute( useRandom);<br></td></tr
><tr
id=sl_svn79_658

><td class="source">	<br></td></tr
><tr
id=sl_svn79_659

><td class="source">	// target<br></td></tr
><tr
id=sl_svn79_660

><td class="source">	nodeAddAttribute( targetType);<br></td></tr
><tr
id=sl_svn79_661

><td class="source">	nodeAddAttribute( inputPoint);<br></td></tr
><tr
id=sl_svn79_662

><td class="source">	nodeAddAttribute( inputCurve);<br></td></tr
><tr
id=sl_svn79_663

><td class="source">	nodeAddAttribute( inputSurface);<br></td></tr
><tr
id=sl_svn79_664

><td class="source">	nodeAddAttribute( inputMesh);<br></td></tr
><tr
id=sl_svn79_665

><td class="source">	nodeAddAttribute( subTargets);<br></td></tr
><tr
id=sl_svn79_666

><td class="source">	nodeAddAttribute( inputSelection);<br></td></tr
><tr
id=sl_svn79_667

><td class="source">	nodeAddAttribute( inputIndex);<br></td></tr
><tr
id=sl_svn79_668

><td class="source">	nodeAddAttribute( stoppingRange);<br></td></tr
><tr
id=sl_svn79_669

><td class="source">	nodeAddAttribute( targetRadius);<br></td></tr
><tr
id=sl_svn79_670

><td class="source">	nodeAddAttribute( tolerance);<br></td></tr
><tr
id=sl_svn79_671

><td class="source">	nodeAddAttribute( probeLength);<br></td></tr
><tr
id=sl_svn79_672

><td class="source">	nodeAddAttribute( shadowRange);<br></td></tr
><tr
id=sl_svn79_673

><td class="source"><br></td></tr
><tr
id=sl_svn79_674

><td class="source">	// neighbor<br></td></tr
><tr
id=sl_svn79_675

><td class="source">	nodeAddAttribute( bugDistance);<br></td></tr
><tr
id=sl_svn79_676

><td class="source"><br></td></tr
><tr
id=sl_svn79_677

><td class="source"><br></td></tr
><tr
id=sl_svn79_678

><td class="source"><br></td></tr
><tr
id=sl_svn79_679

><td class="source">	// Set up a dependencies<br></td></tr
><tr
id=sl_svn79_680

><td class="source">	<br></td></tr
><tr
id=sl_svn79_681

><td class="source">	return MS::kSuccess;<br></td></tr
><tr
id=sl_svn79_682

><td class="source"><br></td></tr
><tr
id=sl_svn79_683

><td class="source">}<br></td></tr
><tr
id=sl_svn79_684

><td class="source"><br></td></tr
><tr
id=sl_svn79_685

><td class="source">/**************************************************************************************/<br></td></tr
><tr
id=sl_svn79_686

><td class="source"><br></td></tr
><tr
id=sl_svn79_687

><td class="source">// min / max clamp length of vector to scalar while maintaining vector orientation<br></td></tr
><tr
id=sl_svn79_688

><td class="source">MVector truncVector( MVector&amp; vector, double scalar)<br></td></tr
><tr
id=sl_svn79_689

><td class="source">{<br></td></tr
><tr
id=sl_svn79_690

><td class="source">	double norm = vector.length();<br></td></tr
><tr
id=sl_svn79_691

><td class="source"><br></td></tr
><tr
id=sl_svn79_692

><td class="source">	if (scalar &lt;0)<br></td></tr
><tr
id=sl_svn79_693

><td class="source">	{<br></td></tr
><tr
id=sl_svn79_694

><td class="source">		if ( (norm &lt; -scalar) &amp;&amp; (norm &gt; 0))<br></td></tr
><tr
id=sl_svn79_695

><td class="source">		{<br></td></tr
><tr
id=sl_svn79_696

><td class="source">			vector *=  (-scalar / norm);<br></td></tr
><tr
id=sl_svn79_697

><td class="source">		}<br></td></tr
><tr
id=sl_svn79_698

><td class="source">	}<br></td></tr
><tr
id=sl_svn79_699

><td class="source">	else<br></td></tr
><tr
id=sl_svn79_700

><td class="source">	{<br></td></tr
><tr
id=sl_svn79_701

><td class="source">		if (norm&gt;scalar)<br></td></tr
><tr
id=sl_svn79_702

><td class="source">		{<br></td></tr
><tr
id=sl_svn79_703

><td class="source">			vector *= scalar / norm;<br></td></tr
><tr
id=sl_svn79_704

><td class="source">		}<br></td></tr
><tr
id=sl_svn79_705

><td class="source">	}<br></td></tr
><tr
id=sl_svn79_706

><td class="source">	return vector;<br></td></tr
><tr
id=sl_svn79_707

><td class="source">}<br></td></tr
><tr
id=sl_svn79_708

><td class="source"><br></td></tr
><tr
id=sl_svn79_709

><td class="source">/**************************************************************************************/<br></td></tr
><tr
id=sl_svn79_710

><td class="source"><br></td></tr
><tr
id=sl_svn79_711

><td class="source">// target visible from pov?<br></td></tr
><tr
id=sl_svn79_712

><td class="source">bool inFieldOfView(MVector&amp; targetOffset, const MVector&amp; velocity, bool uRange, bool uAngle, double sRange, double sAngle)<br></td></tr
><tr
id=sl_svn79_713

><td class="source">{<br></td></tr
><tr
id=sl_svn79_714

><td class="source">	bool result = false;<br></td></tr
><tr
id=sl_svn79_715

><td class="source">	bool sensorCheck = false;<br></td></tr
><tr
id=sl_svn79_716

><td class="source"><br></td></tr
><tr
id=sl_svn79_717

><td class="source">	if ((!uRange)&amp;&amp;(!uAngle))<br></td></tr
><tr
id=sl_svn79_718

><td class="source">	{<br></td></tr
><tr
id=sl_svn79_719

><td class="source">		result = true;<br></td></tr
><tr
id=sl_svn79_720

><td class="source">	}<br></td></tr
><tr
id=sl_svn79_721

><td class="source">	else<br></td></tr
><tr
id=sl_svn79_722

><td class="source">	{<br></td></tr
><tr
id=sl_svn79_723

><td class="source">		double distance = targetOffset.length();<br></td></tr
><tr
id=sl_svn79_724

><td class="source">		<br></td></tr
><tr
id=sl_svn79_725

><td class="source">		if ((uRange)&amp;&amp;(distance &lt;= sRange))<br></td></tr
><tr
id=sl_svn79_726

><td class="source">		{<br></td></tr
><tr
id=sl_svn79_727

><td class="source">			result = sensorCheck = true;<br></td></tr
><tr
id=sl_svn79_728

><td class="source">		}<br></td></tr
><tr
id=sl_svn79_729

><td class="source">		<br></td></tr
><tr
id=sl_svn79_730

><td class="source">		if (uAngle)<br></td></tr
><tr
id=sl_svn79_731

><td class="source">		{<br></td></tr
><tr
id=sl_svn79_732

><td class="source">			double angle = targetOffset.angle(velocity);<br></td></tr
><tr
id=sl_svn79_733

><td class="source">			if ((angle &lt; (sAngle/2)) &amp;&amp; ((!uRange)||(sensorCheck)))<br></td></tr
><tr
id=sl_svn79_734

><td class="source">			{ 	<br></td></tr
><tr
id=sl_svn79_735

><td class="source">				result = true;<br></td></tr
><tr
id=sl_svn79_736

><td class="source">			}<br></td></tr
><tr
id=sl_svn79_737

><td class="source">			else<br></td></tr
><tr
id=sl_svn79_738

><td class="source">			{ 	<br></td></tr
><tr
id=sl_svn79_739

><td class="source">				result = false;<br></td></tr
><tr
id=sl_svn79_740

><td class="source">			}<br></td></tr
><tr
id=sl_svn79_741

><td class="source">	<br></td></tr
><tr
id=sl_svn79_742

><td class="source">		}<br></td></tr
><tr
id=sl_svn79_743

><td class="source">	}<br></td></tr
><tr
id=sl_svn79_744

><td class="source"><br></td></tr
><tr
id=sl_svn79_745

><td class="source">	return result;<br></td></tr
><tr
id=sl_svn79_746

><td class="source">}<br></td></tr
><tr
id=sl_svn79_747

><td class="source"><br></td></tr
><tr
id=sl_svn79_748

><td class="source">/**************************************************************************************/<br></td></tr
><tr
id=sl_svn79_749

><td class="source"><br></td></tr
><tr
id=sl_svn79_750

><td class="source">// get list of bugs in field of view<br></td></tr
><tr
id=sl_svn79_751

><td class="source">void getNearbyBugs(const MVectorArray&amp; bugPositions, int refBugIndex,const MVector&amp; velocity, bool uRange, bool uAngle, double sRange, double sAngle,MIntArray &amp;nearbyBugIndexList)<br></td></tr
><tr
id=sl_svn79_752

><td class="source">{<br></td></tr
><tr
id=sl_svn79_753

><td class="source">	int bugPositionsSize =bugPositions.length();<br></td></tr
><tr
id=sl_svn79_754

><td class="source">	int i =0;<br></td></tr
><tr
id=sl_svn79_755

><td class="source">	MVector difVector;<br></td></tr
><tr
id=sl_svn79_756

><td class="source"><br></td></tr
><tr
id=sl_svn79_757

><td class="source">//	MString temp;<br></td></tr
><tr
id=sl_svn79_758

><td class="source"><br></td></tr
><tr
id=sl_svn79_759

><td class="source">	nearbyBugIndexList.clear();<br></td></tr
><tr
id=sl_svn79_760

><td class="source"><br></td></tr
><tr
id=sl_svn79_761

><td class="source">	if ((!uRange)&amp;&amp;(!uAngle))<br></td></tr
><tr
id=sl_svn79_762

><td class="source">	{<br></td></tr
><tr
id=sl_svn79_763

><td class="source">		for (i; i &lt; bugPositionsSize; i++)<br></td></tr
><tr
id=sl_svn79_764

><td class="source">		{<br></td></tr
><tr
id=sl_svn79_765

><td class="source">			nearbyBugIndexList.append(i);<br></td></tr
><tr
id=sl_svn79_766

><td class="source">		}<br></td></tr
><tr
id=sl_svn79_767

><td class="source">	}<br></td></tr
><tr
id=sl_svn79_768

><td class="source">	else<br></td></tr
><tr
id=sl_svn79_769

><td class="source">	{<br></td></tr
><tr
id=sl_svn79_770

><td class="source">		if (uRange)<br></td></tr
><tr
id=sl_svn79_771

><td class="source">		{<br></td></tr
><tr
id=sl_svn79_772

><td class="source">			<br></td></tr
><tr
id=sl_svn79_773

><td class="source">//			temp = &quot;Range: &quot;;<br></td></tr
><tr
id=sl_svn79_774

><td class="source"><br></td></tr
><tr
id=sl_svn79_775

><td class="source">			for (i=0;i &lt; bugPositionsSize; i++)<br></td></tr
><tr
id=sl_svn79_776

><td class="source">			{<br></td></tr
><tr
id=sl_svn79_777

><td class="source">				if (!(i==refBugIndex))<br></td></tr
><tr
id=sl_svn79_778

><td class="source">				{<br></td></tr
><tr
id=sl_svn79_779

><td class="source">					if (MVector(bugPositions[refBugIndex] - bugPositions[i]).length() &lt; sRange)<br></td></tr
><tr
id=sl_svn79_780

><td class="source">					{<br></td></tr
><tr
id=sl_svn79_781

><td class="source">//				temp += i-1;<br></td></tr
><tr
id=sl_svn79_782

><td class="source">//				temp += &quot;, &quot;;<br></td></tr
><tr
id=sl_svn79_783

><td class="source">						<br></td></tr
><tr
id=sl_svn79_784

><td class="source">						nearbyBugIndexList.append(i);<br></td></tr
><tr
id=sl_svn79_785

><td class="source">					}<br></td></tr
><tr
id=sl_svn79_786

><td class="source">				}<br></td></tr
><tr
id=sl_svn79_787

><td class="source">			}<br></td></tr
><tr
id=sl_svn79_788

><td class="source">//		MGlobal::displayInfo(temp);<br></td></tr
><tr
id=sl_svn79_789

><td class="source">		}<br></td></tr
><tr
id=sl_svn79_790

><td class="source">		else<br></td></tr
><tr
id=sl_svn79_791

><td class="source">		{<br></td></tr
><tr
id=sl_svn79_792

><td class="source">			for (i; i &lt; bugPositionsSize; i++)<br></td></tr
><tr
id=sl_svn79_793

><td class="source">			{<br></td></tr
><tr
id=sl_svn79_794

><td class="source">				nearbyBugIndexList.append(i);<br></td></tr
><tr
id=sl_svn79_795

><td class="source">			}<br></td></tr
><tr
id=sl_svn79_796

><td class="source">		}<br></td></tr
><tr
id=sl_svn79_797

><td class="source"><br></td></tr
><tr
id=sl_svn79_798

><td class="source">		int nearbyBugIndexListSize = nearbyBugIndexList.length();<br></td></tr
><tr
id=sl_svn79_799

><td class="source"><br></td></tr
><tr
id=sl_svn79_800

><td class="source">		if ((uAngle)&amp;&amp;(nearbyBugIndexListSize &gt; 0))<br></td></tr
><tr
id=sl_svn79_801

><td class="source">		{<br></td></tr
><tr
id=sl_svn79_802

><td class="source">			double angle = 0.0;<br></td></tr
><tr
id=sl_svn79_803

><td class="source">			sAngle /= 2;<br></td></tr
><tr
id=sl_svn79_804

><td class="source"><br></td></tr
><tr
id=sl_svn79_805

><td class="source">//			temp=&quot;Angle: &quot;;<br></td></tr
><tr
id=sl_svn79_806

><td class="source"><br></td></tr
><tr
id=sl_svn79_807

><td class="source">			for (i = nearbyBugIndexListSize - 1; i &gt; -1; i--)<br></td></tr
><tr
id=sl_svn79_808

><td class="source">			{<br></td></tr
><tr
id=sl_svn79_809

><td class="source">				angle = MVector(bugPositions[nearbyBugIndexList[i]] - bugPositions[refBugIndex]).angle(velocity);<br></td></tr
><tr
id=sl_svn79_810

><td class="source">		<br></td></tr
><tr
id=sl_svn79_811

><td class="source">				if (angle &gt; sAngle) <br></td></tr
><tr
id=sl_svn79_812

><td class="source">				{<br></td></tr
><tr
id=sl_svn79_813

><td class="source">//					temp += nearbyBugIndexList[i]-1;<br></td></tr
><tr
id=sl_svn79_814

><td class="source">//				temp += &quot;, &quot;;<br></td></tr
><tr
id=sl_svn79_815

><td class="source">					nearbyBugIndexList.remove(i);<br></td></tr
><tr
id=sl_svn79_816

><td class="source">				}<br></td></tr
><tr
id=sl_svn79_817

><td class="source">			}<br></td></tr
><tr
id=sl_svn79_818

><td class="source"><br></td></tr
><tr
id=sl_svn79_819

><td class="source">//			MGlobal::displayInfo(temp);<br></td></tr
><tr
id=sl_svn79_820

><td class="source">		}<br></td></tr
><tr
id=sl_svn79_821

><td class="source"><br></td></tr
><tr
id=sl_svn79_822

><td class="source">	}<br></td></tr
><tr
id=sl_svn79_823

><td class="source">}<br></td></tr
><tr
id=sl_svn79_824

><td class="source"><br></td></tr
><tr
id=sl_svn79_825

><td class="source">/**************************************************************************************/<br></td></tr
><tr
id=sl_svn79_826

><td class="source"><br></td></tr
><tr
id=sl_svn79_827

><td class="source">inline void seekSteering(MVector &amp;desVel,const MVector &amp;curVel,double desSpeed, double scaleF, double maxF)<br></td></tr
><tr
id=sl_svn79_828

><td class="source">{<br></td></tr
><tr
id=sl_svn79_829

><td class="source">	desVel.normalize();<br></td></tr
><tr
id=sl_svn79_830

><td class="source">	desVel *= desSpeed * scaleF;<br></td></tr
><tr
id=sl_svn79_831

><td class="source">	desVel = desVel - curVel;<br></td></tr
><tr
id=sl_svn79_832

><td class="source">	truncVector(desVel,maxF);<br></td></tr
><tr
id=sl_svn79_833

><td class="source">}<br></td></tr
><tr
id=sl_svn79_834

><td class="source">/**************************************************************************************/<br></td></tr
><tr
id=sl_svn79_835

><td class="source"><br></td></tr
><tr
id=sl_svn79_836

><td class="source">inline void mothSeekSteering(MVector &amp;desVel,double desSpeed, double scaleF, double maxF)<br></td></tr
><tr
id=sl_svn79_837

><td class="source">{<br></td></tr
><tr
id=sl_svn79_838

><td class="source">	desVel.normalize();<br></td></tr
><tr
id=sl_svn79_839

><td class="source">	desVel *= desSpeed * scaleF;<br></td></tr
><tr
id=sl_svn79_840

><td class="source">	truncVector(desVel,maxF);<br></td></tr
><tr
id=sl_svn79_841

><td class="source">}<br></td></tr
><tr
id=sl_svn79_842

><td class="source"><br></td></tr
><tr
id=sl_svn79_843

><td class="source">/**************************************************************************************/<br></td></tr
><tr
id=sl_svn79_844

><td class="source"><br></td></tr
><tr
id=sl_svn79_845

><td class="source">inline void arrivalSteering(MVector &amp;desVel,const MVector &amp;curVel,double desSpeed, double scaleF, double maxF,double stopR)<br></td></tr
><tr
id=sl_svn79_846

><td class="source">{<br></td></tr
><tr
id=sl_svn79_847

><td class="source">	double distance = desVel.length();<br></td></tr
><tr
id=sl_svn79_848

><td class="source">	double rampedSpeed = desSpeed * (distance / stopR);<br></td></tr
><tr
id=sl_svn79_849

><td class="source">	<br></td></tr
><tr
id=sl_svn79_850

><td class="source">	if (distance &gt; 0)<br></td></tr
><tr
id=sl_svn79_851

><td class="source">		desVel *= (min(rampedSpeed, desSpeed))/distance;<br></td></tr
><tr
id=sl_svn79_852

><td class="source">	<br></td></tr
><tr
id=sl_svn79_853

><td class="source">	desVel = desVel - curVel;<br></td></tr
><tr
id=sl_svn79_854

><td class="source">	desVel *= scaleF;<br></td></tr
><tr
id=sl_svn79_855

><td class="source">	truncVector(desVel,maxF);<br></td></tr
><tr
id=sl_svn79_856

><td class="source">}<br></td></tr
><tr
id=sl_svn79_857

><td class="source"><br></td></tr
><tr
id=sl_svn79_858

><td class="source"><br></td></tr
><tr
id=sl_svn79_859

><td class="source"><br></td></tr
><tr
id=sl_svn79_860

><td class="source">/**************************************************************************************/<br></td></tr
><tr
id=sl_svn79_861

><td class="source"><br></td></tr
><tr
id=sl_svn79_862

><td class="source">MStatus bbSteeringDesire::getForceAtPoint(const MVectorArray&amp;	points,<br></td></tr
><tr
id=sl_svn79_863

><td class="source">										  const MVectorArray&amp;	velocities,<br></td></tr
><tr
id=sl_svn79_864

><td class="source">										  const MDoubleArray&amp;	mass,<br></td></tr
><tr
id=sl_svn79_865

><td class="source">										  MVectorArray&amp;	forceArray,<br></td></tr
><tr
id=sl_svn79_866

><td class="source">										  double deltaTime)<br></td></tr
><tr
id=sl_svn79_867

><td class="source">//<br></td></tr
><tr
id=sl_svn79_868

><td class="source">//    This method is not required to be overridden, it is only necessary<br></td></tr
><tr
id=sl_svn79_869

><td class="source">//    for compatibility with the MFnField function set.<br></td></tr
><tr
id=sl_svn79_870

><td class="source">//<br></td></tr
><tr
id=sl_svn79_871

><td class="source">{<br></td></tr
><tr
id=sl_svn79_872

><td class="source">    MStatus ReturnStatus;<br></td></tr
><tr
id=sl_svn79_873

><td class="source"><br></td></tr
><tr
id=sl_svn79_874

><td class="source">	MDataBlock block = forceCache();<br></td></tr
><tr
id=sl_svn79_875

><td class="source"><br></td></tr
><tr
id=sl_svn79_876

><td class="source">//	sdSeek(block, points, velocities,  forceArray );<br></td></tr
><tr
id=sl_svn79_877

><td class="source">	<br></td></tr
><tr
id=sl_svn79_878

><td class="source">    return MS::kSuccess;<br></td></tr
><tr
id=sl_svn79_879

><td class="source">}<br></td></tr
><tr
id=sl_svn79_880

><td class="source"><br></td></tr
><tr
id=sl_svn79_881

><td class="source">/**************************************************************************************/<br></td></tr
><tr
id=sl_svn79_882

><td class="source">void bbSteeringDesire::getTargetsFromPoint(MDataBlock&amp; block,MVectorArray &amp;target)<br></td></tr
><tr
id=sl_svn79_883

><td class="source">{<br></td></tr
><tr
id=sl_svn79_884

><td class="source">	MStatus stat;<br></td></tr
><tr
id=sl_svn79_885

><td class="source">	MArrayDataHandle inputPointAD = block.inputArrayValue( inputPoint, &amp;stat);<br></td></tr
><tr
id=sl_svn79_886

><td class="source">	MDataHandle elementHandle;<br></td></tr
><tr
id=sl_svn79_887

><td class="source"><br></td></tr
><tr
id=sl_svn79_888

><td class="source">	if(!stat)<br></td></tr
><tr
id=sl_svn79_889

><td class="source">		{MGlobal::displayError(&quot;bbSteeringDesire::compute inputPointArrayData&quot;);}<br></td></tr
><tr
id=sl_svn79_890

><td class="source"><br></td></tr
><tr
id=sl_svn79_891

><td class="source">	int numPoint = inputPointAD.elementCount();<br></td></tr
><tr
id=sl_svn79_892

><td class="source">	inputPointAD.jumpToElement(0);<br></td></tr
><tr
id=sl_svn79_893

><td class="source"><br></td></tr
><tr
id=sl_svn79_894

><td class="source">	target.clear();<br></td></tr
><tr
id=sl_svn79_895

><td class="source"><br></td></tr
><tr
id=sl_svn79_896

><td class="source">	short inputSelectionV = inputSelectionValue(block);<br></td></tr
><tr
id=sl_svn79_897

><td class="source"><br></td></tr
><tr
id=sl_svn79_898

><td class="source">	switch(inputSelectionV)<br></td></tr
><tr
id=sl_svn79_899

><td class="source">	{<br></td></tr
><tr
id=sl_svn79_900

><td class="source">		case IS_ALL:<br></td></tr
><tr
id=sl_svn79_901

><td class="source">			{<br></td></tr
><tr
id=sl_svn79_902

><td class="source">				for (int i=0;i&lt;numPoint;i++)<br></td></tr
><tr
id=sl_svn79_903

><td class="source">				{<br></td></tr
><tr
id=sl_svn79_904

><td class="source">					elementHandle = inputPointAD.inputValue(&amp;stat);<br></td></tr
><tr
id=sl_svn79_905

><td class="source">					if (stat==MS::kSuccess)<br></td></tr
><tr
id=sl_svn79_906

><td class="source">						target.append(elementHandle.asVector());<br></td></tr
><tr
id=sl_svn79_907

><td class="source">					stat = inputPointAD.next ();<br></td></tr
><tr
id=sl_svn79_908

><td class="source">				}<br></td></tr
><tr
id=sl_svn79_909

><td class="source">			}<br></td></tr
><tr
id=sl_svn79_910

><td class="source">			break;<br></td></tr
><tr
id=sl_svn79_911

><td class="source">		case IS_INDEX:<br></td></tr
><tr
id=sl_svn79_912

><td class="source">			stat = inputPointAD.jumpToElement(inputIndexValue(block));<br></td></tr
><tr
id=sl_svn79_913

><td class="source">			if (stat==MS::kSuccess)<br></td></tr
><tr
id=sl_svn79_914

><td class="source">			{<br></td></tr
><tr
id=sl_svn79_915

><td class="source">				elementHandle = inputPointAD.inputValue(&amp;stat);<br></td></tr
><tr
id=sl_svn79_916

><td class="source">				target.append(elementHandle.asVector());<br></td></tr
><tr
id=sl_svn79_917

><td class="source">			}<br></td></tr
><tr
id=sl_svn79_918

><td class="source">			break;<br></td></tr
><tr
id=sl_svn79_919

><td class="source">	}<br></td></tr
><tr
id=sl_svn79_920

><td class="source">}<br></td></tr
><tr
id=sl_svn79_921

><td class="source"><br></td></tr
><tr
id=sl_svn79_922

><td class="source">/**************************************************************************************/<br></td></tr
><tr
id=sl_svn79_923

><td class="source">void bbSteeringDesire::getTargetsFromCurve(MDataBlock&amp; block,int posSize, MVectorArray &amp;target)<br></td></tr
><tr
id=sl_svn79_924

><td class="source">{<br></td></tr
><tr
id=sl_svn79_925

><td class="source">	MStatus stat;<br></td></tr
><tr
id=sl_svn79_926

><td class="source">	<br></td></tr
><tr
id=sl_svn79_927

><td class="source">	MArrayDataHandle inputCurveAD = block.inputArrayValue( inputCurve, &amp;stat);<br></td></tr
><tr
id=sl_svn79_928

><td class="source"><br></td></tr
><tr
id=sl_svn79_929

><td class="source">	if( !stat ) <br></td></tr
><tr
id=sl_svn79_930

><td class="source">	{<br></td></tr
><tr
id=sl_svn79_931

><td class="source">		stat.perror(&quot;ERROR getting inputCurvedata&quot;);<br></td></tr
><tr
id=sl_svn79_932

><td class="source">		return;<br></td></tr
><tr
id=sl_svn79_933

><td class="source">	} <br></td></tr
><tr
id=sl_svn79_934

><td class="source"><br></td></tr
><tr
id=sl_svn79_935

><td class="source">	MDataHandle elementHandle;<br></td></tr
><tr
id=sl_svn79_936

><td class="source"><br></td></tr
><tr
id=sl_svn79_937

><td class="source">	if(!stat)<br></td></tr
><tr
id=sl_svn79_938

><td class="source">		{MGlobal::displayError(&quot;bbSteeringDesire::compute inputPointArrayData&quot;);}<br></td></tr
><tr
id=sl_svn79_939

><td class="source"><br></td></tr
><tr
id=sl_svn79_940

><td class="source">	int numCurve = inputCurveAD.elementCount();<br></td></tr
><tr
id=sl_svn79_941

><td class="source">	inputCurveAD.jumpToElement(0);<br></td></tr
><tr
id=sl_svn79_942

><td class="source"><br></td></tr
><tr
id=sl_svn79_943

><td class="source">	target.clear();<br></td></tr
><tr
id=sl_svn79_944

><td class="source"><br></td></tr
><tr
id=sl_svn79_945

><td class="source">	short inputSelectionV = inputSelectionValue(block);<br></td></tr
><tr
id=sl_svn79_946

><td class="source">	short subTargetsV = subTargetsValue(block);<br></td></tr
><tr
id=sl_svn79_947

><td class="source"><br></td></tr
><tr
id=sl_svn79_948

><td class="source">	switch(inputSelectionV)<br></td></tr
><tr
id=sl_svn79_949

><td class="source">	{<br></td></tr
><tr
id=sl_svn79_950

><td class="source">		case IS_ALL:<br></td></tr
><tr
id=sl_svn79_951

><td class="source">			{<br></td></tr
><tr
id=sl_svn79_952

><td class="source">				switch(subTargetsV)<br></td></tr
><tr
id=sl_svn79_953

><td class="source">				{<br></td></tr
><tr
id=sl_svn79_954

><td class="source">					case ST_UNIFORM:<br></td></tr
><tr
id=sl_svn79_955

><td class="source">					{<br></td></tr
><tr
id=sl_svn79_956

><td class="source">						MDoubleArray curveLength;<br></td></tr
><tr
id=sl_svn79_957

><td class="source">						curveLength.clear();<br></td></tr
><tr
id=sl_svn79_958

><td class="source"><br></td></tr
><tr
id=sl_svn79_959

><td class="source">						// get curve lengths<br></td></tr
><tr
id=sl_svn79_960

><td class="source"><br></td></tr
><tr
id=sl_svn79_961

><td class="source">						for (int i=0;i&lt;numCurve;i++)<br></td></tr
><tr
id=sl_svn79_962

><td class="source">						{<br></td></tr
><tr
id=sl_svn79_963

><td class="source">							elementHandle = inputCurveAD.inputValue(&amp;stat);<br></td></tr
><tr
id=sl_svn79_964

><td class="source">							MObject curve = elementHandle.asNurbsCurveTransformed();<br></td></tr
><tr
id=sl_svn79_965

><td class="source">							MFnNurbsCurve curveFn( curve, &amp;stat );<br></td></tr
><tr
id=sl_svn79_966

><td class="source">								<br></td></tr
><tr
id=sl_svn79_967

><td class="source">							if( !stat ) <br></td></tr
><tr
id=sl_svn79_968

><td class="source">							{			<br></td></tr
><tr
id=sl_svn79_969

><td class="source">								stat.perror(&quot;ERROR creating curve function set&quot;);<br></td></tr
><tr
id=sl_svn79_970

><td class="source">								return;<br></td></tr
><tr
id=sl_svn79_971

><td class="source">							}<br></td></tr
><tr
id=sl_svn79_972

><td class="source"><br></td></tr
><tr
id=sl_svn79_973

><td class="source">							curveLength.append(curveFn.length());<br></td></tr
><tr
id=sl_svn79_974

><td class="source">							inputCurveAD.next();<br></td></tr
><tr
id=sl_svn79_975

><td class="source">						}<br></td></tr
><tr
id=sl_svn79_976

><td class="source"><br></td></tr
><tr
id=sl_svn79_977

><td class="source">						// calculate curveLengthsSum<br></td></tr
><tr
id=sl_svn79_978

><td class="source"><br></td></tr
><tr
id=sl_svn79_979

><td class="source">						double curveLengthsSum=0;<br></td></tr
><tr
id=sl_svn79_980

><td class="source"><br></td></tr
><tr
id=sl_svn79_981

><td class="source">						for ( i=0;i&lt;numCurve;i++)<br></td></tr
><tr
id=sl_svn79_982

><td class="source">							curveLengthsSum += curveLength[i];<br></td></tr
><tr
id=sl_svn79_983

><td class="source"><br></td></tr
><tr
id=sl_svn79_984

><td class="source">						<br></td></tr
><tr
id=sl_svn79_985

><td class="source">						// calculate targets per Curve;<br></td></tr
><tr
id=sl_svn79_986

><td class="source"><br></td></tr
><tr
id=sl_svn79_987

><td class="source">						MIntArray targetsPerCurve;<br></td></tr
><tr
id=sl_svn79_988

><td class="source">						targetsPerCurve.clear();<br></td></tr
><tr
id=sl_svn79_989

><td class="source"><br></td></tr
><tr
id=sl_svn79_990

><td class="source">						int targetCountSum=0;<br></td></tr
><tr
id=sl_svn79_991

><td class="source">						int targetCount=0;<br></td></tr
><tr
id=sl_svn79_992

><td class="source"><br></td></tr
><tr
id=sl_svn79_993

><td class="source">						for (i=0; i&lt;numCurve;i++)<br></td></tr
><tr
id=sl_svn79_994

><td class="source">						{<br></td></tr
><tr
id=sl_svn79_995

><td class="source">							if (curveLengthsSum !=0)<br></td></tr
><tr
id=sl_svn79_996

><td class="source">								targetCount = floor(curveLength[i] * posSize / curveLengthsSum);<br></td></tr
><tr
id=sl_svn79_997

><td class="source">							<br></td></tr
><tr
id=sl_svn79_998

><td class="source">							targetsPerCurve.append(targetCount);<br></td></tr
><tr
id=sl_svn79_999

><td class="source">							targetCountSum += targetCount;<br></td></tr
><tr
id=sl_svn79_1000

><td class="source">						}<br></td></tr
><tr
id=sl_svn79_1001

><td class="source"><br></td></tr
><tr
id=sl_svn79_1002

><td class="source">						if (targetCountSum &lt; posSize)<br></td></tr
><tr
id=sl_svn79_1003

><td class="source">							targetsPerCurve[numCurve-1] += posSize - targetCountSum;<br></td></tr
><tr
id=sl_svn79_1004

><td class="source"><br></td></tr
><tr
id=sl_svn79_1005

><td class="source">						inputCurveAD.jumpToElement(0);<br></td></tr
><tr
id=sl_svn79_1006

><td class="source">						<br></td></tr
><tr
id=sl_svn79_1007

><td class="source">						for ( i=0; i&lt;numCurve;i++)<br></td></tr
><tr
id=sl_svn79_1008

><td class="source">						{<br></td></tr
><tr
id=sl_svn79_1009

><td class="source">							elementHandle = inputCurveAD.inputValue(&amp;stat);<br></td></tr
><tr
id=sl_svn79_1010

><td class="source">							MObject curve = elementHandle.asNurbsCurveTransformed();<br></td></tr
><tr
id=sl_svn79_1011

><td class="source">							MFnNurbsCurve curveFn( curve, &amp;stat );<br></td></tr
><tr
id=sl_svn79_1012

><td class="source">						<br></td></tr
><tr
id=sl_svn79_1013

><td class="source">							if (targetsPerCurve[i] &gt; 0) <br></td></tr
><tr
id=sl_svn79_1014

><td class="source">							{<br></td></tr
><tr
id=sl_svn79_1015

><td class="source">								double startParam;<br></td></tr
><tr
id=sl_svn79_1016

><td class="source">								double endParam;<br></td></tr
><tr
id=sl_svn79_1017

><td class="source">								curveFn.getKnotDomain(startParam,endParam);<br></td></tr
><tr
id=sl_svn79_1018

><td class="source"><br></td></tr
><tr
id=sl_svn79_1019

><td class="source">								double ppCoef = (endParam-startParam)/targetsPerCurve[i] ;<br></td></tr
><tr
id=sl_svn79_1020

><td class="source">								MPoint targetPoint;<br></td></tr
><tr
id=sl_svn79_1021

><td class="source"><br></td></tr
><tr
id=sl_svn79_1022

><td class="source">								for (int j=0; j&lt;targetsPerCurve[i] ;j++)<br></td></tr
><tr
id=sl_svn79_1023

><td class="source">								{<br></td></tr
><tr
id=sl_svn79_1024

><td class="source">									curveFn.getPointAtParam( (ppCoef*(j+1)+startParam),targetPoint);<br></td></tr
><tr
id=sl_svn79_1025

><td class="source">									target.append(MVector(targetPoint));<br></td></tr
><tr
id=sl_svn79_1026

><td class="source">								}<br></td></tr
><tr
id=sl_svn79_1027

><td class="source">							}<br></td></tr
><tr
id=sl_svn79_1028

><td class="source"><br></td></tr
><tr
id=sl_svn79_1029

><td class="source">							inputCurveAD.next();<br></td></tr
><tr
id=sl_svn79_1030

><td class="source">						}<br></td></tr
><tr
id=sl_svn79_1031

><td class="source">					}<br></td></tr
><tr
id=sl_svn79_1032

><td class="source">					break;<br></td></tr
><tr
id=sl_svn79_1033

><td class="source"><br></td></tr
><tr
id=sl_svn79_1034

><td class="source">					case ST_KNOTS:<br></td></tr
><tr
id=sl_svn79_1035

><td class="source">					{<br></td></tr
><tr
id=sl_svn79_1036

><td class="source">						MDoubleArray knots;<br></td></tr
><tr
id=sl_svn79_1037

><td class="source">						MPoint targetPoint;<br></td></tr
><tr
id=sl_svn79_1038

><td class="source"><br></td></tr
><tr
id=sl_svn79_1039

><td class="source">						for (int j=0; j&lt;numCurve;j++)<br></td></tr
><tr
id=sl_svn79_1040

><td class="source">						{<br></td></tr
><tr
id=sl_svn79_1041

><td class="source">							elementHandle = inputCurveAD.inputValue(&amp;stat);<br></td></tr
><tr
id=sl_svn79_1042

><td class="source">							MObject curve = elementHandle.asNurbsCurveTransformed();<br></td></tr
><tr
id=sl_svn79_1043

><td class="source">							MFnNurbsCurve curveFn( curve, &amp;stat );<br></td></tr
><tr
id=sl_svn79_1044

><td class="source">							knots.clear();<br></td></tr
><tr
id=sl_svn79_1045

><td class="source">							<br></td></tr
><tr
id=sl_svn79_1046

><td class="source">							curveFn.getKnots(knots);<br></td></tr
><tr
id=sl_svn79_1047

><td class="source">							int knotsSize = knots.length();<br></td></tr
><tr
id=sl_svn79_1048

><td class="source">						<br></td></tr
><tr
id=sl_svn79_1049

><td class="source">							for (int i = 0; i &lt; knotsSize;i++)<br></td></tr
><tr
id=sl_svn79_1050

><td class="source">							{<br></td></tr
><tr
id=sl_svn79_1051

><td class="source">								curveFn.getPointAtParam(knots[i],targetPoint);<br></td></tr
><tr
id=sl_svn79_1052

><td class="source">								target.append(MVector(targetPoint));<br></td></tr
><tr
id=sl_svn79_1053

><td class="source">							}<br></td></tr
><tr
id=sl_svn79_1054

><td class="source"><br></td></tr
><tr
id=sl_svn79_1055

><td class="source">							inputCurveAD.next();<br></td></tr
><tr
id=sl_svn79_1056

><td class="source">						}<br></td></tr
><tr
id=sl_svn79_1057

><td class="source">						<br></td></tr
><tr
id=sl_svn79_1058

><td class="source">					}<br></td></tr
><tr
id=sl_svn79_1059

><td class="source">					break;<br></td></tr
><tr
id=sl_svn79_1060

><td class="source">				}<br></td></tr
><tr
id=sl_svn79_1061

><td class="source">			}<br></td></tr
><tr
id=sl_svn79_1062

><td class="source">			break;<br></td></tr
><tr
id=sl_svn79_1063

><td class="source"><br></td></tr
><tr
id=sl_svn79_1064

><td class="source">		case IS_INDEX:<br></td></tr
><tr
id=sl_svn79_1065

><td class="source">			{<br></td></tr
><tr
id=sl_svn79_1066

><td class="source">				stat = inputCurveAD.jumpToElement(inputIndexValue(block));<br></td></tr
><tr
id=sl_svn79_1067

><td class="source">				if (stat==MS::kSuccess)<br></td></tr
><tr
id=sl_svn79_1068

><td class="source">				{<br></td></tr
><tr
id=sl_svn79_1069

><td class="source">					elementHandle = inputCurveAD.inputValue(&amp;stat);<br></td></tr
><tr
id=sl_svn79_1070

><td class="source">					MObject curve = elementHandle.asNurbsCurveTransformed();<br></td></tr
><tr
id=sl_svn79_1071

><td class="source">					MFnNurbsCurve curveFn( curve, &amp;stat ); <br></td></tr
><tr
id=sl_svn79_1072

><td class="source"><br></td></tr
><tr
id=sl_svn79_1073

><td class="source">					if( !stat ) <br></td></tr
><tr
id=sl_svn79_1074

><td class="source">					{			<br></td></tr
><tr
id=sl_svn79_1075

><td class="source">						stat.perror(&quot;ERROR creating curve function set&quot;);<br></td></tr
><tr
id=sl_svn79_1076

><td class="source">						return;<br></td></tr
><tr
id=sl_svn79_1077

><td class="source">					}<br></td></tr
><tr
id=sl_svn79_1078

><td class="source">					<br></td></tr
><tr
id=sl_svn79_1079

><td class="source">					switch(subTargetsV)<br></td></tr
><tr
id=sl_svn79_1080

><td class="source">					{<br></td></tr
><tr
id=sl_svn79_1081

><td class="source">						case ST_UNIFORM:<br></td></tr
><tr
id=sl_svn79_1082

><td class="source">						{<br></td></tr
><tr
id=sl_svn79_1083

><td class="source">							if (posSize &gt; 0) <br></td></tr
><tr
id=sl_svn79_1084

><td class="source">							{<br></td></tr
><tr
id=sl_svn79_1085

><td class="source">								double startParam;<br></td></tr
><tr
id=sl_svn79_1086

><td class="source">								double endParam;<br></td></tr
><tr
id=sl_svn79_1087

><td class="source">								curveFn.getKnotDomain(startParam,endParam);<br></td></tr
><tr
id=sl_svn79_1088

><td class="source"><br></td></tr
><tr
id=sl_svn79_1089

><td class="source">								double ppCoef = (endParam-startParam)/posSize ;<br></td></tr
><tr
id=sl_svn79_1090

><td class="source">								MPoint targetPoint;<br></td></tr
><tr
id=sl_svn79_1091

><td class="source">								<br></td></tr
><tr
id=sl_svn79_1092

><td class="source">								for (int i=0; i&lt;posSize;i++)<br></td></tr
><tr
id=sl_svn79_1093

><td class="source">								{<br></td></tr
><tr
id=sl_svn79_1094

><td class="source">									curveFn.getPointAtParam( ppCoef*(i+1),targetPoint);<br></td></tr
><tr
id=sl_svn79_1095

><td class="source">									target.append(MVector(targetPoint));<br></td></tr
><tr
id=sl_svn79_1096

><td class="source">								}<br></td></tr
><tr
id=sl_svn79_1097

><td class="source">							}<br></td></tr
><tr
id=sl_svn79_1098

><td class="source">						}<br></td></tr
><tr
id=sl_svn79_1099

><td class="source">						break;<br></td></tr
><tr
id=sl_svn79_1100

><td class="source"><br></td></tr
><tr
id=sl_svn79_1101

><td class="source">						case ST_KNOTS:<br></td></tr
><tr
id=sl_svn79_1102

><td class="source">						{<br></td></tr
><tr
id=sl_svn79_1103

><td class="source">							MDoubleArray knots;<br></td></tr
><tr
id=sl_svn79_1104

><td class="source">							curveFn.getKnots(knots);<br></td></tr
><tr
id=sl_svn79_1105

><td class="source"><br></td></tr
><tr
id=sl_svn79_1106

><td class="source">							int knotsSize = knots.length();<br></td></tr
><tr
id=sl_svn79_1107

><td class="source">							MPoint targetPoint;<br></td></tr
><tr
id=sl_svn79_1108

><td class="source"><br></td></tr
><tr
id=sl_svn79_1109

><td class="source">							for (int i = 0; i &lt; knotsSize;i++)<br></td></tr
><tr
id=sl_svn79_1110

><td class="source">							{<br></td></tr
><tr
id=sl_svn79_1111

><td class="source">								curveFn.getPointAtParam(knots[i],targetPoint);<br></td></tr
><tr
id=sl_svn79_1112

><td class="source">								target.append(MVector(targetPoint));<br></td></tr
><tr
id=sl_svn79_1113

><td class="source">							}<br></td></tr
><tr
id=sl_svn79_1114

><td class="source">						}<br></td></tr
><tr
id=sl_svn79_1115

><td class="source">						break;<br></td></tr
><tr
id=sl_svn79_1116

><td class="source">					}<br></td></tr
><tr
id=sl_svn79_1117

><td class="source">				}<br></td></tr
><tr
id=sl_svn79_1118

><td class="source">			}<br></td></tr
><tr
id=sl_svn79_1119

><td class="source"><br></td></tr
><tr
id=sl_svn79_1120

><td class="source">			break;<br></td></tr
><tr
id=sl_svn79_1121

><td class="source">	}<br></td></tr
><tr
id=sl_svn79_1122

><td class="source">}<br></td></tr
><tr
id=sl_svn79_1123

><td class="source"><br></td></tr
><tr
id=sl_svn79_1124

><td class="source">/**************************************************************************************/<br></td></tr
><tr
id=sl_svn79_1125

><td class="source">void bbSteeringDesire::getTargetsFromSurface(MDataBlock&amp; block,int posSize, MVectorArray &amp;target)<br></td></tr
><tr
id=sl_svn79_1126

><td class="source">{<br></td></tr
><tr
id=sl_svn79_1127

><td class="source">	MStatus stat;<br></td></tr
><tr
id=sl_svn79_1128

><td class="source">	<br></td></tr
><tr
id=sl_svn79_1129

><td class="source">	MArrayDataHandle inputSurfaceAD = block.inputArrayValue( inputSurface, &amp;stat);<br></td></tr
><tr
id=sl_svn79_1130

><td class="source"><br></td></tr
><tr
id=sl_svn79_1131

><td class="source">	if( !stat ) <br></td></tr
><tr
id=sl_svn79_1132

><td class="source">	{<br></td></tr
><tr
id=sl_svn79_1133

><td class="source">		stat.perror(&quot;ERROR getting inputSurfacedata&quot;);<br></td></tr
><tr
id=sl_svn79_1134

><td class="source">		return;<br></td></tr
><tr
id=sl_svn79_1135

><td class="source">	} <br></td></tr
><tr
id=sl_svn79_1136

><td class="source"><br></td></tr
><tr
id=sl_svn79_1137

><td class="source">	MDataHandle elementHandle;<br></td></tr
><tr
id=sl_svn79_1138

><td class="source"><br></td></tr
><tr
id=sl_svn79_1139

><td class="source">	if(!stat)<br></td></tr
><tr
id=sl_svn79_1140

><td class="source">		{MGlobal::displayError(&quot;bbSteeringDesire::compute inputSurfaceArrayData&quot;);}<br></td></tr
><tr
id=sl_svn79_1141

><td class="source"><br></td></tr
><tr
id=sl_svn79_1142

><td class="source">	int numSurface = inputSurfaceAD.elementCount();<br></td></tr
><tr
id=sl_svn79_1143

><td class="source">	inputSurfaceAD.jumpToElement(0);<br></td></tr
><tr
id=sl_svn79_1144

><td class="source"><br></td></tr
><tr
id=sl_svn79_1145

><td class="source">	target.clear();<br></td></tr
><tr
id=sl_svn79_1146

><td class="source"><br></td></tr
><tr
id=sl_svn79_1147

><td class="source">	short inputSelectionV = inputSelectionValue(block);<br></td></tr
><tr
id=sl_svn79_1148

><td class="source">	short subTargetsV = subTargetsValue(block);<br></td></tr
><tr
id=sl_svn79_1149

><td class="source"><br></td></tr
><tr
id=sl_svn79_1150

><td class="source">	switch(inputSelectionV)<br></td></tr
><tr
id=sl_svn79_1151

><td class="source">	{<br></td></tr
><tr
id=sl_svn79_1152

><td class="source">		case IS_ALL:<br></td></tr
><tr
id=sl_svn79_1153

><td class="source">			{<br></td></tr
><tr
id=sl_svn79_1154

><td class="source">				switch(subTargetsV)<br></td></tr
><tr
id=sl_svn79_1155

><td class="source">				{<br></td></tr
><tr
id=sl_svn79_1156

><td class="source">					case ST_UNIFORM:<br></td></tr
><tr
id=sl_svn79_1157

><td class="source">					{<br></td></tr
><tr
id=sl_svn79_1158

><td class="source">						MDoubleArray surfaceArea;<br></td></tr
><tr
id=sl_svn79_1159

><td class="source">						surfaceArea.clear();<br></td></tr
><tr
id=sl_svn79_1160

><td class="source"><br></td></tr
><tr
id=sl_svn79_1161

><td class="source">						// get surface area<br></td></tr
><tr
id=sl_svn79_1162

><td class="source"><br></td></tr
><tr
id=sl_svn79_1163

><td class="source">						for (int i=0;i&lt;numSurface;i++)<br></td></tr
><tr
id=sl_svn79_1164

><td class="source">						{<br></td></tr
><tr
id=sl_svn79_1165

><td class="source">							elementHandle = inputSurfaceAD.inputValue(&amp;stat);<br></td></tr
><tr
id=sl_svn79_1166

><td class="source">							MObject surface = elementHandle.asNurbsSurfaceTransformed();<br></td></tr
><tr
id=sl_svn79_1167

><td class="source">							MFnNurbsSurface surfaceFn( surface, &amp;stat );<br></td></tr
><tr
id=sl_svn79_1168

><td class="source">								<br></td></tr
><tr
id=sl_svn79_1169

><td class="source">							if( !stat ) <br></td></tr
><tr
id=sl_svn79_1170

><td class="source">							{			<br></td></tr
><tr
id=sl_svn79_1171

><td class="source">								stat.perror(&quot;ERROR creating surface function set&quot;);<br></td></tr
><tr
id=sl_svn79_1172

><td class="source">								return;<br></td></tr
><tr
id=sl_svn79_1173

><td class="source">							}<br></td></tr
><tr
id=sl_svn79_1174

><td class="source"><br></td></tr
><tr
id=sl_svn79_1175

><td class="source">							surfaceArea.append(surfaceFn.area());<br></td></tr
><tr
id=sl_svn79_1176

><td class="source">							inputSurfaceAD.next();<br></td></tr
><tr
id=sl_svn79_1177

><td class="source">						}<br></td></tr
><tr
id=sl_svn79_1178

><td class="source"><br></td></tr
><tr
id=sl_svn79_1179

><td class="source">						// calculate surfaceLengthsSum<br></td></tr
><tr
id=sl_svn79_1180

><td class="source"><br></td></tr
><tr
id=sl_svn79_1181

><td class="source">						double surfaceAreaSum=0;<br></td></tr
><tr
id=sl_svn79_1182

><td class="source"><br></td></tr
><tr
id=sl_svn79_1183

><td class="source">						for ( i=0;i&lt;numSurface;i++)<br></td></tr
><tr
id=sl_svn79_1184

><td class="source">							surfaceAreaSum += surfaceArea[i];<br></td></tr
><tr
id=sl_svn79_1185

><td class="source"><br></td></tr
><tr
id=sl_svn79_1186

><td class="source">						<br></td></tr
><tr
id=sl_svn79_1187

><td class="source">						// calculate targets per Surface;<br></td></tr
><tr
id=sl_svn79_1188

><td class="source"><br></td></tr
><tr
id=sl_svn79_1189

><td class="source">						MIntArray targetsPerSurface;<br></td></tr
><tr
id=sl_svn79_1190

><td class="source">						targetsPerSurface.clear();<br></td></tr
><tr
id=sl_svn79_1191

><td class="source"><br></td></tr
><tr
id=sl_svn79_1192

><td class="source">						int targetCountSum=0;<br></td></tr
><tr
id=sl_svn79_1193

><td class="source">						int targetCount=0;<br></td></tr
><tr
id=sl_svn79_1194

><td class="source"><br></td></tr
><tr
id=sl_svn79_1195

><td class="source">						for (i=0; i&lt;numSurface;i++)<br></td></tr
><tr
id=sl_svn79_1196

><td class="source">						{<br></td></tr
><tr
id=sl_svn79_1197

><td class="source">							if (surfaceAreaSum !=0)<br></td></tr
><tr
id=sl_svn79_1198

><td class="source">								targetCount = floor(surfaceArea[i] * posSize / surfaceAreaSum);<br></td></tr
><tr
id=sl_svn79_1199

><td class="source">							<br></td></tr
><tr
id=sl_svn79_1200

><td class="source">							targetsPerSurface.append(targetCount);<br></td></tr
><tr
id=sl_svn79_1201

><td class="source">							targetCountSum += targetCount;<br></td></tr
><tr
id=sl_svn79_1202

><td class="source">						}<br></td></tr
><tr
id=sl_svn79_1203

><td class="source"><br></td></tr
><tr
id=sl_svn79_1204

><td class="source">						if (targetCountSum &lt; posSize)<br></td></tr
><tr
id=sl_svn79_1205

><td class="source">							targetsPerSurface[numSurface-1] += posSize - targetCountSum;<br></td></tr
><tr
id=sl_svn79_1206

><td class="source"><br></td></tr
><tr
id=sl_svn79_1207

><td class="source">						inputSurfaceAD.jumpToElement(0);<br></td></tr
><tr
id=sl_svn79_1208

><td class="source">						<br></td></tr
><tr
id=sl_svn79_1209

><td class="source">						for ( i=0; i&lt;numSurface;i++)<br></td></tr
><tr
id=sl_svn79_1210

><td class="source">						{<br></td></tr
><tr
id=sl_svn79_1211

><td class="source">							elementHandle = inputSurfaceAD.inputValue(&amp;stat);<br></td></tr
><tr
id=sl_svn79_1212

><td class="source">							MObject surface = elementHandle.asNurbsSurfaceTransformed();<br></td></tr
><tr
id=sl_svn79_1213

><td class="source">							MFnNurbsSurface surfaceFn( surface, &amp;stat );<br></td></tr
><tr
id=sl_svn79_1214

><td class="source">						<br></td></tr
><tr
id=sl_svn79_1215

><td class="source">							if (targetsPerSurface[i] &gt; 0) <br></td></tr
><tr
id=sl_svn79_1216

><td class="source">							{<br></td></tr
><tr
id=sl_svn79_1217

><td class="source">								double startU, endU, startV, endV;<br></td></tr
><tr
id=sl_svn79_1218

><td class="source"><br></td></tr
><tr
id=sl_svn79_1219

><td class="source">								surfaceFn.getKnotDomain(startU,endU,startV,endV);<br></td></tr
><tr
id=sl_svn79_1220

><td class="source"><br></td></tr
><tr
id=sl_svn79_1221

><td class="source">								double paramU = (endU-startU);<br></td></tr
><tr
id=sl_svn79_1222

><td class="source">								double paramV = (endV-startV);<br></td></tr
><tr
id=sl_svn79_1223

><td class="source">								double paramUV = paramU / paramV;<br></td></tr
><tr
id=sl_svn79_1224

><td class="source"><br></td></tr
><tr
id=sl_svn79_1225

><td class="source">								int targetsPerU = ceil(sqrt(targetsPerSurface[i]*paramUV));<br></td></tr
><tr
id=sl_svn79_1226

><td class="source">								int targetsPerV = ceil(sqrt(targetsPerSurface[i]/paramUV));<br></td></tr
><tr
id=sl_svn79_1227

><td class="source">						<br></td></tr
><tr
id=sl_svn79_1228

><td class="source">								double uCoef =0;<br></td></tr
><tr
id=sl_svn79_1229

><td class="source">								double vCoef =0;<br></td></tr
><tr
id=sl_svn79_1230

><td class="source"><br></td></tr
><tr
id=sl_svn79_1231

><td class="source">								if (targetsPerU != 0) uCoef = paramU/targetsPerU;<br></td></tr
><tr
id=sl_svn79_1232

><td class="source">								if (targetsPerV != 0) vCoef = paramV/targetsPerV;<br></td></tr
><tr
id=sl_svn79_1233

><td class="source"><br></td></tr
><tr
id=sl_svn79_1234

><td class="source">								<br></td></tr
><tr
id=sl_svn79_1235

><td class="source">								// get targets<br></td></tr
><tr
id=sl_svn79_1236

><td class="source"><br></td></tr
><tr
id=sl_svn79_1237

><td class="source">								MPoint targetPoint;<br></td></tr
><tr
id=sl_svn79_1238

><td class="source"><br></td></tr
><tr
id=sl_svn79_1239

><td class="source">								for (int u=0;u&lt;targetsPerU;u++)<br></td></tr
><tr
id=sl_svn79_1240

><td class="source">									for (int v=0;v&lt;targetsPerU;v++)<br></td></tr
><tr
id=sl_svn79_1241

><td class="source">									{<br></td></tr
><tr
id=sl_svn79_1242

><td class="source">										surfaceFn.getPointAtParam( uCoef*(u+1),vCoef*(v+1),targetPoint);<br></td></tr
><tr
id=sl_svn79_1243

><td class="source">										target.append(MVector(targetPoint));<br></td></tr
><tr
id=sl_svn79_1244

><td class="source">									}<br></td></tr
><tr
id=sl_svn79_1245

><td class="source"><br></td></tr
><tr
id=sl_svn79_1246

><td class="source">								int unTarget = targetsPerU*targetsPerV-targetsPerSurface[i];<br></td></tr
><tr
id=sl_svn79_1247

><td class="source"><br></td></tr
><tr
id=sl_svn79_1248

><td class="source">								// remove unneccesary targets<br></td></tr
><tr
id=sl_svn79_1249

><td class="source"><br></td></tr
><tr
id=sl_svn79_1250

><td class="source">								for (int k=0; k&lt; unTarget; k++)<br></td></tr
><tr
id=sl_svn79_1251

><td class="source">									target.remove(target.length()-1);<br></td></tr
><tr
id=sl_svn79_1252

><td class="source">							}<br></td></tr
><tr
id=sl_svn79_1253

><td class="source"><br></td></tr
><tr
id=sl_svn79_1254

><td class="source">							inputSurfaceAD.next();<br></td></tr
><tr
id=sl_svn79_1255

><td class="source">						}<br></td></tr
><tr
id=sl_svn79_1256

><td class="source">					}<br></td></tr
><tr
id=sl_svn79_1257

><td class="source">					break;<br></td></tr
><tr
id=sl_svn79_1258

><td class="source"><br></td></tr
><tr
id=sl_svn79_1259

><td class="source">					case ST_KNOTS:<br></td></tr
><tr
id=sl_svn79_1260

><td class="source">					{<br></td></tr
><tr
id=sl_svn79_1261

><td class="source">						MDoubleArray knotsU;<br></td></tr
><tr
id=sl_svn79_1262

><td class="source">						MDoubleArray knotsV;<br></td></tr
><tr
id=sl_svn79_1263

><td class="source">						MPoint targetPoint;<br></td></tr
><tr
id=sl_svn79_1264

><td class="source"><br></td></tr
><tr
id=sl_svn79_1265

><td class="source">						for (int j=0; j&lt;numSurface;j++)<br></td></tr
><tr
id=sl_svn79_1266

><td class="source">						{<br></td></tr
><tr
id=sl_svn79_1267

><td class="source">							elementHandle = inputSurfaceAD.inputValue(&amp;stat);<br></td></tr
><tr
id=sl_svn79_1268

><td class="source">							MObject surface = elementHandle.asNurbsSurfaceTransformed();<br></td></tr
><tr
id=sl_svn79_1269

><td class="source">							MFnNurbsSurface surfaceFn( surface, &amp;stat );<br></td></tr
><tr
id=sl_svn79_1270

><td class="source">							<br></td></tr
><tr
id=sl_svn79_1271

><td class="source">							knotsU.clear();<br></td></tr
><tr
id=sl_svn79_1272

><td class="source">							knotsV.clear();<br></td></tr
><tr
id=sl_svn79_1273

><td class="source"><br></td></tr
><tr
id=sl_svn79_1274

><td class="source">							surfaceFn.getKnotsInU(knotsU);<br></td></tr
><tr
id=sl_svn79_1275

><td class="source">							surfaceFn.getKnotsInU(knotsV);<br></td></tr
><tr
id=sl_svn79_1276

><td class="source"><br></td></tr
><tr
id=sl_svn79_1277

><td class="source">							int knotsUSize = knotsU.length();<br></td></tr
><tr
id=sl_svn79_1278

><td class="source">							int knotsVSize = knotsV.length();<br></td></tr
><tr
id=sl_svn79_1279

><td class="source"><br></td></tr
><tr
id=sl_svn79_1280

><td class="source">							for (int u = 0; u &lt; knotsUSize;u++)<br></td></tr
><tr
id=sl_svn79_1281

><td class="source">								for (int v = 0; v &lt; knotsVSize;v++)<br></td></tr
><tr
id=sl_svn79_1282

><td class="source">								{<br></td></tr
><tr
id=sl_svn79_1283

><td class="source">									surfaceFn.getPointAtParam(knotsU[u],knotsV[v],targetPoint);<br></td></tr
><tr
id=sl_svn79_1284

><td class="source">									// ignore multiple knots<br></td></tr
><tr
id=sl_svn79_1285

><td class="source">									short temp = target.length();<br></td></tr
><tr
id=sl_svn79_1286

><td class="source">									if (temp&gt;0)<br></td></tr
><tr
id=sl_svn79_1287

><td class="source">									{<br></td></tr
><tr
id=sl_svn79_1288

><td class="source">										if (target[temp-1] != targetPoint)<br></td></tr
><tr
id=sl_svn79_1289

><td class="source">											target.append(MVector(targetPoint));<br></td></tr
><tr
id=sl_svn79_1290

><td class="source">									}<br></td></tr
><tr
id=sl_svn79_1291

><td class="source">									else target.append(MVector(targetPoint));<br></td></tr
><tr
id=sl_svn79_1292

><td class="source">								}<br></td></tr
><tr
id=sl_svn79_1293

><td class="source"><br></td></tr
><tr
id=sl_svn79_1294

><td class="source">							inputSurfaceAD.next();<br></td></tr
><tr
id=sl_svn79_1295

><td class="source">						}<br></td></tr
><tr
id=sl_svn79_1296

><td class="source">						<br></td></tr
><tr
id=sl_svn79_1297

><td class="source">					}<br></td></tr
><tr
id=sl_svn79_1298

><td class="source">					break;<br></td></tr
><tr
id=sl_svn79_1299

><td class="source">				}<br></td></tr
><tr
id=sl_svn79_1300

><td class="source">			}<br></td></tr
><tr
id=sl_svn79_1301

><td class="source">			break;<br></td></tr
><tr
id=sl_svn79_1302

><td class="source"><br></td></tr
><tr
id=sl_svn79_1303

><td class="source">		case IS_INDEX:<br></td></tr
><tr
id=sl_svn79_1304

><td class="source">			{<br></td></tr
><tr
id=sl_svn79_1305

><td class="source">				stat = inputSurfaceAD.jumpToElement(inputIndexValue(block));<br></td></tr
><tr
id=sl_svn79_1306

><td class="source">				if (stat==MS::kSuccess)<br></td></tr
><tr
id=sl_svn79_1307

><td class="source">				{<br></td></tr
><tr
id=sl_svn79_1308

><td class="source">					elementHandle = inputSurfaceAD.inputValue(&amp;stat);<br></td></tr
><tr
id=sl_svn79_1309

><td class="source">					MObject surface = elementHandle.asNurbsSurfaceTransformed();<br></td></tr
><tr
id=sl_svn79_1310

><td class="source">					MFnNurbsSurface surfaceFn( surface, &amp;stat ); <br></td></tr
><tr
id=sl_svn79_1311

><td class="source"><br></td></tr
><tr
id=sl_svn79_1312

><td class="source">					if( !stat ) <br></td></tr
><tr
id=sl_svn79_1313

><td class="source">					{			<br></td></tr
><tr
id=sl_svn79_1314

><td class="source">						stat.perror(&quot;ERROR creating surface function set&quot;);<br></td></tr
><tr
id=sl_svn79_1315

><td class="source">						return;<br></td></tr
><tr
id=sl_svn79_1316

><td class="source">					}<br></td></tr
><tr
id=sl_svn79_1317

><td class="source">					<br></td></tr
><tr
id=sl_svn79_1318

><td class="source">					switch(subTargetsV)<br></td></tr
><tr
id=sl_svn79_1319

><td class="source">					{<br></td></tr
><tr
id=sl_svn79_1320

><td class="source">						case ST_UNIFORM:<br></td></tr
><tr
id=sl_svn79_1321

><td class="source">						{<br></td></tr
><tr
id=sl_svn79_1322

><td class="source">							if (posSize &gt; 0) <br></td></tr
><tr
id=sl_svn79_1323

><td class="source">							{<br></td></tr
><tr
id=sl_svn79_1324

><td class="source">								double startU; double endU;<br></td></tr
><tr
id=sl_svn79_1325

><td class="source">								double startV; double endV;<br></td></tr
><tr
id=sl_svn79_1326

><td class="source"><br></td></tr
><tr
id=sl_svn79_1327

><td class="source">								surfaceFn.getKnotDomain(startU,endU,startV,endV);<br></td></tr
><tr
id=sl_svn79_1328

><td class="source"><br></td></tr
><tr
id=sl_svn79_1329

><td class="source">								double paramU = (endU-startU);<br></td></tr
><tr
id=sl_svn79_1330

><td class="source">								double paramV = (endV-startV);<br></td></tr
><tr
id=sl_svn79_1331

><td class="source">								double paramUV = paramU / paramV;<br></td></tr
><tr
id=sl_svn79_1332

><td class="source"><br></td></tr
><tr
id=sl_svn79_1333

><td class="source">								int targetsPerU = ceil(sqrt(posSize*paramUV));<br></td></tr
><tr
id=sl_svn79_1334

><td class="source">								int targetsPerV = ceil(sqrt(posSize/paramUV));<br></td></tr
><tr
id=sl_svn79_1335

><td class="source">						<br></td></tr
><tr
id=sl_svn79_1336

><td class="source">								double uCoef =0;<br></td></tr
><tr
id=sl_svn79_1337

><td class="source">								double vCoef =0;<br></td></tr
><tr
id=sl_svn79_1338

><td class="source"><br></td></tr
><tr
id=sl_svn79_1339

><td class="source">								if (targetsPerU != 0) uCoef = paramU/targetsPerU;<br></td></tr
><tr
id=sl_svn79_1340

><td class="source">								if (targetsPerV != 0) vCoef = paramV/targetsPerV;<br></td></tr
><tr
id=sl_svn79_1341

><td class="source"><br></td></tr
><tr
id=sl_svn79_1342

><td class="source">								<br></td></tr
><tr
id=sl_svn79_1343

><td class="source">								// get targets<br></td></tr
><tr
id=sl_svn79_1344

><td class="source"><br></td></tr
><tr
id=sl_svn79_1345

><td class="source">								MPoint targetPoint;<br></td></tr
><tr
id=sl_svn79_1346

><td class="source"><br></td></tr
><tr
id=sl_svn79_1347

><td class="source">								for (int u=0;u&lt;targetsPerU;u++)<br></td></tr
><tr
id=sl_svn79_1348

><td class="source">									for (int v=0;v&lt;targetsPerU;v++)<br></td></tr
><tr
id=sl_svn79_1349

><td class="source">									{<br></td></tr
><tr
id=sl_svn79_1350

><td class="source">										surfaceFn.getPointAtParam( uCoef*(u+1)+startU,vCoef*(v+1)+startV,targetPoint);<br></td></tr
><tr
id=sl_svn79_1351

><td class="source">										target.append(MVector(targetPoint));<br></td></tr
><tr
id=sl_svn79_1352

><td class="source">									}<br></td></tr
><tr
id=sl_svn79_1353

><td class="source"><br></td></tr
><tr
id=sl_svn79_1354

><td class="source">								int unTarget = targetsPerU*targetsPerV-posSize;<br></td></tr
><tr
id=sl_svn79_1355

><td class="source"><br></td></tr
><tr
id=sl_svn79_1356

><td class="source">								// remove unneccesary targets<br></td></tr
><tr
id=sl_svn79_1357

><td class="source"><br></td></tr
><tr
id=sl_svn79_1358

><td class="source">								for (int k=0; k&lt; unTarget; k++)<br></td></tr
><tr
id=sl_svn79_1359

><td class="source">									target.remove(target.length()-1);	<br></td></tr
><tr
id=sl_svn79_1360

><td class="source">							}<br></td></tr
><tr
id=sl_svn79_1361

><td class="source">						}<br></td></tr
><tr
id=sl_svn79_1362

><td class="source">						break;<br></td></tr
><tr
id=sl_svn79_1363

><td class="source"><br></td></tr
><tr
id=sl_svn79_1364

><td class="source">						case ST_KNOTS:<br></td></tr
><tr
id=sl_svn79_1365

><td class="source">						{<br></td></tr
><tr
id=sl_svn79_1366

><td class="source">							MDoubleArray knotsU;<br></td></tr
><tr
id=sl_svn79_1367

><td class="source">							MDoubleArray knotsV;<br></td></tr
><tr
id=sl_svn79_1368

><td class="source"><br></td></tr
><tr
id=sl_svn79_1369

><td class="source">							surfaceFn.getKnotsInU(knotsU);<br></td></tr
><tr
id=sl_svn79_1370

><td class="source">							surfaceFn.getKnotsInU(knotsV);<br></td></tr
><tr
id=sl_svn79_1371

><td class="source"><br></td></tr
><tr
id=sl_svn79_1372

><td class="source">							int knotsUSize = knotsU.length();<br></td></tr
><tr
id=sl_svn79_1373

><td class="source">							int knotsVSize = knotsV.length();<br></td></tr
><tr
id=sl_svn79_1374

><td class="source"><br></td></tr
><tr
id=sl_svn79_1375

><td class="source">							MPoint targetPoint;<br></td></tr
><tr
id=sl_svn79_1376

><td class="source"><br></td></tr
><tr
id=sl_svn79_1377

><td class="source">							for (int u = 0; u &lt; knotsUSize;u++)<br></td></tr
><tr
id=sl_svn79_1378

><td class="source">								for (int v = 0; v &lt; knotsVSize;v++)<br></td></tr
><tr
id=sl_svn79_1379

><td class="source">								{<br></td></tr
><tr
id=sl_svn79_1380

><td class="source">									surfaceFn.getPointAtParam(knotsU[u],knotsV[v],targetPoint);<br></td></tr
><tr
id=sl_svn79_1381

><td class="source">									// ignore multiple knots<br></td></tr
><tr
id=sl_svn79_1382

><td class="source">									short temp = target.length();<br></td></tr
><tr
id=sl_svn79_1383

><td class="source">									if (temp&gt;0)<br></td></tr
><tr
id=sl_svn79_1384

><td class="source">									{<br></td></tr
><tr
id=sl_svn79_1385

><td class="source">										if (target[temp-1] != targetPoint)<br></td></tr
><tr
id=sl_svn79_1386

><td class="source">											target.append(MVector(targetPoint));<br></td></tr
><tr
id=sl_svn79_1387

><td class="source">									}<br></td></tr
><tr
id=sl_svn79_1388

><td class="source">									else target.append(MVector(targetPoint));<br></td></tr
><tr
id=sl_svn79_1389

><td class="source">								}<br></td></tr
><tr
id=sl_svn79_1390

><td class="source">						}<br></td></tr
><tr
id=sl_svn79_1391

><td class="source">						break;<br></td></tr
><tr
id=sl_svn79_1392

><td class="source">					}<br></td></tr
><tr
id=sl_svn79_1393

><td class="source">				}<br></td></tr
><tr
id=sl_svn79_1394

><td class="source">			}<br></td></tr
><tr
id=sl_svn79_1395

><td class="source"><br></td></tr
><tr
id=sl_svn79_1396

><td class="source">			break;<br></td></tr
><tr
id=sl_svn79_1397

><td class="source">	}<br></td></tr
><tr
id=sl_svn79_1398

><td class="source">}<br></td></tr
><tr
id=sl_svn79_1399

><td class="source">/**************************************************************************************/<br></td></tr
><tr
id=sl_svn79_1400

><td class="source"><br></td></tr
><tr
id=sl_svn79_1401

><td class="source">void bbSteeringDesire::getTargetsFromMesh(MDataBlock&amp; block,int posSize, MVectorArray &amp;target)<br></td></tr
><tr
id=sl_svn79_1402

><td class="source">{<br></td></tr
><tr
id=sl_svn79_1403

><td class="source">	MStatus stat;<br></td></tr
><tr
id=sl_svn79_1404

><td class="source">	<br></td></tr
><tr
id=sl_svn79_1405

><td class="source">	MArrayDataHandle inputMeshAD = block.inputArrayValue( inputMesh, &amp;stat);<br></td></tr
><tr
id=sl_svn79_1406

><td class="source"><br></td></tr
><tr
id=sl_svn79_1407

><td class="source">	if( !stat )	{ stat.perror(&quot;ERROR getting inputMeshdata&quot;); return;} <br></td></tr
><tr
id=sl_svn79_1408

><td class="source"><br></td></tr
><tr
id=sl_svn79_1409

><td class="source">	MDataHandle elementHandle;<br></td></tr
><tr
id=sl_svn79_1410

><td class="source"><br></td></tr
><tr
id=sl_svn79_1411

><td class="source">	if(!stat)	{MGlobal::displayError(&quot;bbSteeringDesire::compute inputMeshArrayData&quot;);}<br></td></tr
><tr
id=sl_svn79_1412

><td class="source"><br></td></tr
><tr
id=sl_svn79_1413

><td class="source">	int numMesh = inputMeshAD.elementCount();<br></td></tr
><tr
id=sl_svn79_1414

><td class="source">	inputMeshAD.jumpToElement(0);<br></td></tr
><tr
id=sl_svn79_1415

><td class="source"><br></td></tr
><tr
id=sl_svn79_1416

><td class="source">	target.clear();<br></td></tr
><tr
id=sl_svn79_1417

><td class="source"><br></td></tr
><tr
id=sl_svn79_1418

><td class="source">	short inputSelectionV = inputSelectionValue(block);<br></td></tr
><tr
id=sl_svn79_1419

><td class="source">	short subTargetsV = subTargetsValue(block);<br></td></tr
><tr
id=sl_svn79_1420

><td class="source"><br></td></tr
><tr
id=sl_svn79_1421

><td class="source">	switch(inputSelectionV)<br></td></tr
><tr
id=sl_svn79_1422

><td class="source">	{<br></td></tr
><tr
id=sl_svn79_1423

><td class="source">		case IS_ALL:<br></td></tr
><tr
id=sl_svn79_1424

><td class="source">			{<br></td></tr
><tr
id=sl_svn79_1425

><td class="source">				switch(subTargetsV)<br></td></tr
><tr
id=sl_svn79_1426

><td class="source">				{<br></td></tr
><tr
id=sl_svn79_1427

><td class="source">					case ST_UNIFORM:<br></td></tr
><tr
id=sl_svn79_1428

><td class="source">				/*	{<br></td></tr
><tr
id=sl_svn79_1429

><td class="source">						MDoubleArray meshArea;<br></td></tr
><tr
id=sl_svn79_1430

><td class="source">						meshArea.clear();<br></td></tr
><tr
id=sl_svn79_1431

><td class="source"><br></td></tr
><tr
id=sl_svn79_1432

><td class="source">						// get mesh area<br></td></tr
><tr
id=sl_svn79_1433

><td class="source"><br></td></tr
><tr
id=sl_svn79_1434

><td class="source">						for (int i=0;i&lt;numMesh;i++)<br></td></tr
><tr
id=sl_svn79_1435

><td class="source">						{<br></td></tr
><tr
id=sl_svn79_1436

><td class="source">							elementHandle = inputMeshAD.inputValue(&amp;stat);<br></td></tr
><tr
id=sl_svn79_1437

><td class="source">							MObject mesh = elementHandle.asNurbsMeshTransformed();<br></td></tr
><tr
id=sl_svn79_1438

><td class="source">							MFnNurbsMesh meshFn( mesh, &amp;stat );<br></td></tr
><tr
id=sl_svn79_1439

><td class="source">								<br></td></tr
><tr
id=sl_svn79_1440

><td class="source">							if( !stat ) <br></td></tr
><tr
id=sl_svn79_1441

><td class="source">							{			<br></td></tr
><tr
id=sl_svn79_1442

><td class="source">								stat.perror(&quot;ERROR creating mesh function set&quot;);<br></td></tr
><tr
id=sl_svn79_1443

><td class="source">								return;<br></td></tr
><tr
id=sl_svn79_1444

><td class="source">							}<br></td></tr
><tr
id=sl_svn79_1445

><td class="source"><br></td></tr
><tr
id=sl_svn79_1446

><td class="source">							meshArea.append(meshFn.area());<br></td></tr
><tr
id=sl_svn79_1447

><td class="source">							inputMeshAD.next();<br></td></tr
><tr
id=sl_svn79_1448

><td class="source">						}<br></td></tr
><tr
id=sl_svn79_1449

><td class="source"><br></td></tr
><tr
id=sl_svn79_1450

><td class="source">						// calculate meshLengthsSum<br></td></tr
><tr
id=sl_svn79_1451

><td class="source"><br></td></tr
><tr
id=sl_svn79_1452

><td class="source">						double meshAreaSum=0;<br></td></tr
><tr
id=sl_svn79_1453

><td class="source"><br></td></tr
><tr
id=sl_svn79_1454

><td class="source">						for ( i=0;i&lt;numMesh;i++)<br></td></tr
><tr
id=sl_svn79_1455

><td class="source">							meshAreaSum += meshArea[i];<br></td></tr
><tr
id=sl_svn79_1456

><td class="source"><br></td></tr
><tr
id=sl_svn79_1457

><td class="source">						<br></td></tr
><tr
id=sl_svn79_1458

><td class="source">						// calculate targets per Mesh;<br></td></tr
><tr
id=sl_svn79_1459

><td class="source"><br></td></tr
><tr
id=sl_svn79_1460

><td class="source">						MIntArray targetsPerMesh;<br></td></tr
><tr
id=sl_svn79_1461

><td class="source">						targetsPerMesh.clear();<br></td></tr
><tr
id=sl_svn79_1462

><td class="source"><br></td></tr
><tr
id=sl_svn79_1463

><td class="source">						int targetCountSum=0;<br></td></tr
><tr
id=sl_svn79_1464

><td class="source">						int targetCount=0;<br></td></tr
><tr
id=sl_svn79_1465

><td class="source"><br></td></tr
><tr
id=sl_svn79_1466

><td class="source">						for (i=0; i&lt;numMesh;i++)<br></td></tr
><tr
id=sl_svn79_1467

><td class="source">						{<br></td></tr
><tr
id=sl_svn79_1468

><td class="source">							if (meshAreaSum !=0)<br></td></tr
><tr
id=sl_svn79_1469

><td class="source">								targetCount = floor(meshArea[i] * posSize / meshAreaSum);<br></td></tr
><tr
id=sl_svn79_1470

><td class="source">							<br></td></tr
><tr
id=sl_svn79_1471

><td class="source">							targetsPerMesh.append(targetCount);<br></td></tr
><tr
id=sl_svn79_1472

><td class="source">							targetCountSum += targetCount;<br></td></tr
><tr
id=sl_svn79_1473

><td class="source">						}<br></td></tr
><tr
id=sl_svn79_1474

><td class="source"><br></td></tr
><tr
id=sl_svn79_1475

><td class="source">						if (targetCountSum &lt; posSize)<br></td></tr
><tr
id=sl_svn79_1476

><td class="source">							targetsPerMesh[numMesh-1] += posSize - targetCountSum;<br></td></tr
><tr
id=sl_svn79_1477

><td class="source"><br></td></tr
><tr
id=sl_svn79_1478

><td class="source">						inputMeshAD.jumpToElement(0);<br></td></tr
><tr
id=sl_svn79_1479

><td class="source">						<br></td></tr
><tr
id=sl_svn79_1480

><td class="source">						for ( i=0; i&lt;numMesh;i++)<br></td></tr
><tr
id=sl_svn79_1481

><td class="source">						{<br></td></tr
><tr
id=sl_svn79_1482

><td class="source">							elementHandle = inputMeshAD.inputValue(&amp;stat);<br></td></tr
><tr
id=sl_svn79_1483

><td class="source">							MObject mesh = elementHandle.asNurbsMeshTransformed();<br></td></tr
><tr
id=sl_svn79_1484

><td class="source">							MFnNurbsMesh meshFn( mesh, &amp;stat );<br></td></tr
><tr
id=sl_svn79_1485

><td class="source">						<br></td></tr
><tr
id=sl_svn79_1486

><td class="source">							if (targetsPerMesh[i] &gt; 0) <br></td></tr
><tr
id=sl_svn79_1487

><td class="source">							{<br></td></tr
><tr
id=sl_svn79_1488

><td class="source">								double startU, endU, startV, endV;<br></td></tr
><tr
id=sl_svn79_1489

><td class="source"><br></td></tr
><tr
id=sl_svn79_1490

><td class="source">								meshFn.getKnotDomain(startU,endU,startV,endV);<br></td></tr
><tr
id=sl_svn79_1491

><td class="source"><br></td></tr
><tr
id=sl_svn79_1492

><td class="source">								double paramU = (endU-startU);<br></td></tr
><tr
id=sl_svn79_1493

><td class="source">								double paramV = (endV-startV);<br></td></tr
><tr
id=sl_svn79_1494

><td class="source">								double paramUV = paramU / paramV;<br></td></tr
><tr
id=sl_svn79_1495

><td class="source"><br></td></tr
><tr
id=sl_svn79_1496

><td class="source">								int targetsPerU = ceil(sqrt(targetsPerMesh[i]*paramUV));<br></td></tr
><tr
id=sl_svn79_1497

><td class="source">								int targetsPerV = ceil(sqrt(targetsPerMesh[i]/paramUV));<br></td></tr
><tr
id=sl_svn79_1498

><td class="source">						<br></td></tr
><tr
id=sl_svn79_1499

><td class="source">								double uCoef =0;<br></td></tr
><tr
id=sl_svn79_1500

><td class="source">								double vCoef =0;<br></td></tr
><tr
id=sl_svn79_1501

><td class="source"><br></td></tr
><tr
id=sl_svn79_1502

><td class="source">								if (targetsPerU != 0) uCoef = paramU/targetsPerU;<br></td></tr
><tr
id=sl_svn79_1503

><td class="source">								if (targetsPerV != 0) vCoef = paramV/targetsPerV;<br></td></tr
><tr
id=sl_svn79_1504

><td class="source"><br></td></tr
><tr
id=sl_svn79_1505

><td class="source">								<br></td></tr
><tr
id=sl_svn79_1506

><td class="source">								// get targets<br></td></tr
><tr
id=sl_svn79_1507

><td class="source"><br></td></tr
><tr
id=sl_svn79_1508

><td class="source">								MPoint targetPoint;<br></td></tr
><tr
id=sl_svn79_1509

><td class="source"><br></td></tr
><tr
id=sl_svn79_1510

><td class="source">								for (int u=0;u&lt;targetsPerU;u++)<br></td></tr
><tr
id=sl_svn79_1511

><td class="source">									for (int v=0;v&lt;targetsPerU;v++)<br></td></tr
><tr
id=sl_svn79_1512

><td class="source">									{<br></td></tr
><tr
id=sl_svn79_1513

><td class="source">										meshFn.getPointAtParam( uCoef*(u+1),vCoef*(v+1),targetPoint);<br></td></tr
><tr
id=sl_svn79_1514

><td class="source">										target.append(MVector(targetPoint));<br></td></tr
><tr
id=sl_svn79_1515

><td class="source">									}<br></td></tr
><tr
id=sl_svn79_1516

><td class="source"><br></td></tr
><tr
id=sl_svn79_1517

><td class="source">								int unTarget = targetsPerU*targetsPerV-targetsPerMesh[i];<br></td></tr
><tr
id=sl_svn79_1518

><td class="source"><br></td></tr
><tr
id=sl_svn79_1519

><td class="source">								// remove unneccesary targets<br></td></tr
><tr
id=sl_svn79_1520

><td class="source"><br></td></tr
><tr
id=sl_svn79_1521

><td class="source">								for (int k=0; k&lt; unTarget; k++)<br></td></tr
><tr
id=sl_svn79_1522

><td class="source">									target.remove(target.length()-1);<br></td></tr
><tr
id=sl_svn79_1523

><td class="source">							}<br></td></tr
><tr
id=sl_svn79_1524

><td class="source"><br></td></tr
><tr
id=sl_svn79_1525

><td class="source">							inputMeshAD.next();<br></td></tr
><tr
id=sl_svn79_1526

><td class="source">						}<br></td></tr
><tr
id=sl_svn79_1527

><td class="source">					}*/<br></td></tr
><tr
id=sl_svn79_1528

><td class="source">					break;<br></td></tr
><tr
id=sl_svn79_1529

><td class="source"><br></td></tr
><tr
id=sl_svn79_1530

><td class="source">					case ST_KNOTS:<br></td></tr
><tr
id=sl_svn79_1531

><td class="source">					{<br></td></tr
><tr
id=sl_svn79_1532

><td class="source">						int meshPointSize;<br></td></tr
><tr
id=sl_svn79_1533

><td class="source">						<br></td></tr
><tr
id=sl_svn79_1534

><td class="source">						for (int j=0; j&lt;numMesh;j++)<br></td></tr
><tr
id=sl_svn79_1535

><td class="source">						{<br></td></tr
><tr
id=sl_svn79_1536

><td class="source">							elementHandle = inputMeshAD.inputValue(&amp;stat);<br></td></tr
><tr
id=sl_svn79_1537

><td class="source">							MObject mesh = elementHandle.asMeshTransformed();<br></td></tr
><tr
id=sl_svn79_1538

><td class="source">							MFnMesh meshFn( mesh, &amp;stat );<br></td></tr
><tr
id=sl_svn79_1539

><td class="source">							<br></td></tr
><tr
id=sl_svn79_1540

><td class="source">							MPointArray meshPoint;<br></td></tr
><tr
id=sl_svn79_1541

><td class="source">							meshFn.getPoints(meshPoint);<br></td></tr
><tr
id=sl_svn79_1542

><td class="source">							meshPointSize =meshPoint.length();<br></td></tr
><tr
id=sl_svn79_1543

><td class="source"><br></td></tr
><tr
id=sl_svn79_1544

><td class="source">							for (int e=0; e&lt;meshPointSize; e++)<br></td></tr
><tr
id=sl_svn79_1545

><td class="source">								target.append(MVector(meshPoint[e]));<br></td></tr
><tr
id=sl_svn79_1546

><td class="source">							<br></td></tr
><tr
id=sl_svn79_1547

><td class="source">							inputMeshAD.next();<br></td></tr
><tr
id=sl_svn79_1548

><td class="source">						}<br></td></tr
><tr
id=sl_svn79_1549

><td class="source">						<br></td></tr
><tr
id=sl_svn79_1550

><td class="source">					}<br></td></tr
><tr
id=sl_svn79_1551

><td class="source">					break;<br></td></tr
><tr
id=sl_svn79_1552

><td class="source">				}<br></td></tr
><tr
id=sl_svn79_1553

><td class="source">			}<br></td></tr
><tr
id=sl_svn79_1554

><td class="source">			break;<br></td></tr
><tr
id=sl_svn79_1555

><td class="source"><br></td></tr
><tr
id=sl_svn79_1556

><td class="source">		case IS_INDEX:<br></td></tr
><tr
id=sl_svn79_1557

><td class="source">			{<br></td></tr
><tr
id=sl_svn79_1558

><td class="source">				stat = inputMeshAD.jumpToElement(inputIndexValue(block));<br></td></tr
><tr
id=sl_svn79_1559

><td class="source">				if (stat==MS::kSuccess)<br></td></tr
><tr
id=sl_svn79_1560

><td class="source">				{<br></td></tr
><tr
id=sl_svn79_1561

><td class="source">					elementHandle = inputMeshAD.inputValue(&amp;stat);<br></td></tr
><tr
id=sl_svn79_1562

><td class="source">					MObject mesh = elementHandle.asMeshTransformed();<br></td></tr
><tr
id=sl_svn79_1563

><td class="source">					MFnMesh meshFn( mesh, &amp;stat ); <br></td></tr
><tr
id=sl_svn79_1564

><td class="source"><br></td></tr
><tr
id=sl_svn79_1565

><td class="source">					if( !stat ) <br></td></tr
><tr
id=sl_svn79_1566

><td class="source">					{			<br></td></tr
><tr
id=sl_svn79_1567

><td class="source">						stat.perror(&quot;ERROR creating mesh function set&quot;);<br></td></tr
><tr
id=sl_svn79_1568

><td class="source">						return;<br></td></tr
><tr
id=sl_svn79_1569

><td class="source">					}<br></td></tr
><tr
id=sl_svn79_1570

><td class="source">					<br></td></tr
><tr
id=sl_svn79_1571

><td class="source">					switch(subTargetsV)<br></td></tr
><tr
id=sl_svn79_1572

><td class="source">					{<br></td></tr
><tr
id=sl_svn79_1573

><td class="source">						case ST_UNIFORM:<br></td></tr
><tr
id=sl_svn79_1574

><td class="source">						{<br></td></tr
><tr
id=sl_svn79_1575

><td class="source">						/*	if (posSize &gt; 0) <br></td></tr
><tr
id=sl_svn79_1576

><td class="source">							{<br></td></tr
><tr
id=sl_svn79_1577

><td class="source">								double startU; double endU;<br></td></tr
><tr
id=sl_svn79_1578

><td class="source">								double startV; double endV;<br></td></tr
><tr
id=sl_svn79_1579

><td class="source"><br></td></tr
><tr
id=sl_svn79_1580

><td class="source">								meshFn.getKnotDomain(startU,endU,startV,endV);<br></td></tr
><tr
id=sl_svn79_1581

><td class="source"><br></td></tr
><tr
id=sl_svn79_1582

><td class="source">								double paramU = (endU-startU);<br></td></tr
><tr
id=sl_svn79_1583

><td class="source">								double paramV = (endV-startV);<br></td></tr
><tr
id=sl_svn79_1584

><td class="source">								double paramUV = paramU / paramV;<br></td></tr
><tr
id=sl_svn79_1585

><td class="source"><br></td></tr
><tr
id=sl_svn79_1586

><td class="source">								int targetsPerU = ceil(sqrt(posSize*paramUV));<br></td></tr
><tr
id=sl_svn79_1587

><td class="source">								int targetsPerV = ceil(sqrt(posSize/paramUV));<br></td></tr
><tr
id=sl_svn79_1588

><td class="source">						<br></td></tr
><tr
id=sl_svn79_1589

><td class="source">								double uCoef =0;<br></td></tr
><tr
id=sl_svn79_1590

><td class="source">								double vCoef =0;<br></td></tr
><tr
id=sl_svn79_1591

><td class="source"><br></td></tr
><tr
id=sl_svn79_1592

><td class="source">								if (targetsPerU != 0) uCoef = paramU/targetsPerU;<br></td></tr
><tr
id=sl_svn79_1593

><td class="source">								if (targetsPerV != 0) vCoef = paramV/targetsPerV;<br></td></tr
><tr
id=sl_svn79_1594

><td class="source"><br></td></tr
><tr
id=sl_svn79_1595

><td class="source">								<br></td></tr
><tr
id=sl_svn79_1596

><td class="source">								// get targets<br></td></tr
><tr
id=sl_svn79_1597

><td class="source"><br></td></tr
><tr
id=sl_svn79_1598

><td class="source">								MPoint targetPoint;<br></td></tr
><tr
id=sl_svn79_1599

><td class="source"><br></td></tr
><tr
id=sl_svn79_1600

><td class="source">								for (int u=0;u&lt;targetsPerU;u++)<br></td></tr
><tr
id=sl_svn79_1601

><td class="source">									for (int v=0;v&lt;targetsPerU;v++)<br></td></tr
><tr
id=sl_svn79_1602

><td class="source">									{<br></td></tr
><tr
id=sl_svn79_1603

><td class="source">										meshFn.getPointAtParam( uCoef*(u+1)+startU,vCoef*(v+1)+startV,targetPoint);<br></td></tr
><tr
id=sl_svn79_1604

><td class="source">										target.append(MVector(targetPoint));<br></td></tr
><tr
id=sl_svn79_1605

><td class="source">									}<br></td></tr
><tr
id=sl_svn79_1606

><td class="source"><br></td></tr
><tr
id=sl_svn79_1607

><td class="source">								int unTarget = targetsPerU*targetsPerV-posSize;<br></td></tr
><tr
id=sl_svn79_1608

><td class="source"><br></td></tr
><tr
id=sl_svn79_1609

><td class="source">								// remove unneccesary targets<br></td></tr
><tr
id=sl_svn79_1610

><td class="source"><br></td></tr
><tr
id=sl_svn79_1611

><td class="source">								for (int k=0; k&lt; unTarget; k++)<br></td></tr
><tr
id=sl_svn79_1612

><td class="source">									target.remove(target.length()-1);	<br></td></tr
><tr
id=sl_svn79_1613

><td class="source">						}	*/<br></td></tr
><tr
id=sl_svn79_1614

><td class="source">						}<br></td></tr
><tr
id=sl_svn79_1615

><td class="source">						break;<br></td></tr
><tr
id=sl_svn79_1616

><td class="source"><br></td></tr
><tr
id=sl_svn79_1617

><td class="source">						case ST_KNOTS:<br></td></tr
><tr
id=sl_svn79_1618

><td class="source">						{<br></td></tr
><tr
id=sl_svn79_1619

><td class="source">							MPointArray meshPoint;<br></td></tr
><tr
id=sl_svn79_1620

><td class="source">							meshFn.getPoints(meshPoint);<br></td></tr
><tr
id=sl_svn79_1621

><td class="source">							int meshPointSize =meshPoint.length();<br></td></tr
><tr
id=sl_svn79_1622

><td class="source"><br></td></tr
><tr
id=sl_svn79_1623

><td class="source">							for (int e=0; e&lt;meshPointSize; e++)<br></td></tr
><tr
id=sl_svn79_1624

><td class="source">								target.append(MVector(meshPoint[e]));<br></td></tr
><tr
id=sl_svn79_1625

><td class="source">						}<br></td></tr
><tr
id=sl_svn79_1626

><td class="source">						break;<br></td></tr
><tr
id=sl_svn79_1627

><td class="source">					}<br></td></tr
><tr
id=sl_svn79_1628

><td class="source">				}<br></td></tr
><tr
id=sl_svn79_1629

><td class="source">			}<br></td></tr
><tr
id=sl_svn79_1630

><td class="source"><br></td></tr
><tr
id=sl_svn79_1631

><td class="source">			break;<br></td></tr
><tr
id=sl_svn79_1632

><td class="source">	}<br></td></tr
><tr
id=sl_svn79_1633

><td class="source">}<br></td></tr
><tr
id=sl_svn79_1634

><td class="source">/**************************************************************************************/<br></td></tr
><tr
id=sl_svn79_1635

><td class="source">void bbSteeringDesire::sdSeekTargets( MDataBlock&amp; block,<br></td></tr
><tr
id=sl_svn79_1636

><td class="source">								 	  const MVectorArray &amp;positions,<br></td></tr
><tr
id=sl_svn79_1637

><td class="source">									  const MVectorArray &amp;velocities,<br></td></tr
><tr
id=sl_svn79_1638

><td class="source">									  const MVectorArray &amp;target,<br></td></tr
><tr
id=sl_svn79_1639

><td class="source">									  MVectorArray &amp;outputForce)<br></td></tr
><tr
id=sl_svn79_1640

><td class="source">{<br></td></tr
><tr
id=sl_svn79_1641

><td class="source">	MStatus stat;<br></td></tr
><tr
id=sl_svn79_1642

><td class="source"><br></td></tr
><tr
id=sl_svn79_1643

><td class="source">	// points and velocities should have the same length. If not return.<br></td></tr
><tr
id=sl_svn79_1644

><td class="source">	if( positions.length() != velocities.length() )	return;<br></td></tr
><tr
id=sl_svn79_1645

><td class="source"><br></td></tr
><tr
id=sl_svn79_1646

><td class="source">	outputForce.clear();<br></td></tr
><tr
id=sl_svn79_1647

><td class="source"><br></td></tr
><tr
id=sl_svn79_1648

><td class="source">	// get field of view parameter<br></td></tr
><tr
id=sl_svn79_1649

><td class="source">	bool useSensorRangeV = useSensorRangeValue(block);<br></td></tr
><tr
id=sl_svn79_1650

><td class="source">	double sensorRangeV = sensorRangeValue(block);<br></td></tr
><tr
id=sl_svn79_1651

><td class="source">	bool useSensorAngleV = useSensorAngleValue(block);<br></td></tr
><tr
id=sl_svn79_1652

><td class="source">	double sensorAngle = sensorAngleValue(block);<br></td></tr
><tr
id=sl_svn79_1653

><td class="source">	<br></td></tr
><tr
id=sl_svn79_1654

><td class="source">	// get inverse faktor<br></td></tr
><tr
id=sl_svn79_1655

><td class="source">	double scaleDesiredForceV = 1.0;<br></td></tr
><tr
id=sl_svn79_1656

><td class="source">	if (inverseDesiredSteeringForceValue(block))<br></td></tr
><tr
id=sl_svn79_1657

><td class="source">		scaleDesiredForceV = -1.0;<br></td></tr
><tr
id=sl_svn79_1658

><td class="source"><br></td></tr
><tr
id=sl_svn79_1659

><td class="source">	//<br></td></tr
><tr
id=sl_svn79_1660

><td class="source">	double desiredSpeedV = desiredSpeedValue(block);<br></td></tr
><tr
id=sl_svn79_1661

><td class="source">	double maximumForceV = maximumForceValue(block);<br></td></tr
><tr
id=sl_svn79_1662

><td class="source"><br></td></tr
><tr
id=sl_svn79_1663

><td class="source">	int targetSize = target.length();<br></td></tr
><tr
id=sl_svn79_1664

><td class="source">	int posSize = positions.length();<br></td></tr
><tr
id=sl_svn79_1665

><td class="source">	<br></td></tr
><tr
id=sl_svn79_1666

><td class="source">	int i =0;<br></td></tr
><tr
id=sl_svn79_1667

><td class="source">	int j =0;<br></td></tr
><tr
id=sl_svn79_1668

><td class="source"><br></td></tr
><tr
id=sl_svn79_1669

><td class="source">	<br></td></tr
><tr
id=sl_svn79_1670

><td class="source">	MVector desiredVelocityV(0.0,0.0,0.0);<br></td></tr
><tr
id=sl_svn79_1671

><td class="source"><br></td></tr
><tr
id=sl_svn79_1672

><td class="source">	if (targetSize != 0)<br></td></tr
><tr
id=sl_svn79_1673

><td class="source">	{<br></td></tr
><tr
id=sl_svn79_1674

><td class="source">		for (i; i &lt; posSize; i ++ )<br></td></tr
><tr
id=sl_svn79_1675

><td class="source">		{<br></td></tr
><tr
id=sl_svn79_1676

><td class="source">			desiredVelocityV = target[j] - positions[i];<br></td></tr
><tr
id=sl_svn79_1677

><td class="source">					<br></td></tr
><tr
id=sl_svn79_1678

><td class="source">			if (inFieldOfView(desiredVelocityV, velocities[i], useSensorRangeV,useSensorAngleV,sensorRangeV,sensorAngle))<br></td></tr
><tr
id=sl_svn79_1679

><td class="source">			{<br></td></tr
><tr
id=sl_svn79_1680

><td class="source">				seekSteering(desiredVelocityV,velocities[i],desiredSpeedV,scaleDesiredForceV,maximumForceV);<br></td></tr
><tr
id=sl_svn79_1681

><td class="source">				outputForce.append( desiredVelocityV );<br></td></tr
><tr
id=sl_svn79_1682

><td class="source">			}<br></td></tr
><tr
id=sl_svn79_1683

><td class="source">			else <br></td></tr
><tr
id=sl_svn79_1684

><td class="source">			{	outputForce.append(MVector::zero);	}<br></td></tr
><tr
id=sl_svn79_1685

><td class="source"><br></td></tr
><tr
id=sl_svn79_1686

><td class="source">			j++; if (j == targetSize) j=0;<br></td></tr
><tr
id=sl_svn79_1687

><td class="source">		}<br></td></tr
><tr
id=sl_svn79_1688

><td class="source">	}<br></td></tr
><tr
id=sl_svn79_1689

><td class="source"><br></td></tr
><tr
id=sl_svn79_1690

><td class="source">}<br></td></tr
><tr
id=sl_svn79_1691

><td class="source">/**************************************************************************************/<br></td></tr
><tr
id=sl_svn79_1692

><td class="source">void bbSteeringDesire::sdMothSeekTargets( MDataBlock&amp; block,<br></td></tr
><tr
id=sl_svn79_1693

><td class="source">								 	  const MVectorArray &amp;positions,<br></td></tr
><tr
id=sl_svn79_1694

><td class="source">									  const MVectorArray &amp;velocities,<br></td></tr
><tr
id=sl_svn79_1695

><td class="source">									  const MVectorArray &amp;target,<br></td></tr
><tr
id=sl_svn79_1696

><td class="source">									  MVectorArray &amp;outputForce)<br></td></tr
><tr
id=sl_svn79_1697

><td class="source">{<br></td></tr
><tr
id=sl_svn79_1698

><td class="source">	MStatus stat;<br></td></tr
><tr
id=sl_svn79_1699

><td class="source"><br></td></tr
><tr
id=sl_svn79_1700

><td class="source">	// points and velocities should have the same length. If not return.<br></td></tr
><tr
id=sl_svn79_1701

><td class="source">	if( positions.length() != velocities.length() )	return;<br></td></tr
><tr
id=sl_svn79_1702

><td class="source"><br></td></tr
><tr
id=sl_svn79_1703

><td class="source">	outputForce.clear();<br></td></tr
><tr
id=sl_svn79_1704

><td class="source"><br></td></tr
><tr
id=sl_svn79_1705

><td class="source">	// get field of view parameter<br></td></tr
><tr
id=sl_svn79_1706

><td class="source">	bool useSensorRangeV = useSensorRangeValue(block);<br></td></tr
><tr
id=sl_svn79_1707

><td class="source">	double sensorRangeV = sensorRangeValue(block);<br></td></tr
><tr
id=sl_svn79_1708

><td class="source">	bool useSensorAngleV = useSensorAngleValue(block);<br></td></tr
><tr
id=sl_svn79_1709

><td class="source">	double sensorAngle = sensorAngleValue(block);<br></td></tr
><tr
id=sl_svn79_1710

><td class="source">	<br></td></tr
><tr
id=sl_svn79_1711

><td class="source">	// get inverse faktor<br></td></tr
><tr
id=sl_svn79_1712

><td class="source">	double scaleDesiredForceV = 1.0;<br></td></tr
><tr
id=sl_svn79_1713

><td class="source">	if (inverseDesiredSteeringForceValue(block))<br></td></tr
><tr
id=sl_svn79_1714

><td class="source">		scaleDesiredForceV = -1.0;<br></td></tr
><tr
id=sl_svn79_1715

><td class="source"><br></td></tr
><tr
id=sl_svn79_1716

><td class="source">	//<br></td></tr
><tr
id=sl_svn79_1717

><td class="source">	double desiredSpeedV = desiredSpeedValue(block);<br></td></tr
><tr
id=sl_svn79_1718

><td class="source">	double maximumForceV = maximumForceValue(block);<br></td></tr
><tr
id=sl_svn79_1719

><td class="source"><br></td></tr
><tr
id=sl_svn79_1720

><td class="source">	int targetSize = target.length();<br></td></tr
><tr
id=sl_svn79_1721

><td class="source">	int posSize = positions.length();<br></td></tr
><tr
id=sl_svn79_1722

><td class="source">	<br></td></tr
><tr
id=sl_svn79_1723

><td class="source">	int i =0;<br></td></tr
><tr
id=sl_svn79_1724

><td class="source">	int j =0;<br></td></tr
><tr
id=sl_svn79_1725

><td class="source"><br></td></tr
><tr
id=sl_svn79_1726

><td class="source">	<br></td></tr
><tr
id=sl_svn79_1727

><td class="source">	MVector desiredVelocityV(0.0,0.0,0.0);<br></td></tr
><tr
id=sl_svn79_1728

><td class="source"><br></td></tr
><tr
id=sl_svn79_1729

><td class="source">	if (targetSize != 0)<br></td></tr
><tr
id=sl_svn79_1730

><td class="source">	{<br></td></tr
><tr
id=sl_svn79_1731

><td class="source">		for (i; i &lt; posSize; i ++ )<br></td></tr
><tr
id=sl_svn79_1732

><td class="source">		{<br></td></tr
><tr
id=sl_svn79_1733

><td class="source">			desiredVelocityV = target[j] - positions[i];<br></td></tr
><tr
id=sl_svn79_1734

><td class="source">					<br></td></tr
><tr
id=sl_svn79_1735

><td class="source">			if (inFieldOfView(desiredVelocityV, velocities[i], useSensorRangeV,useSensorAngleV,sensorRangeV,sensorAngle))<br></td></tr
><tr
id=sl_svn79_1736

><td class="source">			{<br></td></tr
><tr
id=sl_svn79_1737

><td class="source">				mothSeekSteering(desiredVelocityV,desiredSpeedV,scaleDesiredForceV,maximumForceV);<br></td></tr
><tr
id=sl_svn79_1738

><td class="source">				outputForce.append( desiredVelocityV );<br></td></tr
><tr
id=sl_svn79_1739

><td class="source">			}<br></td></tr
><tr
id=sl_svn79_1740

><td class="source">			else <br></td></tr
><tr
id=sl_svn79_1741

><td class="source">			{	outputForce.append(MVector::zero);	}<br></td></tr
><tr
id=sl_svn79_1742

><td class="source"><br></td></tr
><tr
id=sl_svn79_1743

><td class="source">			j++; if (j == targetSize) j=0;<br></td></tr
><tr
id=sl_svn79_1744

><td class="source">		}<br></td></tr
><tr
id=sl_svn79_1745

><td class="source">	}<br></td></tr
><tr
id=sl_svn79_1746

><td class="source"><br></td></tr
><tr
id=sl_svn79_1747

><td class="source">}<br></td></tr
><tr
id=sl_svn79_1748

><td class="source">/**************************************************************************************/<br></td></tr
><tr
id=sl_svn79_1749

><td class="source">void bbSteeringDesire::sdArrivalTargets( MDataBlock&amp; block,<br></td></tr
><tr
id=sl_svn79_1750

><td class="source">								 	  const MVectorArray &amp;positions,<br></td></tr
><tr
id=sl_svn79_1751

><td class="source">									  const MVectorArray &amp;velocities,<br></td></tr
><tr
id=sl_svn79_1752

><td class="source">									  const MVectorArray &amp;target,<br></td></tr
><tr
id=sl_svn79_1753

><td class="source">									  MVectorArray &amp;outputForce)<br></td></tr
><tr
id=sl_svn79_1754

><td class="source">{<br></td></tr
><tr
id=sl_svn79_1755

><td class="source">	MStatus stat;<br></td></tr
><tr
id=sl_svn79_1756

><td class="source"><br></td></tr
><tr
id=sl_svn79_1757

><td class="source">	// points and velocities should have the same length. If not return.<br></td></tr
><tr
id=sl_svn79_1758

><td class="source">	if( positions.length() != velocities.length() )	return;<br></td></tr
><tr
id=sl_svn79_1759

><td class="source"><br></td></tr
><tr
id=sl_svn79_1760

><td class="source">	outputForce.clear();<br></td></tr
><tr
id=sl_svn79_1761

><td class="source"><br></td></tr
><tr
id=sl_svn79_1762

><td class="source">	// get field of view parameter<br></td></tr
><tr
id=sl_svn79_1763

><td class="source">	bool useSensorRangeV = useSensorRangeValue(block);<br></td></tr
><tr
id=sl_svn79_1764

><td class="source">	double sensorRangeV = sensorRangeValue(block);<br></td></tr
><tr
id=sl_svn79_1765

><td class="source">	bool useSensorAngleV = useSensorAngleValue(block);<br></td></tr
><tr
id=sl_svn79_1766

><td class="source">	double sensorAngle = sensorAngleValue(block);<br></td></tr
><tr
id=sl_svn79_1767

><td class="source">	<br></td></tr
><tr
id=sl_svn79_1768

><td class="source">	// get inverse faktor<br></td></tr
><tr
id=sl_svn79_1769

><td class="source">	double scaleDesiredForceV = 1.0;<br></td></tr
><tr
id=sl_svn79_1770

><td class="source">	if (inverseDesiredSteeringForceValue(block))<br></td></tr
><tr
id=sl_svn79_1771

><td class="source">		scaleDesiredForceV = -1.0;<br></td></tr
><tr
id=sl_svn79_1772

><td class="source"><br></td></tr
><tr
id=sl_svn79_1773

><td class="source">	//<br></td></tr
><tr
id=sl_svn79_1774

><td class="source">	double desiredSpeedV = desiredSpeedValue(block);<br></td></tr
><tr
id=sl_svn79_1775

><td class="source">	double maximumForceV = maximumForceValue(block);<br></td></tr
><tr
id=sl_svn79_1776

><td class="source">	double stoppingRangeV = stoppingRangeValue(block);<br></td></tr
><tr
id=sl_svn79_1777

><td class="source"><br></td></tr
><tr
id=sl_svn79_1778

><td class="source">	int targetSize = target.length();<br></td></tr
><tr
id=sl_svn79_1779

><td class="source">	int posSize = positions.length();<br></td></tr
><tr
id=sl_svn79_1780

><td class="source">	<br></td></tr
><tr
id=sl_svn79_1781

><td class="source">	int i =0;<br></td></tr
><tr
id=sl_svn79_1782

><td class="source">	int j =0;<br></td></tr
><tr
id=sl_svn79_1783

><td class="source"><br></td></tr
><tr
id=sl_svn79_1784

><td class="source">	<br></td></tr
><tr
id=sl_svn79_1785

><td class="source">	MVector desiredVelocityV(0.0,0.0,0.0);<br></td></tr
><tr
id=sl_svn79_1786

><td class="source"><br></td></tr
><tr
id=sl_svn79_1787

><td class="source">	if (targetSize != 0)<br></td></tr
><tr
id=sl_svn79_1788

><td class="source">	{<br></td></tr
><tr
id=sl_svn79_1789

><td class="source">		for (i; i &lt; posSize; i ++ )<br></td></tr
><tr
id=sl_svn79_1790

><td class="source">		{<br></td></tr
><tr
id=sl_svn79_1791

><td class="source">			desiredVelocityV = target[j] - positions[i];<br></td></tr
><tr
id=sl_svn79_1792

><td class="source">					<br></td></tr
><tr
id=sl_svn79_1793

><td class="source">			if (inFieldOfView(desiredVelocityV, velocities[i], useSensorRangeV,useSensorAngleV,sensorRangeV,sensorAngle))<br></td></tr
><tr
id=sl_svn79_1794

><td class="source">			{<br></td></tr
><tr
id=sl_svn79_1795

><td class="source">				arrivalSteering(desiredVelocityV,velocities[i],desiredSpeedV,scaleDesiredForceV,maximumForceV,stoppingRangeV);<br></td></tr
><tr
id=sl_svn79_1796

><td class="source">				outputForce.append( desiredVelocityV );<br></td></tr
><tr
id=sl_svn79_1797

><td class="source">			}<br></td></tr
><tr
id=sl_svn79_1798

><td class="source">			else <br></td></tr
><tr
id=sl_svn79_1799

><td class="source">			{	outputForce.append(MVector::zero);	}<br></td></tr
><tr
id=sl_svn79_1800

><td class="source"><br></td></tr
><tr
id=sl_svn79_1801

><td class="source">			j++; if (j == targetSize) j=0;<br></td></tr
><tr
id=sl_svn79_1802

><td class="source">		}<br></td></tr
><tr
id=sl_svn79_1803

><td class="source">	}<br></td></tr
><tr
id=sl_svn79_1804

><td class="source"><br></td></tr
><tr
id=sl_svn79_1805

><td class="source">}<br></td></tr
><tr
id=sl_svn79_1806

><td class="source"><br></td></tr
><tr
id=sl_svn79_1807

><td class="source">/**************************************************************************************/<br></td></tr
><tr
id=sl_svn79_1808

><td class="source">void	bbSteeringDesire::sdPursuitTargets(  MDataBlock&amp; block, <br></td></tr
><tr
id=sl_svn79_1809

><td class="source">										   const MVectorArray &amp;positions, <br></td></tr
><tr
id=sl_svn79_1810

><td class="source">										   const MVectorArray &amp;velocities, <br></td></tr
><tr
id=sl_svn79_1811

><td class="source">										   const MVectorArray &amp;target, <br></td></tr
><tr
id=sl_svn79_1812

><td class="source">										   MVectorArray &amp;outputForce)<br></td></tr
><tr
id=sl_svn79_1813

><td class="source">{<br></td></tr
><tr
id=sl_svn79_1814

><td class="source">		MStatus stat;<br></td></tr
><tr
id=sl_svn79_1815

><td class="source"><br></td></tr
><tr
id=sl_svn79_1816

><td class="source">	// points and velocities should have the same length. If not return.<br></td></tr
><tr
id=sl_svn79_1817

><td class="source">	if( positions.length() != velocities.length() )	return;<br></td></tr
><tr
id=sl_svn79_1818

><td class="source"><br></td></tr
><tr
id=sl_svn79_1819

><td class="source">	outputForce.clear();<br></td></tr
><tr
id=sl_svn79_1820

><td class="source"><br></td></tr
><tr
id=sl_svn79_1821

><td class="source">	// get field of view parameter<br></td></tr
><tr
id=sl_svn79_1822

><td class="source">	bool useSensorRangeV = useSensorRangeValue(block);<br></td></tr
><tr
id=sl_svn79_1823

><td class="source">	double sensorRangeV = sensorRangeValue(block);<br></td></tr
><tr
id=sl_svn79_1824

><td class="source">	bool useSensorAngleV = useSensorAngleValue(block);<br></td></tr
><tr
id=sl_svn79_1825

><td class="source">	double sensorAngle = sensorAngleValue(block);<br></td></tr
><tr
id=sl_svn79_1826

><td class="source">	<br></td></tr
><tr
id=sl_svn79_1827

><td class="source">	// get inverse faktor<br></td></tr
><tr
id=sl_svn79_1828

><td class="source">	double scaleDesiredForceV = 1.0;<br></td></tr
><tr
id=sl_svn79_1829

><td class="source">	if (inverseDesiredSteeringForceValue(block))<br></td></tr
><tr
id=sl_svn79_1830

><td class="source">		scaleDesiredForceV = -1.0;<br></td></tr
><tr
id=sl_svn79_1831

><td class="source"><br></td></tr
><tr
id=sl_svn79_1832

><td class="source">	//<br></td></tr
><tr
id=sl_svn79_1833

><td class="source">	double desiredSpeedV = desiredSpeedValue(block);<br></td></tr
><tr
id=sl_svn79_1834

><td class="source">	double maximumForceV = maximumForceValue(block);<br></td></tr
><tr
id=sl_svn79_1835

><td class="source">	double stoppingRangeV = stoppingRangeValue(block);<br></td></tr
><tr
id=sl_svn79_1836

><td class="source"><br></td></tr
><tr
id=sl_svn79_1837

><td class="source">	int targetSize = target.length();<br></td></tr
><tr
id=sl_svn79_1838

><td class="source">	int posSize = positions.length();<br></td></tr
><tr
id=sl_svn79_1839

><td class="source">	<br></td></tr
><tr
id=sl_svn79_1840

><td class="source">	int i =0;<br></td></tr
><tr
id=sl_svn79_1841

><td class="source">	int j =0;<br></td></tr
><tr
id=sl_svn79_1842

><td class="source"><br></td></tr
><tr
id=sl_svn79_1843

><td class="source"><br></td></tr
><tr
id=sl_svn79_1844

><td class="source">	// get last offset values<br></td></tr
><tr
id=sl_svn79_1845

><td class="source">	MVectorArray lastTargetPos;<br></td></tr
><tr
id=sl_svn79_1846

><td class="source">	<br></td></tr
><tr
id=sl_svn79_1847

><td class="source">	MDataHandle hLastVectorV = block.inputValue(lastVector, &amp;stat);<br></td></tr
><tr
id=sl_svn79_1848

><td class="source">	MObject dLastVectorV = hLastVectorV.data();<br></td></tr
><tr
id=sl_svn79_1849

><td class="source">	lastTargetPos = MFnVectorArrayData(dLastVectorV).array(&amp;stat);<br></td></tr
><tr
id=sl_svn79_1850

><td class="source">	<br></td></tr
><tr
id=sl_svn79_1851

><td class="source">	int lastTargetPosSize = lastTargetPos.length();<br></td></tr
><tr
id=sl_svn79_1852

><td class="source"><br></td></tr
><tr
id=sl_svn79_1853

><td class="source">	// if necessary update last target size<br></td></tr
><tr
id=sl_svn79_1854

><td class="source"><br></td></tr
><tr
id=sl_svn79_1855

><td class="source">	if (lastTargetPosSize != targetSize)<br></td></tr
><tr
id=sl_svn79_1856

><td class="source">	{<br></td></tr
><tr
id=sl_svn79_1857

><td class="source">		if (lastTargetPosSize &lt; targetSize)<br></td></tr
><tr
id=sl_svn79_1858

><td class="source">		{<br></td></tr
><tr
id=sl_svn79_1859

><td class="source">			for (int e=lastTargetPosSize-1; e&lt;targetSize; e++)<br></td></tr
><tr
id=sl_svn79_1860

><td class="source">				lastTargetPos.append(MVector::zero);	<br></td></tr
><tr
id=sl_svn79_1861

><td class="source">		}<br></td></tr
><tr
id=sl_svn79_1862

><td class="source">		else<br></td></tr
><tr
id=sl_svn79_1863

><td class="source">		{<br></td></tr
><tr
id=sl_svn79_1864

><td class="source">			do<br></td></tr
><tr
id=sl_svn79_1865

><td class="source">			{<br></td></tr
><tr
id=sl_svn79_1866

><td class="source">				lastTargetPos.remove(lastTargetPosSize-1);<br></td></tr
><tr
id=sl_svn79_1867

><td class="source">				lastTargetPosSize = lastTargetPos.length();<br></td></tr
><tr
id=sl_svn79_1868

><td class="source">			}<br></td></tr
><tr
id=sl_svn79_1869

><td class="source">			while (lastTargetPos.length() &gt; targetSize);<br></td></tr
><tr
id=sl_svn79_1870

><td class="source">		}<br></td></tr
><tr
id=sl_svn79_1871

><td class="source">	}<br></td></tr
><tr
id=sl_svn79_1872

><td class="source">	// calculate target velocities<br></td></tr
><tr
id=sl_svn79_1873

><td class="source"><br></td></tr
><tr
id=sl_svn79_1874

><td class="source">	MVectorArray targetVel(targetSize,MVector::zero);<br></td></tr
><tr
id=sl_svn79_1875

><td class="source"><br></td></tr
><tr
id=sl_svn79_1876

><td class="source">	for (int e=0; e&lt;targetSize; e++)<br></td></tr
><tr
id=sl_svn79_1877

><td class="source">	{<br></td></tr
><tr
id=sl_svn79_1878

><td class="source">		// target Velocity<br></td></tr
><tr
id=sl_svn79_1879

><td class="source">		targetVel[e] = target[e] - lastTargetPos[e];<br></td></tr
><tr
id=sl_svn79_1880

><td class="source">		<br></td></tr
><tr
id=sl_svn79_1881

><td class="source">		// update last target value<br></td></tr
><tr
id=sl_svn79_1882

><td class="source">		lastTargetPos[e] = target[e];<br></td></tr
><tr
id=sl_svn79_1883

><td class="source">	}<br></td></tr
><tr
id=sl_svn79_1884

><td class="source">	//<br></td></tr
><tr
id=sl_svn79_1885

><td class="source"><br></td></tr
><tr
id=sl_svn79_1886

><td class="source">	MVector desiredVelocityV(0.0,0.0,0.0);<br></td></tr
><tr
id=sl_svn79_1887

><td class="source">	double predictionS;<br></td></tr
><tr
id=sl_svn79_1888

><td class="source"><br></td></tr
><tr
id=sl_svn79_1889

><td class="source">	if (targetSize != 0)<br></td></tr
><tr
id=sl_svn79_1890

><td class="source">	{<br></td></tr
><tr
id=sl_svn79_1891

><td class="source">		for (i; i &lt; posSize; i ++ )<br></td></tr
><tr
id=sl_svn79_1892

><td class="source">		{<br></td></tr
><tr
id=sl_svn79_1893

><td class="source">			desiredVelocityV = target[j] - positions[i];<br></td></tr
><tr
id=sl_svn79_1894

><td class="source">					<br></td></tr
><tr
id=sl_svn79_1895

><td class="source">			if (inFieldOfView(desiredVelocityV, velocities[i], useSensorRangeV,useSensorAngleV,sensorRangeV,sensorAngle))<br></td></tr
><tr
id=sl_svn79_1896

><td class="source">			{<br></td></tr
><tr
id=sl_svn79_1897

><td class="source">				predictionS = desiredVelocityV.length() * desiredSpeedV;<br></td></tr
><tr
id=sl_svn79_1898

><td class="source">				desiredVelocityV = target[j]+ targetVel[j]*predictionS - positions[i];<br></td></tr
><tr
id=sl_svn79_1899

><td class="source">				seekSteering(desiredVelocityV,velocities[i],desiredSpeedV,scaleDesiredForceV,maximumForceV);			<br></td></tr
><tr
id=sl_svn79_1900

><td class="source">				outputForce.append( desiredVelocityV );<br></td></tr
><tr
id=sl_svn79_1901

><td class="source">			}<br></td></tr
><tr
id=sl_svn79_1902

><td class="source">			else <br></td></tr
><tr
id=sl_svn79_1903

><td class="source">			{	outputForce.append(MVector::zero);	}<br></td></tr
><tr
id=sl_svn79_1904

><td class="source"><br></td></tr
><tr
id=sl_svn79_1905

><td class="source">			j++; if (j == targetSize) j=0;<br></td></tr
><tr
id=sl_svn79_1906

><td class="source">		}<br></td></tr
><tr
id=sl_svn79_1907

><td class="source">	}<br></td></tr
><tr
id=sl_svn79_1908

><td class="source"><br></td></tr
><tr
id=sl_svn79_1909

><td class="source"><br></td></tr
><tr
id=sl_svn79_1910

><td class="source">	// store last vector data<br></td></tr
><tr
id=sl_svn79_1911

><td class="source"><br></td></tr
><tr
id=sl_svn79_1912

><td class="source">	MDataHandle hOut = block.outputValue( lastVector, &amp;stat);<br></td></tr
><tr
id=sl_svn79_1913

><td class="source">	MFnVectorArrayData fnLastVectorV;<br></td></tr
><tr
id=sl_svn79_1914

><td class="source"><br></td></tr
><tr
id=sl_svn79_1915

><td class="source">	MObject dOutputLastVectorV = fnLastVectorV.create( lastTargetPos, &amp;stat );<br></td></tr
><tr
id=sl_svn79_1916

><td class="source"><br></td></tr
><tr
id=sl_svn79_1917

><td class="source">	// update data block with new output force data.<br></td></tr
><tr
id=sl_svn79_1918

><td class="source">	hOut.set( dOutputLastVectorV );<br></td></tr
><tr
id=sl_svn79_1919

><td class="source"><br></td></tr
><tr
id=sl_svn79_1920

><td class="source">}<br></td></tr
><tr
id=sl_svn79_1921

><td class="source"><br></td></tr
><tr
id=sl_svn79_1922

><td class="source">/**************************************************************************************/<br></td></tr
><tr
id=sl_svn79_1923

><td class="source">void	bbSteeringDesire::sdShadowTargets(  MDataBlock&amp; block, <br></td></tr
><tr
id=sl_svn79_1924

><td class="source">										  const MVectorArray &amp;positions, <br></td></tr
><tr
id=sl_svn79_1925

><td class="source">										  const MVectorArray &amp;velocities, <br></td></tr
><tr
id=sl_svn79_1926

><td class="source">										  const MVectorArray &amp;target, <br></td></tr
><tr
id=sl_svn79_1927

><td class="source">										  const MTime &amp;deltaTime,<br></td></tr
><tr
id=sl_svn79_1928

><td class="source">										  MVectorArray &amp;outputForce)<br></td></tr
><tr
id=sl_svn79_1929

><td class="source">{<br></td></tr
><tr
id=sl_svn79_1930

><td class="source">	MStatus stat;<br></td></tr
><tr
id=sl_svn79_1931

><td class="source"><br></td></tr
><tr
id=sl_svn79_1932

><td class="source">	// points and velocities should have the same length. If not return.<br></td></tr
><tr
id=sl_svn79_1933

><td class="source">	if( positions.length() != velocities.length() )	return;<br></td></tr
><tr
id=sl_svn79_1934

><td class="source"><br></td></tr
><tr
id=sl_svn79_1935

><td class="source">	outputForce.clear();<br></td></tr
><tr
id=sl_svn79_1936

><td class="source"><br></td></tr
><tr
id=sl_svn79_1937

><td class="source">	// get field of view parameter<br></td></tr
><tr
id=sl_svn79_1938

><td class="source">	bool useSensorRangeV = useSensorRangeValue(block);<br></td></tr
><tr
id=sl_svn79_1939

><td class="source">	double sensorRangeV = sensorRangeValue(block);<br></td></tr
><tr
id=sl_svn79_1940

><td class="source">	bool useSensorAngleV = useSensorAngleValue(block);<br></td></tr
><tr
id=sl_svn79_1941

><td class="source">	double sensorAngle = sensorAngleValue(block);<br></td></tr
><tr
id=sl_svn79_1942

><td class="source">	<br></td></tr
><tr
id=sl_svn79_1943

><td class="source">	// get inverse faktor<br></td></tr
><tr
id=sl_svn79_1944

><td class="source">	double scaleDesiredForceV = 1.0;<br></td></tr
><tr
id=sl_svn79_1945

><td class="source">	if (inverseDesiredSteeringForceValue(block))<br></td></tr
><tr
id=sl_svn79_1946

><td class="source">		scaleDesiredForceV = -1.0;<br></td></tr
><tr
id=sl_svn79_1947

><td class="source"><br></td></tr
><tr
id=sl_svn79_1948

><td class="source">	//<br></td></tr
><tr
id=sl_svn79_1949

><td class="source">	double desiredSpeedV = desiredSpeedValue(block);<br></td></tr
><tr
id=sl_svn79_1950

><td class="source">	double maximumForceV = maximumForceValue(block);<br></td></tr
><tr
id=sl_svn79_1951

><td class="source">	double shadowRangeV = shadowRangeValue(block);<br></td></tr
><tr
id=sl_svn79_1952

><td class="source"><br></td></tr
><tr
id=sl_svn79_1953

><td class="source">	int targetSize = target.length();<br></td></tr
><tr
id=sl_svn79_1954

><td class="source">	int posSize = positions.length();<br></td></tr
><tr
id=sl_svn79_1955

><td class="source">	<br></td></tr
><tr
id=sl_svn79_1956

><td class="source">	int i =0;<br></td></tr
><tr
id=sl_svn79_1957

><td class="source">	int j =0;<br></td></tr
><tr
id=sl_svn79_1958

><td class="source"><br></td></tr
><tr
id=sl_svn79_1959

><td class="source">	// get last offset values<br></td></tr
><tr
id=sl_svn79_1960

><td class="source">	MVectorArray lastTargetPos;<br></td></tr
><tr
id=sl_svn79_1961

><td class="source">	<br></td></tr
><tr
id=sl_svn79_1962

><td class="source">	MDataHandle hLastVectorV = block.inputValue(lastVector, &amp;stat);<br></td></tr
><tr
id=sl_svn79_1963

><td class="source">	MObject dLastVectorV = hLastVectorV.data();<br></td></tr
><tr
id=sl_svn79_1964

><td class="source">	lastTargetPos = MFnVectorArrayData(dLastVectorV).array(&amp;stat);<br></td></tr
><tr
id=sl_svn79_1965

><td class="source">	<br></td></tr
><tr
id=sl_svn79_1966

><td class="source">	int lastTargetPosSize = lastTargetPos.length();<br></td></tr
><tr
id=sl_svn79_1967

><td class="source"><br></td></tr
><tr
id=sl_svn79_1968

><td class="source">	// if necessary update last target size<br></td></tr
><tr
id=sl_svn79_1969

><td class="source"><br></td></tr
><tr
id=sl_svn79_1970

><td class="source">	if (lastTargetPosSize != targetSize)<br></td></tr
><tr
id=sl_svn79_1971

><td class="source">	{<br></td></tr
><tr
id=sl_svn79_1972

><td class="source">		if (lastTargetPosSize &lt; targetSize)<br></td></tr
><tr
id=sl_svn79_1973

><td class="source">		{<br></td></tr
><tr
id=sl_svn79_1974

><td class="source">			for (int e=lastTargetPosSize-1; e&lt;targetSize; e++)<br></td></tr
><tr
id=sl_svn79_1975

><td class="source">				lastTargetPos.append(MVector::zero);	<br></td></tr
><tr
id=sl_svn79_1976

><td class="source">		}<br></td></tr
><tr
id=sl_svn79_1977

><td class="source">		else<br></td></tr
><tr
id=sl_svn79_1978

><td class="source">		{<br></td></tr
><tr
id=sl_svn79_1979

><td class="source">			do<br></td></tr
><tr
id=sl_svn79_1980

><td class="source">			{<br></td></tr
><tr
id=sl_svn79_1981

><td class="source">				lastTargetPos.remove(lastTargetPosSize-1);<br></td></tr
><tr
id=sl_svn79_1982

><td class="source">				lastTargetPosSize = lastTargetPos.length();<br></td></tr
><tr
id=sl_svn79_1983

><td class="source">			}<br></td></tr
><tr
id=sl_svn79_1984

><td class="source">			while (lastTargetPos.length() &gt; targetSize);<br></td></tr
><tr
id=sl_svn79_1985

><td class="source">		}<br></td></tr
><tr
id=sl_svn79_1986

><td class="source">	}<br></td></tr
><tr
id=sl_svn79_1987

><td class="source">	// calculate target velocities<br></td></tr
><tr
id=sl_svn79_1988

><td class="source"><br></td></tr
><tr
id=sl_svn79_1989

><td class="source">	MVectorArray targetVel(targetSize,MVector::zero);<br></td></tr
><tr
id=sl_svn79_1990

><td class="source"><br></td></tr
><tr
id=sl_svn79_1991

><td class="source">	for (int e=0; e&lt;targetSize; e++)<br></td></tr
><tr
id=sl_svn79_1992

><td class="source">	{<br></td></tr
><tr
id=sl_svn79_1993

><td class="source">		// target Velocity<br></td></tr
><tr
id=sl_svn79_1994

><td class="source">		targetVel[e] = target[e] - lastTargetPos[e];<br></td></tr
><tr
id=sl_svn79_1995

><td class="source">		<br></td></tr
><tr
id=sl_svn79_1996

><td class="source">		// update last target value<br></td></tr
><tr
id=sl_svn79_1997

><td class="source">		lastTargetPos[e] = target[e];<br></td></tr
><tr
id=sl_svn79_1998

><td class="source">	}<br></td></tr
><tr
id=sl_svn79_1999

><td class="source">	//<br></td></tr
><tr
id=sl_svn79_2000

><td class="source"><br></td></tr
><tr
id=sl_svn79_2001

><td class="source">	MVector desiredVelocityV(0.0,0.0,0.0);<br></td></tr
><tr
id=sl_svn79_2002

><td class="source">	double deltaTimeV = deltaTime.as(MTime::kSeconds);<br></td></tr
><tr
id=sl_svn79_2003

><td class="source">	if (deltaTimeV != 0.0)<br></td></tr
><tr
id=sl_svn79_2004

><td class="source">		deltaTimeV = 1 / deltaTimeV;<br></td></tr
><tr
id=sl_svn79_2005

><td class="source"><br></td></tr
><tr
id=sl_svn79_2006

><td class="source"><br></td></tr
><tr
id=sl_svn79_2007

><td class="source">	if (targetSize != 0)<br></td></tr
><tr
id=sl_svn79_2008

><td class="source">	{<br></td></tr
><tr
id=sl_svn79_2009

><td class="source">		for (i; i &lt; posSize; i ++ )<br></td></tr
><tr
id=sl_svn79_2010

><td class="source">		{<br></td></tr
><tr
id=sl_svn79_2011

><td class="source">			desiredVelocityV = target[j] - positions[i];<br></td></tr
><tr
id=sl_svn79_2012

><td class="source">					<br></td></tr
><tr
id=sl_svn79_2013

><td class="source">			if (inFieldOfView(desiredVelocityV, velocities[i], useSensorRangeV,useSensorAngleV,sensorRangeV,sensorAngle))<br></td></tr
><tr
id=sl_svn79_2014

><td class="source">			{<br></td></tr
><tr
id=sl_svn79_2015

><td class="source">				if (desiredVelocityV.length() &gt; shadowRangeV)<br></td></tr
><tr
id=sl_svn79_2016

><td class="source">				{<br></td></tr
><tr
id=sl_svn79_2017

><td class="source">					seekSteering(desiredVelocityV,velocities[i],desiredSpeedV,scaleDesiredForceV,maximumForceV);			<br></td></tr
><tr
id=sl_svn79_2018

><td class="source">				}<br></td></tr
><tr
id=sl_svn79_2019

><td class="source">				else<br></td></tr
><tr
id=sl_svn79_2020

><td class="source">				{<br></td></tr
><tr
id=sl_svn79_2021

><td class="source">					desiredVelocityV =  deltaTimeV * targetVel[j] - velocities[i];<br></td></tr
><tr
id=sl_svn79_2022

><td class="source">					<br></td></tr
><tr
id=sl_svn79_2023

><td class="source">					// delta time<br></td></tr
><tr
id=sl_svn79_2024

><td class="source"><br></td></tr
><tr
id=sl_svn79_2025

><td class="source">					<br></td></tr
><tr
id=sl_svn79_2026

><td class="source">					desiredVelocityV *= scaleDesiredForceV;<br></td></tr
><tr
id=sl_svn79_2027

><td class="source">					truncVector(desiredVelocityV,maximumForceV);<br></td></tr
><tr
id=sl_svn79_2028

><td class="source">				}<br></td></tr
><tr
id=sl_svn79_2029

><td class="source"><br></td></tr
><tr
id=sl_svn79_2030

><td class="source">				outputForce.append( desiredVelocityV );<br></td></tr
><tr
id=sl_svn79_2031

><td class="source">			}<br></td></tr
><tr
id=sl_svn79_2032

><td class="source">			else <br></td></tr
><tr
id=sl_svn79_2033

><td class="source">			{	outputForce.append(MVector::zero);	}<br></td></tr
><tr
id=sl_svn79_2034

><td class="source"><br></td></tr
><tr
id=sl_svn79_2035

><td class="source">			j++; if (j == targetSize) j=0;<br></td></tr
><tr
id=sl_svn79_2036

><td class="source">		}<br></td></tr
><tr
id=sl_svn79_2037

><td class="source">	}<br></td></tr
><tr
id=sl_svn79_2038

><td class="source"><br></td></tr
><tr
id=sl_svn79_2039

><td class="source"><br></td></tr
><tr
id=sl_svn79_2040

><td class="source">	// store last vector data<br></td></tr
><tr
id=sl_svn79_2041

><td class="source"><br></td></tr
><tr
id=sl_svn79_2042

><td class="source">	MDataHandle hOut = block.outputValue( lastVector, &amp;stat);<br></td></tr
><tr
id=sl_svn79_2043

><td class="source">	MFnVectorArrayData fnLastVectorV;<br></td></tr
><tr
id=sl_svn79_2044

><td class="source"><br></td></tr
><tr
id=sl_svn79_2045

><td class="source">	MObject dOutputLastVectorV = fnLastVectorV.create( lastTargetPos, &amp;stat );<br></td></tr
><tr
id=sl_svn79_2046

><td class="source"><br></td></tr
><tr
id=sl_svn79_2047

><td class="source">	// update data block with new output force data.<br></td></tr
><tr
id=sl_svn79_2048

><td class="source">	hOut.set( dOutputLastVectorV );<br></td></tr
><tr
id=sl_svn79_2049

><td class="source"><br></td></tr
><tr
id=sl_svn79_2050

><td class="source">}<br></td></tr
><tr
id=sl_svn79_2051

><td class="source"><br></td></tr
><tr
id=sl_svn79_2052

><td class="source"><br></td></tr
><tr
id=sl_svn79_2053

><td class="source">/**************************************************************************************/<br></td></tr
><tr
id=sl_svn79_2054

><td class="source">// steering desire: head direction<br></td></tr
><tr
id=sl_svn79_2055

><td class="source"><br></td></tr
><tr
id=sl_svn79_2056

><td class="source">void bbSteeringDesire::sdBugHeadDirection( MDataBlock&amp; block,<br></td></tr
><tr
id=sl_svn79_2057

><td class="source">								const MVectorArray &amp;positions,<br></td></tr
><tr
id=sl_svn79_2058

><td class="source">								const MVectorArray &amp;velocities,<br></td></tr
><tr
id=sl_svn79_2059

><td class="source">								MVectorArray &amp;outputForce )<br></td></tr
><tr
id=sl_svn79_2060

><td class="source">{ <br></td></tr
><tr
id=sl_svn79_2061

><td class="source">	// points and velocities should have the same length. If not return.<br></td></tr
><tr
id=sl_svn79_2062

><td class="source">	//<br></td></tr
><tr
id=sl_svn79_2063

><td class="source">	if( positions.length() != velocities.length() )<br></td></tr
><tr
id=sl_svn79_2064

><td class="source">		return;<br></td></tr
><tr
id=sl_svn79_2065

><td class="source"><br></td></tr
><tr
id=sl_svn79_2066

><td class="source">	// clear the output force array.<br></td></tr
><tr
id=sl_svn79_2067

><td class="source">	//<br></td></tr
><tr
id=sl_svn79_2068

><td class="source">	outputForce.clear();<br></td></tr
><tr
id=sl_svn79_2069

><td class="source"><br></td></tr
><tr
id=sl_svn79_2070

><td class="source">	double scaleDesiredForceV = 1.0;<br></td></tr
><tr
id=sl_svn79_2071

><td class="source">	if (inverseDesiredSteeringForceValue(block))<br></td></tr
><tr
id=sl_svn79_2072

><td class="source">		scaleDesiredForceV = -1.0;<br></td></tr
><tr
id=sl_svn79_2073

><td class="source"><br></td></tr
><tr
id=sl_svn79_2074

><td class="source">	double desiredSpeedV = desiredSpeedValue(block);<br></td></tr
><tr
id=sl_svn79_2075

><td class="source">	double maximumForceV = maximumForceValue(block);<br></td></tr
><tr
id=sl_svn79_2076

><td class="source"><br></td></tr
><tr
id=sl_svn79_2077

><td class="source">	MVector directionV;<br></td></tr
><tr
id=sl_svn79_2078

><td class="source">	directionValue(block,directionV);<br></td></tr
><tr
id=sl_svn79_2079

><td class="source"><br></td></tr
><tr
id=sl_svn79_2080

><td class="source"><br></td></tr
><tr
id=sl_svn79_2081

><td class="source">	int posSize = positions.length();<br></td></tr
><tr
id=sl_svn79_2082

><td class="source">	MVector desiredVelocityV(0.0,0.0,0.0);<br></td></tr
><tr
id=sl_svn79_2083

><td class="source">	<br></td></tr
><tr
id=sl_svn79_2084

><td class="source">	int i =0;<br></td></tr
><tr
id=sl_svn79_2085

><td class="source"><br></td></tr
><tr
id=sl_svn79_2086

><td class="source">	for (i; i &lt; posSize; i ++ )<br></td></tr
><tr
id=sl_svn79_2087

><td class="source">	{<br></td></tr
><tr
id=sl_svn79_2088

><td class="source">		if (directionV != MVector::zero)<br></td></tr
><tr
id=sl_svn79_2089

><td class="source">		{<br></td></tr
><tr
id=sl_svn79_2090

><td class="source">			desiredVelocityV = directionV;<br></td></tr
><tr
id=sl_svn79_2091

><td class="source">		}<br></td></tr
><tr
id=sl_svn79_2092

><td class="source">		else<br></td></tr
><tr
id=sl_svn79_2093

><td class="source">		{<br></td></tr
><tr
id=sl_svn79_2094

><td class="source">			desiredVelocityV = velocities[i];<br></td></tr
><tr
id=sl_svn79_2095

><td class="source">		}<br></td></tr
><tr
id=sl_svn79_2096

><td class="source"><br></td></tr
><tr
id=sl_svn79_2097

><td class="source">		seekSteering(desiredVelocityV,velocities[i],desiredSpeedV,scaleDesiredForceV,maximumForceV);<br></td></tr
><tr
id=sl_svn79_2098

><td class="source">		outputForce.append( desiredVelocityV );<br></td></tr
><tr
id=sl_svn79_2099

><td class="source">	}<br></td></tr
><tr
id=sl_svn79_2100

><td class="source">}<br></td></tr
><tr
id=sl_svn79_2101

><td class="source"><br></td></tr
><tr
id=sl_svn79_2102

><td class="source">/**************************************************************************************/<br></td></tr
><tr
id=sl_svn79_2103

><td class="source"><br></td></tr
><tr
id=sl_svn79_2104

><td class="source">void bbSteeringDesire::sdNeighborAlignment( MDataBlock&amp; block,<br></td></tr
><tr
id=sl_svn79_2105

><td class="source">								const MVectorArray &amp;positions,<br></td></tr
><tr
id=sl_svn79_2106

><td class="source">								const MVectorArray &amp;velocities,<br></td></tr
><tr
id=sl_svn79_2107

><td class="source">								MVectorArray &amp;outputForce )<br></td></tr
><tr
id=sl_svn79_2108

><td class="source">{ <br></td></tr
><tr
id=sl_svn79_2109

><td class="source">	// points and velocities should have the same length. If not return.<br></td></tr
><tr
id=sl_svn79_2110

><td class="source">	if( positions.length() != velocities.length() )<br></td></tr
><tr
id=sl_svn79_2111

><td class="source">		return;<br></td></tr
><tr
id=sl_svn79_2112

><td class="source"><br></td></tr
><tr
id=sl_svn79_2113

><td class="source">	// clear the output force array.<br></td></tr
><tr
id=sl_svn79_2114

><td class="source">	outputForce.clear();<br></td></tr
><tr
id=sl_svn79_2115

><td class="source"><br></td></tr
><tr
id=sl_svn79_2116

><td class="source">	// get field parameters.<br></td></tr
><tr
id=sl_svn79_2117

><td class="source">	double scaleDesiredForceV = 1.0;<br></td></tr
><tr
id=sl_svn79_2118

><td class="source">	if (inverseDesiredSteeringForceValue(block))<br></td></tr
><tr
id=sl_svn79_2119

><td class="source">		scaleDesiredForceV = -1.0;<br></td></tr
><tr
id=sl_svn79_2120

><td class="source"><br></td></tr
><tr
id=sl_svn79_2121

><td class="source">	bool useSensorRangeV = useSensorRangeValue(block);<br></td></tr
><tr
id=sl_svn79_2122

><td class="source">	double sensorRangeV = sensorRangeValue(block);<br></td></tr
><tr
id=sl_svn79_2123

><td class="source">	<br></td></tr
><tr
id=sl_svn79_2124

><td class="source">	bool useSensorAngleV = useSensorAngleValue(block);<br></td></tr
><tr
id=sl_svn79_2125

><td class="source">	double sensorAngle = sensorAngleValue(block);<br></td></tr
><tr
id=sl_svn79_2126

><td class="source">	double maximumForceV = maximumForceValue(block);<br></td></tr
><tr
id=sl_svn79_2127

><td class="source"><br></td></tr
><tr
id=sl_svn79_2128

><td class="source">	MVector targetV;<br></td></tr
><tr
id=sl_svn79_2129

><td class="source"><br></td></tr
><tr
id=sl_svn79_2130

><td class="source">	// alignment steering<br></td></tr
><tr
id=sl_svn79_2131

><td class="source">	int posSize = positions.length();<br></td></tr
><tr
id=sl_svn79_2132

><td class="source">	<br></td></tr
><tr
id=sl_svn79_2133

><td class="source">	MVector desiredVelocityV;<br></td></tr
><tr
id=sl_svn79_2134

><td class="source"><br></td></tr
><tr
id=sl_svn79_2135

><td class="source">	int i =0;<br></td></tr
><tr
id=sl_svn79_2136

><td class="source">	int j =0;<br></td></tr
><tr
id=sl_svn79_2137

><td class="source"><br></td></tr
><tr
id=sl_svn79_2138

><td class="source">	MIntArray nearbyBugIndexList;<br></td></tr
><tr
id=sl_svn79_2139

><td class="source">	int nearbyBugIndexListSize;<br></td></tr
><tr
id=sl_svn79_2140

><td class="source"><br></td></tr
><tr
id=sl_svn79_2141

><td class="source">	for (i; i &lt; posSize; i ++ )<br></td></tr
><tr
id=sl_svn79_2142

><td class="source">	{<br></td></tr
><tr
id=sl_svn79_2143

><td class="source">		getNearbyBugs(positions,i,velocities[i],useSensorRangeV,useSensorAngleV,sensorRangeV,sensorAngle,nearbyBugIndexList);<br></td></tr
><tr
id=sl_svn79_2144

><td class="source">		nearbyBugIndexListSize= nearbyBugIndexList.length();<br></td></tr
><tr
id=sl_svn79_2145

><td class="source">	<br></td></tr
><tr
id=sl_svn79_2146

><td class="source">		if (nearbyBugIndexListSize &gt; 0)<br></td></tr
><tr
id=sl_svn79_2147

><td class="source">		{<br></td></tr
><tr
id=sl_svn79_2148

><td class="source">			desiredVelocityV = MVector::zero;<br></td></tr
><tr
id=sl_svn79_2149

><td class="source"><br></td></tr
><tr
id=sl_svn79_2150

><td class="source">			for (j=0; j &lt; nearbyBugIndexListSize; j++)<br></td></tr
><tr
id=sl_svn79_2151

><td class="source">			{<br></td></tr
><tr
id=sl_svn79_2152

><td class="source">				desiredVelocityV += velocities[nearbyBugIndexList[j]];<br></td></tr
><tr
id=sl_svn79_2153

><td class="source">			}<br></td></tr
><tr
id=sl_svn79_2154

><td class="source">			desiredVelocityV *= 1/nearbyBugIndexListSize;<br></td></tr
><tr
id=sl_svn79_2155

><td class="source">			desiredVelocityV =  desiredVelocityV - velocities[i];<br></td></tr
><tr
id=sl_svn79_2156

><td class="source"><br></td></tr
><tr
id=sl_svn79_2157

><td class="source">			desiredVelocityV *= scaleDesiredForceV;<br></td></tr
><tr
id=sl_svn79_2158

><td class="source">			truncVector(desiredVelocityV,maximumForceV);<br></td></tr
><tr
id=sl_svn79_2159

><td class="source">			outputForce.append( desiredVelocityV );<br></td></tr
><tr
id=sl_svn79_2160

><td class="source">		}<br></td></tr
><tr
id=sl_svn79_2161

><td class="source">		else <br></td></tr
><tr
id=sl_svn79_2162

><td class="source">		{<br></td></tr
><tr
id=sl_svn79_2163

><td class="source">			outputForce.append(MVector::zero);<br></td></tr
><tr
id=sl_svn79_2164

><td class="source">		}<br></td></tr
><tr
id=sl_svn79_2165

><td class="source">	}<br></td></tr
><tr
id=sl_svn79_2166

><td class="source"><br></td></tr
><tr
id=sl_svn79_2167

><td class="source">	nearbyBugIndexList.clear();<br></td></tr
><tr
id=sl_svn79_2168

><td class="source">}<br></td></tr
><tr
id=sl_svn79_2169

><td class="source"><br></td></tr
><tr
id=sl_svn79_2170

><td class="source">/**************************************************************************************/<br></td></tr
><tr
id=sl_svn79_2171

><td class="source"><br></td></tr
><tr
id=sl_svn79_2172

><td class="source">void bbSteeringDesire::sdNeighborCohesion( MDataBlock&amp; block,<br></td></tr
><tr
id=sl_svn79_2173

><td class="source">								const MVectorArray &amp;positions,<br></td></tr
><tr
id=sl_svn79_2174

><td class="source">								const MVectorArray &amp;velocities,<br></td></tr
><tr
id=sl_svn79_2175

><td class="source">								MVectorArray &amp;outputForce )<br></td></tr
><tr
id=sl_svn79_2176

><td class="source">{ <br></td></tr
><tr
id=sl_svn79_2177

><td class="source">	// points and velocities should have the same length. If not return.<br></td></tr
><tr
id=sl_svn79_2178

><td class="source">	if( positions.length() != velocities.length() )<br></td></tr
><tr
id=sl_svn79_2179

><td class="source">		return;<br></td></tr
><tr
id=sl_svn79_2180

><td class="source"><br></td></tr
><tr
id=sl_svn79_2181

><td class="source">	// clear the output force array.<br></td></tr
><tr
id=sl_svn79_2182

><td class="source">	outputForce.clear();<br></td></tr
><tr
id=sl_svn79_2183

><td class="source"><br></td></tr
><tr
id=sl_svn79_2184

><td class="source">	// get field parameters.<br></td></tr
><tr
id=sl_svn79_2185

><td class="source">	double scaleDesiredForceV = 1.0;<br></td></tr
><tr
id=sl_svn79_2186

><td class="source">	if (inverseDesiredSteeringForceValue(block))<br></td></tr
><tr
id=sl_svn79_2187

><td class="source">		scaleDesiredForceV = -1.0;<br></td></tr
><tr
id=sl_svn79_2188

><td class="source"><br></td></tr
><tr
id=sl_svn79_2189

><td class="source">	bool useSensorRangeV = useSensorRangeValue(block);<br></td></tr
><tr
id=sl_svn79_2190

><td class="source">	double sensorRangeV = sensorRangeValue(block);<br></td></tr
><tr
id=sl_svn79_2191

><td class="source">	<br></td></tr
><tr
id=sl_svn79_2192

><td class="source">	bool useSensorAngleV = useSensorAngleValue(block);<br></td></tr
><tr
id=sl_svn79_2193

><td class="source">	double sensorAngle = sensorAngleValue(block);<br></td></tr
><tr
id=sl_svn79_2194

><td class="source"><br></td></tr
><tr
id=sl_svn79_2195

><td class="source">//	double desiredSpeedV = desiredSpeedValue(block);<br></td></tr
><tr
id=sl_svn79_2196

><td class="source">	double maximumForceV = maximumForceValue(block);<br></td></tr
><tr
id=sl_svn79_2197

><td class="source"><br></td></tr
><tr
id=sl_svn79_2198

><td class="source">	MVector targetV;<br></td></tr
><tr
id=sl_svn79_2199

><td class="source">//	targetValue(block,targetV);<br></td></tr
><tr
id=sl_svn79_2200

><td class="source"><br></td></tr
><tr
id=sl_svn79_2201

><td class="source">	// alignment steering<br></td></tr
><tr
id=sl_svn79_2202

><td class="source">	int posSize = positions.length();<br></td></tr
><tr
id=sl_svn79_2203

><td class="source">	<br></td></tr
><tr
id=sl_svn79_2204

><td class="source">	MVector desiredVelocityV;<br></td></tr
><tr
id=sl_svn79_2205

><td class="source">	MVector noForceV(0.0,0.0,0.0);<br></td></tr
><tr
id=sl_svn79_2206

><td class="source"><br></td></tr
><tr
id=sl_svn79_2207

><td class="source">	int i =0;<br></td></tr
><tr
id=sl_svn79_2208

><td class="source">	int j =0;<br></td></tr
><tr
id=sl_svn79_2209

><td class="source"><br></td></tr
><tr
id=sl_svn79_2210

><td class="source">	MIntArray nearbyBugIndexList;<br></td></tr
><tr
id=sl_svn79_2211

><td class="source">	int nearbyBugIndexListSize;<br></td></tr
><tr
id=sl_svn79_2212

><td class="source"><br></td></tr
><tr
id=sl_svn79_2213

><td class="source">	MString temp;<br></td></tr
><tr
id=sl_svn79_2214

><td class="source">//	temp =&quot;bug: &quot;;<br></td></tr
><tr
id=sl_svn79_2215

><td class="source">//	temp += i;<br></td></tr
><tr
id=sl_svn79_2216

><td class="source"><br></td></tr
><tr
id=sl_svn79_2217

><td class="source">//	MGlobal::displayError(temp);<br></td></tr
><tr
id=sl_svn79_2218

><td class="source">//	temp =&quot;&quot;;<br></td></tr
><tr
id=sl_svn79_2219

><td class="source"><br></td></tr
><tr
id=sl_svn79_2220

><td class="source"><br></td></tr
><tr
id=sl_svn79_2221

><td class="source">	for (i; i &lt; posSize; i ++ )<br></td></tr
><tr
id=sl_svn79_2222

><td class="source">	{<br></td></tr
><tr
id=sl_svn79_2223

><td class="source">		getNearbyBugs(positions,i,velocities[i],useSensorRangeV,useSensorAngleV,sensorRangeV,sensorAngle,nearbyBugIndexList);<br></td></tr
><tr
id=sl_svn79_2224

><td class="source">		nearbyBugIndexListSize= nearbyBugIndexList.length();<br></td></tr
><tr
id=sl_svn79_2225

><td class="source"><br></td></tr
><tr
id=sl_svn79_2226

><td class="source">//		temp =&quot;bug: &quot;;<br></td></tr
><tr
id=sl_svn79_2227

><td class="source">//		temp += i;<br></td></tr
><tr
id=sl_svn79_2228

><td class="source">//		MGlobal::displayError(temp);<br></td></tr
><tr
id=sl_svn79_2229

><td class="source">	<br></td></tr
><tr
id=sl_svn79_2230

><td class="source">		if (nearbyBugIndexListSize &gt; 0)<br></td></tr
><tr
id=sl_svn79_2231

><td class="source">		{<br></td></tr
><tr
id=sl_svn79_2232

><td class="source">		<br></td></tr
><tr
id=sl_svn79_2233

><td class="source">//			temp=&quot;&quot;;<br></td></tr
><tr
id=sl_svn79_2234

><td class="source"><br></td></tr
><tr
id=sl_svn79_2235

><td class="source">			desiredVelocityV = MVector::zero;<br></td></tr
><tr
id=sl_svn79_2236

><td class="source"><br></td></tr
><tr
id=sl_svn79_2237

><td class="source">			for (j=0; j &lt; nearbyBugIndexListSize; j++)<br></td></tr
><tr
id=sl_svn79_2238

><td class="source">			{<br></td></tr
><tr
id=sl_svn79_2239

><td class="source">//				temp += nearbyBugIndexList[j];<br></td></tr
><tr
id=sl_svn79_2240

><td class="source">//				temp += &quot;, &quot;;<br></td></tr
><tr
id=sl_svn79_2241

><td class="source">				desiredVelocityV += positions[nearbyBugIndexList[j]];<br></td></tr
><tr
id=sl_svn79_2242

><td class="source">			}<br></td></tr
><tr
id=sl_svn79_2243

><td class="source">			//<br></td></tr
><tr
id=sl_svn79_2244

><td class="source">//			MGlobal::displayInfo(temp);<br></td></tr
><tr
id=sl_svn79_2245

><td class="source"><br></td></tr
><tr
id=sl_svn79_2246

><td class="source">			desiredVelocityV *= 1/nearbyBugIndexListSize;<br></td></tr
><tr
id=sl_svn79_2247

><td class="source">			desiredVelocityV = desiredVelocityV - positions[i];<br></td></tr
><tr
id=sl_svn79_2248

><td class="source"><br></td></tr
><tr
id=sl_svn79_2249

><td class="source">			desiredVelocityV *= scaleDesiredForceV;<br></td></tr
><tr
id=sl_svn79_2250

><td class="source">			truncVector(desiredVelocityV,maximumForceV);<br></td></tr
><tr
id=sl_svn79_2251

><td class="source">			outputForce.append( desiredVelocityV );<br></td></tr
><tr
id=sl_svn79_2252

><td class="source">		}<br></td></tr
><tr
id=sl_svn79_2253

><td class="source">		else <br></td></tr
><tr
id=sl_svn79_2254

><td class="source">		{<br></td></tr
><tr
id=sl_svn79_2255

><td class="source">			outputForce.append(noForceV);<br></td></tr
><tr
id=sl_svn79_2256

><td class="source">		}<br></td></tr
><tr
id=sl_svn79_2257

><td class="source">	}<br></td></tr
><tr
id=sl_svn79_2258

><td class="source"><br></td></tr
><tr
id=sl_svn79_2259

><td class="source">	nearbyBugIndexList.clear();<br></td></tr
><tr
id=sl_svn79_2260

><td class="source">}<br></td></tr
><tr
id=sl_svn79_2261

><td class="source"><br></td></tr
><tr
id=sl_svn79_2262

><td class="source">/**************************************************************************************/<br></td></tr
><tr
id=sl_svn79_2263

><td class="source"><br></td></tr
><tr
id=sl_svn79_2264

><td class="source">void bbSteeringDesire::sdNeighborSeparation( MDataBlock&amp; block,<br></td></tr
><tr
id=sl_svn79_2265

><td class="source">								const MVectorArray &amp;positions,<br></td></tr
><tr
id=sl_svn79_2266

><td class="source">								const MVectorArray &amp;velocities,<br></td></tr
><tr
id=sl_svn79_2267

><td class="source">								MVectorArray &amp;outputForce )<br></td></tr
><tr
id=sl_svn79_2268

><td class="source">{ <br></td></tr
><tr
id=sl_svn79_2269

><td class="source">	// points and velocities should have the same length. If not return.<br></td></tr
><tr
id=sl_svn79_2270

><td class="source">	if( positions.length() != velocities.length() )<br></td></tr
><tr
id=sl_svn79_2271

><td class="source">		return;<br></td></tr
><tr
id=sl_svn79_2272

><td class="source"><br></td></tr
><tr
id=sl_svn79_2273

><td class="source">	// clear the output force array.<br></td></tr
><tr
id=sl_svn79_2274

><td class="source">	outputForce.clear();<br></td></tr
><tr
id=sl_svn79_2275

><td class="source"><br></td></tr
><tr
id=sl_svn79_2276

><td class="source">	// get field parameters.<br></td></tr
><tr
id=sl_svn79_2277

><td class="source">	double scaleDesiredForceV = 1.0;<br></td></tr
><tr
id=sl_svn79_2278

><td class="source">	if (inverseDesiredSteeringForceValue(block))<br></td></tr
><tr
id=sl_svn79_2279

><td class="source">		scaleDesiredForceV = -1.0;<br></td></tr
><tr
id=sl_svn79_2280

><td class="source"><br></td></tr
><tr
id=sl_svn79_2281

><td class="source">	bool useSensorRangeV = useSensorRangeValue(block);<br></td></tr
><tr
id=sl_svn79_2282

><td class="source">	double sensorRangeV = sensorRangeValue(block);<br></td></tr
><tr
id=sl_svn79_2283

><td class="source">	bool useSensorAngleV = useSensorAngleValue(block);<br></td></tr
><tr
id=sl_svn79_2284

><td class="source">	double sensorAngle = sensorAngleValue(block);<br></td></tr
><tr
id=sl_svn79_2285

><td class="source"><br></td></tr
><tr
id=sl_svn79_2286

><td class="source">	double maximumForceV = maximumForceValue(block);<br></td></tr
><tr
id=sl_svn79_2287

><td class="source">	double bugRadiusV = bugRadiusValue(block);<br></td></tr
><tr
id=sl_svn79_2288

><td class="source"><br></td></tr
><tr
id=sl_svn79_2289

><td class="source">	// alignment steering<br></td></tr
><tr
id=sl_svn79_2290

><td class="source">	int posSize = positions.length();<br></td></tr
><tr
id=sl_svn79_2291

><td class="source">	<br></td></tr
><tr
id=sl_svn79_2292

><td class="source">	MVector desiredVelocityV;<br></td></tr
><tr
id=sl_svn79_2293

><td class="source">	MVector positionOffset;<br></td></tr
><tr
id=sl_svn79_2294

><td class="source">	MVector noForceV(0.0,0.0,0.0);<br></td></tr
><tr
id=sl_svn79_2295

><td class="source"><br></td></tr
><tr
id=sl_svn79_2296

><td class="source">	int i =0;<br></td></tr
><tr
id=sl_svn79_2297

><td class="source">	int j =0;<br></td></tr
><tr
id=sl_svn79_2298

><td class="source"><br></td></tr
><tr
id=sl_svn79_2299

><td class="source">	MIntArray nearbyBugIndexList;<br></td></tr
><tr
id=sl_svn79_2300

><td class="source">	int nearbyBugIndexListSize;<br></td></tr
><tr
id=sl_svn79_2301

><td class="source"><br></td></tr
><tr
id=sl_svn79_2302

><td class="source">	for (i; i &lt; posSize; i ++ )<br></td></tr
><tr
id=sl_svn79_2303

><td class="source">	{<br></td></tr
><tr
id=sl_svn79_2304

><td class="source">		getNearbyBugs(positions,i,velocities[i],useSensorRangeV,useSensorAngleV,sensorRangeV,sensorAngle,nearbyBugIndexList);<br></td></tr
><tr
id=sl_svn79_2305

><td class="source">		nearbyBugIndexListSize= nearbyBugIndexList.length();<br></td></tr
><tr
id=sl_svn79_2306

><td class="source">	<br></td></tr
><tr
id=sl_svn79_2307

><td class="source">		if (nearbyBugIndexListSize &gt; 0)<br></td></tr
><tr
id=sl_svn79_2308

><td class="source">		{<br></td></tr
><tr
id=sl_svn79_2309

><td class="source">			desiredVelocityV = MVector::zero;<br></td></tr
><tr
id=sl_svn79_2310

><td class="source"><br></td></tr
><tr
id=sl_svn79_2311

><td class="source">			for (j=0; j &lt; nearbyBugIndexListSize; j++)<br></td></tr
><tr
id=sl_svn79_2312

><td class="source">			{<br></td></tr
><tr
id=sl_svn79_2313

><td class="source">				positionOffset = positions[i] -  positions[nearbyBugIndexList[j]];<br></td></tr
><tr
id=sl_svn79_2314

><td class="source">				positionOffset.normalize();<br></td></tr
><tr
id=sl_svn79_2315

><td class="source">				desiredVelocityV += positionOffset;<br></td></tr
><tr
id=sl_svn79_2316

><td class="source">			}<br></td></tr
><tr
id=sl_svn79_2317

><td class="source"><br></td></tr
><tr
id=sl_svn79_2318

><td class="source">			desiredVelocityV *= 1/nearbyBugIndexListSize;<br></td></tr
><tr
id=sl_svn79_2319

><td class="source"><br></td></tr
><tr
id=sl_svn79_2320

><td class="source">			desiredVelocityV *= scaleDesiredForceV;<br></td></tr
><tr
id=sl_svn79_2321

><td class="source">			truncVector(desiredVelocityV,maximumForceV);<br></td></tr
><tr
id=sl_svn79_2322

><td class="source">			outputForce.append( desiredVelocityV );<br></td></tr
><tr
id=sl_svn79_2323

><td class="source">		}<br></td></tr
><tr
id=sl_svn79_2324

><td class="source">		else <br></td></tr
><tr
id=sl_svn79_2325

><td class="source">		{<br></td></tr
><tr
id=sl_svn79_2326

><td class="source">			outputForce.append(noForceV);<br></td></tr
><tr
id=sl_svn79_2327

><td class="source">		}<br></td></tr
><tr
id=sl_svn79_2328

><td class="source">	}<br></td></tr
><tr
id=sl_svn79_2329

><td class="source">	nearbyBugIndexList.clear();<br></td></tr
><tr
id=sl_svn79_2330

><td class="source">}<br></td></tr
><tr
id=sl_svn79_2331

><td class="source"><br></td></tr
><tr
id=sl_svn79_2332

><td class="source">/**************************************************************************************/<br></td></tr
><tr
id=sl_svn79_2333

><td class="source"><br></td></tr
><tr
id=sl_svn79_2334

><td class="source">void bbSteeringDesire::sdNeighborUnalignedCollisionAvoidance( MDataBlock&amp; block,<br></td></tr
><tr
id=sl_svn79_2335

><td class="source">								const MVectorArray &amp;positions,<br></td></tr
><tr
id=sl_svn79_2336

><td class="source">								const MVectorArray &amp;velocities,<br></td></tr
><tr
id=sl_svn79_2337

><td class="source">								MVectorArray &amp;outputForce )<br></td></tr
><tr
id=sl_svn79_2338

><td class="source">{ <br></td></tr
><tr
id=sl_svn79_2339

><td class="source">	// points and velocities should have the same length. If not return.<br></td></tr
><tr
id=sl_svn79_2340

><td class="source">	if( positions.length() != velocities.length() )<br></td></tr
><tr
id=sl_svn79_2341

><td class="source">		return;<br></td></tr
><tr
id=sl_svn79_2342

><td class="source"><br></td></tr
><tr
id=sl_svn79_2343

><td class="source">	// clear the output force array.<br></td></tr
><tr
id=sl_svn79_2344

><td class="source">	outputForce.clear();<br></td></tr
><tr
id=sl_svn79_2345

><td class="source"><br></td></tr
><tr
id=sl_svn79_2346

><td class="source">	// get field parameters.<br></td></tr
><tr
id=sl_svn79_2347

><td class="source">	double scaleDesiredForceV = 1.0;<br></td></tr
><tr
id=sl_svn79_2348

><td class="source">	if (inverseDesiredSteeringForceValue(block))<br></td></tr
><tr
id=sl_svn79_2349

><td class="source">		scaleDesiredForceV = -1.0;<br></td></tr
><tr
id=sl_svn79_2350

><td class="source"><br></td></tr
><tr
id=sl_svn79_2351

><td class="source">	bool useSensorRangeV = useSensorRangeValue(block);<br></td></tr
><tr
id=sl_svn79_2352

><td class="source">	double sensorRangeV = sensorRangeValue(block);<br></td></tr
><tr
id=sl_svn79_2353

><td class="source">	bool useSensorAngleV = useSensorAngleValue(block);<br></td></tr
><tr
id=sl_svn79_2354

><td class="source">	double sensorAngle = sensorAngleValue(block);<br></td></tr
><tr
id=sl_svn79_2355

><td class="source"><br></td></tr
><tr
id=sl_svn79_2356

><td class="source">	double maximumForceV = maximumForceValue(block);<br></td></tr
><tr
id=sl_svn79_2357

><td class="source">	double bugRadiusV = bugRadiusValue(block);<br></td></tr
><tr
id=sl_svn79_2358

><td class="source"><br></td></tr
><tr
id=sl_svn79_2359

><td class="source">	double toleranceV = toleranceValue(block);<br></td></tr
><tr
id=sl_svn79_2360

><td class="source"><br></td></tr
><tr
id=sl_svn79_2361

><td class="source">	// alignment steering<br></td></tr
><tr
id=sl_svn79_2362

><td class="source">	int posSize = positions.length();<br></td></tr
><tr
id=sl_svn79_2363

><td class="source">	<br></td></tr
><tr
id=sl_svn79_2364

><td class="source">	MVector desiredVelocityV;<br></td></tr
><tr
id=sl_svn79_2365

><td class="source">	MVector positionOffset;<br></td></tr
><tr
id=sl_svn79_2366

><td class="source"><br></td></tr
><tr
id=sl_svn79_2367

><td class="source">	MIntArray nearbyBugIndexList;<br></td></tr
><tr
id=sl_svn79_2368

><td class="source">	int nearbyBugIndexListSize;<br></td></tr
><tr
id=sl_svn79_2369

><td class="source"><br></td></tr
><tr
id=sl_svn79_2370

><td class="source">	MVector p,v;<br></td></tr
><tr
id=sl_svn79_2371

><td class="source">	double a,b, maxTime;<br></td></tr
><tr
id=sl_svn79_2372

><td class="source"><br></td></tr
><tr
id=sl_svn79_2373

><td class="source">	maxTime = 4;<br></td></tr
><tr
id=sl_svn79_2374

><td class="source"><br></td></tr
><tr
id=sl_svn79_2375

><td class="source">	for (int i=0; i &lt; posSize; i ++ )<br></td></tr
><tr
id=sl_svn79_2376

><td class="source">	{<br></td></tr
><tr
id=sl_svn79_2377

><td class="source">		// neighborhoud search<br></td></tr
><tr
id=sl_svn79_2378

><td class="source"><br></td></tr
><tr
id=sl_svn79_2379

><td class="source">		getNearbyBugs(positions,i,velocities[i],useSensorRangeV,useSensorAngleV,sensorRangeV,sensorAngle,nearbyBugIndexList);<br></td></tr
><tr
id=sl_svn79_2380

><td class="source">		nearbyBugIndexListSize= nearbyBugIndexList.length();<br></td></tr
><tr
id=sl_svn79_2381

><td class="source">	<br></td></tr
><tr
id=sl_svn79_2382

><td class="source">		if (nearbyBugIndexListSize &gt; 0)<br></td></tr
><tr
id=sl_svn79_2383

><td class="source">		{<br></td></tr
><tr
id=sl_svn79_2384

><td class="source">			// find closest approach<br></td></tr
><tr
id=sl_svn79_2385

><td class="source"><br></td></tr
><tr
id=sl_svn79_2386

><td class="source">			double closestDistanceSqu = MAX_DOUBLE;<br></td></tr
><tr
id=sl_svn79_2387

><td class="source">			int closestBug;<br></td></tr
><tr
id=sl_svn79_2388

><td class="source"><br></td></tr
><tr
id=sl_svn79_2389

><td class="source">			bool foundClosestBug = false; <br></td></tr
><tr
id=sl_svn79_2390

><td class="source">			<br></td></tr
><tr
id=sl_svn79_2391

><td class="source">			for (int j=0; j &lt; nearbyBugIndexListSize; j++)<br></td></tr
><tr
id=sl_svn79_2392

><td class="source">			{<br></td></tr
><tr
id=sl_svn79_2393

><td class="source">				p = positions[i] -  positions[nearbyBugIndexList[j]];<br></td></tr
><tr
id=sl_svn79_2394

><td class="source">				v = velocities[i] - velocities[nearbyBugIndexList[j]];<br></td></tr
><tr
id=sl_svn79_2395

><td class="source">				<br></td></tr
><tr
id=sl_svn79_2396

><td class="source">				a = v*p;<br></td></tr
><tr
id=sl_svn79_2397

><td class="source">				b = v.length();<br></td></tr
><tr
id=sl_svn79_2398

><td class="source"><br></td></tr
><tr
id=sl_svn79_2399

><td class="source">				if (-toleranceV &lt; a &lt; toleranceV)			// nearby bug moving parrallel to current bug<br></td></tr
><tr
id=sl_svn79_2400

><td class="source">					if (a &gt; toleranceV) 					// closest approach in the past<br></td></tr
><tr
id=sl_svn79_2401

><td class="source">						if (-toleranceV &lt; b &lt; toleranceV)	// no relative motion<br></td></tr
><tr
id=sl_svn79_2402

><td class="source">							if ((a &lt; -toleranceV) &amp;&amp; !(-toleranceV &lt; b &lt; toleranceV)) <br></td></tr
><tr
id=sl_svn79_2403

><td class="source">							{<br></td></tr
><tr
id=sl_svn79_2404

><td class="source">								// calculate time and distance.<br></td></tr
><tr
id=sl_svn79_2405

><td class="source">								double time = - a / pow(b,2);<br></td></tr
><tr
id=sl_svn79_2406

><td class="source">								double distanceSqu = pow(p.length(),2) + 2*a*time + pow(b,2)*pow(time,2);<br></td></tr
><tr
id=sl_svn79_2407

><td class="source"><br></td></tr
><tr
id=sl_svn79_2408

><td class="source">								if (time &lt; maxTime)			// collision !!!<br></td></tr
><tr
id=sl_svn79_2409

><td class="source">								{<br></td></tr
><tr
id=sl_svn79_2410

><td class="source">									if (distanceSqu &lt; closestDistanceSqu)<br></td></tr
><tr
id=sl_svn79_2411

><td class="source">									{<br></td></tr
><tr
id=sl_svn79_2412

><td class="source">										closestDistanceSqu = distanceSqu;<br></td></tr
><tr
id=sl_svn79_2413

><td class="source">										closestBug = nearbyBugIndexList[j];<br></td></tr
><tr
id=sl_svn79_2414

><td class="source">										foundClosestBug = true;<br></td></tr
><tr
id=sl_svn79_2415

><td class="source">									}<br></td></tr
><tr
id=sl_svn79_2416

><td class="source"><br></td></tr
><tr
id=sl_svn79_2417

><td class="source">								}<br></td></tr
><tr
id=sl_svn79_2418

><td class="source">							}<br></td></tr
><tr
id=sl_svn79_2419

><td class="source"><br></td></tr
><tr
id=sl_svn79_2420

><td class="source">			}<br></td></tr
><tr
id=sl_svn79_2421

><td class="source">			<br></td></tr
><tr
id=sl_svn79_2422

><td class="source">			<br></td></tr
><tr
id=sl_svn79_2423

><td class="source">			// take evasive action if closestBug found<br></td></tr
><tr
id=sl_svn79_2424

><td class="source"><br></td></tr
><tr
id=sl_svn79_2425

><td class="source">			if (foundClosestBug)<br></td></tr
><tr
id=sl_svn79_2426

><td class="source">			{<br></td></tr
><tr
id=sl_svn79_2427

><td class="source">				desiredVelocityV = MVector::zero;<br></td></tr
><tr
id=sl_svn79_2428

><td class="source"><br></td></tr
><tr
id=sl_svn79_2429

><td class="source">				desiredVelocityV *= scaleDesiredForceV;<br></td></tr
><tr
id=sl_svn79_2430

><td class="source">				truncVector(desiredVelocityV,maximumForceV);<br></td></tr
><tr
id=sl_svn79_2431

><td class="source">				outputForce.append( desiredVelocityV );<br></td></tr
><tr
id=sl_svn79_2432

><td class="source">			}<br></td></tr
><tr
id=sl_svn79_2433

><td class="source">			else<br></td></tr
><tr
id=sl_svn79_2434

><td class="source">				outputForce.append(MVector::zero);<br></td></tr
><tr
id=sl_svn79_2435

><td class="source"><br></td></tr
><tr
id=sl_svn79_2436

><td class="source">		}<br></td></tr
><tr
id=sl_svn79_2437

><td class="source">		else <br></td></tr
><tr
id=sl_svn79_2438

><td class="source">			outputForce.append(MVector::zero);<br></td></tr
><tr
id=sl_svn79_2439

><td class="source">	}<br></td></tr
><tr
id=sl_svn79_2440

><td class="source">	nearbyBugIndexList.clear();<br></td></tr
><tr
id=sl_svn79_2441

><td class="source">}<br></td></tr
><tr
id=sl_svn79_2442

><td class="source"><br></td></tr
><tr
id=sl_svn79_2443

><td class="source">/**************************************************************************************/<br></td></tr
><tr
id=sl_svn79_2444

><td class="source"><br></td></tr
><tr
id=sl_svn79_2445

><td class="source">void bbSteeringDesire::sdNeighborKeepDistance( MDataBlock&amp; block,<br></td></tr
><tr
id=sl_svn79_2446

><td class="source">								const MVectorArray &amp;positions,<br></td></tr
><tr
id=sl_svn79_2447

><td class="source">								const MVectorArray &amp;velocities,<br></td></tr
><tr
id=sl_svn79_2448

><td class="source">								MVectorArray &amp;outputForce )<br></td></tr
><tr
id=sl_svn79_2449

><td class="source">{ <br></td></tr
><tr
id=sl_svn79_2450

><td class="source">	// points and velocities should have the same length. If not return.<br></td></tr
><tr
id=sl_svn79_2451

><td class="source">	if( positions.length() != velocities.length() )<br></td></tr
><tr
id=sl_svn79_2452

><td class="source">		return;<br></td></tr
><tr
id=sl_svn79_2453

><td class="source"><br></td></tr
><tr
id=sl_svn79_2454

><td class="source">	// clear the output force array.<br></td></tr
><tr
id=sl_svn79_2455

><td class="source">	outputForce.clear();<br></td></tr
><tr
id=sl_svn79_2456

><td class="source"><br></td></tr
><tr
id=sl_svn79_2457

><td class="source">	// get field parameters.<br></td></tr
><tr
id=sl_svn79_2458

><td class="source">	double scaleDesiredForceV = 1.0;<br></td></tr
><tr
id=sl_svn79_2459

><td class="source">	if (inverseDesiredSteeringForceValue(block))<br></td></tr
><tr
id=sl_svn79_2460

><td class="source">		scaleDesiredForceV = -1.0;<br></td></tr
><tr
id=sl_svn79_2461

><td class="source"><br></td></tr
><tr
id=sl_svn79_2462

><td class="source">	bool useSensorRangeV = useSensorRangeValue(block);<br></td></tr
><tr
id=sl_svn79_2463

><td class="source">	double sensorRangeV = sensorRangeValue(block);<br></td></tr
><tr
id=sl_svn79_2464

><td class="source">	bool useSensorAngleV = useSensorAngleValue(block);<br></td></tr
><tr
id=sl_svn79_2465

><td class="source">	double sensorAngle = sensorAngleValue(block);<br></td></tr
><tr
id=sl_svn79_2466

><td class="source"><br></td></tr
><tr
id=sl_svn79_2467

><td class="source">	double maximumForceV = maximumForceValue(block);<br></td></tr
><tr
id=sl_svn79_2468

><td class="source">	double bugRadiusV = bugRadiusValue(block);<br></td></tr
><tr
id=sl_svn79_2469

><td class="source"><br></td></tr
><tr
id=sl_svn79_2470

><td class="source">	double toleranceV = toleranceValue(block);<br></td></tr
><tr
id=sl_svn79_2471

><td class="source">	double desiredSpeedV = desiredSpeedValue(block);<br></td></tr
><tr
id=sl_svn79_2472

><td class="source">	double distance = stoppingRangeValue(block);<br></td></tr
><tr
id=sl_svn79_2473

><td class="source"><br></td></tr
><tr
id=sl_svn79_2474

><td class="source">	// alignment steering<br></td></tr
><tr
id=sl_svn79_2475

><td class="source">	int posSize = positions.length();<br></td></tr
><tr
id=sl_svn79_2476

><td class="source">	<br></td></tr
><tr
id=sl_svn79_2477

><td class="source">	MVector desiredVelocityV;<br></td></tr
><tr
id=sl_svn79_2478

><td class="source">	MVector positionOffset;<br></td></tr
><tr
id=sl_svn79_2479

><td class="source"><br></td></tr
><tr
id=sl_svn79_2480

><td class="source">	double nearestBugDistance = MAX_DOUBLE;<br></td></tr
><tr
id=sl_svn79_2481

><td class="source"><br></td></tr
><tr
id=sl_svn79_2482

><td class="source"><br></td></tr
><tr
id=sl_svn79_2483

><td class="source">	int i =0;<br></td></tr
><tr
id=sl_svn79_2484

><td class="source">	int j =0;<br></td></tr
><tr
id=sl_svn79_2485

><td class="source"><br></td></tr
><tr
id=sl_svn79_2486

><td class="source">	double currDistance;<br></td></tr
><tr
id=sl_svn79_2487

><td class="source"><br></td></tr
><tr
id=sl_svn79_2488

><td class="source">	int nearestBugIndex = -1;<br></td></tr
><tr
id=sl_svn79_2489

><td class="source">	MVector nearestBugOffset;<br></td></tr
><tr
id=sl_svn79_2490

><td class="source"><br></td></tr
><tr
id=sl_svn79_2491

><td class="source">	MIntArray nearbyBugIndexList;<br></td></tr
><tr
id=sl_svn79_2492

><td class="source">	int nearbyBugIndexListSize;<br></td></tr
><tr
id=sl_svn79_2493

><td class="source"><br></td></tr
><tr
id=sl_svn79_2494

><td class="source">	for (i; i &lt; posSize; i ++ )<br></td></tr
><tr
id=sl_svn79_2495

><td class="source">	{<br></td></tr
><tr
id=sl_svn79_2496

><td class="source">		getNearbyBugs(positions,i,velocities[i],useSensorRangeV,useSensorAngleV,sensorRangeV,sensorAngle,nearbyBugIndexList);<br></td></tr
><tr
id=sl_svn79_2497

><td class="source">		nearbyBugIndexListSize= nearbyBugIndexList.length();<br></td></tr
><tr
id=sl_svn79_2498

><td class="source">	<br></td></tr
><tr
id=sl_svn79_2499

><td class="source">		if (nearbyBugIndexListSize &gt; 0)<br></td></tr
><tr
id=sl_svn79_2500

><td class="source">		{<br></td></tr
><tr
id=sl_svn79_2501

><td class="source">			nearestBugDistance = MAX_DOUBLE;<br></td></tr
><tr
id=sl_svn79_2502

><td class="source">			nearestBugIndex = -1;<br></td></tr
><tr
id=sl_svn79_2503

><td class="source"><br></td></tr
><tr
id=sl_svn79_2504

><td class="source">			// find nearest Bug<br></td></tr
><tr
id=sl_svn79_2505

><td class="source">			for (j=0; j &lt; nearbyBugIndexListSize; j++)<br></td></tr
><tr
id=sl_svn79_2506

><td class="source">			{<br></td></tr
><tr
id=sl_svn79_2507

><td class="source">				positionOffset = positions[i] -  positions[nearbyBugIndexList[j]];<br></td></tr
><tr
id=sl_svn79_2508

><td class="source">				currDistance = positionOffset.length();<br></td></tr
><tr
id=sl_svn79_2509

><td class="source"><br></td></tr
><tr
id=sl_svn79_2510

><td class="source">				if ( currDistance &lt; nearestBugDistance )<br></td></tr
><tr
id=sl_svn79_2511

><td class="source">				{<br></td></tr
><tr
id=sl_svn79_2512

><td class="source">					nearestBugDistance = currDistance;<br></td></tr
><tr
id=sl_svn79_2513

><td class="source">					nearestBugIndex = nearbyBugIndexList[j];<br></td></tr
><tr
id=sl_svn79_2514

><td class="source">					nearestBugOffset = positionOffset;<br></td></tr
><tr
id=sl_svn79_2515

><td class="source">				}<br></td></tr
><tr
id=sl_svn79_2516

><td class="source">			}<br></td></tr
><tr
id=sl_svn79_2517

><td class="source"><br></td></tr
><tr
id=sl_svn79_2518

><td class="source">			//<br></td></tr
><tr
id=sl_svn79_2519

><td class="source"><br></td></tr
><tr
id=sl_svn79_2520

><td class="source">			if (nearestBugIndex)<br></td></tr
><tr
id=sl_svn79_2521

><td class="source">			{<br></td></tr
><tr
id=sl_svn79_2522

><td class="source">				if (! ( ((distance - toleranceV) &lt; nearestBugDistance)  &amp;&amp;<br></td></tr
><tr
id=sl_svn79_2523

><td class="source">					    ((distance + toleranceV) &gt; nearestBugDistance) ) )<br></td></tr
><tr
id=sl_svn79_2524

><td class="source">				{<br></td></tr
><tr
id=sl_svn79_2525

><td class="source">					desiredVelocityV = velocities[i];<br></td></tr
><tr
id=sl_svn79_2526

><td class="source">					desiredVelocityV.normalize();<br></td></tr
><tr
id=sl_svn79_2527

><td class="source">					desiredVelocityV *= distance;<br></td></tr
><tr
id=sl_svn79_2528

><td class="source"><br></td></tr
><tr
id=sl_svn79_2529

><td class="source">					desiredVelocityV = positions[i] + desiredVelocityV - positions[nearestBugIndex];<br></td></tr
><tr
id=sl_svn79_2530

><td class="source">					desiredVelocityV.normalize();<br></td></tr
><tr
id=sl_svn79_2531

><td class="source">					desiredVelocityV *= distance;<br></td></tr
><tr
id=sl_svn79_2532

><td class="source">					<br></td></tr
><tr
id=sl_svn79_2533

><td class="source">					seekSteering(desiredVelocityV,velocities[i],desiredSpeedV,scaleDesiredForceV,maximumForceV);			<br></td></tr
><tr
id=sl_svn79_2534

><td class="source">					outputForce.append( desiredVelocityV );<br></td></tr
><tr
id=sl_svn79_2535

><td class="source">				}<br></td></tr
><tr
id=sl_svn79_2536

><td class="source">				else<br></td></tr
><tr
id=sl_svn79_2537

><td class="source">					outputForce.append(MVector::zero);<br></td></tr
><tr
id=sl_svn79_2538

><td class="source">			}<br></td></tr
><tr
id=sl_svn79_2539

><td class="source">			else <br></td></tr
><tr
id=sl_svn79_2540

><td class="source">				outputForce.append(MVector::zero);<br></td></tr
><tr
id=sl_svn79_2541

><td class="source">		}<br></td></tr
><tr
id=sl_svn79_2542

><td class="source">	}<br></td></tr
><tr
id=sl_svn79_2543

><td class="source">	nearbyBugIndexList.clear();<br></td></tr
><tr
id=sl_svn79_2544

><td class="source">}<br></td></tr
><tr
id=sl_svn79_2545

><td class="source"><br></td></tr
><tr
id=sl_svn79_2546

><td class="source">/*************************************************************************************************/<br></td></tr
><tr
id=sl_svn79_2547

><td class="source"><br></td></tr
><tr
id=sl_svn79_2548

><td class="source">void bbSteeringDesire::sdNeighborOportunism( MDataBlock&amp; block,<br></td></tr
><tr
id=sl_svn79_2549

><td class="source">								const MVectorArray &amp;positions,<br></td></tr
><tr
id=sl_svn79_2550

><td class="source">								const MVectorArray &amp;velocities,<br></td></tr
><tr
id=sl_svn79_2551

><td class="source">								MVectorArray &amp;outputForce )<br></td></tr
><tr
id=sl_svn79_2552

><td class="source">{ <br></td></tr
><tr
id=sl_svn79_2553

><td class="source">/*	// points and velocities should have the same length. If not return.<br></td></tr
><tr
id=sl_svn79_2554

><td class="source">	if( positions.length() != velocities.length() )<br></td></tr
><tr
id=sl_svn79_2555

><td class="source">		return;<br></td></tr
><tr
id=sl_svn79_2556

><td class="source"><br></td></tr
><tr
id=sl_svn79_2557

><td class="source">	// clear the output force array.<br></td></tr
><tr
id=sl_svn79_2558

><td class="source">	outputForce.clear();<br></td></tr
><tr
id=sl_svn79_2559

><td class="source"><br></td></tr
><tr
id=sl_svn79_2560

><td class="source">	// get field parameters.<br></td></tr
><tr
id=sl_svn79_2561

><td class="source">	double scaleDesiredForceV = 1.0;<br></td></tr
><tr
id=sl_svn79_2562

><td class="source">	if (inverseDesiredSteeringForceValue(block))<br></td></tr
><tr
id=sl_svn79_2563

><td class="source">		scaleDesiredForceV = -1.0;<br></td></tr
><tr
id=sl_svn79_2564

><td class="source"><br></td></tr
><tr
id=sl_svn79_2565

><td class="source">	bool useSensorRangeV = useSensorRangeValue(block);<br></td></tr
><tr
id=sl_svn79_2566

><td class="source">	double sensorRangeV = sensorRangeValue(block);<br></td></tr
><tr
id=sl_svn79_2567

><td class="source">	bool useSensorAngleV = useSensorAngleValue(block);<br></td></tr
><tr
id=sl_svn79_2568

><td class="source">	double sensorAngle = sensorAngleValue(block);<br></td></tr
><tr
id=sl_svn79_2569

><td class="source"><br></td></tr
><tr
id=sl_svn79_2570

><td class="source">	double maximumForceV = maximumForceValue(block);<br></td></tr
><tr
id=sl_svn79_2571

><td class="source">	double bugRadiusV = bugRadiusValue(block);<br></td></tr
><tr
id=sl_svn79_2572

><td class="source"><br></td></tr
><tr
id=sl_svn79_2573

><td class="source">	double toleranceV = toleranceValue(block);<br></td></tr
><tr
id=sl_svn79_2574

><td class="source">	double desiredSpeedV = desiredSpeedValue(block);<br></td></tr
><tr
id=sl_svn79_2575

><td class="source"><br></td></tr
><tr
id=sl_svn79_2576

><td class="source">	double angleTolerance = 1.047;<br></td></tr
><tr
id=sl_svn79_2577

><td class="source"><br></td></tr
><tr
id=sl_svn79_2578

><td class="source">	angleTolerance /=2;<br></td></tr
><tr
id=sl_svn79_2579

><td class="source"><br></td></tr
><tr
id=sl_svn79_2580

><td class="source">	// alignment steering<br></td></tr
><tr
id=sl_svn79_2581

><td class="source">	int posSize = positions.length();<br></td></tr
><tr
id=sl_svn79_2582

><td class="source">	<br></td></tr
><tr
id=sl_svn79_2583

><td class="source">	MVector desiredVelocityV;<br></td></tr
><tr
id=sl_svn79_2584

><td class="source">	MVector positionOffset;<br></td></tr
><tr
id=sl_svn79_2585

><td class="source"><br></td></tr
><tr
id=sl_svn79_2586

><td class="source">	double nearestBugDistance = MAX_DOUBLE;<br></td></tr
><tr
id=sl_svn79_2587

><td class="source"><br></td></tr
><tr
id=sl_svn79_2588

><td class="source"><br></td></tr
><tr
id=sl_svn79_2589

><td class="source">	int i =0;<br></td></tr
><tr
id=sl_svn79_2590

><td class="source">	int j =0;<br></td></tr
><tr
id=sl_svn79_2591

><td class="source">	int e;<br></td></tr
><tr
id=sl_svn79_2592

><td class="source"><br></td></tr
><tr
id=sl_svn79_2593

><td class="source">	MIntArray nearbyBugIndexList;<br></td></tr
><tr
id=sl_svn79_2594

><td class="source">	int nearbyBugIndexListSize;<br></td></tr
><tr
id=sl_svn79_2595

><td class="source"><br></td></tr
><tr
id=sl_svn79_2596

><td class="source">	for (i; i &lt; posSize; i ++ )<br></td></tr
><tr
id=sl_svn79_2597

><td class="source">	{<br></td></tr
><tr
id=sl_svn79_2598

><td class="source">		getNearbyBugs(positions,i,velocities[i],useSensorRangeV,useSensorAngleV,sensorRangeV,sensorAngle,nearbyBugIndexList);<br></td></tr
><tr
id=sl_svn79_2599

><td class="source">		nearbyBugIndexListSize= nearbyBugIndexList.length();<br></td></tr
><tr
id=sl_svn79_2600

><td class="source">	<br></td></tr
><tr
id=sl_svn79_2601

><td class="source">		if (nearbyBugIndexListSize &gt; 0)<br></td></tr
><tr
id=sl_svn79_2602

><td class="source">		{<br></td></tr
><tr
id=sl_svn79_2603

><td class="source">			// calculate angles between bug and neighbors<br></td></tr
><tr
id=sl_svn79_2604

><td class="source"><br></td></tr
><tr
id=sl_svn79_2605

><td class="source">			MDoubleArray nearbyAngle(nearbyBugIndexListSize,0.0);<br></td></tr
><tr
id=sl_svn79_2606

><td class="source">			MDoubleArray nearbyAngleSorted;<br></td></tr
><tr
id=sl_svn79_2607

><td class="source"><br></td></tr
><tr
id=sl_svn79_2608

><td class="source">			for (e=0; e &lt; nearbyBugIndexListSize; e++)<br></td></tr
><tr
id=sl_svn79_2609

><td class="source">				nearbyAngle[e] = velocities[i].angle(velocities[nearbyBugIndexList[e]]);<br></td></tr
><tr
id=sl_svn79_2610

><td class="source"><br></td></tr
><tr
id=sl_svn79_2611

><td class="source">			// find median<br></td></tr
><tr
id=sl_svn79_2612

><td class="source"><br></td></tr
><tr
id=sl_svn79_2613

><td class="source">			nearbyAngleSorted.copy(nearbyAngle);<br></td></tr
><tr
id=sl_svn79_2614

><td class="source">			shellSort(nearbyAngleSorted);<br></td></tr
><tr
id=sl_svn79_2615

><td class="source">			double nearbyAngleMedian = median(nearbyAngleSorted);<br></td></tr
><tr
id=sl_svn79_2616

><td class="source">			<br></td></tr
><tr
id=sl_svn79_2617

><td class="source">			// find median vector<br></td></tr
><tr
id=sl_svn79_2618

><td class="source"><br></td></tr
><tr
id=sl_svn79_2619

><td class="source">			MIntArray sortedNearbyBugIndexList(nearbyBugIndexListSize,0);<br></td></tr
><tr
id=sl_svn79_2620

><td class="source">			<br></td></tr
><tr
id=sl_svn79_2621

><td class="source">			for (int a=0; a &lt;nearbyBugIndexListSize; a++)<br></td></tr
><tr
id=sl_svn79_2622

><td class="source">			{<br></td></tr
><tr
id=sl_svn79_2623

><td class="source">				int b=-1;<br></td></tr
><tr
id=sl_svn79_2624

><td class="source"><br></td></tr
><tr
id=sl_svn79_2625

><td class="source">				do<br></td></tr
><tr
id=sl_svn79_2626

><td class="source">				{<br></td></tr
><tr
id=sl_svn79_2627

><td class="source">					b++;<br></td></tr
><tr
id=sl_svn79_2628

><td class="source">				}<br></td></tr
><tr
id=sl_svn79_2629

><td class="source">				while (nearbyAngleSorted[a] == nearbyAngle[b]);<br></td></tr
><tr
id=sl_svn79_2630

><td class="source"><br></td></tr
><tr
id=sl_svn79_2631

><td class="source">				sortedNearbyBugIndexList[a] = b;<br></td></tr
><tr
id=sl_svn79_2632

><td class="source">			}<br></td></tr
><tr
id=sl_svn79_2633

><td class="source"><br></td></tr
><tr
id=sl_svn79_2634

><td class="source"><br></td></tr
><tr
id=sl_svn79_2635

><td class="source">			MVector medianVector;<br></td></tr
><tr
id=sl_svn79_2636

><td class="source"><br></td></tr
><tr
id=sl_svn79_2637

><td class="source">			e = -1 ;<br></td></tr
><tr
id=sl_svn79_2638

><td class="source"><br></td></tr
><tr
id=sl_svn79_2639

><td class="source">			do<br></td></tr
><tr
id=sl_svn79_2640

><td class="source">			{<br></td></tr
><tr
id=sl_svn79_2641

><td class="source">				e++;<br></td></tr
><tr
id=sl_svn79_2642

><td class="source">			}<br></td></tr
><tr
id=sl_svn79_2643

><td class="source">			while (nearbyAngleMedian &lt;= nearbyAngleSorted[e]);<br></td></tr
><tr
id=sl_svn79_2644

><td class="source"><br></td></tr
><tr
id=sl_svn79_2645

><td class="source">		<br></td></tr
><tr
id=sl_svn79_2646

><td class="source">			if (nearbyAngleMedian == nearbyAngle[e])<br></td></tr
><tr
id=sl_svn79_2647

><td class="source">				medianVector = velocities[sortedNearbyBugIndexList[e]];<br></td></tr
><tr
id=sl_svn79_2648

><td class="source">			else<br></td></tr
><tr
id=sl_svn79_2649

><td class="source">				if (e &gt; 0)<br></td></tr
><tr
id=sl_svn79_2650

><td class="source">					medianVector = 0.5*(velocities[sortedNearbyBugIndexList[e]]+velocities[sortedNearbyBugIndexList[e-1]]);<br></td></tr
><tr
id=sl_svn79_2651

><td class="source"><br></td></tr
><tr
id=sl_svn79_2652

><td class="source"><br></td></tr
><tr
id=sl_svn79_2653

><td class="source">			// diff Angle &gt; <br></td></tr
><tr
id=sl_svn79_2654

><td class="source"><br></td></tr
><tr
id=sl_svn79_2655

><td class="source">			double diffAngle = velocities[i].angle(medianVector);<br></td></tr
><tr
id=sl_svn79_2656

><td class="source">			<br></td></tr
><tr
id=sl_svn79_2657

><td class="source">			if (diffAngle &gt; angleTolerance )<br></td></tr
><tr
id=sl_svn79_2658

><td class="source">			{<br></td></tr
><tr
id=sl_svn79_2659

><td class="source">				desiredVelocityV =  medianVector - velocities[i];<br></td></tr
><tr
id=sl_svn79_2660

><td class="source">				desiredVelocityV *= scaleDesiredForceV;<br></td></tr
><tr
id=sl_svn79_2661

><td class="source">				truncVector(desiredVelocityV,maximumForceV);<br></td></tr
><tr
id=sl_svn79_2662

><td class="source">				outputForce.append( desiredVelocityV );	seekSteering(desiredVelocityV,velocities[i],desiredSpeedV,scaleDesiredForceV,maximumForceV);					<br></td></tr
><tr
id=sl_svn79_2663

><td class="source">			}<br></td></tr
><tr
id=sl_svn79_2664

><td class="source">			else<br></td></tr
><tr
id=sl_svn79_2665

><td class="source">				outputForce.append( MVector::zero );<br></td></tr
><tr
id=sl_svn79_2666

><td class="source">		}<br></td></tr
><tr
id=sl_svn79_2667

><td class="source">		else <br></td></tr
><tr
id=sl_svn79_2668

><td class="source">			outputForce.append(MVector::zero);<br></td></tr
><tr
id=sl_svn79_2669

><td class="source">	}<br></td></tr
><tr
id=sl_svn79_2670

><td class="source">	nearbyBugIndexList.clear(); */<br></td></tr
><tr
id=sl_svn79_2671

><td class="source">}<br></td></tr
><tr
id=sl_svn79_2672

><td class="source"><br></td></tr
><tr
id=sl_svn79_2673

><td class="source">/**************************************************************************************/<br></td></tr
><tr
id=sl_svn79_2674

><td class="source">// steering desire: curve following<br></td></tr
><tr
id=sl_svn79_2675

><td class="source"><br></td></tr
><tr
id=sl_svn79_2676

><td class="source">void bbSteeringDesire::sdCurveFollowing( MDataBlock&amp; block,<br></td></tr
><tr
id=sl_svn79_2677

><td class="source">								const MVectorArray &amp;positions,<br></td></tr
><tr
id=sl_svn79_2678

><td class="source">								const MVectorArray &amp;velocities,<br></td></tr
><tr
id=sl_svn79_2679

><td class="source">								MVectorArray &amp;outputForce )<br></td></tr
><tr
id=sl_svn79_2680

><td class="source">{ <br></td></tr
><tr
id=sl_svn79_2681

><td class="source">	MStatus stat;<br></td></tr
><tr
id=sl_svn79_2682

><td class="source"><br></td></tr
><tr
id=sl_svn79_2683

><td class="source">	if( positions.length() != velocities.length() )	return;<br></td></tr
><tr
id=sl_svn79_2684

><td class="source">	outputForce.clear();<br></td></tr
><tr
id=sl_svn79_2685

><td class="source"><br></td></tr
><tr
id=sl_svn79_2686

><td class="source">	// get attribute data<br></td></tr
><tr
id=sl_svn79_2687

><td class="source"><br></td></tr
><tr
id=sl_svn79_2688

><td class="source">	double scaleDesiredForceV = 1.0;<br></td></tr
><tr
id=sl_svn79_2689

><td class="source">	if (inverseDesiredSteeringForceValue(block))<br></td></tr
><tr
id=sl_svn79_2690

><td class="source">		scaleDesiredForceV = -1.0;<br></td></tr
><tr
id=sl_svn79_2691

><td class="source"><br></td></tr
><tr
id=sl_svn79_2692

><td class="source">	double desiredSpeedV = desiredSpeedValue(block);<br></td></tr
><tr
id=sl_svn79_2693

><td class="source">	double maximumForceV = maximumForceValue(block);<br></td></tr
><tr
id=sl_svn79_2694

><td class="source">	double targetRadiusV = targetRadiusValue(block);<br></td></tr
><tr
id=sl_svn79_2695

><td class="source">	double toleranceV = toleranceValue(block);<br></td></tr
><tr
id=sl_svn79_2696

><td class="source">	double sensorRangeV = sensorRangeValue(block);<br></td></tr
><tr
id=sl_svn79_2697

><td class="source"><br></td></tr
><tr
id=sl_svn79_2698

><td class="source">	// get curve<br></td></tr
><tr
id=sl_svn79_2699

><td class="source"><br></td></tr
><tr
id=sl_svn79_2700

><td class="source">	MArrayDataHandle inputCurveAD = block.inputArrayValue( inputCurve, &amp;stat);<br></td></tr
><tr
id=sl_svn79_2701

><td class="source">	if( !stat ) { stat.perror(&quot;ERROR getting inputCurvedata&quot;); return;} <br></td></tr
><tr
id=sl_svn79_2702

><td class="source"><br></td></tr
><tr
id=sl_svn79_2703

><td class="source">	MDataHandle elementHandle;<br></td></tr
><tr
id=sl_svn79_2704

><td class="source">	if(!stat) { MGlobal::displayError(&quot;bbSteeringDesire::compute inputPointArrayData&quot;); }<br></td></tr
><tr
id=sl_svn79_2705

><td class="source"><br></td></tr
><tr
id=sl_svn79_2706

><td class="source">	int numCurve = inputCurveAD.elementCount();<br></td></tr
><tr
id=sl_svn79_2707

><td class="source">	inputCurveAD.jumpToElement(0);<br></td></tr
><tr
id=sl_svn79_2708

><td class="source"><br></td></tr
><tr
id=sl_svn79_2709

><td class="source">	short inputSelectionV = inputSelectionValue(block);<br></td></tr
><tr
id=sl_svn79_2710

><td class="source"><br></td></tr
><tr
id=sl_svn79_2711

><td class="source">	if ((numCurve == 1)||(inputSelectionV==IS_INDEX))<br></td></tr
><tr
id=sl_svn79_2712

><td class="source">	{<br></td></tr
><tr
id=sl_svn79_2713

><td class="source">		stat = inputCurveAD.jumpToElement(inputIndexValue(block));<br></td></tr
><tr
id=sl_svn79_2714

><td class="source">		if (stat==MS::kSuccess)<br></td></tr
><tr
id=sl_svn79_2715

><td class="source">		{<br></td></tr
><tr
id=sl_svn79_2716

><td class="source">			elementHandle = inputCurveAD.inputValue(&amp;stat);<br></td></tr
><tr
id=sl_svn79_2717

><td class="source">			MObject curve = elementHandle.asNurbsCurveTransformed();<br></td></tr
><tr
id=sl_svn79_2718

><td class="source">			MFnNurbsCurve curveFn( curve, &amp;stat ); <br></td></tr
><tr
id=sl_svn79_2719

><td class="source"><br></td></tr
><tr
id=sl_svn79_2720

><td class="source">			if( !stat )	{ stat.perror(&quot;ERROR creating curve function set&quot;);	return;	}<br></td></tr
><tr
id=sl_svn79_2721

><td class="source">				<br></td></tr
><tr
id=sl_svn79_2722

><td class="source">			// init variables<br></td></tr
><tr
id=sl_svn79_2723

><td class="source"><br></td></tr
><tr
id=sl_svn79_2724

><td class="source">			int posSize = positions.length();<br></td></tr
><tr
id=sl_svn79_2725

><td class="source">			<br></td></tr
><tr
id=sl_svn79_2726

><td class="source">			MVector desiredVelocityV(0.0,0.0,0.0);<br></td></tr
><tr
id=sl_svn79_2727

><td class="source">			MVector predictedPos;<br></td></tr
><tr
id=sl_svn79_2728

><td class="source">			MVector unitVelocity;<br></td></tr
><tr
id=sl_svn79_2729

><td class="source">			MPoint predictedPosPoint;<br></td></tr
><tr
id=sl_svn79_2730

><td class="source">			MPoint closestCurvePoint;<br></td></tr
><tr
id=sl_svn79_2731

><td class="source"><br></td></tr
><tr
id=sl_svn79_2732

><td class="source">			double pointParameter;<br></td></tr
><tr
id=sl_svn79_2733

><td class="source"><br></td></tr
><tr
id=sl_svn79_2734

><td class="source">			for (int i=0; i &lt; posSize; i ++ )<br></td></tr
><tr
id=sl_svn79_2735

><td class="source">			{<br></td></tr
><tr
id=sl_svn79_2736

><td class="source">				unitVelocity = velocities[i];<br></td></tr
><tr
id=sl_svn79_2737

><td class="source">				unitVelocity.normalize();<br></td></tr
><tr
id=sl_svn79_2738

><td class="source"><br></td></tr
><tr
id=sl_svn79_2739

><td class="source">				predictedPosPoint = MPoint(positions[i] + sensorRangeV * unitVelocity);<br></td></tr
><tr
id=sl_svn79_2740

><td class="source">				closestCurvePoint = curveFn.closestPoint(predictedPosPoint,&amp;pointParameter,toleranceV);<br></td></tr
><tr
id=sl_svn79_2741

><td class="source">						<br></td></tr
><tr
id=sl_svn79_2742

><td class="source">				if (MVector(predictedPosPoint-closestCurvePoint).length() &lt;= targetRadiusV)<br></td></tr
><tr
id=sl_svn79_2743

><td class="source">				{<br></td></tr
><tr
id=sl_svn79_2744

><td class="source">					outputForce.append(MVector::zero);<br></td></tr
><tr
id=sl_svn79_2745

><td class="source">				}<br></td></tr
><tr
id=sl_svn79_2746

><td class="source">				else<br></td></tr
><tr
id=sl_svn79_2747

><td class="source">				{<br></td></tr
><tr
id=sl_svn79_2748

><td class="source">					desiredVelocityV = MVector(closestCurvePoint) - positions[i];<br></td></tr
><tr
id=sl_svn79_2749

><td class="source">					seekSteering(desiredVelocityV,velocities[i],desiredSpeedV,scaleDesiredForceV,maximumForceV);<br></td></tr
><tr
id=sl_svn79_2750

><td class="source">					outputForce.append( desiredVelocityV );<br></td></tr
><tr
id=sl_svn79_2751

><td class="source">				}	<br></td></tr
><tr
id=sl_svn79_2752

><td class="source">			}<br></td></tr
><tr
id=sl_svn79_2753

><td class="source">		}<br></td></tr
><tr
id=sl_svn79_2754

><td class="source">	}<br></td></tr
><tr
id=sl_svn79_2755

><td class="source">}<br></td></tr
><tr
id=sl_svn79_2756

><td class="source">/**************************************************************************************/<br></td></tr
><tr
id=sl_svn79_2757

><td class="source">// steering desire: path alignment<br></td></tr
><tr
id=sl_svn79_2758

><td class="source"><br></td></tr
><tr
id=sl_svn79_2759

><td class="source">void bbSteeringDesire::sdSurfaceFollowing( MDataBlock&amp; block,<br></td></tr
><tr
id=sl_svn79_2760

><td class="source">								const MVectorArray &amp;positions,<br></td></tr
><tr
id=sl_svn79_2761

><td class="source">								const MVectorArray &amp;velocities,<br></td></tr
><tr
id=sl_svn79_2762

><td class="source">								MVectorArray &amp;outputForce )<br></td></tr
><tr
id=sl_svn79_2763

><td class="source">{ <br></td></tr
><tr
id=sl_svn79_2764

><td class="source">	MStatus stat;<br></td></tr
><tr
id=sl_svn79_2765

><td class="source">	// points and velocities should have the same length. If not return.<br></td></tr
><tr
id=sl_svn79_2766

><td class="source">	<br></td></tr
><tr
id=sl_svn79_2767

><td class="source">	if( positions.length() != velocities.length() )<br></td></tr
><tr
id=sl_svn79_2768

><td class="source">		return;<br></td></tr
><tr
id=sl_svn79_2769

><td class="source"><br></td></tr
><tr
id=sl_svn79_2770

><td class="source">	outputForce.clear();<br></td></tr
><tr
id=sl_svn79_2771

><td class="source"><br></td></tr
><tr
id=sl_svn79_2772

><td class="source">	bool useSensorRangeV = useSensorRangeValue(block);<br></td></tr
><tr
id=sl_svn79_2773

><td class="source">	double sensorRangeV = sensorRangeValue(block);<br></td></tr
><tr
id=sl_svn79_2774

><td class="source">	<br></td></tr
><tr
id=sl_svn79_2775

><td class="source">	bool useSensorAngleV = useSensorAngleValue(block);<br></td></tr
><tr
id=sl_svn79_2776

><td class="source">	double sensorAngle = sensorAngleValue(block);<br></td></tr
><tr
id=sl_svn79_2777

><td class="source">	<br></td></tr
><tr
id=sl_svn79_2778

><td class="source">	double scaleDesiredForceV = 1.0;<br></td></tr
><tr
id=sl_svn79_2779

><td class="source">	if (inverseDesiredSteeringForceValue(block))<br></td></tr
><tr
id=sl_svn79_2780

><td class="source">		scaleDesiredForceV = -1.0;<br></td></tr
><tr
id=sl_svn79_2781

><td class="source"><br></td></tr
><tr
id=sl_svn79_2782

><td class="source">	double desiredSpeedV = desiredSpeedValue(block);<br></td></tr
><tr
id=sl_svn79_2783

><td class="source">	double maximumForceV = maximumForceValue(block);<br></td></tr
><tr
id=sl_svn79_2784

><td class="source">	double targetRadiusV = targetRadiusValue(block);<br></td></tr
><tr
id=sl_svn79_2785

><td class="source">	// get surface<br></td></tr
><tr
id=sl_svn79_2786

><td class="source"><br></td></tr
><tr
id=sl_svn79_2787

><td class="source"><br></td></tr
><tr
id=sl_svn79_2788

><td class="source">	MArrayDataHandle inputSurfaceAD = block.inputArrayValue( inputSurface, &amp;stat);<br></td></tr
><tr
id=sl_svn79_2789

><td class="source">	if( !stat ) { stat.perror(&quot;ERROR getting inputSurfacedata&quot;); return;} <br></td></tr
><tr
id=sl_svn79_2790

><td class="source"><br></td></tr
><tr
id=sl_svn79_2791

><td class="source">	MDataHandle elementHandle;<br></td></tr
><tr
id=sl_svn79_2792

><td class="source">	if(!stat) {MGlobal::displayError(&quot;bbSteeringDesire::compute inputSurfaceArrayData&quot;);}<br></td></tr
><tr
id=sl_svn79_2793

><td class="source"><br></td></tr
><tr
id=sl_svn79_2794

><td class="source">	stat = inputSurfaceAD.jumpToElement(inputIndexValue(block));<br></td></tr
><tr
id=sl_svn79_2795

><td class="source">	<br></td></tr
><tr
id=sl_svn79_2796

><td class="source">	if (stat==MS::kSuccess)<br></td></tr
><tr
id=sl_svn79_2797

><td class="source">	{<br></td></tr
><tr
id=sl_svn79_2798

><td class="source">		elementHandle = inputSurfaceAD.inputValue(&amp;stat);<br></td></tr
><tr
id=sl_svn79_2799

><td class="source">		MObject surface = elementHandle.asNurbsSurfaceTransformed();<br></td></tr
><tr
id=sl_svn79_2800

><td class="source">		MFnNurbsSurface surfaceFn( surface, &amp;stat ); <br></td></tr
><tr
id=sl_svn79_2801

><td class="source"><br></td></tr
><tr
id=sl_svn79_2802

><td class="source">		if( !stat )	{ stat.perror(&quot;ERROR creating surface function set&quot;); return; }<br></td></tr
><tr
id=sl_svn79_2803

><td class="source">	<br></td></tr
><tr
id=sl_svn79_2804

><td class="source">		// path following<br></td></tr
><tr
id=sl_svn79_2805

><td class="source"><br></td></tr
><tr
id=sl_svn79_2806

><td class="source">		int posSize = positions.length();<br></td></tr
><tr
id=sl_svn79_2807

><td class="source">		<br></td></tr
><tr
id=sl_svn79_2808

><td class="source">		MVector desiredVelocityV(0.0,0.0,0.0);<br></td></tr
><tr
id=sl_svn79_2809

><td class="source">		MVector predictedPos;<br></td></tr
><tr
id=sl_svn79_2810

><td class="source">		MVector unitVelocity;<br></td></tr
><tr
id=sl_svn79_2811

><td class="source">		MPoint predictedPosPoint;<br></td></tr
><tr
id=sl_svn79_2812

><td class="source">		MPoint closestSurfacePoint;<br></td></tr
><tr
id=sl_svn79_2813

><td class="source">		MVector tangent;<br></td></tr
><tr
id=sl_svn79_2814

><td class="source">		<br></td></tr
><tr
id=sl_svn79_2815

><td class="source">		double epsilon = 0.01;<br></td></tr
><tr
id=sl_svn79_2816

><td class="source"><br></td></tr
><tr
id=sl_svn79_2817

><td class="source">		MString temp;<br></td></tr
><tr
id=sl_svn79_2818

><td class="source"><br></td></tr
><tr
id=sl_svn79_2819

><td class="source">		for (int i=0; i &lt; posSize; i ++ )<br></td></tr
><tr
id=sl_svn79_2820

><td class="source">		{<br></td></tr
><tr
id=sl_svn79_2821

><td class="source">			unitVelocity = velocities[i];<br></td></tr
><tr
id=sl_svn79_2822

><td class="source">			unitVelocity.normalize();<br></td></tr
><tr
id=sl_svn79_2823

><td class="source"><br></td></tr
><tr
id=sl_svn79_2824

><td class="source">			predictedPosPoint = MPoint(positions[i] + sensorRangeV * unitVelocity);<br></td></tr
><tr
id=sl_svn79_2825

><td class="source">			closestSurfacePoint = surfaceFn.closestPoint(predictedPosPoint);<br></td></tr
><tr
id=sl_svn79_2826

><td class="source"><br></td></tr
><tr
id=sl_svn79_2827

><td class="source">			if (MVector(predictedPosPoint-closestSurfacePoint).length() &lt;= targetRadiusV)<br></td></tr
><tr
id=sl_svn79_2828

><td class="source">			{<br></td></tr
><tr
id=sl_svn79_2829

><td class="source">				outputForce.append(MVector::zero);<br></td></tr
><tr
id=sl_svn79_2830

><td class="source">			}<br></td></tr
><tr
id=sl_svn79_2831

><td class="source">			else<br></td></tr
><tr
id=sl_svn79_2832

><td class="source">			{<br></td></tr
><tr
id=sl_svn79_2833

><td class="source">				desiredVelocityV = MVector(closestSurfacePoint) - positions[i];<br></td></tr
><tr
id=sl_svn79_2834

><td class="source">				seekSteering(desiredVelocityV,velocities[i],desiredSpeedV,scaleDesiredForceV,maximumForceV);<br></td></tr
><tr
id=sl_svn79_2835

><td class="source">				outputForce.append( desiredVelocityV );<br></td></tr
><tr
id=sl_svn79_2836

><td class="source">			}	<br></td></tr
><tr
id=sl_svn79_2837

><td class="source">		}	<br></td></tr
><tr
id=sl_svn79_2838

><td class="source">	}		<br></td></tr
><tr
id=sl_svn79_2839

><td class="source">}<br></td></tr
><tr
id=sl_svn79_2840

><td class="source"><br></td></tr
><tr
id=sl_svn79_2841

><td class="source">/**************************************************************************************/<br></td></tr
><tr
id=sl_svn79_2842

><td class="source">// steering desire: obstacle avoidance<br></td></tr
><tr
id=sl_svn79_2843

><td class="source"><br></td></tr
><tr
id=sl_svn79_2844

><td class="source">void bbSteeringDesire::sdSurfaceObstacleAvoidance( MDataBlock&amp; block,<br></td></tr
><tr
id=sl_svn79_2845

><td class="source">								const MVectorArray &amp;positions,<br></td></tr
><tr
id=sl_svn79_2846

><td class="source">								const MVectorArray &amp;velocities,<br></td></tr
><tr
id=sl_svn79_2847

><td class="source">								MVectorArray &amp;outputForce )<br></td></tr
><tr
id=sl_svn79_2848

><td class="source">{ <br></td></tr
><tr
id=sl_svn79_2849

><td class="source">	MStatus stat;<br></td></tr
><tr
id=sl_svn79_2850

><td class="source">	// points and velocities should have the same length. If not return.<br></td></tr
><tr
id=sl_svn79_2851

><td class="source">	<br></td></tr
><tr
id=sl_svn79_2852

><td class="source">	if( positions.length() != velocities.length() )	return;<br></td></tr
><tr
id=sl_svn79_2853

><td class="source"><br></td></tr
><tr
id=sl_svn79_2854

><td class="source">	outputForce.clear();<br></td></tr
><tr
id=sl_svn79_2855

><td class="source"><br></td></tr
><tr
id=sl_svn79_2856

><td class="source">//	bool useSensorRangeV = useSensorRangeValue(block);<br></td></tr
><tr
id=sl_svn79_2857

><td class="source">//	double sensorRangeV = sensorRangeValue(block);<br></td></tr
><tr
id=sl_svn79_2858

><td class="source">	<br></td></tr
><tr
id=sl_svn79_2859

><td class="source">//	bool useSensorAngleV = useSensorAngleValue(block);<br></td></tr
><tr
id=sl_svn79_2860

><td class="source">//	double sensorAngle = sensorAngleValue(block);<br></td></tr
><tr
id=sl_svn79_2861

><td class="source">	<br></td></tr
><tr
id=sl_svn79_2862

><td class="source">	double scaleDesiredForceV = 1.0;<br></td></tr
><tr
id=sl_svn79_2863

><td class="source">	if (inverseDesiredSteeringForceValue(block)) scaleDesiredForceV = -1.0;<br></td></tr
><tr
id=sl_svn79_2864

><td class="source"><br></td></tr
><tr
id=sl_svn79_2865

><td class="source">	double desiredSpeedV = desiredSpeedValue(block);<br></td></tr
><tr
id=sl_svn79_2866

><td class="source">	double maximumForceV = maximumForceValue(block);<br></td></tr
><tr
id=sl_svn79_2867

><td class="source">	double probeLengthV = probeLengthValue(block);<br></td></tr
><tr
id=sl_svn79_2868

><td class="source"><br></td></tr
><tr
id=sl_svn79_2869

><td class="source">	double toleranceV = toleranceValue(block);<br></td></tr
><tr
id=sl_svn79_2870

><td class="source"><br></td></tr
><tr
id=sl_svn79_2871

><td class="source">	int posSize = positions.length();<br></td></tr
><tr
id=sl_svn79_2872

><td class="source">	<br></td></tr
><tr
id=sl_svn79_2873

><td class="source">	MVector desiredVelocityV(0.0,0.0,0.0);<br></td></tr
><tr
id=sl_svn79_2874

><td class="source">	MVector unitVelocity;<br></td></tr
><tr
id=sl_svn79_2875

><td class="source"><br></td></tr
><tr
id=sl_svn79_2876

><td class="source">	// get surfaces<br></td></tr
><tr
id=sl_svn79_2877

><td class="source"><br></td></tr
><tr
id=sl_svn79_2878

><td class="source">		<br></td></tr
><tr
id=sl_svn79_2879

><td class="source">	MArrayDataHandle inputSurfaceAD = block.inputArrayValue( inputSurface, &amp;stat);<br></td></tr
><tr
id=sl_svn79_2880

><td class="source">	if( !stat ) { stat.perror(&quot;ERROR getting inputSurfacedata&quot;); return;} <br></td></tr
><tr
id=sl_svn79_2881

><td class="source"><br></td></tr
><tr
id=sl_svn79_2882

><td class="source">	MDataHandle elementHandle;<br></td></tr
><tr
id=sl_svn79_2883

><td class="source">	if(!stat) {MGlobal::displayError(&quot;bbSteeringDesire::compute inputSurfaceArrayData&quot;);}<br></td></tr
><tr
id=sl_svn79_2884

><td class="source"><br></td></tr
><tr
id=sl_svn79_2885

><td class="source">	int numSurface = inputSurfaceAD.elementCount();<br></td></tr
><tr
id=sl_svn79_2886

><td class="source">	inputSurfaceAD.jumpToElement(0);<br></td></tr
><tr
id=sl_svn79_2887

><td class="source"><br></td></tr
><tr
id=sl_svn79_2888

><td class="source">	short inputSelectionV = inputSelectionValue(block);<br></td></tr
><tr
id=sl_svn79_2889

><td class="source"><br></td></tr
><tr
id=sl_svn79_2890

><td class="source"><br></td></tr
><tr
id=sl_svn79_2891

><td class="source">	switch(inputSelectionV)<br></td></tr
><tr
id=sl_svn79_2892

><td class="source">	{<br></td></tr
><tr
id=sl_svn79_2893

><td class="source">		case IS_ALL:<br></td></tr
><tr
id=sl_svn79_2894

><td class="source">			{<br></td></tr
><tr
id=sl_svn79_2895

><td class="source">				MPoint intersectPoint;<br></td></tr
><tr
id=sl_svn79_2896

><td class="source">				double distance, uIP, vIP;<br></td></tr
><tr
id=sl_svn79_2897

><td class="source"><br></td></tr
><tr
id=sl_svn79_2898

><td class="source">				MDoubleArray shortestDistance(posSize,1.7E+308);<br></td></tr
><tr
id=sl_svn79_2899

><td class="source">				MDoubleArray shortestUIP(posSize,0.0); <br></td></tr
><tr
id=sl_svn79_2900

><td class="source">				MDoubleArray shortestVIP(posSize,0.0);<br></td></tr
><tr
id=sl_svn79_2901

><td class="source">				<br></td></tr
><tr
id=sl_svn79_2902

><td class="source">				MIntArray shortestSurface(posSize,0);<br></td></tr
><tr
id=sl_svn79_2903

><td class="source"><br></td></tr
><tr
id=sl_svn79_2904

><td class="source">				MVector uTangent, vTangent, uvPerpend;<br></td></tr
><tr
id=sl_svn79_2905

><td class="source"><br></td></tr
><tr
id=sl_svn79_2906

><td class="source">				// get shortest interesection values;<br></td></tr
><tr
id=sl_svn79_2907

><td class="source"><br></td></tr
><tr
id=sl_svn79_2908

><td class="source">				for (int i=0;i&lt;numSurface;i++)<br></td></tr
><tr
id=sl_svn79_2909

><td class="source">				{<br></td></tr
><tr
id=sl_svn79_2910

><td class="source">					elementHandle = inputSurfaceAD.inputValue(&amp;stat);<br></td></tr
><tr
id=sl_svn79_2911

><td class="source">					MObject surface = elementHandle.asNurbsSurfaceTransformed();<br></td></tr
><tr
id=sl_svn79_2912

><td class="source">					MFnNurbsSurface surfaceFn( surface, &amp;stat );<br></td></tr
><tr
id=sl_svn79_2913

><td class="source">					if( !stat )	{ stat.perror(&quot;ERROR creating surface function set&quot;); return; }<br></td></tr
><tr
id=sl_svn79_2914

><td class="source"><br></td></tr
><tr
id=sl_svn79_2915

><td class="source">					for (int e=0; e &lt; posSize; e++)<br></td></tr
><tr
id=sl_svn79_2916

><td class="source">					{<br></td></tr
><tr
id=sl_svn79_2917

><td class="source">						if (surfaceFn.intersect(positions[e],velocities[e],uIP,vIP,intersectPoint,toleranceV,MSpace::kObject,true,&amp;distance))<br></td></tr
><tr
id=sl_svn79_2918

><td class="source">						{<br></td></tr
><tr
id=sl_svn79_2919

><td class="source">							if (distance &lt; shortestDistance[e])<br></td></tr
><tr
id=sl_svn79_2920

><td class="source">							{<br></td></tr
><tr
id=sl_svn79_2921

><td class="source">								shortestDistance[e] = distance;<br></td></tr
><tr
id=sl_svn79_2922

><td class="source">								shortestUIP[e] = uIP;<br></td></tr
><tr
id=sl_svn79_2923

><td class="source">								shortestVIP[e] = vIP;<br></td></tr
><tr
id=sl_svn79_2924

><td class="source">								shortestSurface[e] = i;<br></td></tr
><tr
id=sl_svn79_2925

><td class="source">							}<br></td></tr
><tr
id=sl_svn79_2926

><td class="source">						}<br></td></tr
><tr
id=sl_svn79_2927

><td class="source">					}<br></td></tr
><tr
id=sl_svn79_2928

><td class="source">					inputSurfaceAD.next(); <br></td></tr
><tr
id=sl_svn79_2929

><td class="source">				}<br></td></tr
><tr
id=sl_svn79_2930

><td class="source"><br></td></tr
><tr
id=sl_svn79_2931

><td class="source">				// steer <br></td></tr
><tr
id=sl_svn79_2932

><td class="source">				for (int e=0; e &lt; posSize; e++)<br></td></tr
><tr
id=sl_svn79_2933

><td class="source">				{<br></td></tr
><tr
id=sl_svn79_2934

><td class="source">					if (shortestDistance[e] &lt;= probeLengthV)<br></td></tr
><tr
id=sl_svn79_2935

><td class="source">					{<br></td></tr
><tr
id=sl_svn79_2936

><td class="source">						inputSurfaceAD.jumpToElement(shortestSurface[e]); <br></td></tr
><tr
id=sl_svn79_2937

><td class="source">						elementHandle = inputSurfaceAD.inputValue(&amp;stat);<br></td></tr
><tr
id=sl_svn79_2938

><td class="source">						MObject surface = elementHandle.asNurbsSurfaceTransformed();<br></td></tr
><tr
id=sl_svn79_2939

><td class="source">						MFnNurbsSurface surfaceFn( surface, &amp;stat );<br></td></tr
><tr
id=sl_svn79_2940

><td class="source">						if( !stat )	{ stat.perror(&quot;ERROR creating surface function set&quot;); return; }<br></td></tr
><tr
id=sl_svn79_2941

><td class="source"><br></td></tr
><tr
id=sl_svn79_2942

><td class="source">						// calculate steering vector as perpendicular to tangent vectors <br></td></tr
><tr
id=sl_svn79_2943

><td class="source">						surfaceFn.getTangents(shortestUIP[e],shortestVIP[e],uTangent,vTangent);<br></td></tr
><tr
id=sl_svn79_2944

><td class="source">						uvPerpend = uTangent ^ vTangent;<br></td></tr
><tr
id=sl_svn79_2945

><td class="source">						desiredVelocityV = uvPerpend;<br></td></tr
><tr
id=sl_svn79_2946

><td class="source">								<br></td></tr
><tr
id=sl_svn79_2947

><td class="source">						seekSteering(desiredVelocityV,velocities[i],desiredSpeedV,scaleDesiredForceV,maximumForceV);<br></td></tr
><tr
id=sl_svn79_2948

><td class="source">						outputForce.append( desiredVelocityV );<br></td></tr
><tr
id=sl_svn79_2949

><td class="source">					}<br></td></tr
><tr
id=sl_svn79_2950

><td class="source">					else<br></td></tr
><tr
id=sl_svn79_2951

><td class="source">					{<br></td></tr
><tr
id=sl_svn79_2952

><td class="source">						outputForce.append(MVector::zero);<br></td></tr
><tr
id=sl_svn79_2953

><td class="source">					}<br></td></tr
><tr
id=sl_svn79_2954

><td class="source">					<br></td></tr
><tr
id=sl_svn79_2955

><td class="source">				}<br></td></tr
><tr
id=sl_svn79_2956

><td class="source"><br></td></tr
><tr
id=sl_svn79_2957

><td class="source">			}<br></td></tr
><tr
id=sl_svn79_2958

><td class="source">			break;<br></td></tr
><tr
id=sl_svn79_2959

><td class="source"><br></td></tr
><tr
id=sl_svn79_2960

><td class="source">		case IS_INDEX:<br></td></tr
><tr
id=sl_svn79_2961

><td class="source">			{<br></td></tr
><tr
id=sl_svn79_2962

><td class="source">				stat = inputSurfaceAD.jumpToElement(inputIndexValue(block));<br></td></tr
><tr
id=sl_svn79_2963

><td class="source">				if (stat==MS::kSuccess)<br></td></tr
><tr
id=sl_svn79_2964

><td class="source">				{<br></td></tr
><tr
id=sl_svn79_2965

><td class="source">					elementHandle = inputSurfaceAD.inputValue(&amp;stat);<br></td></tr
><tr
id=sl_svn79_2966

><td class="source">					MObject surface = elementHandle.asNurbsSurfaceTransformed();<br></td></tr
><tr
id=sl_svn79_2967

><td class="source">					MFnNurbsSurface surfaceFn( surface, &amp;stat ); <br></td></tr
><tr
id=sl_svn79_2968

><td class="source"><br></td></tr
><tr
id=sl_svn79_2969

><td class="source">					if( !stat )	{ stat.perror(&quot;ERROR creating surface function set&quot;); return; }<br></td></tr
><tr
id=sl_svn79_2970

><td class="source"><br></td></tr
><tr
id=sl_svn79_2971

><td class="source">					MPoint intersectPoint;<br></td></tr
><tr
id=sl_svn79_2972

><td class="source">					double distance, uIP, vIP;<br></td></tr
><tr
id=sl_svn79_2973

><td class="source">					MVector uTangent, vTangent, uvPerpend;<br></td></tr
><tr
id=sl_svn79_2974

><td class="source"><br></td></tr
><tr
id=sl_svn79_2975

><td class="source"><br></td></tr
><tr
id=sl_svn79_2976

><td class="source">					for (int i=0; i &lt; posSize; i ++ )<br></td></tr
><tr
id=sl_svn79_2977

><td class="source">					{<br></td></tr
><tr
id=sl_svn79_2978

><td class="source">						// intersection test<br></td></tr
><tr
id=sl_svn79_2979

><td class="source">						if (surfaceFn.intersect(positions[i],velocities[i],uIP,vIP,intersectPoint,toleranceV,MSpace::kObject,true,&amp;distance))<br></td></tr
><tr
id=sl_svn79_2980

><td class="source">						{<br></td></tr
><tr
id=sl_svn79_2981

><td class="source">							// point of intersection critical?<br></td></tr
><tr
id=sl_svn79_2982

><td class="source"><br></td></tr
><tr
id=sl_svn79_2983

><td class="source">						//	double probeLength = MVector(positions[i] + sensorRangeV * unitVelocity).length();<br></td></tr
><tr
id=sl_svn79_2984

><td class="source">							<br></td></tr
><tr
id=sl_svn79_2985

><td class="source">							if (distance &lt;= probeLengthV)<br></td></tr
><tr
id=sl_svn79_2986

><td class="source">							{<br></td></tr
><tr
id=sl_svn79_2987

><td class="source">								// calculate steering vector as perpendicular to tangent vectors <br></td></tr
><tr
id=sl_svn79_2988

><td class="source">								surfaceFn.getTangents(uIP,vIP,uTangent,vTangent);<br></td></tr
><tr
id=sl_svn79_2989

><td class="source">								uvPerpend = uTangent ^ vTangent;<br></td></tr
><tr
id=sl_svn79_2990

><td class="source">								desiredVelocityV = uvPerpend;<br></td></tr
><tr
id=sl_svn79_2991

><td class="source">								seekSteering(desiredVelocityV,velocities[i],desiredSpeedV,scaleDesiredForceV,maximumForceV);<br></td></tr
><tr
id=sl_svn79_2992

><td class="source">								outputForce.append( desiredVelocityV );<br></td></tr
><tr
id=sl_svn79_2993

><td class="source"><br></td></tr
><tr
id=sl_svn79_2994

><td class="source">							}<br></td></tr
><tr
id=sl_svn79_2995

><td class="source">							else<br></td></tr
><tr
id=sl_svn79_2996

><td class="source">							{<br></td></tr
><tr
id=sl_svn79_2997

><td class="source">								outputForce.append(MVector::zero);<br></td></tr
><tr
id=sl_svn79_2998

><td class="source">							}<br></td></tr
><tr
id=sl_svn79_2999

><td class="source">						}<br></td></tr
><tr
id=sl_svn79_3000

><td class="source">						else<br></td></tr
><tr
id=sl_svn79_3001

><td class="source">						{	<br></td></tr
><tr
id=sl_svn79_3002

><td class="source">							outputForce.append(MVector::zero);<br></td></tr
><tr
id=sl_svn79_3003

><td class="source">						}<br></td></tr
><tr
id=sl_svn79_3004

><td class="source">					}<br></td></tr
><tr
id=sl_svn79_3005

><td class="source">				}<br></td></tr
><tr
id=sl_svn79_3006

><td class="source">					<br></td></tr
><tr
id=sl_svn79_3007

><td class="source">			}<br></td></tr
><tr
id=sl_svn79_3008

><td class="source">			break;<br></td></tr
><tr
id=sl_svn79_3009

><td class="source">	}<br></td></tr
><tr
id=sl_svn79_3010

><td class="source">}<br></td></tr
><tr
id=sl_svn79_3011

><td class="source"><br></td></tr
><tr
id=sl_svn79_3012

><td class="source">/**************************************************************************************/<br></td></tr
><tr
id=sl_svn79_3013

><td class="source">//steering desire: mesh following<br></td></tr
><tr
id=sl_svn79_3014

><td class="source"><br></td></tr
><tr
id=sl_svn79_3015

><td class="source">void bbSteeringDesire::sdMeshFollowing( MDataBlock&amp; block,<br></td></tr
><tr
id=sl_svn79_3016

><td class="source">								const MVectorArray &amp;positions,<br></td></tr
><tr
id=sl_svn79_3017

><td class="source">								const MVectorArray &amp;velocities,<br></td></tr
><tr
id=sl_svn79_3018

><td class="source">								MVectorArray &amp;outputForce )<br></td></tr
><tr
id=sl_svn79_3019

><td class="source">{ <br></td></tr
><tr
id=sl_svn79_3020

><td class="source">	MStatus stat;<br></td></tr
><tr
id=sl_svn79_3021

><td class="source">	// points and velocities should have the same length. If not return.<br></td></tr
><tr
id=sl_svn79_3022

><td class="source">	<br></td></tr
><tr
id=sl_svn79_3023

><td class="source">	if( positions.length() != velocities.length() )<br></td></tr
><tr
id=sl_svn79_3024

><td class="source">		return;<br></td></tr
><tr
id=sl_svn79_3025

><td class="source"><br></td></tr
><tr
id=sl_svn79_3026

><td class="source">	outputForce.clear();<br></td></tr
><tr
id=sl_svn79_3027

><td class="source"><br></td></tr
><tr
id=sl_svn79_3028

><td class="source">	bool useSensorRangeV = useSensorRangeValue(block);<br></td></tr
><tr
id=sl_svn79_3029

><td class="source">	double sensorRangeV = sensorRangeValue(block);<br></td></tr
><tr
id=sl_svn79_3030

><td class="source">	<br></td></tr
><tr
id=sl_svn79_3031

><td class="source">	bool useSensorAngleV = useSensorAngleValue(block);<br></td></tr
><tr
id=sl_svn79_3032

><td class="source">	double sensorAngle = sensorAngleValue(block);<br></td></tr
><tr
id=sl_svn79_3033

><td class="source">	<br></td></tr
><tr
id=sl_svn79_3034

><td class="source">	double scaleDesiredForceV = 1.0;<br></td></tr
><tr
id=sl_svn79_3035

><td class="source">	if (inverseDesiredSteeringForceValue(block))<br></td></tr
><tr
id=sl_svn79_3036

><td class="source">		scaleDesiredForceV = -1.0;<br></td></tr
><tr
id=sl_svn79_3037

><td class="source"><br></td></tr
><tr
id=sl_svn79_3038

><td class="source">	double desiredSpeedV = desiredSpeedValue(block);<br></td></tr
><tr
id=sl_svn79_3039

><td class="source">	double maximumForceV = maximumForceValue(block);<br></td></tr
><tr
id=sl_svn79_3040

><td class="source">	double targetRadiusV = targetRadiusValue(block);<br></td></tr
><tr
id=sl_svn79_3041

><td class="source">	<br></td></tr
><tr
id=sl_svn79_3042

><td class="source">	// get mesh<br></td></tr
><tr
id=sl_svn79_3043

><td class="source">	<br></td></tr
><tr
id=sl_svn79_3044

><td class="source">	MArrayDataHandle inputMeshAD = block.inputArrayValue( inputMesh, &amp;stat);<br></td></tr
><tr
id=sl_svn79_3045

><td class="source">	if( !stat ) { stat.perror(&quot;ERROR getting inputMeshData&quot;); return;} <br></td></tr
><tr
id=sl_svn79_3046

><td class="source"><br></td></tr
><tr
id=sl_svn79_3047

><td class="source">	MDataHandle elementHandle;<br></td></tr
><tr
id=sl_svn79_3048

><td class="source">	if(!stat) {MGlobal::displayError(&quot;bbSteeringDesire::compute inputMeshArrayData&quot;);}<br></td></tr
><tr
id=sl_svn79_3049

><td class="source"><br></td></tr
><tr
id=sl_svn79_3050

><td class="source">	int numMesh = inputMeshAD.elementCount();<br></td></tr
><tr
id=sl_svn79_3051

><td class="source"><br></td></tr
><tr
id=sl_svn79_3052

><td class="source">	stat = inputMeshAD.jumpToElement(inputIndexValue(block));<br></td></tr
><tr
id=sl_svn79_3053

><td class="source">	<br></td></tr
><tr
id=sl_svn79_3054

><td class="source">	if (stat==MS::kSuccess)<br></td></tr
><tr
id=sl_svn79_3055

><td class="source">	{<br></td></tr
><tr
id=sl_svn79_3056

><td class="source">		elementHandle = inputMeshAD.inputValue(&amp;stat);<br></td></tr
><tr
id=sl_svn79_3057

><td class="source">		MObject mesh = elementHandle.asMeshTransformed();<br></td></tr
><tr
id=sl_svn79_3058

><td class="source">		MFnMesh meshFn( mesh, &amp;stat ); <br></td></tr
><tr
id=sl_svn79_3059

><td class="source"><br></td></tr
><tr
id=sl_svn79_3060

><td class="source">		if( !stat )	{ stat.perror(&quot;ERROR creating mesh function set&quot;); return; }<br></td></tr
><tr
id=sl_svn79_3061

><td class="source">		<br></td></tr
><tr
id=sl_svn79_3062

><td class="source">		// mesh following<br></td></tr
><tr
id=sl_svn79_3063

><td class="source"><br></td></tr
><tr
id=sl_svn79_3064

><td class="source">		int posSize = positions.length();<br></td></tr
><tr
id=sl_svn79_3065

><td class="source">		<br></td></tr
><tr
id=sl_svn79_3066

><td class="source">		MVector desiredVelocityV(0.0,0.0,0.0);<br></td></tr
><tr
id=sl_svn79_3067

><td class="source">		MVector predictedPos;<br></td></tr
><tr
id=sl_svn79_3068

><td class="source">		MVector unitVelocity;<br></td></tr
><tr
id=sl_svn79_3069

><td class="source">		MPoint predictedPosPoint;<br></td></tr
><tr
id=sl_svn79_3070

><td class="source">		MPoint closestMeshPoint;<br></td></tr
><tr
id=sl_svn79_3071

><td class="source">		MVector tangent;<br></td></tr
><tr
id=sl_svn79_3072

><td class="source">		<br></td></tr
><tr
id=sl_svn79_3073

><td class="source">		double epsilon = 0.01;<br></td></tr
><tr
id=sl_svn79_3074

><td class="source"><br></td></tr
><tr
id=sl_svn79_3075

><td class="source">		MString temp;<br></td></tr
><tr
id=sl_svn79_3076

><td class="source"><br></td></tr
><tr
id=sl_svn79_3077

><td class="source">		for (int i=0; i &lt; posSize; i ++ )<br></td></tr
><tr
id=sl_svn79_3078

><td class="source">		{<br></td></tr
><tr
id=sl_svn79_3079

><td class="source">			unitVelocity = velocities[i];<br></td></tr
><tr
id=sl_svn79_3080

><td class="source">			unitVelocity.normalize();<br></td></tr
><tr
id=sl_svn79_3081

><td class="source"><br></td></tr
><tr
id=sl_svn79_3082

><td class="source">			predictedPosPoint = MPoint(positions[i] + sensorRangeV * unitVelocity);<br></td></tr
><tr
id=sl_svn79_3083

><td class="source">			meshFn.getClosestPoint(predictedPosPoint,closestMeshPoint);<br></td></tr
><tr
id=sl_svn79_3084

><td class="source"><br></td></tr
><tr
id=sl_svn79_3085

><td class="source">			if (MVector(predictedPosPoint-closestMeshPoint).length() &lt;= targetRadiusV)<br></td></tr
><tr
id=sl_svn79_3086

><td class="source">			{<br></td></tr
><tr
id=sl_svn79_3087

><td class="source">				outputForce.append(MVector::zero);<br></td></tr
><tr
id=sl_svn79_3088

><td class="source">			}<br></td></tr
><tr
id=sl_svn79_3089

><td class="source">			else<br></td></tr
><tr
id=sl_svn79_3090

><td class="source">			{<br></td></tr
><tr
id=sl_svn79_3091

><td class="source">				desiredVelocityV = MVector(closestMeshPoint) - positions[i];<br></td></tr
><tr
id=sl_svn79_3092

><td class="source">				seekSteering(desiredVelocityV,velocities[i],desiredSpeedV,scaleDesiredForceV,maximumForceV);<br></td></tr
><tr
id=sl_svn79_3093

><td class="source">				outputForce.append( desiredVelocityV );<br></td></tr
><tr
id=sl_svn79_3094

><td class="source">			}	<br></td></tr
><tr
id=sl_svn79_3095

><td class="source">		}	<br></td></tr
><tr
id=sl_svn79_3096

><td class="source">	}<br></td></tr
><tr
id=sl_svn79_3097

><td class="source">		<br></td></tr
><tr
id=sl_svn79_3098

><td class="source">}<br></td></tr
><tr
id=sl_svn79_3099

><td class="source"><br></td></tr
><tr
id=sl_svn79_3100

><td class="source">/**************************************************************************************/<br></td></tr
><tr
id=sl_svn79_3101

><td class="source">// steering desire: mesh obstacle avoidance<br></td></tr
><tr
id=sl_svn79_3102

><td class="source"><br></td></tr
><tr
id=sl_svn79_3103

><td class="source">void bbSteeringDesire::sdMeshObstacleAvoidance( MDataBlock&amp; block,<br></td></tr
><tr
id=sl_svn79_3104

><td class="source">								const MVectorArray &amp;positions,<br></td></tr
><tr
id=sl_svn79_3105

><td class="source">								const MVectorArray &amp;velocities,<br></td></tr
><tr
id=sl_svn79_3106

><td class="source">								MVectorArray &amp;outputForce )<br></td></tr
><tr
id=sl_svn79_3107

><td class="source">{ <br></td></tr
><tr
id=sl_svn79_3108

><td class="source">	MStatus stat;<br></td></tr
><tr
id=sl_svn79_3109

><td class="source">	// points and velocities should have the same length. If not return.<br></td></tr
><tr
id=sl_svn79_3110

><td class="source">	<br></td></tr
><tr
id=sl_svn79_3111

><td class="source">	if( positions.length() != velocities.length() )	return;<br></td></tr
><tr
id=sl_svn79_3112

><td class="source"><br></td></tr
><tr
id=sl_svn79_3113

><td class="source">	outputForce.clear();<br></td></tr
><tr
id=sl_svn79_3114

><td class="source"><br></td></tr
><tr
id=sl_svn79_3115

><td class="source">//	bool useSensorRangeV = useSensorRangeValue(block);<br></td></tr
><tr
id=sl_svn79_3116

><td class="source">//	double sensorRangeV = sensorRangeValue(block);<br></td></tr
><tr
id=sl_svn79_3117

><td class="source">	<br></td></tr
><tr
id=sl_svn79_3118

><td class="source">//	bool useSensorAngleV = useSensorAngleValue(block);<br></td></tr
><tr
id=sl_svn79_3119

><td class="source">//	double sensorAngle = sensorAngleValue(block);<br></td></tr
><tr
id=sl_svn79_3120

><td class="source">	<br></td></tr
><tr
id=sl_svn79_3121

><td class="source">	double scaleDesiredForceV = 1.0;<br></td></tr
><tr
id=sl_svn79_3122

><td class="source">	if (inverseDesiredSteeringForceValue(block)) scaleDesiredForceV = -1.0;<br></td></tr
><tr
id=sl_svn79_3123

><td class="source"><br></td></tr
><tr
id=sl_svn79_3124

><td class="source">	double desiredSpeedV = desiredSpeedValue(block);<br></td></tr
><tr
id=sl_svn79_3125

><td class="source">	double maximumForceV = maximumForceValue(block);<br></td></tr
><tr
id=sl_svn79_3126

><td class="source"><br></td></tr
><tr
id=sl_svn79_3127

><td class="source">	double toleranceV = toleranceValue(block);<br></td></tr
><tr
id=sl_svn79_3128

><td class="source"><br></td></tr
><tr
id=sl_svn79_3129

><td class="source">	int posSize = positions.length();<br></td></tr
><tr
id=sl_svn79_3130

><td class="source">	<br></td></tr
><tr
id=sl_svn79_3131

><td class="source">	MVector desiredVelocityV(0.0,0.0,0.0);<br></td></tr
><tr
id=sl_svn79_3132

><td class="source">	MVector unitVelocity;<br></td></tr
><tr
id=sl_svn79_3133

><td class="source"><br></td></tr
><tr
id=sl_svn79_3134

><td class="source">	// get surfaces<br></td></tr
><tr
id=sl_svn79_3135

><td class="source"><br></td></tr
><tr
id=sl_svn79_3136

><td class="source">		<br></td></tr
><tr
id=sl_svn79_3137

><td class="source">	MArrayDataHandle inputMeshAD = block.inputArrayValue( inputMesh, &amp;stat);<br></td></tr
><tr
id=sl_svn79_3138

><td class="source">	if( !stat ) { stat.perror(&quot;ERROR getting inputMeshData&quot;); return;} <br></td></tr
><tr
id=sl_svn79_3139

><td class="source"><br></td></tr
><tr
id=sl_svn79_3140

><td class="source">	MDataHandle elementHandle;<br></td></tr
><tr
id=sl_svn79_3141

><td class="source">	if(!stat) {MGlobal::displayError(&quot;bbSteeringDesire::compute inputMeshArrayData&quot;);}<br></td></tr
><tr
id=sl_svn79_3142

><td class="source"><br></td></tr
><tr
id=sl_svn79_3143

><td class="source">	int numMesh = inputMeshAD.elementCount();<br></td></tr
><tr
id=sl_svn79_3144

><td class="source">	inputMeshAD.jumpToElement(0);<br></td></tr
><tr
id=sl_svn79_3145

><td class="source"><br></td></tr
><tr
id=sl_svn79_3146

><td class="source"><br></td></tr
><tr
id=sl_svn79_3147

><td class="source">	MPointArray intersectionPoint;<br></td></tr
><tr
id=sl_svn79_3148

><td class="source">	MIntArray	polyID;<br></td></tr
><tr
id=sl_svn79_3149

><td class="source">	double distance;<br></td></tr
><tr
id=sl_svn79_3150

><td class="source">	double probeLengthV = probeLengthValue(block);<br></td></tr
><tr
id=sl_svn79_3151

><td class="source"><br></td></tr
><tr
id=sl_svn79_3152

><td class="source"><br></td></tr
><tr
id=sl_svn79_3153

><td class="source">	short inputSelectionV = inputSelectionValue(block);<br></td></tr
><tr
id=sl_svn79_3154

><td class="source"><br></td></tr
><tr
id=sl_svn79_3155

><td class="source">//	MString temp = &quot;\ndata\n&quot;;<br></td></tr
><tr
id=sl_svn79_3156

><td class="source"><br></td></tr
><tr
id=sl_svn79_3157

><td class="source"><br></td></tr
><tr
id=sl_svn79_3158

><td class="source">	switch(inputSelectionV)<br></td></tr
><tr
id=sl_svn79_3159

><td class="source">	{<br></td></tr
><tr
id=sl_svn79_3160

><td class="source">		case IS_ALL:<br></td></tr
><tr
id=sl_svn79_3161

><td class="source">			{<br></td></tr
><tr
id=sl_svn79_3162

><td class="source">				MDoubleArray shortestDistance(posSize,1.7E+308);<br></td></tr
><tr
id=sl_svn79_3163

><td class="source">				MIntArray shortestMesh(posSize,0);<br></td></tr
><tr
id=sl_svn79_3164

><td class="source">				MIntArray shortestPolyID(posSize,0);<br></td></tr
><tr
id=sl_svn79_3165

><td class="source">				MVector polyNormal;<br></td></tr
><tr
id=sl_svn79_3166

><td class="source"><br></td></tr
><tr
id=sl_svn79_3167

><td class="source">				// get shortest interesection values;<br></td></tr
><tr
id=sl_svn79_3168

><td class="source"><br></td></tr
><tr
id=sl_svn79_3169

><td class="source">				for (int i=0;i&lt;numMesh;i++)<br></td></tr
><tr
id=sl_svn79_3170

><td class="source">				{<br></td></tr
><tr
id=sl_svn79_3171

><td class="source">					elementHandle = inputMeshAD.inputValue(&amp;stat);<br></td></tr
><tr
id=sl_svn79_3172

><td class="source">					MObject mesh = elementHandle.asMeshTransformed();<br></td></tr
><tr
id=sl_svn79_3173

><td class="source">					MFnMesh meshFn( mesh, &amp;stat );<br></td></tr
><tr
id=sl_svn79_3174

><td class="source"><br></td></tr
><tr
id=sl_svn79_3175

><td class="source">					if( !stat )	{ stat.perror(&quot;ERROR creating mesh function set&quot;); return; }<br></td></tr
><tr
id=sl_svn79_3176

><td class="source"><br></td></tr
><tr
id=sl_svn79_3177

><td class="source">					for (int e=0; e &lt; posSize; e++)<br></td></tr
><tr
id=sl_svn79_3178

><td class="source">					{<br></td></tr
><tr
id=sl_svn79_3179

><td class="source">						if (meshFn.intersect(positions[e],velocities[e],intersectionPoint,toleranceV,MSpace::kObject,&amp;polyID))<br></td></tr
><tr
id=sl_svn79_3180

><td class="source">						{<br></td></tr
><tr
id=sl_svn79_3181

><td class="source">							distance = MVector(positions[e] - intersectionPoint[0]).length();<br></td></tr
><tr
id=sl_svn79_3182

><td class="source">							<br></td></tr
><tr
id=sl_svn79_3183

><td class="source">							if (distance &lt; shortestDistance[e])<br></td></tr
><tr
id=sl_svn79_3184

><td class="source">							{<br></td></tr
><tr
id=sl_svn79_3185

><td class="source">								shortestDistance[e] = distance;<br></td></tr
><tr
id=sl_svn79_3186

><td class="source">								shortestPolyID[e] = polyID[0];<br></td></tr
><tr
id=sl_svn79_3187

><td class="source">								shortestMesh[e] = i;<br></td></tr
><tr
id=sl_svn79_3188

><td class="source">							}<br></td></tr
><tr
id=sl_svn79_3189

><td class="source">						}<br></td></tr
><tr
id=sl_svn79_3190

><td class="source">					}<br></td></tr
><tr
id=sl_svn79_3191

><td class="source"><br></td></tr
><tr
id=sl_svn79_3192

><td class="source">					inputMeshAD.next(); <br></td></tr
><tr
id=sl_svn79_3193

><td class="source">				}<br></td></tr
><tr
id=sl_svn79_3194

><td class="source"><br></td></tr
><tr
id=sl_svn79_3195

><td class="source">		/*		for (int ek=0; ek &lt; posSize; ek++)<br></td></tr
><tr
id=sl_svn79_3196

><td class="source">				{<br></td></tr
><tr
id=sl_svn79_3197

><td class="source">					temp += &quot;e: &quot;;<br></td></tr
><tr
id=sl_svn79_3198

><td class="source">					temp += ek;<br></td></tr
><tr
id=sl_svn79_3199

><td class="source">					temp += &quot; sDistance: &quot;;<br></td></tr
><tr
id=sl_svn79_3200

><td class="source">					temp += shortestDistance[ek];<br></td></tr
><tr
id=sl_svn79_3201

><td class="source">					temp += &quot; sMesh: &quot;;<br></td></tr
><tr
id=sl_svn79_3202

><td class="source">					temp += shortestMesh[ek];<br></td></tr
><tr
id=sl_svn79_3203

><td class="source">					temp += &quot; sPoly: &quot;;<br></td></tr
><tr
id=sl_svn79_3204

><td class="source">					temp += shortestPolyID[ek];	<br></td></tr
><tr
id=sl_svn79_3205

><td class="source">					temp += &quot;\n&quot;;<br></td></tr
><tr
id=sl_svn79_3206

><td class="source">				}<br></td></tr
><tr
id=sl_svn79_3207

><td class="source"><br></td></tr
><tr
id=sl_svn79_3208

><td class="source">				MGlobal::displayInfo(temp);<br></td></tr
><tr
id=sl_svn79_3209

><td class="source">*/<br></td></tr
><tr
id=sl_svn79_3210

><td class="source">				// steer <br></td></tr
><tr
id=sl_svn79_3211

><td class="source"><br></td></tr
><tr
id=sl_svn79_3212

><td class="source">				for (int e=0; e &lt; posSize; e++)<br></td></tr
><tr
id=sl_svn79_3213

><td class="source">				{<br></td></tr
><tr
id=sl_svn79_3214

><td class="source">					if (shortestDistance[e] &lt;= probeLengthV)<br></td></tr
><tr
id=sl_svn79_3215

><td class="source">					{<br></td></tr
><tr
id=sl_svn79_3216

><td class="source">						inputMeshAD.jumpToElement(shortestMesh[e]); <br></td></tr
><tr
id=sl_svn79_3217

><td class="source">						elementHandle = inputMeshAD.inputValue(&amp;stat);<br></td></tr
><tr
id=sl_svn79_3218

><td class="source">						MObject mesh = elementHandle.asMeshTransformed();<br></td></tr
><tr
id=sl_svn79_3219

><td class="source">						MFnMesh meshFn( mesh, &amp;stat );<br></td></tr
><tr
id=sl_svn79_3220

><td class="source">						if( !stat )	{ stat.perror(&quot;ERROR creating surface function set&quot;); return; }<br></td></tr
><tr
id=sl_svn79_3221

><td class="source"><br></td></tr
><tr
id=sl_svn79_3222

><td class="source">						// calculate steering vector<br></td></tr
><tr
id=sl_svn79_3223

><td class="source">						meshFn.getPolygonNormal(shortestPolyID[e],desiredVelocityV);<br></td></tr
><tr
id=sl_svn79_3224

><td class="source">								<br></td></tr
><tr
id=sl_svn79_3225

><td class="source">						seekSteering(desiredVelocityV,velocities[e],desiredSpeedV,scaleDesiredForceV,maximumForceV);<br></td></tr
><tr
id=sl_svn79_3226

><td class="source">						outputForce.append( desiredVelocityV );<br></td></tr
><tr
id=sl_svn79_3227

><td class="source">					}<br></td></tr
><tr
id=sl_svn79_3228

><td class="source">					else<br></td></tr
><tr
id=sl_svn79_3229

><td class="source">						outputForce.append(MVector::zero);<br></td></tr
><tr
id=sl_svn79_3230

><td class="source">					<br></td></tr
><tr
id=sl_svn79_3231

><td class="source">				}<br></td></tr
><tr
id=sl_svn79_3232

><td class="source"><br></td></tr
><tr
id=sl_svn79_3233

><td class="source">			}<br></td></tr
><tr
id=sl_svn79_3234

><td class="source">			break;<br></td></tr
><tr
id=sl_svn79_3235

><td class="source"><br></td></tr
><tr
id=sl_svn79_3236

><td class="source">		case IS_INDEX:<br></td></tr
><tr
id=sl_svn79_3237

><td class="source"><br></td></tr
><tr
id=sl_svn79_3238

><td class="source">			{<br></td></tr
><tr
id=sl_svn79_3239

><td class="source">				stat = inputMeshAD.jumpToElement(inputIndexValue(block));<br></td></tr
><tr
id=sl_svn79_3240

><td class="source">				if (stat==MS::kSuccess)<br></td></tr
><tr
id=sl_svn79_3241

><td class="source">				{<br></td></tr
><tr
id=sl_svn79_3242

><td class="source">					elementHandle = inputMeshAD.inputValue(&amp;stat);<br></td></tr
><tr
id=sl_svn79_3243

><td class="source">					MObject mesh = elementHandle.asMeshTransformed();<br></td></tr
><tr
id=sl_svn79_3244

><td class="source">					MFnMesh meshFn( mesh, &amp;stat ); <br></td></tr
><tr
id=sl_svn79_3245

><td class="source"><br></td></tr
><tr
id=sl_svn79_3246

><td class="source">					if( !stat )	{ stat.perror(&quot;ERROR creating mesh function set&quot;); return; }<br></td></tr
><tr
id=sl_svn79_3247

><td class="source"><br></td></tr
><tr
id=sl_svn79_3248

><td class="source">					for (int i=0; i &lt; posSize; i ++ )<br></td></tr
><tr
id=sl_svn79_3249

><td class="source">					{<br></td></tr
><tr
id=sl_svn79_3250

><td class="source">						// intersection test<br></td></tr
><tr
id=sl_svn79_3251

><td class="source">						if (meshFn.intersect(positions[i],velocities[i],intersectionPoint,toleranceV,MSpace::kObject,&amp;polyID))<br></td></tr
><tr
id=sl_svn79_3252

><td class="source">						{<br></td></tr
><tr
id=sl_svn79_3253

><td class="source">							// point of intersection critical?<br></td></tr
><tr
id=sl_svn79_3254

><td class="source">							distance = MVector(positions[i] - intersectionPoint[0]).length();<br></td></tr
><tr
id=sl_svn79_3255

><td class="source">							<br></td></tr
><tr
id=sl_svn79_3256

><td class="source">							if (distance &lt;= probeLengthV)<br></td></tr
><tr
id=sl_svn79_3257

><td class="source">							{<br></td></tr
><tr
id=sl_svn79_3258

><td class="source">								// calculate steering vector as normal <br></td></tr
><tr
id=sl_svn79_3259

><td class="source">								meshFn.getPolygonNormal(polyID[0],desiredVelocityV);<br></td></tr
><tr
id=sl_svn79_3260

><td class="source">								seekSteering(desiredVelocityV,velocities[i],desiredSpeedV,scaleDesiredForceV,maximumForceV);<br></td></tr
><tr
id=sl_svn79_3261

><td class="source">								outputForce.append( desiredVelocityV );<br></td></tr
><tr
id=sl_svn79_3262

><td class="source">							}<br></td></tr
><tr
id=sl_svn79_3263

><td class="source">							else<br></td></tr
><tr
id=sl_svn79_3264

><td class="source">								outputForce.append(MVector::zero);<br></td></tr
><tr
id=sl_svn79_3265

><td class="source">							<br></td></tr
><tr
id=sl_svn79_3266

><td class="source">						}<br></td></tr
><tr
id=sl_svn79_3267

><td class="source">						else<br></td></tr
><tr
id=sl_svn79_3268

><td class="source">							outputForce.append(MVector::zero);<br></td></tr
><tr
id=sl_svn79_3269

><td class="source">								<br></td></tr
><tr
id=sl_svn79_3270

><td class="source">					}<br></td></tr
><tr
id=sl_svn79_3271

><td class="source">				}<br></td></tr
><tr
id=sl_svn79_3272

><td class="source">					<br></td></tr
><tr
id=sl_svn79_3273

><td class="source">			}<br></td></tr
><tr
id=sl_svn79_3274

><td class="source">			break;<br></td></tr
><tr
id=sl_svn79_3275

><td class="source">	}<br></td></tr
><tr
id=sl_svn79_3276

><td class="source">}<br></td></tr
><tr
id=sl_svn79_3277

><td class="source"><br></td></tr
><tr
id=sl_svn79_3278

><td class="source">/**************************************************************************************/<br></td></tr
><tr
id=sl_svn79_3279

><td class="source"><br></td></tr
><tr
id=sl_svn79_3280

><td class="source">void bbSteeringDesire::sdBugWander( MDataBlock&amp; block,<br></td></tr
><tr
id=sl_svn79_3281

><td class="source">								const MVectorArray &amp;positions,<br></td></tr
><tr
id=sl_svn79_3282

><td class="source">								const MVectorArray &amp;velocities,<br></td></tr
><tr
id=sl_svn79_3283

><td class="source">								MVectorArray &amp;outputForce )<br></td></tr
><tr
id=sl_svn79_3284

><td class="source">{ <br></td></tr
><tr
id=sl_svn79_3285

><td class="source">	MStatus stat;<br></td></tr
><tr
id=sl_svn79_3286

><td class="source">	<br></td></tr
><tr
id=sl_svn79_3287

><td class="source">	// points and velocities should have the same length. If not return.<br></td></tr
><tr
id=sl_svn79_3288

><td class="source">	if( positions.length() != velocities.length() )	return;<br></td></tr
><tr
id=sl_svn79_3289

><td class="source"><br></td></tr
><tr
id=sl_svn79_3290

><td class="source">	// clear the output force array.<br></td></tr
><tr
id=sl_svn79_3291

><td class="source">	outputForce.clear();<br></td></tr
><tr
id=sl_svn79_3292

><td class="source"><br></td></tr
><tr
id=sl_svn79_3293

><td class="source">	// get field parameters.<br></td></tr
><tr
id=sl_svn79_3294

><td class="source">	double scaleDesiredForceV = 1.0;<br></td></tr
><tr
id=sl_svn79_3295

><td class="source">	if (inverseDesiredSteeringForceValue(block))<br></td></tr
><tr
id=sl_svn79_3296

><td class="source">		scaleDesiredForceV = -1.0;<br></td></tr
><tr
id=sl_svn79_3297

><td class="source"><br></td></tr
><tr
id=sl_svn79_3298

><td class="source">	double maximumForceV = maximumForceValue(block);<br></td></tr
><tr
id=sl_svn79_3299

><td class="source">	double bugRadiusV = bugRadiusValue(block);<br></td></tr
><tr
id=sl_svn79_3300

><td class="source"><br></td></tr
><tr
id=sl_svn79_3301

><td class="source">	bool useRandomV = useRandomValue(block);<br></td></tr
><tr
id=sl_svn79_3302

><td class="source"><br></td></tr
><tr
id=sl_svn79_3303

><td class="source">	MVector wMinRandV;	wanderMinimumRandomVectorValue( block, wMinRandV);<br></td></tr
><tr
id=sl_svn79_3304

><td class="source">	MVector wMaxRandV;  wanderMaximumRandomVectorValue( block, wMaxRandV);<br></td></tr
><tr
id=sl_svn79_3305

><td class="source">	MVector wSphereOffsetV; wanderSphereOffsetValue(block, wSphereOffsetV);<br></td></tr
><tr
id=sl_svn79_3306

><td class="source"><br></td></tr
><tr
id=sl_svn79_3307

><td class="source">	double wSphereRadiusV = wanderSphereRadiusValue(block);<br></td></tr
><tr
id=sl_svn79_3308

><td class="source"><br></td></tr
><tr
id=sl_svn79_3309

><td class="source">	double minSpeedT = wanderMinimumSpeedValue(block);<br></td></tr
><tr
id=sl_svn79_3310

><td class="source">	double maxSpeedT = wanderMaximumSpeedValue(block);<br></td></tr
><tr
id=sl_svn79_3311

><td class="source">						<br></td></tr
><tr
id=sl_svn79_3312

><td class="source">	double minSpeed = min(minSpeedT,maxSpeedT);<br></td></tr
><tr
id=sl_svn79_3313

><td class="source">	double maxSpeed = max(minSpeedT,maxSpeedT);<br></td></tr
><tr
id=sl_svn79_3314

><td class="source"><br></td></tr
><tr
id=sl_svn79_3315

><td class="source">	double speedRange = maxSpeed - minSpeed;<br></td></tr
><tr
id=sl_svn79_3316

><td class="source">	double distanceRange = 2*wSphereRadiusV;<br></td></tr
><tr
id=sl_svn79_3317

><td class="source"><br></td></tr
><tr
id=sl_svn79_3318

><td class="source">	double speed;<br></td></tr
><tr
id=sl_svn79_3319

><td class="source"><br></td></tr
><tr
id=sl_svn79_3320

><td class="source"><br></td></tr
><tr
id=sl_svn79_3321

><td class="source">	short chooseSpeedV = chooseSpeedValue(block);<br></td></tr
><tr
id=sl_svn79_3322

><td class="source">	double desiredSpeedV = desiredSpeedValue(block);<br></td></tr
><tr
id=sl_svn79_3323

><td class="source">		MVector desiredVelocityV;<br></td></tr
><tr
id=sl_svn79_3324

><td class="source">		MVectorArray lastVectorV;<br></td></tr
><tr
id=sl_svn79_3325

><td class="source"><br></td></tr
><tr
id=sl_svn79_3326

><td class="source">	// get last offset values<br></td></tr
><tr
id=sl_svn79_3327

><td class="source">	int posSize = positions.length();<br></td></tr
><tr
id=sl_svn79_3328

><td class="source"><br></td></tr
><tr
id=sl_svn79_3329

><td class="source">	// use random wandering?<br></td></tr
><tr
id=sl_svn79_3330

><td class="source">	if (useRandomV)<br></td></tr
><tr
id=sl_svn79_3331

><td class="source">	{<br></td></tr
><tr
id=sl_svn79_3332

><td class="source">		// get last offset values<br></td></tr
><tr
id=sl_svn79_3333

><td class="source">	<br></td></tr
><tr
id=sl_svn79_3334

><td class="source">		MDataHandle hLastVectorV = block.inputValue(lastVector, &amp;stat);<br></td></tr
><tr
id=sl_svn79_3335

><td class="source">		MObject dLastVectorV = hLastVectorV.data();<br></td></tr
><tr
id=sl_svn79_3336

><td class="source">		lastVectorV = MFnVectorArrayData(dLastVectorV).array(&amp;stat);<br></td></tr
><tr
id=sl_svn79_3337

><td class="source">		<br></td></tr
><tr
id=sl_svn79_3338

><td class="source">		int lastVSize = lastVectorV.length();<br></td></tr
><tr
id=sl_svn79_3339

><td class="source"><br></td></tr
><tr
id=sl_svn79_3340

><td class="source">		// initialize seed, lastVectorV etc<br></td></tr
><tr
id=sl_svn79_3341

><td class="source"><br></td></tr
><tr
id=sl_svn79_3342

><td class="source">		MTime currentTimeV, initSeedFrameV;<br></td></tr
><tr
id=sl_svn79_3343

><td class="source">		MDataHandle hTime = block.inputValue(currentTime, &amp;stat);<br></td></tr
><tr
id=sl_svn79_3344

><td class="source">		currentTimeV = hTime.asTime();<br></td></tr
><tr
id=sl_svn79_3345

><td class="source">		hTime = block.inputValue(initSeedFrame, &amp;stat);<br></td></tr
><tr
id=sl_svn79_3346

><td class="source">		initSeedFrameV = hTime.asTime();<br></td></tr
><tr
id=sl_svn79_3347

><td class="source"><br></td></tr
><tr
id=sl_svn79_3348

><td class="source">		if (currentTimeV == initSeedFrameV)<br></td></tr
><tr
id=sl_svn79_3349

><td class="source">		{<br></td></tr
><tr
id=sl_svn79_3350

><td class="source">			// reinit seed<br></td></tr
><tr
id=sl_svn79_3351

><td class="source">			srand(seedValue(block));<br></td></tr
><tr
id=sl_svn79_3352

><td class="source"><br></td></tr
><tr
id=sl_svn79_3353

><td class="source">			// update lastV<br></td></tr
><tr
id=sl_svn79_3354

><td class="source">			lastVectorV.clear();<br></td></tr
><tr
id=sl_svn79_3355

><td class="source"><br></td></tr
><tr
id=sl_svn79_3356

><td class="source">			MVector initOffset = wSphereOffsetV;<br></td></tr
><tr
id=sl_svn79_3357

><td class="source">			initOffset.normalize();<br></td></tr
><tr
id=sl_svn79_3358

><td class="source">			initOffset *= wSphereRadiusV;<br></td></tr
><tr
id=sl_svn79_3359

><td class="source"><br></td></tr
><tr
id=sl_svn79_3360

><td class="source">			for (int i=0; i&lt;posSize; i++)<br></td></tr
><tr
id=sl_svn79_3361

><td class="source">				lastVectorV.append(initOffset);<br></td></tr
><tr
id=sl_svn79_3362

><td class="source"><br></td></tr
><tr
id=sl_svn79_3363

><td class="source">		}<br></td></tr
><tr
id=sl_svn79_3364

><td class="source">		else<br></td></tr
><tr
id=sl_svn79_3365

><td class="source">		{<br></td></tr
><tr
id=sl_svn79_3366

><td class="source">			if (lastVSize &lt; posSize)<br></td></tr
><tr
id=sl_svn79_3367

><td class="source">			{<br></td></tr
><tr
id=sl_svn79_3368

><td class="source">				MVector initOffset = wSphereOffsetV;<br></td></tr
><tr
id=sl_svn79_3369

><td class="source">				initOffset.normalize();<br></td></tr
><tr
id=sl_svn79_3370

><td class="source">				initOffset *= wSphereRadiusV;<br></td></tr
><tr
id=sl_svn79_3371

><td class="source"><br></td></tr
><tr
id=sl_svn79_3372

><td class="source">				for (int e=lastVSize-1; e&lt;posSize; e++)<br></td></tr
><tr
id=sl_svn79_3373

><td class="source">				{<br></td></tr
><tr
id=sl_svn79_3374

><td class="source">					lastVectorV.append(initOffset);<br></td></tr
><tr
id=sl_svn79_3375

><td class="source">				}<br></td></tr
><tr
id=sl_svn79_3376

><td class="source">			}<br></td></tr
><tr
id=sl_svn79_3377

><td class="source">		}<br></td></tr
><tr
id=sl_svn79_3378

><td class="source">		<br></td></tr
><tr
id=sl_svn79_3379

><td class="source">		MVector randomV;<br></td></tr
><tr
id=sl_svn79_3380

><td class="source"><br></td></tr
><tr
id=sl_svn79_3381

><td class="source">		// initialize reusable random values<br></td></tr
><tr
id=sl_svn79_3382

><td class="source"><br></td></tr
><tr
id=sl_svn79_3383

><td class="source">		MVector randMinV, randMaxV, randRangeV;<br></td></tr
><tr
id=sl_svn79_3384

><td class="source"><br></td></tr
><tr
id=sl_svn79_3385

><td class="source">		for (int r=0; r&lt;3;r++)<br></td></tr
><tr
id=sl_svn79_3386

><td class="source">		{<br></td></tr
><tr
id=sl_svn79_3387

><td class="source">			wMinRandV[r] = fabs(wMinRandV[r]);<br></td></tr
><tr
id=sl_svn79_3388

><td class="source">			wMaxRandV[r] = fabs(wMaxRandV[r]);<br></td></tr
><tr
id=sl_svn79_3389

><td class="source">			<br></td></tr
><tr
id=sl_svn79_3390

><td class="source">			randMinV[r] = min(wMinRandV[r],wMaxRandV[r]);<br></td></tr
><tr
id=sl_svn79_3391

><td class="source">			randMaxV[r] = max(wMinRandV[r],wMaxRandV[r]);<br></td></tr
><tr
id=sl_svn79_3392

><td class="source">		}<br></td></tr
><tr
id=sl_svn79_3393

><td class="source"><br></td></tr
><tr
id=sl_svn79_3394

><td class="source">		randRangeV = randMaxV-randMinV;<br></td></tr
><tr
id=sl_svn79_3395

><td class="source"><br></td></tr
><tr
id=sl_svn79_3396

><td class="source">		// bug wander steering<br></td></tr
><tr
id=sl_svn79_3397

><td class="source"><br></td></tr
><tr
id=sl_svn79_3398

><td class="source">		for (int i=0; i &lt; posSize; i ++ )<br></td></tr
><tr
id=sl_svn79_3399

><td class="source">		{<br></td></tr
><tr
id=sl_svn79_3400

><td class="source">			// generate randomOffsetV<br></td></tr
><tr
id=sl_svn79_3401

><td class="source">			for (int r=0; r&lt;3;r++)<br></td></tr
><tr
id=sl_svn79_3402

><td class="source">			{<br></td></tr
><tr
id=sl_svn79_3403

><td class="source">				if (randRangeV[r] &gt;0)<br></td></tr
><tr
id=sl_svn79_3404

><td class="source">				{	<br></td></tr
><tr
id=sl_svn79_3405

><td class="source">					randomV[r] = ((randRangeV[r] * 2 * rand()) / RAND_MAX ) - randRangeV[r];<br></td></tr
><tr
id=sl_svn79_3406

><td class="source">					<br></td></tr
><tr
id=sl_svn79_3407

><td class="source">					if (randomV[r] &gt; 0 )<br></td></tr
><tr
id=sl_svn79_3408

><td class="source">						randomV[r] += randMinV[r];<br></td></tr
><tr
id=sl_svn79_3409

><td class="source">					else<br></td></tr
><tr
id=sl_svn79_3410

><td class="source">						randomV[r] -= randMinV[r];<br></td></tr
><tr
id=sl_svn79_3411

><td class="source">				}<br></td></tr
><tr
id=sl_svn79_3412

><td class="source">				else<br></td></tr
><tr
id=sl_svn79_3413

><td class="source">				{<br></td></tr
><tr
id=sl_svn79_3414

><td class="source">					randomV[r] = wMinRandV[r];<br></td></tr
><tr
id=sl_svn79_3415

><td class="source">					<br></td></tr
><tr
id=sl_svn79_3416

><td class="source">					if (fmod(rand(),2.0)==0.0)<br></td></tr
><tr
id=sl_svn79_3417

><td class="source">						randomV[r] *= -1;<br></td></tr
><tr
id=sl_svn79_3418

><td class="source">				}<br></td></tr
><tr
id=sl_svn79_3419

><td class="source">			}<br></td></tr
><tr
id=sl_svn79_3420

><td class="source">				<br></td></tr
><tr
id=sl_svn79_3421

><td class="source">			// add to last offset position<br></td></tr
><tr
id=sl_svn79_3422

><td class="source">			randomV += lastVectorV[i];<br></td></tr
><tr
id=sl_svn79_3423

><td class="source"><br></td></tr
><tr
id=sl_svn79_3424

><td class="source">			// reproject to sphere<br></td></tr
><tr
id=sl_svn79_3425

><td class="source">			randomV.normalize();<br></td></tr
><tr
id=sl_svn79_3426

><td class="source">			randomV *= wSphereRadiusV;<br></td></tr
><tr
id=sl_svn79_3427

><td class="source"><br></td></tr
><tr
id=sl_svn79_3428

><td class="source">			// store in lastVector<br></td></tr
><tr
id=sl_svn79_3429

><td class="source">			lastVectorV[i] = randomV;<br></td></tr
><tr
id=sl_svn79_3430

><td class="source"><br></td></tr
><tr
id=sl_svn79_3431

><td class="source">			// add sphere offset<br></td></tr
><tr
id=sl_svn79_3432

><td class="source"><br></td></tr
><tr
id=sl_svn79_3433

><td class="source">			randomV +=wSphereOffsetV;<br></td></tr
><tr
id=sl_svn79_3434

><td class="source"><br></td></tr
><tr
id=sl_svn79_3435

><td class="source">			// local space to world space transformation<br></td></tr
><tr
id=sl_svn79_3436

><td class="source">			<br></td></tr
><tr
id=sl_svn79_3437

><td class="source">			//// find vectors x y z that describe local coordinate system<br></td></tr
><tr
id=sl_svn79_3438

><td class="source">			<br></td></tr
><tr
id=sl_svn79_3439

><td class="source">			MVector x = velocities[i];<br></td></tr
><tr
id=sl_svn79_3440

><td class="source">			x.normalize();<br></td></tr
><tr
id=sl_svn79_3441

><td class="source">			MVector y = x ^ MVector::yAxis;<br></td></tr
><tr
id=sl_svn79_3442

><td class="source">			y.normalize();<br></td></tr
><tr
id=sl_svn79_3443

><td class="source">			MVector z = y ^ x;<br></td></tr
><tr
id=sl_svn79_3444

><td class="source">			z.normalize();<br></td></tr
><tr
id=sl_svn79_3445

><td class="source"><br></td></tr
><tr
id=sl_svn79_3446

><td class="source">			//// transform to global coord system<br></td></tr
><tr
id=sl_svn79_3447

><td class="source"><br></td></tr
><tr
id=sl_svn79_3448

><td class="source">			MQuaternion xQu(x,MVector::xAxis);<br></td></tr
><tr
id=sl_svn79_3449

><td class="source">			MQuaternion yQu(y,MVector::yAxis);<br></td></tr
><tr
id=sl_svn79_3450

><td class="source">			MQuaternion zQu(z,MVector::yAxis);<br></td></tr
><tr
id=sl_svn79_3451

><td class="source"><br></td></tr
><tr
id=sl_svn79_3452

><td class="source">			MQuaternion rotQu = zQu*yQu*xQu;<br></td></tr
><tr
id=sl_svn79_3453

><td class="source">			<br></td></tr
><tr
id=sl_svn79_3454

><td class="source">			MTransformationMatrix transformM;	<br></td></tr
><tr
id=sl_svn79_3455

><td class="source">			transformM = rotQu.asMatrix();<br></td></tr
><tr
id=sl_svn79_3456

><td class="source">			transformM.setTranslation(positions[i],MSpace::kTransform);<br></td></tr
><tr
id=sl_svn79_3457

><td class="source"><br></td></tr
><tr
id=sl_svn79_3458

><td class="source">			desiredVelocityV = randomV*transformM.asMatrixInverse();<br></td></tr
><tr
id=sl_svn79_3459

><td class="source"><br></td></tr
><tr
id=sl_svn79_3460

><td class="source">			// determine speed<br></td></tr
><tr
id=sl_svn79_3461

><td class="source">			switch (chooseSpeedV)<br></td></tr
><tr
id=sl_svn79_3462

><td class="source">			{<br></td></tr
><tr
id=sl_svn79_3463

><td class="source">				case CS_DESIREDSPEED : <br></td></tr
><tr
id=sl_svn79_3464

><td class="source">						speed = desiredSpeedV;<br></td></tr
><tr
id=sl_svn79_3465

><td class="source">					break;<br></td></tr
><tr
id=sl_svn79_3466

><td class="source"><br></td></tr
><tr
id=sl_svn79_3467

><td class="source">				case CS_SPEEDRANGE:	<br></td></tr
><tr
id=sl_svn79_3468

><td class="source">						double currDistance = desiredVelocityV.length() - wSphereOffsetV.length();<br></td></tr
><tr
id=sl_svn79_3469

><td class="source">						speed = ((speedRange * currDistance) / distanceRange) + minSpeed;<br></td></tr
><tr
id=sl_svn79_3470

><td class="source">					break;<br></td></tr
><tr
id=sl_svn79_3471

><td class="source">			}<br></td></tr
><tr
id=sl_svn79_3472

><td class="source"><br></td></tr
><tr
id=sl_svn79_3473

><td class="source">			// seek new pos<br></td></tr
><tr
id=sl_svn79_3474

><td class="source">			seekSteering(desiredVelocityV,velocities[i],speed,scaleDesiredForceV,maximumForceV);<br></td></tr
><tr
id=sl_svn79_3475

><td class="source">			outputForce.append( desiredVelocityV );<br></td></tr
><tr
id=sl_svn79_3476

><td class="source">		}<br></td></tr
><tr
id=sl_svn79_3477

><td class="source">	}<br></td></tr
><tr
id=sl_svn79_3478

><td class="source">	else // no random<br></td></tr
><tr
id=sl_svn79_3479

><td class="source">	{<br></td></tr
><tr
id=sl_svn79_3480

><td class="source">		for (int i=0; i &lt; posSize; i ++ )<br></td></tr
><tr
id=sl_svn79_3481

><td class="source">		{<br></td></tr
><tr
id=sl_svn79_3482

><td class="source">			desiredVelocityV = positions[i] + wSphereOffsetV;<br></td></tr
><tr
id=sl_svn79_3483

><td class="source">			seekSteering(desiredVelocityV,velocities[i],desiredSpeedV,scaleDesiredForceV,maximumForceV);<br></td></tr
><tr
id=sl_svn79_3484

><td class="source">			outputForce.append( desiredVelocityV );<br></td></tr
><tr
id=sl_svn79_3485

><td class="source"><br></td></tr
><tr
id=sl_svn79_3486

><td class="source">		}<br></td></tr
><tr
id=sl_svn79_3487

><td class="source">	}<br></td></tr
><tr
id=sl_svn79_3488

><td class="source"><br></td></tr
><tr
id=sl_svn79_3489

><td class="source"><br></td></tr
><tr
id=sl_svn79_3490

><td class="source">	if (useRandomV)<br></td></tr
><tr
id=sl_svn79_3491

><td class="source">	{<br></td></tr
><tr
id=sl_svn79_3492

><td class="source">		// store last vector data<br></td></tr
><tr
id=sl_svn79_3493

><td class="source">		MDataHandle hOut = block.outputValue( lastVector, &amp;stat);<br></td></tr
><tr
id=sl_svn79_3494

><td class="source">		MFnVectorArrayData fnLastVectorV;<br></td></tr
><tr
id=sl_svn79_3495

><td class="source"><br></td></tr
><tr
id=sl_svn79_3496

><td class="source">		MObject dOutputLastVectorV = fnLastVectorV.create( lastVectorV, &amp;stat );<br></td></tr
><tr
id=sl_svn79_3497

><td class="source"><br></td></tr
><tr
id=sl_svn79_3498

><td class="source">		// update data block with new output force data.<br></td></tr
><tr
id=sl_svn79_3499

><td class="source">		hOut.set( dOutputLastVectorV );<br></td></tr
><tr
id=sl_svn79_3500

><td class="source">	}<br></td></tr
><tr
id=sl_svn79_3501

><td class="source">}<br></td></tr
><tr
id=sl_svn79_3502

><td class="source"><br></td></tr
><tr
id=sl_svn79_3503

><td class="source">/**************************************************************************************/<br></td></tr
><tr
id=sl_svn79_3504

><td class="source">void fillSumArray(MIntArray &amp; sumA, int size)<br></td></tr
><tr
id=sl_svn79_3505

><td class="source">{<br></td></tr
><tr
id=sl_svn79_3506

><td class="source">	sumA.clear();<br></td></tr
><tr
id=sl_svn79_3507

><td class="source">	if (size&gt;0)<br></td></tr
><tr
id=sl_svn79_3508

><td class="source">	{<br></td></tr
><tr
id=sl_svn79_3509

><td class="source">		sumA.append(1);<br></td></tr
><tr
id=sl_svn79_3510

><td class="source">		if (size &gt; 1)<br></td></tr
><tr
id=sl_svn79_3511

><td class="source">		{<br></td></tr
><tr
id=sl_svn79_3512

><td class="source">			for (int i = 2; i &lt; size; i++)<br></td></tr
><tr
id=sl_svn79_3513

><td class="source">			{<br></td></tr
><tr
id=sl_svn79_3514

><td class="source">				sumA.append(sumA[i-2]+i);<br></td></tr
><tr
id=sl_svn79_3515

><td class="source">			}<br></td></tr
><tr
id=sl_svn79_3516

><td class="source">		}<br></td></tr
><tr
id=sl_svn79_3517

><td class="source">	}<br></td></tr
><tr
id=sl_svn79_3518

><td class="source">}<br></td></tr
><tr
id=sl_svn79_3519

><td class="source"><br></td></tr
><tr
id=sl_svn79_3520

><td class="source">/**************************************************************************************/<br></td></tr
><tr
id=sl_svn79_3521

><td class="source"><br></td></tr
><tr
id=sl_svn79_3522

><td class="source"><br></td></tr
><tr
id=sl_svn79_3523

><td class="source"><br></td></tr
><tr
id=sl_svn79_3524

><td class="source"><br></td></tr
><tr
id=sl_svn79_3525

><td class="source"><br></td></tr
><tr
id=sl_svn79_3526

><td class="source"><br></td></tr
><tr
id=sl_svn79_3527

><td class="source">/*void bbSteeringDesire::sdBugWander( MDataBlock&amp; block,<br></td></tr
><tr
id=sl_svn79_3528

><td class="source">								const MVectorArray &amp;positions,<br></td></tr
><tr
id=sl_svn79_3529

><td class="source">								const MVectorArray &amp;velocities,<br></td></tr
><tr
id=sl_svn79_3530

><td class="source">								MVectorArray &amp;outputForce )<br></td></tr
><tr
id=sl_svn79_3531

><td class="source">{ <br></td></tr
><tr
id=sl_svn79_3532

><td class="source">	MStatus stat;<br></td></tr
><tr
id=sl_svn79_3533

><td class="source">	<br></td></tr
><tr
id=sl_svn79_3534

><td class="source">	// points and velocities should have the same length. If not return.<br></td></tr
><tr
id=sl_svn79_3535

><td class="source">	if( positions.length() != velocities.length() )<br></td></tr
><tr
id=sl_svn79_3536

><td class="source">		return;<br></td></tr
><tr
id=sl_svn79_3537

><td class="source"><br></td></tr
><tr
id=sl_svn79_3538

><td class="source">	// clear the output force array.<br></td></tr
><tr
id=sl_svn79_3539

><td class="source">	outputForce.clear();<br></td></tr
><tr
id=sl_svn79_3540

><td class="source"><br></td></tr
><tr
id=sl_svn79_3541

><td class="source">	// get field parameters.<br></td></tr
><tr
id=sl_svn79_3542

><td class="source">	double scaleDesiredForceV = 1.0;<br></td></tr
><tr
id=sl_svn79_3543

><td class="source">	if (inverseDesiredSteeringForceValue(block))<br></td></tr
><tr
id=sl_svn79_3544

><td class="source">		scaleDesiredForceV = -1.0;<br></td></tr
><tr
id=sl_svn79_3545

><td class="source"><br></td></tr
><tr
id=sl_svn79_3546

><td class="source">	double maximumForceV = maximumForceValue(block);<br></td></tr
><tr
id=sl_svn79_3547

><td class="source">	double bugRadiusV = bugRadiusValue(block);<br></td></tr
><tr
id=sl_svn79_3548

><td class="source"><br></td></tr
><tr
id=sl_svn79_3549

><td class="source">	MVector wMinRandV;	wanderMinimumRandomVectorValue( block, wMinRandV);<br></td></tr
><tr
id=sl_svn79_3550

><td class="source">	MVector wMaxRandV;  wanderMaximumRandomVectorValue( block, wMaxRandV);<br></td></tr
><tr
id=sl_svn79_3551

><td class="source">	MVector wSphereOffsetV; wanderSphereOffsetValue(block, wSphereOffsetV);<br></td></tr
><tr
id=sl_svn79_3552

><td class="source">	double wSphereRadiusV = wanderSphereRadiusValue(block);<br></td></tr
><tr
id=sl_svn79_3553

><td class="source"><br></td></tr
><tr
id=sl_svn79_3554

><td class="source">	double minSpeedT = wanderMinimumSpeedValue(block);<br></td></tr
><tr
id=sl_svn79_3555

><td class="source">	double maxSpeedT = wanderMaximumSpeedValue(block);<br></td></tr
><tr
id=sl_svn79_3556

><td class="source">						<br></td></tr
><tr
id=sl_svn79_3557

><td class="source">	double minSpeed = min(minSpeedT,maxSpeedT);<br></td></tr
><tr
id=sl_svn79_3558

><td class="source">	double maxSpeed = max(minSpeedT,maxSpeedT);<br></td></tr
><tr
id=sl_svn79_3559

><td class="source"><br></td></tr
><tr
id=sl_svn79_3560

><td class="source">	double speedRange = maxSpeed - minSpeed;<br></td></tr
><tr
id=sl_svn79_3561

><td class="source">	double distanceRange = 2*wSphereRadiusV;<br></td></tr
><tr
id=sl_svn79_3562

><td class="source"><br></td></tr
><tr
id=sl_svn79_3563

><td class="source">	double speed;<br></td></tr
><tr
id=sl_svn79_3564

><td class="source"><br></td></tr
><tr
id=sl_svn79_3565

><td class="source"><br></td></tr
><tr
id=sl_svn79_3566

><td class="source">	short chooseSpeedV = chooseSpeedValue(block);<br></td></tr
><tr
id=sl_svn79_3567

><td class="source"><br></td></tr
><tr
id=sl_svn79_3568

><td class="source">	double desiredSpeedV = desiredSpeedValue(block);<br></td></tr
><tr
id=sl_svn79_3569

><td class="source"><br></td></tr
><tr
id=sl_svn79_3570

><td class="source"><br></td></tr
><tr
id=sl_svn79_3571

><td class="source">	// get last offset values<br></td></tr
><tr
id=sl_svn79_3572

><td class="source">	MVectorArray lastVectorV;<br></td></tr
><tr
id=sl_svn79_3573

><td class="source">	<br></td></tr
><tr
id=sl_svn79_3574

><td class="source">	MDataHandle hLastVectorV = block.inputValue(lastVector, &amp;stat);<br></td></tr
><tr
id=sl_svn79_3575

><td class="source">	MObject dLastVectorV = hLastVectorV.data();<br></td></tr
><tr
id=sl_svn79_3576

><td class="source">	lastVectorV = MFnVectorArrayData(dLastVectorV).array(&amp;stat);<br></td></tr
><tr
id=sl_svn79_3577

><td class="source">	<br></td></tr
><tr
id=sl_svn79_3578

><td class="source">	int posSize = positions.length();<br></td></tr
><tr
id=sl_svn79_3579

><td class="source">	int lastVSize = lastVectorV.length();<br></td></tr
><tr
id=sl_svn79_3580

><td class="source"><br></td></tr
><tr
id=sl_svn79_3581

><td class="source">	MString temp, temp1, temp2, temp3;<br></td></tr
><tr
id=sl_svn79_3582

><td class="source"><br></td></tr
><tr
id=sl_svn79_3583

><td class="source">	// initialize seed, lastVectorV etc<br></td></tr
><tr
id=sl_svn79_3584

><td class="source"><br></td></tr
><tr
id=sl_svn79_3585

><td class="source">	MTime currentTimeV, initSeedFrameV;<br></td></tr
><tr
id=sl_svn79_3586

><td class="source">	MDataHandle hTime = block.inputValue(currentTime, &amp;stat);<br></td></tr
><tr
id=sl_svn79_3587

><td class="source">	currentTimeV = hTime.asTime();<br></td></tr
><tr
id=sl_svn79_3588

><td class="source">	hTime = block.inputValue(initSeedFrame, &amp;stat);<br></td></tr
><tr
id=sl_svn79_3589

><td class="source">	initSeedFrameV = hTime.asTime();<br></td></tr
><tr
id=sl_svn79_3590

><td class="source"><br></td></tr
><tr
id=sl_svn79_3591

><td class="source">//	temp = &quot;ct: &quot;;<br></td></tr
><tr
id=sl_svn79_3592

><td class="source">//	temp += currentTimeV.value();<br></td></tr
><tr
id=sl_svn79_3593

><td class="source">//	temp +=&quot; isf: &quot;;<br></td></tr
><tr
id=sl_svn79_3594

><td class="source">//	temp += initSeedFrameV.value();<br></td></tr
><tr
id=sl_svn79_3595

><td class="source">//	MGlobal::displayInfo(temp);<br></td></tr
><tr
id=sl_svn79_3596

><td class="source"><br></td></tr
><tr
id=sl_svn79_3597

><td class="source">	if (currentTimeV == initSeedFrameV)<br></td></tr
><tr
id=sl_svn79_3598

><td class="source">	{<br></td></tr
><tr
id=sl_svn79_3599

><td class="source">//		MGlobal::displayInfo(&quot;seed reinit&quot;);<br></td></tr
><tr
id=sl_svn79_3600

><td class="source">		// reinit seed<br></td></tr
><tr
id=sl_svn79_3601

><td class="source">		srand(seedValue(block));<br></td></tr
><tr
id=sl_svn79_3602

><td class="source"><br></td></tr
><tr
id=sl_svn79_3603

><td class="source">		// update lastV<br></td></tr
><tr
id=sl_svn79_3604

><td class="source">		lastVectorV.clear();<br></td></tr
><tr
id=sl_svn79_3605

><td class="source"><br></td></tr
><tr
id=sl_svn79_3606

><td class="source">		MVector initOffset = wSphereOffsetV;<br></td></tr
><tr
id=sl_svn79_3607

><td class="source">		initOffset.normalize();<br></td></tr
><tr
id=sl_svn79_3608

><td class="source">		initOffset *= wSphereRadiusV;<br></td></tr
><tr
id=sl_svn79_3609

><td class="source"><br></td></tr
><tr
id=sl_svn79_3610

><td class="source">		for (int i=0; i&lt;posSize; i++)<br></td></tr
><tr
id=sl_svn79_3611

><td class="source">			lastVectorV.append(initOffset);<br></td></tr
><tr
id=sl_svn79_3612

><td class="source">	}<br></td></tr
><tr
id=sl_svn79_3613

><td class="source">	else<br></td></tr
><tr
id=sl_svn79_3614

><td class="source">	{<br></td></tr
><tr
id=sl_svn79_3615

><td class="source">		if (lastVSize &lt; posSize)<br></td></tr
><tr
id=sl_svn79_3616

><td class="source">		{<br></td></tr
><tr
id=sl_svn79_3617

><td class="source">//				MGlobal::displayInfo(&quot;size reinit&quot;);<br></td></tr
><tr
id=sl_svn79_3618

><td class="source">			MVector initOffset = wSphereOffsetV;<br></td></tr
><tr
id=sl_svn79_3619

><td class="source">			initOffset.normalize();<br></td></tr
><tr
id=sl_svn79_3620

><td class="source">			initOffset *= wSphereRadiusV;<br></td></tr
><tr
id=sl_svn79_3621

><td class="source"><br></td></tr
><tr
id=sl_svn79_3622

><td class="source">			for (int e=lastVSize-1; e&lt;posSize; e++)<br></td></tr
><tr
id=sl_svn79_3623

><td class="source">			{<br></td></tr
><tr
id=sl_svn79_3624

><td class="source">				lastVectorV.append(initOffset);<br></td></tr
><tr
id=sl_svn79_3625

><td class="source">			}<br></td></tr
><tr
id=sl_svn79_3626

><td class="source">		}<br></td></tr
><tr
id=sl_svn79_3627

><td class="source">	}<br></td></tr
><tr
id=sl_svn79_3628

><td class="source">	// bug wander steering<br></td></tr
><tr
id=sl_svn79_3629

><td class="source">	<br></td></tr
><tr
id=sl_svn79_3630

><td class="source">	MVector desiredVelocityV;<br></td></tr
><tr
id=sl_svn79_3631

><td class="source">	MVector randomV;<br></td></tr
><tr
id=sl_svn79_3632

><td class="source">//	MTransformationMatrix transformM;<br></td></tr
><tr
id=sl_svn79_3633

><td class="source">//	MMatrix transM;<br></td></tr
><tr
id=sl_svn79_3634

><td class="source">//	transM = transM.setToIdentity();<br></td></tr
><tr
id=sl_svn79_3635

><td class="source"><br></td></tr
><tr
id=sl_svn79_3636

><td class="source">//	int randV;<br></td></tr
><tr
id=sl_svn79_3637

><td class="source">	double randMin, randMax, randRange;<br></td></tr
><tr
id=sl_svn79_3638

><td class="source"><br></td></tr
><tr
id=sl_svn79_3639

><td class="source">//	MString temp, temp1, temp2, temp3;<br></td></tr
><tr
id=sl_svn79_3640

><td class="source">//	temp =&quot;\nposSize: &quot;;<br></td></tr
><tr
id=sl_svn79_3641

><td class="source">//	temp += posSize;<br></td></tr
><tr
id=sl_svn79_3642

><td class="source">//	temp +=&quot;\nlastVSize: &quot;;<br></td></tr
><tr
id=sl_svn79_3643

><td class="source">//	temp += lastVSize;<br></td></tr
><tr
id=sl_svn79_3644

><td class="source"><br></td></tr
><tr
id=sl_svn79_3645

><td class="source"><br></td></tr
><tr
id=sl_svn79_3646

><td class="source"><br></td></tr
><tr
id=sl_svn79_3647

><td class="source">//	MGlobal::displayError(temp);<br></td></tr
><tr
id=sl_svn79_3648

><td class="source">//	temp =&quot;&quot;;<br></td></tr
><tr
id=sl_svn79_3649

><td class="source"><br></td></tr
><tr
id=sl_svn79_3650

><td class="source">	for (int i=0; i &lt; posSize; i ++ )<br></td></tr
><tr
id=sl_svn79_3651

><td class="source">	{<br></td></tr
><tr
id=sl_svn79_3652

><td class="source">		temp +=&quot;\n\nbug: &quot;; temp +=i;<br></td></tr
><tr
id=sl_svn79_3653

><td class="source"><br></td></tr
><tr
id=sl_svn79_3654

><td class="source">		// generate randomOffsetV<br></td></tr
><tr
id=sl_svn79_3655

><td class="source">		for (int r=0; r&lt;3;r++)<br></td></tr
><tr
id=sl_svn79_3656

><td class="source">		{<br></td></tr
><tr
id=sl_svn79_3657

><td class="source">			wMinRandV[r] = fabs(wMinRandV[r]);<br></td></tr
><tr
id=sl_svn79_3658

><td class="source">			wMaxRandV[r] = fabs(wMaxRandV[r]);<br></td></tr
><tr
id=sl_svn79_3659

><td class="source">			<br></td></tr
><tr
id=sl_svn79_3660

><td class="source">			randMin = min(wMinRandV[r],wMaxRandV[r]);<br></td></tr
><tr
id=sl_svn79_3661

><td class="source">			randMax = max(wMinRandV[r],wMaxRandV[r]);<br></td></tr
><tr
id=sl_svn79_3662

><td class="source">			randRange = randMax-randMin;<br></td></tr
><tr
id=sl_svn79_3663

><td class="source"><br></td></tr
><tr
id=sl_svn79_3664

><td class="source">		//	temp = temp+ &quot;\nrMin: &quot; + randMin;<br></td></tr
><tr
id=sl_svn79_3665

><td class="source">		//	temp = temp+&quot;\nrMax: &quot; + randMax;<br></td></tr
><tr
id=sl_svn79_3666

><td class="source">		//	temp = temp+&quot;\nrRan: &quot; + randRange;<br></td></tr
><tr
id=sl_svn79_3667

><td class="source">		//	temp +=&quot;\nrVal: &quot;;temp +=randV;<br></td></tr
><tr
id=sl_svn79_3668

><td class="source">			<br></td></tr
><tr
id=sl_svn79_3669

><td class="source">			if (randRange &gt;0)<br></td></tr
><tr
id=sl_svn79_3670

><td class="source">			{	<br></td></tr
><tr
id=sl_svn79_3671

><td class="source">				randomV[r] = ((randRange * 2 * rand()) / RAND_MAX ) - randRange;<br></td></tr
><tr
id=sl_svn79_3672

><td class="source">				<br></td></tr
><tr
id=sl_svn79_3673

><td class="source">				if (randomV[r] &gt; 0 )<br></td></tr
><tr
id=sl_svn79_3674

><td class="source">					randomV[r] += randMin;<br></td></tr
><tr
id=sl_svn79_3675

><td class="source">				else<br></td></tr
><tr
id=sl_svn79_3676

><td class="source">					randomV[r] -= randMin;<br></td></tr
><tr
id=sl_svn79_3677

><td class="source">			}<br></td></tr
><tr
id=sl_svn79_3678

><td class="source">			else<br></td></tr
><tr
id=sl_svn79_3679

><td class="source">			{<br></td></tr
><tr
id=sl_svn79_3680

><td class="source">				randomV[r] = wMinRandV[r];<br></td></tr
><tr
id=sl_svn79_3681

><td class="source">				<br></td></tr
><tr
id=sl_svn79_3682

><td class="source">				if (fmod(rand(),2.0)==0.0)<br></td></tr
><tr
id=sl_svn79_3683

><td class="source">				{<br></td></tr
><tr
id=sl_svn79_3684

><td class="source">					randomV[r] *= -1;<br></td></tr
><tr
id=sl_svn79_3685

><td class="source">				}<br></td></tr
><tr
id=sl_svn79_3686

><td class="source">			}<br></td></tr
><tr
id=sl_svn79_3687

><td class="source"><br></td></tr
><tr
id=sl_svn79_3688

><td class="source">		//	temp = temp+&quot;\nrVec: &quot; +	randomV[r];<br></td></tr
><tr
id=sl_svn79_3689

><td class="source">		}<br></td></tr
><tr
id=sl_svn79_3690

><td class="source"><br></td></tr
><tr
id=sl_svn79_3691

><td class="source">//		temp1.set(randomV.x, 5);<br></td></tr
><tr
id=sl_svn79_3692

><td class="source">//		temp2.set(randomV.y, 5);<br></td></tr
><tr
id=sl_svn79_3693

><td class="source">//		temp3.set(randomV.z, 5);<br></td></tr
><tr
id=sl_svn79_3694

><td class="source">//		temp = temp +  &quot;\nrandomV: &quot;+temp1+&quot; | &quot;+temp2+&quot; | &quot;+temp3;<br></td></tr
><tr
id=sl_svn79_3695

><td class="source">		<br></td></tr
><tr
id=sl_svn79_3696

><td class="source">		<br></td></tr
><tr
id=sl_svn79_3697

><td class="source">//		temp = temp + &quot;\nlastV  : &quot; + lastVectorV[i].x + &quot; | &quot; + lastVectorV[i].y + &quot; | &quot;+lastVectorV[i].z;<br></td></tr
><tr
id=sl_svn79_3698

><td class="source">			<br></td></tr
><tr
id=sl_svn79_3699

><td class="source">		// add to last offset position<br></td></tr
><tr
id=sl_svn79_3700

><td class="source">		randomV += lastVectorV[i];<br></td></tr
><tr
id=sl_svn79_3701

><td class="source"><br></td></tr
><tr
id=sl_svn79_3702

><td class="source">		<br></td></tr
><tr
id=sl_svn79_3703

><td class="source">//		temp = temp +&quot;\nrV+offs: &quot; + randomV.x + &quot; | &quot; + randomV.y + &quot; | &quot;+randomV.z;<br></td></tr
><tr
id=sl_svn79_3704

><td class="source">//		temp +=&quot;\nlength: &quot;; temp += randomV.length();<br></td></tr
><tr
id=sl_svn79_3705

><td class="source"><br></td></tr
><tr
id=sl_svn79_3706

><td class="source">		// reproject to sphere<br></td></tr
><tr
id=sl_svn79_3707

><td class="source">		randomV.normalize();<br></td></tr
><tr
id=sl_svn79_3708

><td class="source">		randomV *= wSphereRadiusV;<br></td></tr
><tr
id=sl_svn79_3709

><td class="source"><br></td></tr
><tr
id=sl_svn79_3710

><td class="source">//		temp = temp +&quot;\nreproj: &quot; + randomV.x + &quot; | &quot; + randomV.y + &quot; | &quot;+randomV.z;<br></td></tr
><tr
id=sl_svn79_3711

><td class="source">//		temp +=&quot;\nlength: &quot;; temp += randomV.length();<br></td></tr
><tr
id=sl_svn79_3712

><td class="source">		<br></td></tr
><tr
id=sl_svn79_3713

><td class="source">		// store in lastVector<br></td></tr
><tr
id=sl_svn79_3714

><td class="source">		lastVectorV[i] = randomV;<br></td></tr
><tr
id=sl_svn79_3715

><td class="source"><br></td></tr
><tr
id=sl_svn79_3716

><td class="source">		// add sphere offset<br></td></tr
><tr
id=sl_svn79_3717

><td class="source"><br></td></tr
><tr
id=sl_svn79_3718

><td class="source">		randomV +=wSphereOffsetV;<br></td></tr
><tr
id=sl_svn79_3719

><td class="source"><br></td></tr
><tr
id=sl_svn79_3720

><td class="source">		// local space to world space transformation<br></td></tr
><tr
id=sl_svn79_3721

><td class="source">		<br></td></tr
><tr
id=sl_svn79_3722

><td class="source">		//// find vectors w u v that describe local coordinate system<br></td></tr
><tr
id=sl_svn79_3723

><td class="source">		<br></td></tr
><tr
id=sl_svn79_3724

><td class="source">		MVector x = velocities[i];<br></td></tr
><tr
id=sl_svn79_3725

><td class="source">		x.normalize();<br></td></tr
><tr
id=sl_svn79_3726

><td class="source">		MVector y = x ^ MVector::yAxis;<br></td></tr
><tr
id=sl_svn79_3727

><td class="source">		y.normalize();<br></td></tr
><tr
id=sl_svn79_3728

><td class="source">		MVector z = y ^ x;<br></td></tr
><tr
id=sl_svn79_3729

><td class="source">		z.normalize();<br></td></tr
><tr
id=sl_svn79_3730

><td class="source"><br></td></tr
><tr
id=sl_svn79_3731

><td class="source">//		#define tempAddVector(_name,_vect)\<br></td></tr
><tr
id=sl_svn79_3732

><td class="source">//				temp = temp +&quot;\n&quot;+ #_name +&quot;: &quot; + _vect##.x + &quot; | &quot; + _vect##.y + &quot; | &quot;+ _vect##.z;<br></td></tr
><tr
id=sl_svn79_3733

><td class="source"><br></td></tr
><tr
id=sl_svn79_3734

><td class="source">//		tempAddVector(rndSpO,randomV);<br></td></tr
><tr
id=sl_svn79_3735

><td class="source">		<br></td></tr
><tr
id=sl_svn79_3736

><td class="source">//		temp +=&quot;\nlocal coord&quot;;<br></td></tr
><tr
id=sl_svn79_3737

><td class="source">//		tempAddVector(locW,x);<br></td></tr
><tr
id=sl_svn79_3738

><td class="source">//		tempAddVector(locU,y);<br></td></tr
><tr
id=sl_svn79_3739

><td class="source">//		tempAddVector(locV,z);<br></td></tr
><tr
id=sl_svn79_3740

><td class="source">//<br></td></tr
><tr
id=sl_svn79_3741

><td class="source">		//MEulerRotation euRot;<br></td></tr
><tr
id=sl_svn79_3742

><td class="source"><br></td></tr
><tr
id=sl_svn79_3743

><td class="source">		//euRot.x = MVector::xAxis.angle(x);<br></td></tr
><tr
id=sl_svn79_3744

><td class="source">		//euRot.y = MVector::yAxis.angle(y);<br></td></tr
><tr
id=sl_svn79_3745

><td class="source">		//euRot.z = MVector::zAxis.angle(z);<br></td></tr
><tr
id=sl_svn79_3746

><td class="source">		<br></td></tr
><tr
id=sl_svn79_3747

><td class="source">		MQuaternion xQu(x,MVector::xAxis);<br></td></tr
><tr
id=sl_svn79_3748

><td class="source">		MQuaternion yQu(y,MVector::yAxis);<br></td></tr
><tr
id=sl_svn79_3749

><td class="source">		MQuaternion zQu(z,MVector::yAxis);<br></td></tr
><tr
id=sl_svn79_3750

><td class="source"><br></td></tr
><tr
id=sl_svn79_3751

><td class="source">		MQuaternion rotQu = zQu*yQu*xQu;<br></td></tr
><tr
id=sl_svn79_3752

><td class="source">		<br></td></tr
><tr
id=sl_svn79_3753

><td class="source">//		euRot = rotQu.asEulerRotation();<br></td></tr
><tr
id=sl_svn79_3754

><td class="source">//		tempAddVector(euRotR,euRot);<br></td></tr
><tr
id=sl_svn79_3755

><td class="source">//		tempAddVector(trans,positions[i]);<br></td></tr
><tr
id=sl_svn79_3756

><td class="source">//		temp = temp +&quot;\nveloci: &quot; + velocities[i].x + &quot; | &quot; + velocities[i].y + &quot; | &quot;+velocities[i].z;<br></td></tr
><tr
id=sl_svn79_3757

><td class="source">		<br></td></tr
><tr
id=sl_svn79_3758

><td class="source">		MTransformationMatrix transformM;	<br></td></tr
><tr
id=sl_svn79_3759

><td class="source">		transformM = rotQu.asMatrix();<br></td></tr
><tr
id=sl_svn79_3760

><td class="source">		transformM.setTranslation(positions[i],MSpace::kTransform);<br></td></tr
><tr
id=sl_svn79_3761

><td class="source">		//transformM=transformM.rotateTo(euRot);<br></td></tr
><tr
id=sl_svn79_3762

><td class="source">		//transformM=transformM.rotateTo(rotQu);<br></td></tr
><tr
id=sl_svn79_3763

><td class="source"><br></td></tr
><tr
id=sl_svn79_3764

><td class="source">		desiredVelocityV = randomV*transformM.asMatrixInverse();<br></td></tr
><tr
id=sl_svn79_3765

><td class="source"><br></td></tr
><tr
id=sl_svn79_3766

><td class="source">//		temp =temp + &quot;\ndesVelo: &quot; + desiredVelocityV.x + &quot; | &quot; + desiredVelocityV.y + &quot; | &quot;+desiredVelocityV.z;<br></td></tr
><tr
id=sl_svn79_3767

><td class="source">		<br></td></tr
><tr
id=sl_svn79_3768

><td class="source">		// determine speed<br></td></tr
><tr
id=sl_svn79_3769

><td class="source"><br></td></tr
><tr
id=sl_svn79_3770

><td class="source">		switch (chooseSpeedV)<br></td></tr
><tr
id=sl_svn79_3771

><td class="source">		{<br></td></tr
><tr
id=sl_svn79_3772

><td class="source">			case CS_DESIREDSPEED : <br></td></tr
><tr
id=sl_svn79_3773

><td class="source">					speed = desiredSpeedV;<br></td></tr
><tr
id=sl_svn79_3774

><td class="source">				break;<br></td></tr
><tr
id=sl_svn79_3775

><td class="source"><br></td></tr
><tr
id=sl_svn79_3776

><td class="source">			case CS_SPEEDRANGE:	<br></td></tr
><tr
id=sl_svn79_3777

><td class="source">					double currDistance = desiredVelocityV.length() - wSphereOffsetV.length();<br></td></tr
><tr
id=sl_svn79_3778

><td class="source">					speed = ((speedRange * currDistance) / distanceRange) + minSpeed;<br></td></tr
><tr
id=sl_svn79_3779

><td class="source">				break;<br></td></tr
><tr
id=sl_svn79_3780

><td class="source">		}<br></td></tr
><tr
id=sl_svn79_3781

><td class="source"><br></td></tr
><tr
id=sl_svn79_3782

><td class="source">		// seek new pos<br></td></tr
><tr
id=sl_svn79_3783

><td class="source">	<br></td></tr
><tr
id=sl_svn79_3784

><td class="source">		seekSteering(desiredVelocityV,velocities[i],speed,scaleDesiredForceV,maximumForceV);<br></td></tr
><tr
id=sl_svn79_3785

><td class="source">		outputForce.append( desiredVelocityV );<br></td></tr
><tr
id=sl_svn79_3786

><td class="source">	}<br></td></tr
><tr
id=sl_svn79_3787

><td class="source"><br></td></tr
><tr
id=sl_svn79_3788

><td class="source">//	MGlobal::displayInfo(temp);<br></td></tr
><tr
id=sl_svn79_3789

><td class="source"><br></td></tr
><tr
id=sl_svn79_3790

><td class="source">	// store last vector data<br></td></tr
><tr
id=sl_svn79_3791

><td class="source"><br></td></tr
><tr
id=sl_svn79_3792

><td class="source">	MDataHandle hOut = block.outputValue( lastVector, &amp;stat);<br></td></tr
><tr
id=sl_svn79_3793

><td class="source">	MFnVectorArrayData fnLastVectorV;<br></td></tr
><tr
id=sl_svn79_3794

><td class="source"><br></td></tr
><tr
id=sl_svn79_3795

><td class="source">	MObject dOutputLastVectorV = fnLastVectorV.create( lastVectorV, &amp;stat );<br></td></tr
><tr
id=sl_svn79_3796

><td class="source"><br></td></tr
><tr
id=sl_svn79_3797

><td class="source">	// update data block with new output force data.<br></td></tr
><tr
id=sl_svn79_3798

><td class="source">	hOut.set( dOutputLastVectorV );<br></td></tr
><tr
id=sl_svn79_3799

><td class="source"><br></td></tr
><tr
id=sl_svn79_3800

><td class="source">}<br></td></tr
><tr
id=sl_svn79_3801

><td class="source">*/<br></td></tr
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
 &nbsp; <a href="/p/brainbugz/source/diff?spec=svn79&r=2&amp;format=side&amp;path=/trunk/source/bbSteeringDesireNode.cpp&amp;old_path=/trunk/source/bbSteeringDesireNode.cpp&amp;old=">Diff</a>
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
 
 var selected_path = '/trunk/source/bbSteeringDesireNode.cpp';
 
 
 changed_paths.push('/trunk/source/bbSteeringDesireNode.h');
 changed_urls.push('/p/brainbugz/source/browse/trunk/source/bbSteeringDesireNode.h?r\x3d2\x26spec\x3dsvn79');
 
 
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
 selected="selected"
 >.../source/bbSteeringDesireNode.cpp</option>
 
 <option value="/p/brainbugz/source/browse/trunk/source/bbSteeringDesireNode.h?r=2&amp;spec=svn79"
 
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
 
 <a href="/p/brainbugz/source/list?path=/trunk/source/bbSteeringDesireNode.cpp&start=2">All revisions of this file</a>
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
 
 <div>Size: 103150 bytes,
 3801 lines</div>
 
 <div><a href="//brainbugz.googlecode.com/svn/trunk/source/bbSteeringDesireNode.cpp">View raw file</a></div>
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
 var paths = {'svn79': '/trunk/source/bbSteeringDesireNode.cpp'}
 codereviews = CR_controller.setup(
 {"assetHostPath":"http://www.gstatic.com/codesite/ph","loggedInUserEmail":"spookyhouseAdmin@gmail.com","profileUrl":"/u/116163957316704900813/","assetVersionPath":"http://www.gstatic.com/codesite/ph/6441139730022036690","projectHomeUrl":"/p/brainbugz","relativeBaseUrl":"","token":"LlZDkKAwoY771FgG3gzYNLDYQRs:1359741885333","domainName":null,"projectName":"brainbugz"}, '', 'svn79', paths,
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

